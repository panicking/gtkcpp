// AUTO-GENERATED

#ifndef _GI_GST_CHILDPROXY_IMPL_HPP_
#define _GI_GST_CHILDPROXY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// void gst_child_proxy_child_added (GstChildProxy* parent, GObject* child, const gchar* name);
// void gst_child_proxy_child_added (::GstChildProxy* parent, ::GObject* child, const char* name);
void base::ChildProxyBase::child_added (GObject::Object child, const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GstChildProxy* parent, ::GObject* child, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_child_proxy_child_added;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstChildProxy*) (gobj_()), (::GObject*) (child_to_c), (const char*) (name_to_c));
}

// void gst_child_proxy_child_removed (GstChildProxy* parent, GObject* child, const gchar* name);
// void gst_child_proxy_child_removed (::GstChildProxy* parent, ::GObject* child, const char* name);
void base::ChildProxyBase::child_removed (GObject::Object child, const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GstChildProxy* parent, ::GObject* child, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_child_proxy_child_removed;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstChildProxy*) (gobj_()), (::GObject*) (child_to_c), (const char*) (name_to_c));
}

// void gst_child_proxy_get (GstChildProxy* object, const gchar* first_property_name);
// void gst_child_proxy_get (::GstChildProxy* object, const char* first_property_name);
// IGNORE; not introspectable, varargs not supported

// GObject* gst_child_proxy_get_child_by_index (GstChildProxy* parent, guint index);
// ::GObject* gst_child_proxy_get_child_by_index (::GstChildProxy* parent, guint index);
GObject::Object base::ChildProxyBase::get_child_by_index (guint index) noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GstChildProxy* parent, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_child_proxy_get_child_by_index;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::GstChildProxy*) (gobj_()), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GObject* gst_child_proxy_get_child_by_name (GstChildProxy* parent, const gchar* name);
// ::GObject* gst_child_proxy_get_child_by_name (::GstChildProxy* parent, const char* name);
GObject::Object base::ChildProxyBase::get_child_by_name (const std::string & name) noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GstChildProxy* parent, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_child_proxy_get_child_by_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstChildProxy*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// guint gst_child_proxy_get_children_count (GstChildProxy* parent);
// guint gst_child_proxy_get_children_count (::GstChildProxy* parent);
guint base::ChildProxyBase::get_children_count () noexcept
{
  typedef guint (*call_wrap_t) (::GstChildProxy* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_child_proxy_get_children_count;
  auto _temp_ret = call_wrap_v ((::GstChildProxy*) (gobj_()));
  return _temp_ret;
}

// void gst_child_proxy_get_property (GstChildProxy* object, const gchar* name, GValue* value);
// void gst_child_proxy_get_property (::GstChildProxy* object, const char* name, ::GValue* value);
void base::ChildProxyBase::get_property (const std::string & name, GObject::Value & value) noexcept
{
  typedef void (*call_wrap_t) (::GstChildProxy* object, const char* name, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_child_proxy_get_property;
  traits::unset_wrapper<GValue>::type value_c;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstChildProxy*) (gobj_()), (const char*) (name_to_c), (::GValue*) ((GValue*) &value_c));
  value = gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out);
}
GObject::Value base::ChildProxyBase::get_property (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GstChildProxy* object, const char* name, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_child_proxy_get_property;
  traits::unset_wrapper<GValue>::type value_c;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstChildProxy*) (gobj_()), (const char*) (name_to_c), (::GValue*) ((GValue*) &value_c));
  return gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out);
}

// void gst_child_proxy_get_valist (GstChildProxy* object, const gchar* first_property_name, va_list var_args);
// void gst_child_proxy_get_valist (::GstChildProxy* object, const char* first_property_name,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// gboolean gst_child_proxy_lookup (GstChildProxy* object, const gchar* name, GObject** target, GParamSpec** pspec);
// gboolean gst_child_proxy_lookup (::GstChildProxy* object, const char* name, ::GObject** target, ::GParamSpec** pspec);
bool base::ChildProxyBase::lookup (const std::string & name, GObject::Object * target, GObject::ParamSpec * pspec) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstChildProxy* object, const char* name, ::GObject** target, ::GParamSpec** pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_child_proxy_lookup;
  ::GParamSpec* pspec_o {};
  ::GObject* target_o {};
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstChildProxy*) (gobj_()), (const char*) (name_to_c), (::GObject**) (target ? &target_o : nullptr), (::GParamSpec**) (pspec ? &pspec_o : nullptr));
  if (pspec) *pspec = gi::wrap (pspec_o, gi::transfer_none, gi::direction_out);
  if (target) *target = gi::wrap (target_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GObject::Object, GObject::ParamSpec> base::ChildProxyBase::lookup (const std::string & name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstChildProxy* object, const char* name, ::GObject** target, ::GParamSpec** pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_child_proxy_lookup;
  ::GParamSpec* pspec_o {};
  ::GObject* target_o {};
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstChildProxy*) (gobj_()), (const char*) (name_to_c), (::GObject**) (&target_o), (::GParamSpec**) (&pspec_o));
  return std::make_tuple (_temp_ret, gi::wrap (target_o, gi::transfer_full, gi::direction_out), gi::wrap (pspec_o, gi::transfer_none, gi::direction_out));
}

// void gst_child_proxy_set (GstChildProxy* object, const gchar* first_property_name);
// void gst_child_proxy_set (::GstChildProxy* object, const char* first_property_name);
// IGNORE; not introspectable, varargs not supported

// void gst_child_proxy_set_property (GstChildProxy* object, const gchar* name, const GValue* value);
// void gst_child_proxy_set_property (::GstChildProxy* object, const char* name, const ::GValue* value);
void base::ChildProxyBase::set_property (const std::string & name, const GObject::Value & value) noexcept
{
  typedef void (*call_wrap_t) (::GstChildProxy* object, const char* name, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_child_proxy_set_property;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstChildProxy*) (gobj_()), (const char*) (name_to_c), (const ::GValue*) (value_to_c));
}

// void gst_child_proxy_set_valist (GstChildProxy* object, const gchar* first_property_name, va_list var_args);
// void gst_child_proxy_set_valist (::GstChildProxy* object, const char* first_property_name,  var_args);
// IGNORE; not introspectable, var_args type  not supported




} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/childproxy_extra_def_impl.hpp>)
#include <gst/childproxy_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/childproxy_extra_impl.hpp>)
#include <gst/childproxy_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void ChildProxyInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GstChildProxyInterface *methods = (::GstChildProxyInterface *) interface_struct;
  (void) methods;

  methods->child_added = (decltype (methods->child_added)) detail::method_wrapper<self, void (*) (GObject::Object child, const std::string & name), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::child_added_>;
  methods->child_removed = (decltype (methods->child_removed)) detail::method_wrapper<self, void (*) (GObject::Object child, const std::string & name), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::child_removed_>;
  methods->get_child_by_index = (decltype (methods->get_child_by_index)) detail::method_wrapper<self, GObject::Object (*) (guint index), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_child_by_index_>;
  methods->get_child_by_name = (decltype (methods->get_child_by_name)) detail::method_wrapper<self, GObject::Object (*) (const std::string & name), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_child_by_name_>;
  methods->get_children_count = (decltype (methods->get_children_count)) detail::method_wrapper<self, guint (*) (), gi::transfer_none_t>::wrapper<&self::get_children_count_>;
}

// void ChildProxy::child_added (GstChildProxy* parent, GObject* child, const gchar* name);
// void ChildProxy::child_added (::GstChildProxy* parent, ::GObject* child, const char* name);
void ChildProxyInterfaceClassImpl::child_added_ (GObject::Object child, const std::string & name) noexcept
{
  if (!get_struct_()->child_added) return ;
  typedef void (*call_wrap_t) (::GstChildProxy* parent, ::GObject* child, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->child_added;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstChildProxy*) (gobj_()), (::GObject*) (child_to_c), (const char*) (name_to_c));
}

// void ChildProxy::child_removed (GstChildProxy* parent, GObject* child, const gchar* name);
// void ChildProxy::child_removed (::GstChildProxy* parent, ::GObject* child, const char* name);
void ChildProxyInterfaceClassImpl::child_removed_ (GObject::Object child, const std::string & name) noexcept
{
  if (!get_struct_()->child_removed) return ;
  typedef void (*call_wrap_t) (::GstChildProxy* parent, ::GObject* child, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->child_removed;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstChildProxy*) (gobj_()), (::GObject*) (child_to_c), (const char*) (name_to_c));
}

// GObject* ChildProxy::get_child_by_index (GstChildProxy* parent, guint index);
// ::GObject* ChildProxy::get_child_by_index (::GstChildProxy* parent, guint index);
GObject::Object ChildProxyInterfaceClassImpl::get_child_by_index_ (guint index) noexcept
{
  if (!get_struct_()->get_child_by_index) return GObject::Object{};
  typedef ::GObject* (*call_wrap_t) (::GstChildProxy* parent, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_child_by_index;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::GstChildProxy*) (gobj_()), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GObject* ChildProxy::get_child_by_name (GstChildProxy* parent, const gchar* name);
// ::GObject* ChildProxy::get_child_by_name (::GstChildProxy* parent, const char* name);
GObject::Object ChildProxyInterfaceClassImpl::get_child_by_name_ (const std::string & name) noexcept
{
  if (!get_struct_()->get_child_by_name) return GObject::Object{};
  typedef ::GObject* (*call_wrap_t) (::GstChildProxy* parent, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_child_by_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstChildProxy*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// guint ChildProxy::get_children_count (GstChildProxy* parent);
// guint ChildProxy::get_children_count (::GstChildProxy* parent);
guint ChildProxyInterfaceClassImpl::get_children_count_ () noexcept
{
  if (!get_struct_()->get_children_count) return guint{};
  typedef guint (*call_wrap_t) (::GstChildProxy* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_children_count;
  auto _temp_ret = call_wrap_v ((::GstChildProxy*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
