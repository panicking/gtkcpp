// AUTO-GENERATED

#ifndef _GI_WEBKIT2_OPTIONMENUITEM_IMPL_HPP_
#define _GI_WEBKIT2_OPTIONMENUITEM_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitOptionMenuItem* webkit_option_menu_item_copy (WebKitOptionMenuItem* item);
// ::WebKitOptionMenuItem* webkit_option_menu_item_copy (::WebKitOptionMenuItem* item);
WebKit2::OptionMenuItem base::OptionMenuItemBase::copy () noexcept
{
  typedef ::WebKitOptionMenuItem* (*call_wrap_t) (::WebKitOptionMenuItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_option_menu_item_copy;
  auto _temp_ret = call_wrap_v ((::WebKitOptionMenuItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_option_menu_item_free (WebKitOptionMenuItem* item);
// void webkit_option_menu_item_free (::WebKitOptionMenuItem* item);
// IGNORE; marked ignore

// const gchar* webkit_option_menu_item_get_label (WebKitOptionMenuItem* item);
// const char* webkit_option_menu_item_get_label (::WebKitOptionMenuItem* item);
std::string base::OptionMenuItemBase::get_label () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitOptionMenuItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_option_menu_item_get_label;
  auto _temp_ret = call_wrap_v ((::WebKitOptionMenuItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_option_menu_item_get_tooltip (WebKitOptionMenuItem* item);
// const char* webkit_option_menu_item_get_tooltip (::WebKitOptionMenuItem* item);
std::string base::OptionMenuItemBase::get_tooltip () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitOptionMenuItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_option_menu_item_get_tooltip;
  auto _temp_ret = call_wrap_v ((::WebKitOptionMenuItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean webkit_option_menu_item_is_enabled (WebKitOptionMenuItem* item);
// gboolean webkit_option_menu_item_is_enabled (::WebKitOptionMenuItem* item);
bool base::OptionMenuItemBase::is_enabled () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitOptionMenuItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_option_menu_item_is_enabled;
  auto _temp_ret = call_wrap_v ((::WebKitOptionMenuItem*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_option_menu_item_is_group_child (WebKitOptionMenuItem* item);
// gboolean webkit_option_menu_item_is_group_child (::WebKitOptionMenuItem* item);
bool base::OptionMenuItemBase::is_group_child () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitOptionMenuItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_option_menu_item_is_group_child;
  auto _temp_ret = call_wrap_v ((::WebKitOptionMenuItem*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_option_menu_item_is_group_label (WebKitOptionMenuItem* item);
// gboolean webkit_option_menu_item_is_group_label (::WebKitOptionMenuItem* item);
bool base::OptionMenuItemBase::is_group_label () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitOptionMenuItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_option_menu_item_is_group_label;
  auto _temp_ret = call_wrap_v ((::WebKitOptionMenuItem*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_option_menu_item_is_selected (WebKitOptionMenuItem* item);
// gboolean webkit_option_menu_item_is_selected (::WebKitOptionMenuItem* item);
bool base::OptionMenuItemBase::is_selected () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitOptionMenuItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_option_menu_item_is_selected;
  auto _temp_ret = call_wrap_v ((::WebKitOptionMenuItem*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/optionmenuitem_extra_def_impl.hpp>)
#include <webkit2/optionmenuitem_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/optionmenuitem_extra_impl.hpp>)
#include <webkit2/optionmenuitem_extra_impl.hpp>
#endif
#endif

#endif
