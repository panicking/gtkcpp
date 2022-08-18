#ifndef GI_OBJECT_HPP
#define GI_OBJECT_HPP

#include "callback.hpp"
#include "container.hpp"
#include "exception.hpp"
#include "objectbase.hpp"
#include "paramspec.hpp"
#include "value.hpp"

#include <iostream>

namespace gi
{
namespace detail
{
// helper
inline void
check_signal_type(GType tp, const std::string &name, GType return_type,
    GType *param_types, guint n_params)
{
  const std::string errmsg("expected ");
  auto check_types = [tp, &name, &errmsg](const std::string &desc,
                         GType expected, GType actual) {
    // normalize
    expected &= ~G_SIGNAL_TYPE_STATIC_SCOPE;
    actual &= ~G_SIGNAL_TYPE_STATIC_SCOPE;
    if (expected == actual || g_type_is_a(expected, actual))
      return;
    auto msg = errmsg;
    msg += desc + " type ";
    msg += detail::make_string(g_type_name(expected)) + " != ";
    msg += detail::make_string(g_type_name(actual));
    detail::try_throw(invalid_signal_callback_error(tp, name, msg));
  };

  // determine signal (detail)
  guint id;
  GQuark detail;
  if (!g_signal_parse_name(name.c_str(), tp, &id, &detail, false) || (id == 0))
    detail::try_throw(unknown_signal_error(tp, name));
  // get signal info
  GSignalQuery query;
  g_signal_query(id, &query);
  // check
  if (n_params != query.n_params + 1) {
    auto msg = errmsg + "argument count ";
    msg += std::to_string(query.n_params);
    msg += " != " + std::to_string(n_params);
    detail::try_throw(invalid_signal_callback_error(tp, name, msg));
  }
  check_types("return", query.return_type, return_type);
  check_types("instance", query.itype, param_types[0]);
  const std::string arg("argument ");
  for (guint i = 0; i < query.n_params; ++i)
    check_types(
        arg + std::to_string(i + 1), query.param_types[i], param_types[i + 1]);
}

template<typename G>
struct signal_type;

template<typename R, typename... Args>
struct signal_type<R(Args...)>
{
  static void check(GType tp, const std::string &name)
  {
    // capture type info and delegate
    const int argcount = sizeof...(Args);
    GType ti[] = {traits::gtype<Args>::get_type()...};
    check_signal_type(tp, name, traits::gtype<R>::get_type(), ti, argcount);
  }
};

// like GParameter, but with extra Value trimming
struct Parameter
{
  const char *name;
  detail::Value value;
};

#ifndef GI_DECLARE_GTYPE_VALUE
static_assert(sizeof(Parameter) == sizeof(GParameter), "");
#endif

inline void
fill_parameters(Parameter *)
{
  // no-op
}

template<typename Arg, typename... Args>
inline void
fill_parameters(Parameter *param, const char *name, Arg &&arg, Args &&... args)
{
  param->name = name;
  param->value.init<typename std::remove_reference<Arg>::type>();
  set_value(&param->value, std::forward<Arg>(arg));
  fill_parameters(param + 1, std::forward<Args>(args)...);
}

} // namespace detail

#if GLIB_CHECK_VERSION(2, 54, 0)
#define GI_GOBJECT_PROPERTY_VALUE 1
#endif

namespace repository
{
/* if you have arrived here due to an ambiguous GObject reference
 * (both the C typedef GObject and this namespace)
 * then that can be worked-around by:
 *  + using _GObject (struct name instead)
 *  + adjust 'using namespace' style imports e.g. alias
 *    namespace GObject_ = gi::GObject;
 * or simply do not mention GObject at all and simply use the wrappers ;-)
 */
namespace GObject
{
typedef std::vector<detail::Parameter> construct_params;

template<typename... Args>
construct_params
make_construct_params(Args &&... args)
{
  const int nparams = sizeof...(Args) / 2;
  construct_params parameters;
  parameters.resize(nparams);
  detail::fill_parameters(parameters.data(), std::forward<Args>(args)...);
  return parameters;
}

class Object : public detail::ObjectBase
{
  typedef Object self;
  typedef detail::ObjectBase super_type;

public:
  typedef ::GObject BaseObjectType;

  Object(std::nullptr_t = nullptr) : super_type() {}

  BaseObjectType *gobj_() { return (BaseObjectType *)super_type::gobj_(); }
  const BaseObjectType *gobj_() const
  {
    return (const BaseObjectType *)super_type::gobj_();
  }
  BaseObjectType *gobj_copy_() const
  {
    return (BaseObjectType *)super_type::gobj_copy_();
  }

  // class type
  static GType get_type_() { return G_TYPE_OBJECT; }
  // instance type
  GType gobj_type_() const { return G_OBJECT_TYPE(gobj_()); }

  // type-erased generic object creation
  // transfer full return
  static gpointer new_(GType gtype, const construct_params &params)
  {
#ifndef GI_DECLARE_GTYPE_VALUE
    auto result =
        g_object_newv(gtype, params.size(), (GParameter *)params.data());
#else
    std::vector<const char *> names;
    std::vector<GValue> values;
    names.reserve(params.size());
    values.reserve(params.size());
    // ownership remains in params
    for (auto &&p : params) {
      names.push_back(p.name);
      values.emplace_back(p.value);
    }
    auto result = g_object_new_with_properties(
        gtype, params.size(), names.data(), values.data());
#endif
    // GIR says transfer full, but let's be careful and really make it so
    // if likely still floating, then we assume ownership
    // but if it is no longer, then it has already been stolen (e.g.
    // GtkWindow), and we need to add one here
    if (g_type_is_a(gtype, G_TYPE_INITIALLY_UNOWNED))
      g_object_ref_sink(result);
    return result;
  }

  // type-based generic object creation
  template<typename TYPE, typename... Args>
  static TYPE new_(Args &&... args)
  {
    auto parameters = make_construct_params(std::forward<Args>(args)...);
    typename TYPE::BaseObjectType *result =
        (typename TYPE::BaseObjectType *)new_(TYPE::get_type_(), parameters);
    return gi::wrap(result, transfer_full, direction_out);
  }

  // property stuff
  // generic type unsafe
  template<typename V>
  self &set_property(ParamSpec _pspec, V &&val)
  {
    // additional checks
    // allows for basic conversion between arithmetic types
    // without worrying about those details
    auto pspec = _pspec.gobj_();
    detail::Value v(std::forward<V>(val));
    detail::Value dest;
    GValue *p = &v;
    if (G_VALUE_TYPE(&v) != pspec->value_type) {
      g_value_init(&dest, pspec->value_type);
      if (!g_value_transform(&v, &dest))
        detail::try_throw(
            detail::transform_error(pspec->value_type, pspec->name));
      p = &dest;
    }
    g_object_set_property(gobj_(), pspec->name, p);
    return *this;
  }

  template<typename V>
  self &set_property(const std::string &propname, V &&val)
  {
    return set_property<V>(find_property(propname, true), std::forward<V>(val));
  }

  template<typename V>
  self &set_properties(const std::string &propname, V &&val)
  {
    return set_property<V>(propname, std::forward<V>(val));
  }

  // set a number of props
  template<typename V, typename... Args>
  self &set_properties(const std::string &propname, V &&val, Args... args)
  {
    g_object_freeze_notify(gobj_());
#if GI_CONFIG_EXCEPTIONS
    try {
#endif
      set_property(propname, std::forward<V>(val));
      set_properties(std::forward<Args>(args)...);
#if GI_CONFIG_EXCEPTIONS
    } catch (...) {
      g_object_thaw_notify(gobj_());
      throw;
    }
#endif
    g_object_thaw_notify(gobj_());
    return *this;
  }

#ifdef GI_GOBJECT_PROPERTY_VALUE
  self &set_property(const std::string &propname, Value val)
  {
    g_object_set_property(gobj_(), propname.c_str(), val.gobj_());
    return *this;
  }
#endif

  template<typename V>
  V get_property(const char *propname) const
  {
    detail::Value v;
    v.init<V>();
    // the _get_ already tries to transform
    // also close enough to const
    g_object_get_property(const_cast<::GObject *>(gobj_()), propname, &v);
    return detail::get_value<V>(&v);
  }

  template<typename V>
  V get_property(const std::string &propname) const
  {
    return get_property<V>(propname.c_str());
  }

#ifdef GI_GOBJECT_PROPERTY_VALUE
  Value get_property(const std::string &propname) const
  {
    Value result;
    const gchar *name = propname.c_str();
    GValue *val = result.gobj_();
    g_object_getv(const_cast<::GObject *>(gobj_()), 1, &name, val);
    return result;
  }
#endif

  ParamSpec find_property(
      const std::string &propname, bool _throw = false) const
  {
    GParamSpec *spec;
    if (g_type_is_a(gobj_type_(), G_TYPE_INTERFACE)) {
      // interface should be loaded if we have an instance here
      auto vtable = g_type_default_interface_peek(gobj_type_());
      spec = g_object_interface_find_property(vtable, propname.c_str());
    } else {
      spec = g_object_class_find_property(
          G_OBJECT_GET_CLASS(gobj_()), propname.c_str());
    }
    if (_throw && !spec)
      detail::try_throw(
          detail::unknown_property_error(gobj_type_(), propname.c_str()));
    return gi::wrap(spec, transfer_none, direction_out);
  }

  std::vector<ParamSpec> list_properties() const
  {
    GParamSpec **specs;
    guint nspecs = 0;
    if (g_type_is_a(gobj_type_(), G_TYPE_INTERFACE)) {
      // interface should be loaded if we have an instance here
      auto vtable = g_type_default_interface_peek(gobj_type_());
      specs = g_object_interface_list_properties(vtable, &nspecs);
    } else {
      specs =
          g_object_class_list_properties(G_OBJECT_GET_CLASS(gobj_()), &nspecs);
    }
    return gi::detail::wrap_list<ParamSpec, GParamSpec *>(
        specs, transfer_container, nspecs);
  }

  // signal stuff
private:
  template<typename F, typename Functor>
  gulong connect_data(
      const std::string &signal, Functor &&f, GConnectFlags flags)
  {
    // runtime signature check
    detail::signal_type<F>::check(gobj_type_(), signal);
    auto w = new detail::transform_signal_wrapper<F>(std::forward<Functor>(f));
    // mind gcc's -Wcast-function-type
    return g_signal_connect_data(gobj_(), signal.c_str(),
        (GCallback)&w->wrapper, w, (GClosureNotify)(GCallback)&w->destroy,
        flags);
  }

public:
  template<typename F, typename Functor>
  gulong connect(const std::string &signal, Functor &&f)
  {
    return connect_data<F, Functor>(
        signal, std::forward<Functor>(f), (GConnectFlags)0);
  }

  template<typename F, typename Functor>
  gulong connect_after(const std::string &signal, Functor &&f)
  {
    return connect_data<F, Functor>(
        signal, std::forward<Functor>(f), G_CONNECT_AFTER);
  }

  // TODO the object variants ??

  void disconnect(gulong id) { g_signal_handler_disconnect(gobj_(), id); }

  template<typename R, typename... Args>
  R emit(const std::string &signal, Args &&... args)
  {
    guint id;
    GQuark detail;
    if (!g_signal_parse_name(signal.c_str(), gobj_type_(), &id, &detail, true))
      detail::try_throw(std::out_of_range("unknown signal name: " + signal));

    detail::Value values[] = {
        detail::Value(*this), detail::Value(std::forward<Args>(args))...};
    detail::Value retv;
    retv.init<R>();
    g_signal_emitv(values, id, detail, &retv);
    return detail::get_value<R>(&retv);
  }

  void handler_block(gulong handler_id)
  {
    g_signal_handler_block(gobj_(), handler_id);
  }

  void handler_unblock(gulong handler_id)
  {
    g_signal_handler_unblock(gobj_(), handler_id);
  }

  bool handler_is_connected(gulong handler_id)
  {
    return g_signal_handler_is_connected(gobj_(), handler_id);
  }

  void stop_emission(guint id, GQuark detail)
  {
    g_signal_stop_emission(gobj_(), id, detail);
  }

  void stop_emission_by_name(const std::string &signal)
  {
    g_signal_stop_emission_by_name(gobj_(), signal.c_str());
  }
};

} // namespace GObject

template<>
struct declare_cpptype_of<::GObject>
{
  typedef repository::GObject::Object type;
};

namespace GLib
{
// predefined
typedef detail::callback<void(), gi::transfer_none_t> DestroyNotify;
} // namespace GLib

} // namespace repository

// type safe signal connection
template<typename T, typename Base = repository::GObject::Object>
class signal_proxy;

template<typename R, typename Instance, typename... Args, typename Base>
class signal_proxy<R(Instance, Args...), Base>
{
protected:
  typedef R(CppSig)(Instance, Args...);
  Base object_;
  std::string name_;

public:
  typedef CppSig function_type;
  typedef detail::connectable<function_type> slot_type;

  signal_proxy(Base owner, const std::string &name)
      : object_(owner), name_(name)
  {}

  template<typename Functor>
  gulong connect(Functor &&f)
  {
    return object_.template connect<CppSig>(name_, std::forward<Functor>(f));
  }

  template<typename Functor>
  gulong connect_after(Functor &&f)
  {
    return object_.template connect_after<CppSig>(
        name_, std::forward<Functor>(f));
  }

  R emit(Args... args)
  {
    return object_.template emit<R>(name_, std::forward<Args>(args)...);
  }

  template<typename Functor>
  slot_type slot(Functor &&f)
  {
    return slot_type(std::forward<Functor>(f));
  }
};

// type safe property setting
template<typename T, typename Base = repository::GObject::Object>
class property_proxy
{
  typedef property_proxy self;
  typedef repository::GObject::ParamSpec ParamSpec;

protected:
  Base object_;
  ParamSpec pspec_;

public:
  property_proxy(Base owner, ParamSpec pspec) : object_(owner), pspec_(pspec) {}

  property_proxy(Base owner, const std::string &name)
      : property_proxy(owner, owner.find_property(name, true))
  {}

  void set(T v) { object_.set_property(pspec_, v); }

  self &operator=(T v)
  {
    set(v);
    return *this;
  }

  T get() const
  {
    return object_.template get_property<T>(pspec_.gobj_()->name);
  }

  ParamSpec param_spec() const { return pspec_; }

  signal_proxy<void(Base, ParamSpec)> signal_notify() const
  {
    return signal_proxy<void(Base, ParamSpec)>(
        object_, std::string("notify::") + pspec_.name_());
  }
};

template<typename T, typename Base = repository::GObject::Object>
class property_proxy_read : private property_proxy<T, Base>
{
  typedef property_proxy<T, Base> super;

public:
  using super::get;
  using super::property_proxy;
};

template<typename T, typename Base = repository::GObject::Object>
class property_proxy_write : private property_proxy<T, Base>
{
  typedef property_proxy<T, Base> super;

public:
  using super::property_proxy;
  using super::set;
  using super::operator=;
};

// interface (ptr) is wrapped the same way,
// as it is essentially a ptr to implementing object
// TODO use other intermediate base ??
using InterfaceBase = repository::GObject::Object;

namespace repository
{
namespace GObject
{
// connection helpers
namespace internal
{
class SignalConnection : public detail::connection_impl
{
public:
  SignalConnection(gulong id, detail::connection_status s, Object object)
      : connection_impl(id, s), object_(object)
  {}

  void disconnect() { object_.disconnect(id_); }

private:
  Object object_;
};

} // namespace internal

using SignalConnection = detail::connection<internal::SignalConnection>;
using SignalScopedConnection = detail::scoped_connection<SignalConnection>;

} // namespace GObject

} // namespace repository

// connection callback type
template<typename G>
using slot = detail::connectable<G>;

template<typename G>
inline repository::GObject::SignalConnection
make_connection(
    gulong id, const gi::slot<G> &s, repository::GObject::Object object)
{
  using repository::GObject::SignalConnection;
  return SignalConnection(id, s.connection(), object);
}

} // namespace gi

#endif // GI_OBJECT_HPP
