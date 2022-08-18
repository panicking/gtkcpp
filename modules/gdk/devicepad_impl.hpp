// AUTO-GENERATED

#ifndef _GI_GDK_DEVICEPAD_IMPL_HPP_
#define _GI_GDK_DEVICEPAD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// gint gdk_device_pad_get_feature_group (GdkDevicePad* pad, GdkDevicePadFeature feature, gint feature_idx);
// gint gdk_device_pad_get_feature_group (::GdkDevicePad* pad, ::GdkDevicePadFeature feature, gint feature_idx);
gint base::DevicePadBase::get_feature_group (Gdk::DevicePadFeature feature, gint feature_idx) noexcept
{
  typedef gint (*call_wrap_t) (::GdkDevicePad* pad, ::GdkDevicePadFeature feature, gint feature_idx);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_pad_get_feature_group;
  auto feature_idx_to_c = feature_idx;
  auto feature_to_c = gi::unwrap (feature);
  auto _temp_ret = call_wrap_v ((::GdkDevicePad*) (gobj_()), (::GdkDevicePadFeature) (feature_to_c), (gint) (feature_idx_to_c));
  return _temp_ret;
}

// gint gdk_device_pad_get_group_n_modes (GdkDevicePad* pad, gint group_idx);
// gint gdk_device_pad_get_group_n_modes (::GdkDevicePad* pad, gint group_idx);
gint base::DevicePadBase::get_group_n_modes (gint group_idx) noexcept
{
  typedef gint (*call_wrap_t) (::GdkDevicePad* pad, gint group_idx);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_pad_get_group_n_modes;
  auto group_idx_to_c = group_idx;
  auto _temp_ret = call_wrap_v ((::GdkDevicePad*) (gobj_()), (gint) (group_idx_to_c));
  return _temp_ret;
}

// gint gdk_device_pad_get_n_features (GdkDevicePad* pad, GdkDevicePadFeature feature);
// gint gdk_device_pad_get_n_features (::GdkDevicePad* pad, ::GdkDevicePadFeature feature);
gint base::DevicePadBase::get_n_features (Gdk::DevicePadFeature feature) noexcept
{
  typedef gint (*call_wrap_t) (::GdkDevicePad* pad, ::GdkDevicePadFeature feature);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_pad_get_n_features;
  auto feature_to_c = gi::unwrap (feature);
  auto _temp_ret = call_wrap_v ((::GdkDevicePad*) (gobj_()), (::GdkDevicePadFeature) (feature_to_c));
  return _temp_ret;
}

// gint gdk_device_pad_get_n_groups (GdkDevicePad* pad);
// gint gdk_device_pad_get_n_groups (::GdkDevicePad* pad);
gint base::DevicePadBase::get_n_groups () noexcept
{
  typedef gint (*call_wrap_t) (::GdkDevicePad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_pad_get_n_groups;
  auto _temp_ret = call_wrap_v ((::GdkDevicePad*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/devicepad_extra_def_impl.hpp>)
#include <gdk/devicepad_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/devicepad_extra_impl.hpp>)
#include <gdk/devicepad_extra_impl.hpp>
#endif
#endif

#endif
