// AUTO-GENERATED

#ifndef _GI_WEBKIT2_OPTIONMENU_IMPL_HPP_
#define _GI_WEBKIT2_OPTIONMENU_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// void webkit_option_menu_activate_item (WebKitOptionMenu* menu, guint index);
// void webkit_option_menu_activate_item (::WebKitOptionMenu* menu, guint index);
void base::OptionMenuBase::activate_item (guint index) noexcept
{
  typedef void (*call_wrap_t) (::WebKitOptionMenu* menu, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_option_menu_activate_item;
  auto index_to_c = index;
  call_wrap_v ((::WebKitOptionMenu*) (gobj_()), (guint) (index_to_c));
}

// void webkit_option_menu_close (WebKitOptionMenu* menu);
// void webkit_option_menu_close (::WebKitOptionMenu* menu);
void base::OptionMenuBase::close () noexcept
{
  typedef void (*call_wrap_t) (::WebKitOptionMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_option_menu_close;
  call_wrap_v ((::WebKitOptionMenu*) (gobj_()));
}

// WebKitOptionMenuItem* webkit_option_menu_get_item (WebKitOptionMenu* menu, guint index);
// ::WebKitOptionMenuItem* webkit_option_menu_get_item (::WebKitOptionMenu* menu, guint index);
WebKit2::OptionMenuItem base::OptionMenuBase::get_item (guint index) noexcept
{
  typedef ::WebKitOptionMenuItem* (*call_wrap_t) (::WebKitOptionMenu* menu, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_option_menu_get_item;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::WebKitOptionMenu*) (gobj_()), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint webkit_option_menu_get_n_items (WebKitOptionMenu* menu);
// guint webkit_option_menu_get_n_items (::WebKitOptionMenu* menu);
guint base::OptionMenuBase::get_n_items () noexcept
{
  typedef guint (*call_wrap_t) (::WebKitOptionMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_option_menu_get_n_items;
  auto _temp_ret = call_wrap_v ((::WebKitOptionMenu*) (gobj_()));
  return _temp_ret;
}

// void webkit_option_menu_select_item (WebKitOptionMenu* menu, guint index);
// void webkit_option_menu_select_item (::WebKitOptionMenu* menu, guint index);
void base::OptionMenuBase::select_item (guint index) noexcept
{
  typedef void (*call_wrap_t) (::WebKitOptionMenu* menu, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_option_menu_select_item;
  auto index_to_c = index;
  call_wrap_v ((::WebKitOptionMenu*) (gobj_()), (guint) (index_to_c));
}



} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/optionmenu_extra_def_impl.hpp>)
#include <webkit2/optionmenu_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/optionmenu_extra_impl.hpp>)
#include <webkit2/optionmenu_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void OptionMenuClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitOptionMenuClass *methods = (::WebKitOptionMenuClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
