#ifndef GI_EXCEPTION_HPP
#define GI_EXCEPTION_HPP

#include "base.hpp"

#include <exception>
#include <glib.h>

namespace gi
{
namespace detail
{
template<typename E>
[[noreturn]] inline void
try_throw(E &&e)
{
#if GI_CONFIG_EXCEPTIONS
  throw std::forward<E>(e);
#else
  (void)e;
  abort();
#endif
}

inline std::logic_error
transform_error(GType tp, const char *name = nullptr)
{
  auto n = g_type_name(tp);
  auto msg = std::string("could not transform value to type ") +
             detail::make_string(n);
  if (name)
    msg += std::string(" of property \'") + name + "\'";
  return std::invalid_argument(msg);
}

inline std::logic_error
unknown_property_error(GType tp, const gchar *property)
{
  auto n = g_type_name(tp);
  auto msg =
      std::string("object of type ") + detail::make_string(n) +
      " does not have property \'" + detail::make_string(property) + "\'";
  return std::invalid_argument(msg);
}

inline std::logic_error
unknown_signal_error(GType tp, const std::string &name)
{
  auto n = g_type_name(tp);
  auto msg = std::string("object of type ") + detail::make_string(n) +
             " does not have signal \'" + name + "\'";
  return std::invalid_argument(msg);
}

inline std::logic_error
invalid_signal_callback_error(
    GType tp, const std::string &name, const std::string &_msg)
{
  auto n = g_type_name(tp);
  auto msg = std::string("invalid callback for signal ") + n + "::" + name +
             "; " + _msg;
  return std::invalid_argument(msg);
}

// partially generated GError wrapper
class Error : public gi::detail::GBoxedWrapper<Error, GError>
{
  typedef gi::detail::GBoxedWrapper<Error, GError> super_type;

public:
  Error(GError *obj, bool own, bool copy) : super_type(obj, own, copy) {}

  static GType get_type_() G_GNUC_CONST { return g_error_get_type(); }

  // use with care; dangling reference caution applies here
  gint &code_() { return gobj_()->code; }
  const gint &code_() const { return gobj_()->code; }

  // use with care; dangling reference caution applies here
  std::string message_() const
  {
    return gi::wrap(gobj_()->message, gi::transfer_none, gi::direction_out);
  }

  // gboolean g_error_matches (const GError* error, GQuark domain, gint code);
  inline bool matches(GQuark domain, gint code) const
  {
    return g_error_matches(gobj_(), domain, code);
  }

}; // class

} // namespace detail

namespace repository
{
namespace GLib
{
class Error : public std::runtime_error, public detail::Error
{
  typedef std::runtime_error super;

  static inline std::string make_message(GError *error)
  {
    return error ? detail::make_string(g_quark_to_string(error->domain)) +
                       ": " + detail::make_string(error->message) + "(" +
                       std::to_string(error->code) + ")"
                 : "";
  }

public:
  Error(GError *obj = nullptr, bool own = true, bool copy = true)
      : super(make_message(obj)), detail::Error(obj, own, copy)
  {}

  // GError* g_error_new_literal (GQuark domain, gint code, const gchar*
  // message);
  static inline Error new_literal(
      GQuark domain, gint code, const std::string &message)
  {
    return Error(g_error_new_literal(
                     domain, code, gi::unwrap(message, gi::transfer_none)),
        true, true);
  }

  // GError* g_error_copy (const GError* error);
  inline Error copy() const { return Error(g_error_copy(gobj_()), true, true); }

  // override wrap since we are no longer in a simple single-base case
  template<typename Cpp, typename Enable = typename std::enable_if<
                             std::is_same<Cpp, Error>::value>::type>
  static Cpp wrap(const typename Cpp::BaseObjectType *obj, bool own, bool copy)
  {
    return Error(const_cast<GError *>(obj), own, copy);
  }
};

} // namespace GLib

template<>
struct declare_cpptype_of<GError>
{
  typedef GLib::Error type;
};

} // namespace repository

inline void
check_error(GError *error)
{
  if (error)
    detail::try_throw(repository::GLib::Error(error));
}

} // namespace gi

#endif // GI_EXCEPTION_HPP
