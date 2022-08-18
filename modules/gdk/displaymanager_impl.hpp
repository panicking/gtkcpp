// AUTO-GENERATED

#ifndef _GI_GDK_DISPLAYMANAGER_IMPL_HPP_
#define _GI_GDK_DISPLAYMANAGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkDisplayManager* gdk_display_manager_get ();
// ::GdkDisplayManager* gdk_display_manager_get ();
Gdk::DisplayManager base::DisplayManagerBase::get () noexcept
{
  typedef ::GdkDisplayManager* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_manager_get;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkDisplay* gdk_display_manager_get_default_display (GdkDisplayManager* manager);
// ::GdkDisplay* gdk_display_manager_get_default_display (::GdkDisplayManager* manager);
Gdk::Display base::DisplayManagerBase::get_default_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkDisplayManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_manager_get_default_display;
  auto _temp_ret = call_wrap_v ((::GdkDisplayManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GSList* gdk_display_manager_list_displays (GdkDisplayManager* manager);
// ::GSList* gdk_display_manager_list_displays (::GdkDisplayManager* manager);
std::vector<Gdk::Display> base::DisplayManagerBase::list_displays () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::GdkDisplayManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_manager_list_displays;
  auto _temp_ret = call_wrap_v ((::GdkDisplayManager*) (gobj_()));
  return gi::detail::wrap_list<Gdk::Display> (_temp_ret, gi::transfer_container);
}

// GdkDisplay* gdk_display_manager_open_display (GdkDisplayManager* manager, const gchar* name);
// ::GdkDisplay* gdk_display_manager_open_display (::GdkDisplayManager* manager, const char* name);
Gdk::Display base::DisplayManagerBase::open_display (const std::string & name) noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkDisplayManager* manager, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_manager_open_display;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkDisplayManager*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gdk_display_manager_set_default_display (GdkDisplayManager* manager, GdkDisplay* display);
// void gdk_display_manager_set_default_display (::GdkDisplayManager* manager, ::GdkDisplay* display);
void base::DisplayManagerBase::set_default_display (Gdk::Display display) noexcept
{
  typedef void (*call_wrap_t) (::GdkDisplayManager* manager, ::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_manager_set_default_display;
  auto display_to_c = gi::unwrap (display, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDisplayManager*) (gobj_()), (::GdkDisplay*) (display_to_c));
}



} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/displaymanager_extra_def_impl.hpp>)
#include <gdk/displaymanager_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/displaymanager_extra_impl.hpp>)
#include <gdk/displaymanager_extra_impl.hpp>
#endif
#endif

#endif
