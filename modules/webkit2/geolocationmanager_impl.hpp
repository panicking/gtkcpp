// AUTO-GENERATED

#ifndef _GI_WEBKIT2_GEOLOCATIONMANAGER_IMPL_HPP_
#define _GI_WEBKIT2_GEOLOCATIONMANAGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// void webkit_geolocation_manager_failed (WebKitGeolocationManager* manager, const char* error_message);
// void webkit_geolocation_manager_failed (::WebKitGeolocationManager* manager, const char* error_message);
void base::GeolocationManagerBase::failed (const std::string & error_message) noexcept
{
  typedef void (*call_wrap_t) (::WebKitGeolocationManager* manager, const char* error_message);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_geolocation_manager_failed;
  auto error_message_to_c = gi::unwrap (error_message, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitGeolocationManager*) (gobj_()), (const char*) (error_message_to_c));
}

// gboolean webkit_geolocation_manager_get_enable_high_accuracy (WebKitGeolocationManager* manager);
// gboolean webkit_geolocation_manager_get_enable_high_accuracy (::WebKitGeolocationManager* manager);
bool base::GeolocationManagerBase::get_enable_high_accuracy () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitGeolocationManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_geolocation_manager_get_enable_high_accuracy;
  auto _temp_ret = call_wrap_v ((::WebKitGeolocationManager*) (gobj_()));
  return _temp_ret;
}

// void webkit_geolocation_manager_update_position (WebKitGeolocationManager* manager, WebKitGeolocationPosition* position);
// void webkit_geolocation_manager_update_position (::WebKitGeolocationManager* manager, ::WebKitGeolocationPosition* position);
void base::GeolocationManagerBase::update_position (WebKit2::GeolocationPosition position) noexcept
{
  typedef void (*call_wrap_t) (::WebKitGeolocationManager* manager, ::WebKitGeolocationPosition* position);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_geolocation_manager_update_position;
  auto position_to_c = gi::unwrap (position, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitGeolocationManager*) (gobj_()), (::WebKitGeolocationPosition*) (position_to_c));
}




} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/geolocationmanager_extra_def_impl.hpp>)
#include <webkit2/geolocationmanager_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/geolocationmanager_extra_impl.hpp>)
#include <webkit2/geolocationmanager_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void GeolocationManagerClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitGeolocationManagerClass *methods = (::WebKitGeolocationManagerClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
