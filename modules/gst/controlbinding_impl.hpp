// AUTO-GENERATED

#ifndef _GI_GST_CONTROLBINDING_IMPL_HPP_
#define _GI_GST_CONTROLBINDING_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// gboolean gst_control_binding_get_g_value_array (GstControlBinding* binding, GstClockTime timestamp, GstClockTime interval, guint n_values, GValue* values);
// gboolean gst_control_binding_get_g_value_array (::GstControlBinding* binding, ::GstClockTime timestamp, ::GstClockTime interval, guint n_values, ::GValue** values);
// SKIP; inconsistent in values pointer depth (1 vs 2)

// GValue* gst_control_binding_get_value (GstControlBinding* binding, GstClockTime timestamp);
// ::GValue* gst_control_binding_get_value (::GstControlBinding* binding, ::GstClockTime timestamp);
GObject::Value base::ControlBindingBase::get_value (::GstClockTime timestamp) noexcept
{
  typedef ::GValue* (*call_wrap_t) (::GstControlBinding* binding, ::GstClockTime timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_control_binding_get_value;
  auto timestamp_to_c = timestamp;
  auto _temp_ret = call_wrap_v ((::GstControlBinding*) (gobj_()), (::GstClockTime) (timestamp_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_control_binding_get_value_array (GstControlBinding* binding, GstClockTime timestamp, GstClockTime interval, guint n_values, gpointer values);
// gboolean gst_control_binding_get_value_array (::GstControlBinding* binding, ::GstClockTime timestamp, ::GstClockTime interval, guint n_values, void** values);
bool base::ControlBindingBase::get_value_array (::GstClockTime timestamp, ::GstClockTime interval, guint n_values, gpointer * values) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstControlBinding* binding, ::GstClockTime timestamp, ::GstClockTime interval, guint n_values, void** values);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_control_binding_get_value_array;
  auto values_i = detail::make_list_unwrap_range (values, n_values, false);
  auto values_w = unwrap (values_i, gi::transfer_none, direction_in);
  auto values_to_c = values_w.gobj_(false);
  auto interval_to_c = interval;
  auto timestamp_to_c = timestamp;
  auto _temp_ret = call_wrap_v ((::GstControlBinding*) (gobj_()), (::GstClockTime) (timestamp_to_c), (::GstClockTime) (interval_to_c), (guint) (values_w.size()), (void**) (values_to_c));
  return _temp_ret;
}

// gboolean gst_control_binding_is_disabled (GstControlBinding* binding);
// gboolean gst_control_binding_is_disabled (::GstControlBinding* binding);
bool base::ControlBindingBase::is_disabled () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstControlBinding* binding);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_control_binding_is_disabled;
  auto _temp_ret = call_wrap_v ((::GstControlBinding*) (gobj_()));
  return _temp_ret;
}

// void gst_control_binding_set_disabled (GstControlBinding* binding, gboolean disabled);
// void gst_control_binding_set_disabled (::GstControlBinding* binding, gboolean disabled);
void base::ControlBindingBase::set_disabled (gboolean disabled) noexcept
{
  typedef void (*call_wrap_t) (::GstControlBinding* binding, gboolean disabled);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_control_binding_set_disabled;
  auto disabled_to_c = disabled;
  call_wrap_v ((::GstControlBinding*) (gobj_()), (gboolean) (disabled_to_c));
}

// gboolean gst_control_binding_sync_values (GstControlBinding* binding, GstObject* object, GstClockTime timestamp, GstClockTime last_sync);
// gboolean gst_control_binding_sync_values (::GstControlBinding* binding, ::GstObject* object, ::GstClockTime timestamp, ::GstClockTime last_sync);
bool base::ControlBindingBase::sync_values (Gst::Object object, ::GstClockTime timestamp, ::GstClockTime last_sync) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstControlBinding* binding, ::GstObject* object, ::GstClockTime timestamp, ::GstClockTime last_sync);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_control_binding_sync_values;
  auto last_sync_to_c = last_sync;
  auto timestamp_to_c = timestamp;
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstControlBinding*) (gobj_()), (::GstObject*) (object_to_c), (::GstClockTime) (timestamp_to_c), (::GstClockTime) (last_sync_to_c));
  return _temp_ret;
}

static char* _field_name_get (const ::GstControlBinding* obj) { return (char*) obj->name; }
// char* ControlBinding::name (const ::GstControlBinding* obj);
// char* ControlBinding::name (const ::GstControlBinding* obj);
std::string base::ControlBindingBase::name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GstControlBinding* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_get;
  auto _temp_ret = call_wrap_v ((const ::GstControlBinding*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GParamSpec* _field_pspec_get (const ::GstControlBinding* obj) { return (::GParamSpec*) obj->pspec; }
// ::GParamSpec* ControlBinding::pspec (const ::GstControlBinding* obj);
// ::GParamSpec* ControlBinding::pspec (const ::GstControlBinding* obj);
GObject::ParamSpec base::ControlBindingBase::pspec_ () const noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const ::GstControlBinding* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_pspec_get;
  auto _temp_ret = call_wrap_v ((const ::GstControlBinding*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/controlbinding_extra_def_impl.hpp>)
#include <gst/controlbinding_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/controlbinding_extra_impl.hpp>)
#include <gst/controlbinding_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void ControlBindingClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstControlBindingClass *methods = (::GstControlBindingClass *) class_struct;
  (void) methods;

  methods->get_value = (decltype (methods->get_value)) detail::method_wrapper<self, GObject::Value (*) (::GstClockTime timestamp), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_value_>;
  methods->sync_values = (decltype (methods->sync_values)) detail::method_wrapper<self, bool (*) (Gst::Object object, ::GstClockTime timestamp, ::GstClockTime last_sync), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::sync_values_>;
}

// gboolean ControlBinding::get_g_value_array (GstControlBinding* binding, GstClockTime timestamp, GstClockTime interval, guint n_values, GValue* values);
// gboolean ControlBinding::get_g_value_array (::GstControlBinding* binding, ::GstClockTime timestamp, ::GstClockTime interval, guint n_values, ::GValue** values);
// SKIP; virtual-method container parameter not supported

// GValue* ControlBinding::get_value (GstControlBinding* binding, GstClockTime timestamp);
// ::GValue* ControlBinding::get_value (::GstControlBinding* binding, ::GstClockTime timestamp);
GObject::Value ControlBindingClass::get_value_ (::GstClockTime timestamp) noexcept
{
  if (!get_struct_()->get_value) return GObject::Value{};
  typedef ::GValue* (*call_wrap_t) (::GstControlBinding* binding, ::GstClockTime timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_value;
  auto timestamp_to_c = timestamp;
  auto _temp_ret = call_wrap_v ((::GstControlBinding*) (gobj_()), (::GstClockTime) (timestamp_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean ControlBinding::sync_values (GstControlBinding* binding, GstObject* object, GstClockTime timestamp, GstClockTime last_sync);
// gboolean ControlBinding::sync_values (::GstControlBinding* binding, ::GstObject* object, ::GstClockTime timestamp, ::GstClockTime last_sync);
bool ControlBindingClass::sync_values_ (Gst::Object object, ::GstClockTime timestamp, ::GstClockTime last_sync) noexcept
{
  if (!get_struct_()->sync_values) return bool{};
  typedef gboolean (*call_wrap_t) (::GstControlBinding* binding, ::GstObject* object, ::GstClockTime timestamp, ::GstClockTime last_sync);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->sync_values;
  auto last_sync_to_c = last_sync;
  auto timestamp_to_c = timestamp;
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstControlBinding*) (gobj_()), (::GstObject*) (object_to_c), (::GstClockTime) (timestamp_to_c), (::GstClockTime) (last_sync_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
