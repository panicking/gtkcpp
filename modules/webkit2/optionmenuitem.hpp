// AUTO-GENERATED

#ifndef _GI_WEBKIT2_OPTIONMENUITEM_HPP_
#define _GI_WEBKIT2_OPTIONMENUITEM_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class OptionMenuItem;

namespace base {


#define GI_WEBKIT2_OPTIONMENUITEM_BASE base::OptionMenuItemBase
class OptionMenuItemBase : public gi::detail::GBoxedWrapper<OptionMenuItemBase, ::WebKitOptionMenuItem>
{
typedef gi::detail::GBoxedWrapper<OptionMenuItemBase, ::WebKitOptionMenuItem> super_type;
public:

OptionMenuItemBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return webkit_option_menu_item_get_type(); } 

// WebKitOptionMenuItem* webkit_option_menu_item_copy (WebKitOptionMenuItem* item);
// ::WebKitOptionMenuItem* webkit_option_menu_item_copy (::WebKitOptionMenuItem* item);
GI_INLINE_DECL WebKit2::OptionMenuItem copy () noexcept;

// void webkit_option_menu_item_free (WebKitOptionMenuItem* item);
// void webkit_option_menu_item_free (::WebKitOptionMenuItem* item);
// IGNORE; marked ignore

// const gchar* webkit_option_menu_item_get_label (WebKitOptionMenuItem* item);
// const char* webkit_option_menu_item_get_label (::WebKitOptionMenuItem* item);
GI_INLINE_DECL std::string get_label () noexcept;

// const gchar* webkit_option_menu_item_get_tooltip (WebKitOptionMenuItem* item);
// const char* webkit_option_menu_item_get_tooltip (::WebKitOptionMenuItem* item);
GI_INLINE_DECL std::string get_tooltip () noexcept;

// gboolean webkit_option_menu_item_is_enabled (WebKitOptionMenuItem* item);
// gboolean webkit_option_menu_item_is_enabled (::WebKitOptionMenuItem* item);
GI_INLINE_DECL bool is_enabled () noexcept;

// gboolean webkit_option_menu_item_is_group_child (WebKitOptionMenuItem* item);
// gboolean webkit_option_menu_item_is_group_child (::WebKitOptionMenuItem* item);
GI_INLINE_DECL bool is_group_child () noexcept;

// gboolean webkit_option_menu_item_is_group_label (WebKitOptionMenuItem* item);
// gboolean webkit_option_menu_item_is_group_label (::WebKitOptionMenuItem* item);
GI_INLINE_DECL bool is_group_label () noexcept;

// gboolean webkit_option_menu_item_is_selected (WebKitOptionMenuItem* item);
// gboolean webkit_option_menu_item_is_selected (::WebKitOptionMenuItem* item);
GI_INLINE_DECL bool is_selected () noexcept;

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/optionmenuitem_extra_def.hpp>)
#include <webkit2/optionmenuitem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/optionmenuitem_extra.hpp>)
#include <webkit2/optionmenuitem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class OptionMenuItem : public GI_WEBKIT2_OPTIONMENUITEM_BASE
{ typedef GI_WEBKIT2_OPTIONMENUITEM_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitOptionMenuItem>
{ typedef WebKit2::OptionMenuItem type; }; 

} // namespace repository

} // namespace gi

#endif
