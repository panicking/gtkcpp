// AUTO-GENERATED

#ifndef _GI_GST_CONTROLSOURCE_IMPL_HPP_
#define _GI_GST_CONTROLSOURCE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// gboolean gst_control_source_get_value (GstControlSource* self, GstClockTime timestamp, gdouble* value);
// gboolean gst_control_source_get_value (::GstControlSource* self, ::GstClockTime timestamp, gdouble* value);
bool base::ControlSourceBase::control_source_get_value (::GstClockTime timestamp, gdouble & value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstControlSource* self, ::GstClockTime timestamp, gdouble* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_control_source_get_value;
  gdouble value_o {};
  auto timestamp_to_c = timestamp;
  auto _temp_ret = call_wrap_v ((::GstControlSource*) (gobj_()), (::GstClockTime) (timestamp_to_c), (gdouble*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gdouble> base::ControlSourceBase::control_source_get_value (::GstClockTime timestamp) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstControlSource* self, ::GstClockTime timestamp, gdouble* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_control_source_get_value;
  gdouble value_o {};
  auto timestamp_to_c = timestamp;
  auto _temp_ret = call_wrap_v ((::GstControlSource*) (gobj_()), (::GstClockTime) (timestamp_to_c), (gdouble*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_control_source_get_value_array (GstControlSource* self, GstClockTime timestamp, GstClockTime interval, guint n_values, gdouble* values);
// gboolean gst_control_source_get_value_array (::GstControlSource* self, ::GstClockTime timestamp, ::GstClockTime interval, guint n_values, gdouble* values);
bool base::ControlSourceBase::control_source_get_value_array (::GstClockTime timestamp, ::GstClockTime interval, guint n_values, gdouble * values) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstControlSource* self, ::GstClockTime timestamp, ::GstClockTime interval, guint n_values, gdouble* values);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_control_source_get_value_array;
  auto values_i = detail::make_list_unwrap_range (values, n_values, false);
  auto values_w = unwrap (values_i, gi::transfer_none, direction_in);
  auto values_to_c = values_w.gobj_(false);
  auto interval_to_c = interval;
  auto timestamp_to_c = timestamp;
  auto _temp_ret = call_wrap_v ((::GstControlSource*) (gobj_()), (::GstClockTime) (timestamp_to_c), (::GstClockTime) (interval_to_c), (guint) (values_w.size()), (gdouble*) (values_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/controlsource_extra_def_impl.hpp>)
#include <gst/controlsource_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/controlsource_extra_impl.hpp>)
#include <gst/controlsource_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void ControlSourceClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstControlSourceClass *methods = (::GstControlSourceClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
