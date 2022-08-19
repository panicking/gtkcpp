// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WINDOWPROPERTIES_IMPL_HPP_
#define _GI_WEBKIT2_WINDOWPROPERTIES_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// gboolean webkit_window_properties_get_fullscreen (WebKitWindowProperties* window_properties);
// gboolean webkit_window_properties_get_fullscreen (::WebKitWindowProperties* window_properties);
bool base::WindowPropertiesBase::get_fullscreen () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWindowProperties* window_properties);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_window_properties_get_fullscreen;
  auto _temp_ret = call_wrap_v ((::WebKitWindowProperties*) (gobj_()));
  return _temp_ret;
}

// void webkit_window_properties_get_geometry (WebKitWindowProperties* window_properties, GdkRectangle* geometry);
// void webkit_window_properties_get_geometry (::WebKitWindowProperties* window_properties, ::GdkRectangle* geometry);
void base::WindowPropertiesBase::get_geometry (Gdk::Rectangle & geometry) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWindowProperties* window_properties, ::GdkRectangle* geometry);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_window_properties_get_geometry;
  traits::unset_wrapper<::GdkRectangle>::type geometry_c;
  call_wrap_v ((::WebKitWindowProperties*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &geometry_c));
  geometry = gi::wrap ((::GdkRectangle*) &geometry_c, gi::transfer_none, gi::direction_out);
}
Gdk::Rectangle base::WindowPropertiesBase::get_geometry () noexcept
{
  typedef void (*call_wrap_t) (::WebKitWindowProperties* window_properties, ::GdkRectangle* geometry);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_window_properties_get_geometry;
  traits::unset_wrapper<::GdkRectangle>::type geometry_c;
  call_wrap_v ((::WebKitWindowProperties*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &geometry_c));
  return gi::wrap ((::GdkRectangle*) &geometry_c, gi::transfer_none, gi::direction_out);
}

// gboolean webkit_window_properties_get_locationbar_visible (WebKitWindowProperties* window_properties);
// gboolean webkit_window_properties_get_locationbar_visible (::WebKitWindowProperties* window_properties);
bool base::WindowPropertiesBase::get_locationbar_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWindowProperties* window_properties);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_window_properties_get_locationbar_visible;
  auto _temp_ret = call_wrap_v ((::WebKitWindowProperties*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_window_properties_get_menubar_visible (WebKitWindowProperties* window_properties);
// gboolean webkit_window_properties_get_menubar_visible (::WebKitWindowProperties* window_properties);
bool base::WindowPropertiesBase::get_menubar_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWindowProperties* window_properties);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_window_properties_get_menubar_visible;
  auto _temp_ret = call_wrap_v ((::WebKitWindowProperties*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_window_properties_get_resizable (WebKitWindowProperties* window_properties);
// gboolean webkit_window_properties_get_resizable (::WebKitWindowProperties* window_properties);
bool base::WindowPropertiesBase::get_resizable () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWindowProperties* window_properties);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_window_properties_get_resizable;
  auto _temp_ret = call_wrap_v ((::WebKitWindowProperties*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_window_properties_get_scrollbars_visible (WebKitWindowProperties* window_properties);
// gboolean webkit_window_properties_get_scrollbars_visible (::WebKitWindowProperties* window_properties);
bool base::WindowPropertiesBase::get_scrollbars_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWindowProperties* window_properties);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_window_properties_get_scrollbars_visible;
  auto _temp_ret = call_wrap_v ((::WebKitWindowProperties*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_window_properties_get_statusbar_visible (WebKitWindowProperties* window_properties);
// gboolean webkit_window_properties_get_statusbar_visible (::WebKitWindowProperties* window_properties);
bool base::WindowPropertiesBase::get_statusbar_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWindowProperties* window_properties);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_window_properties_get_statusbar_visible;
  auto _temp_ret = call_wrap_v ((::WebKitWindowProperties*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_window_properties_get_toolbar_visible (WebKitWindowProperties* window_properties);
// gboolean webkit_window_properties_get_toolbar_visible (::WebKitWindowProperties* window_properties);
bool base::WindowPropertiesBase::get_toolbar_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWindowProperties* window_properties);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_window_properties_get_toolbar_visible;
  auto _temp_ret = call_wrap_v ((::WebKitWindowProperties*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/windowproperties_extra_def_impl.hpp>)
#include <webkit2/windowproperties_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/windowproperties_extra_impl.hpp>)
#include <webkit2/windowproperties_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void WindowPropertiesClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitWindowPropertiesClass *methods = (::WebKitWindowPropertiesClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
