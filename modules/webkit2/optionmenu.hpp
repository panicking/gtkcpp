// AUTO-GENERATED

#ifndef _GI_WEBKIT2_OPTIONMENU_HPP_
#define _GI_WEBKIT2_OPTIONMENU_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class OptionMenuItem;

class OptionMenu;

namespace base {


#define GI_WEBKIT2_OPTIONMENU_BASE base::OptionMenuBase
class OptionMenuBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitOptionMenu BaseObjectType;

OptionMenuBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_option_menu_get_type(); } 

// void webkit_option_menu_activate_item (WebKitOptionMenu* menu, guint index);
// void webkit_option_menu_activate_item (::WebKitOptionMenu* menu, guint index);
GI_INLINE_DECL void activate_item (guint index) noexcept;

// void webkit_option_menu_close (WebKitOptionMenu* menu);
// void webkit_option_menu_close (::WebKitOptionMenu* menu);
GI_INLINE_DECL void close () noexcept;

// WebKitOptionMenuItem* webkit_option_menu_get_item (WebKitOptionMenu* menu, guint index);
// ::WebKitOptionMenuItem* webkit_option_menu_get_item (::WebKitOptionMenu* menu, guint index);
GI_INLINE_DECL WebKit2::OptionMenuItem get_item (guint index) noexcept;

// guint webkit_option_menu_get_n_items (WebKitOptionMenu* menu);
// guint webkit_option_menu_get_n_items (::WebKitOptionMenu* menu);
GI_INLINE_DECL guint get_n_items () noexcept;

// void webkit_option_menu_select_item (WebKitOptionMenu* menu, guint index);
// void webkit_option_menu_select_item (::WebKitOptionMenu* menu, guint index);
GI_INLINE_DECL void select_item (guint index) noexcept;

// signal close
gi::signal_proxy<void(WebKit2::OptionMenu)> signal_close()
{ return gi::signal_proxy<void(WebKit2::OptionMenu)> (*this, "close"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/optionmenu_extra_def.hpp>)
#include <webkit2/optionmenu_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/optionmenu_extra.hpp>)
#include <webkit2/optionmenu_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class OptionMenu : public GI_WEBKIT2_OPTIONMENU_BASE
{ typedef GI_WEBKIT2_OPTIONMENU_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitOptionMenu>
{ typedef WebKit2::OptionMenu type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class OptionMenuClassDef
{
typedef OptionMenuClassDef self;
public:
typedef WebKit2::OptionMenu instance_type;
typedef ::WebKitOptionMenuClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class OptionMenuClass: public detail::ClassTemplate<WebKit2::impl::internal::OptionMenuClassDef, GObject::impl::internal::ObjectClass>
{
typedef OptionMenuClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::OptionMenuClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using OptionMenuImpl = detail::ObjectImpl<OptionMenu, internal::OptionMenuClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
