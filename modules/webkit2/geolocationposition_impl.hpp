// AUTO-GENERATED

#ifndef _GI_WEBKIT2_GEOLOCATIONPOSITION_IMPL_HPP_
#define _GI_WEBKIT2_GEOLOCATIONPOSITION_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitGeolocationPosition* webkit_geolocation_position_new (double latitude, double longitude, double accuracy);
// ::WebKitGeolocationPosition* webkit_geolocation_position_new (gdouble latitude, gdouble longitude, gdouble accuracy);
WebKit2::GeolocationPosition base::GeolocationPositionBase::new_ (gdouble latitude, gdouble longitude, gdouble accuracy) noexcept
{
  typedef ::WebKitGeolocationPosition* (*call_wrap_t) (gdouble latitude, gdouble longitude, gdouble accuracy);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_geolocation_position_new;
  auto accuracy_to_c = accuracy;
  auto longitude_to_c = longitude;
  auto latitude_to_c = latitude;
  auto _temp_ret = call_wrap_v ((gdouble) (latitude_to_c), (gdouble) (longitude_to_c), (gdouble) (accuracy_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// WebKitGeolocationPosition* webkit_geolocation_position_copy (WebKitGeolocationPosition* position);
// ::WebKitGeolocationPosition* webkit_geolocation_position_copy (::WebKitGeolocationPosition* position);
WebKit2::GeolocationPosition base::GeolocationPositionBase::copy () noexcept
{
  typedef ::WebKitGeolocationPosition* (*call_wrap_t) (::WebKitGeolocationPosition* position);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_geolocation_position_copy;
  auto _temp_ret = call_wrap_v ((::WebKitGeolocationPosition*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_geolocation_position_free (WebKitGeolocationPosition* position);
// void webkit_geolocation_position_free (::WebKitGeolocationPosition* position);
// IGNORE; marked ignore

// void webkit_geolocation_position_set_altitude (WebKitGeolocationPosition* position, double altitude);
// void webkit_geolocation_position_set_altitude (::WebKitGeolocationPosition* position, gdouble altitude);
void base::GeolocationPositionBase::set_altitude (gdouble altitude) noexcept
{
  typedef void (*call_wrap_t) (::WebKitGeolocationPosition* position, gdouble altitude);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_geolocation_position_set_altitude;
  auto altitude_to_c = altitude;
  call_wrap_v ((::WebKitGeolocationPosition*) (gobj_()), (gdouble) (altitude_to_c));
}

// void webkit_geolocation_position_set_altitude_accuracy (WebKitGeolocationPosition* position, double altitude_accuracy);
// void webkit_geolocation_position_set_altitude_accuracy (::WebKitGeolocationPosition* position, gdouble altitude_accuracy);
void base::GeolocationPositionBase::set_altitude_accuracy (gdouble altitude_accuracy) noexcept
{
  typedef void (*call_wrap_t) (::WebKitGeolocationPosition* position, gdouble altitude_accuracy);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_geolocation_position_set_altitude_accuracy;
  auto altitude_accuracy_to_c = altitude_accuracy;
  call_wrap_v ((::WebKitGeolocationPosition*) (gobj_()), (gdouble) (altitude_accuracy_to_c));
}

// void webkit_geolocation_position_set_heading (WebKitGeolocationPosition* position, double heading);
// void webkit_geolocation_position_set_heading (::WebKitGeolocationPosition* position, gdouble heading);
void base::GeolocationPositionBase::set_heading (gdouble heading) noexcept
{
  typedef void (*call_wrap_t) (::WebKitGeolocationPosition* position, gdouble heading);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_geolocation_position_set_heading;
  auto heading_to_c = heading;
  call_wrap_v ((::WebKitGeolocationPosition*) (gobj_()), (gdouble) (heading_to_c));
}

// void webkit_geolocation_position_set_speed (WebKitGeolocationPosition* position, double speed);
// void webkit_geolocation_position_set_speed (::WebKitGeolocationPosition* position, gdouble speed);
void base::GeolocationPositionBase::set_speed (gdouble speed) noexcept
{
  typedef void (*call_wrap_t) (::WebKitGeolocationPosition* position, gdouble speed);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_geolocation_position_set_speed;
  auto speed_to_c = speed;
  call_wrap_v ((::WebKitGeolocationPosition*) (gobj_()), (gdouble) (speed_to_c));
}

// void webkit_geolocation_position_set_timestamp (WebKitGeolocationPosition* position, guint64 timestamp);
// void webkit_geolocation_position_set_timestamp (::WebKitGeolocationPosition* position, guint64 timestamp);
void base::GeolocationPositionBase::set_timestamp (guint64 timestamp) noexcept
{
  typedef void (*call_wrap_t) (::WebKitGeolocationPosition* position, guint64 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_geolocation_position_set_timestamp;
  auto timestamp_to_c = timestamp;
  call_wrap_v ((::WebKitGeolocationPosition*) (gobj_()), (guint64) (timestamp_to_c));
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/geolocationposition_extra_def_impl.hpp>)
#include <webkit2/geolocationposition_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/geolocationposition_extra_impl.hpp>)
#include <webkit2/geolocationposition_extra_impl.hpp>
#endif
#endif

#endif
