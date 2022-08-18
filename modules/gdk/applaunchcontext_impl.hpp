// AUTO-GENERATED

#ifndef _GI_GDK_APPLAUNCHCONTEXT_IMPL_HPP_
#define _GI_GDK_APPLAUNCHCONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkAppLaunchContext* gdk_app_launch_context_new ();
// ::GdkAppLaunchContext* gdk_app_launch_context_new ();
// IGNORE; deprecated

// void gdk_app_launch_context_set_desktop (GdkAppLaunchContext* context, gint desktop);
// void gdk_app_launch_context_set_desktop (::GdkAppLaunchContext* context, gint desktop);
void base::AppLaunchContextBase::set_desktop (gint desktop) noexcept
{
  typedef void (*call_wrap_t) (::GdkAppLaunchContext* context, gint desktop);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_app_launch_context_set_desktop;
  auto desktop_to_c = desktop;
  call_wrap_v ((::GdkAppLaunchContext*) (gobj_()), (gint) (desktop_to_c));
}

// void gdk_app_launch_context_set_display (GdkAppLaunchContext* context, GdkDisplay* display);
// void gdk_app_launch_context_set_display (::GdkAppLaunchContext* context, ::GdkDisplay* display);
// IGNORE; deprecated

// void gdk_app_launch_context_set_icon (GdkAppLaunchContext* context, GIcon* icon);
// void gdk_app_launch_context_set_icon (::GdkAppLaunchContext* context, ::GIcon* icon);
void base::AppLaunchContextBase::set_icon (Gio::Icon icon) noexcept
{
  typedef void (*call_wrap_t) (::GdkAppLaunchContext* context, ::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_app_launch_context_set_icon;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkAppLaunchContext*) (gobj_()), (::GIcon*) (icon_to_c));
}
void base::AppLaunchContextBase::set_icon () noexcept
{
  typedef void (*call_wrap_t) (::GdkAppLaunchContext* context, ::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_app_launch_context_set_icon;
  auto icon_to_c = nullptr;
  call_wrap_v ((::GdkAppLaunchContext*) (gobj_()), (::GIcon*) (icon_to_c));
}

// void gdk_app_launch_context_set_icon_name (GdkAppLaunchContext* context, const char* icon_name);
// void gdk_app_launch_context_set_icon_name (::GdkAppLaunchContext* context, const char* icon_name);
void base::AppLaunchContextBase::set_icon_name (const std::string & icon_name) noexcept
{
  typedef void (*call_wrap_t) (::GdkAppLaunchContext* context, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_app_launch_context_set_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkAppLaunchContext*) (gobj_()), (const char*) (icon_name_to_c));
}
void base::AppLaunchContextBase::set_icon_name () noexcept
{
  typedef void (*call_wrap_t) (::GdkAppLaunchContext* context, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_app_launch_context_set_icon_name;
  auto icon_name_to_c = nullptr;
  call_wrap_v ((::GdkAppLaunchContext*) (gobj_()), (const char*) (icon_name_to_c));
}

// void gdk_app_launch_context_set_screen (GdkAppLaunchContext* context, GdkScreen* screen);
// void gdk_app_launch_context_set_screen (::GdkAppLaunchContext* context, ::GdkScreen* screen);
void base::AppLaunchContextBase::set_screen (Gdk::Screen screen) noexcept
{
  typedef void (*call_wrap_t) (::GdkAppLaunchContext* context, ::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_app_launch_context_set_screen;
  auto screen_to_c = gi::unwrap (screen, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkAppLaunchContext*) (gobj_()), (::GdkScreen*) (screen_to_c));
}

// void gdk_app_launch_context_set_timestamp (GdkAppLaunchContext* context, guint32 timestamp);
// void gdk_app_launch_context_set_timestamp (::GdkAppLaunchContext* context, guint32 timestamp);
void base::AppLaunchContextBase::set_timestamp (guint32 timestamp) noexcept
{
  typedef void (*call_wrap_t) (::GdkAppLaunchContext* context, guint32 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_app_launch_context_set_timestamp;
  auto timestamp_to_c = timestamp;
  call_wrap_v ((::GdkAppLaunchContext*) (gobj_()), (guint32) (timestamp_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/applaunchcontext_extra_def_impl.hpp>)
#include <gdk/applaunchcontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/applaunchcontext_extra_impl.hpp>)
#include <gdk/applaunchcontext_extra_impl.hpp>
#endif
#endif

#endif
