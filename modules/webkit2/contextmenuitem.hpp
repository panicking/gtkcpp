// AUTO-GENERATED

#ifndef _GI_WEBKIT2_CONTEXTMENUITEM_HPP_
#define _GI_WEBKIT2_CONTEXTMENUITEM_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class ContextMenu;

class ContextMenuItem;

namespace base {


#define GI_WEBKIT2_CONTEXTMENUITEM_BASE base::ContextMenuItemBase
class ContextMenuItemBase : public GObject::InitiallyUnowned
{
typedef GObject::InitiallyUnowned super_type;
public:
typedef ::WebKitContextMenuItem BaseObjectType;

ContextMenuItemBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_context_menu_item_get_type(); } 

// WebKitContextMenuItem* webkit_context_menu_item_new (GtkAction* action);
// ::WebKitContextMenuItem* webkit_context_menu_item_new (::GtkAction* action);
// IGNORE; deprecated

// WebKitContextMenuItem* webkit_context_menu_item_new_from_gaction (GAction* action, const gchar* label, GVariant* target);
// ::WebKitContextMenuItem* webkit_context_menu_item_new_from_gaction (::GAction* action, const char* label, ::GVariant* target);
static GI_INLINE_DECL WebKit2::ContextMenuItem new_from_gaction (Gio::Action action, const std::string & label, GLib::Variant target) noexcept;
static GI_INLINE_DECL WebKit2::ContextMenuItem new_from_gaction (Gio::Action action, const std::string & label) noexcept;

// WebKitContextMenuItem* webkit_context_menu_item_new_from_stock_action (WebKitContextMenuAction action);
// ::WebKitContextMenuItem* webkit_context_menu_item_new_from_stock_action (::WebKitContextMenuAction action);
static GI_INLINE_DECL WebKit2::ContextMenuItem new_from_stock_action (WebKit2::ContextMenuAction action) noexcept;

// WebKitContextMenuItem* webkit_context_menu_item_new_from_stock_action_with_label (WebKitContextMenuAction action, const gchar* label);
// ::WebKitContextMenuItem* webkit_context_menu_item_new_from_stock_action_with_label (::WebKitContextMenuAction action, const char* label);
static GI_INLINE_DECL WebKit2::ContextMenuItem new_from_stock_action_with_label (WebKit2::ContextMenuAction action, const std::string & label) noexcept;

// WebKitContextMenuItem* webkit_context_menu_item_new_separator ();
// ::WebKitContextMenuItem* webkit_context_menu_item_new_separator ();
static GI_INLINE_DECL WebKit2::ContextMenuItem new_separator () noexcept;

// WebKitContextMenuItem* webkit_context_menu_item_new_with_submenu (const gchar* label, WebKitContextMenu* submenu);
// ::WebKitContextMenuItem* webkit_context_menu_item_new_with_submenu (const char* label, ::WebKitContextMenu* submenu);
static GI_INLINE_DECL WebKit2::ContextMenuItem new_with_submenu (const std::string & label, WebKit2::ContextMenu submenu) noexcept;

// GtkAction* webkit_context_menu_item_get_action (WebKitContextMenuItem* item);
// ::GtkAction* webkit_context_menu_item_get_action (::WebKitContextMenuItem* item);
// IGNORE; deprecated

// GAction* webkit_context_menu_item_get_gaction (WebKitContextMenuItem* item);
// ::GAction* webkit_context_menu_item_get_gaction (::WebKitContextMenuItem* item);
GI_INLINE_DECL Gio::Action get_gaction () noexcept;

// WebKitContextMenuAction webkit_context_menu_item_get_stock_action (WebKitContextMenuItem* item);
// ::WebKitContextMenuAction webkit_context_menu_item_get_stock_action (::WebKitContextMenuItem* item);
GI_INLINE_DECL WebKit2::ContextMenuAction get_stock_action () noexcept;

// WebKitContextMenu* webkit_context_menu_item_get_submenu (WebKitContextMenuItem* item);
// ::WebKitContextMenu* webkit_context_menu_item_get_submenu (::WebKitContextMenuItem* item);
GI_INLINE_DECL WebKit2::ContextMenu get_submenu () noexcept;

// gboolean webkit_context_menu_item_is_separator (WebKitContextMenuItem* item);
// gboolean webkit_context_menu_item_is_separator (::WebKitContextMenuItem* item);
GI_INLINE_DECL bool is_separator () noexcept;

// void webkit_context_menu_item_set_submenu (WebKitContextMenuItem* item, WebKitContextMenu* submenu);
// void webkit_context_menu_item_set_submenu (::WebKitContextMenuItem* item, ::WebKitContextMenu* submenu);
GI_INLINE_DECL void set_submenu (WebKit2::ContextMenu submenu) noexcept;
GI_INLINE_DECL void set_submenu () noexcept;

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/contextmenuitem_extra_def.hpp>)
#include <webkit2/contextmenuitem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/contextmenuitem_extra.hpp>)
#include <webkit2/contextmenuitem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class ContextMenuItem : public GI_WEBKIT2_CONTEXTMENUITEM_BASE
{ typedef GI_WEBKIT2_CONTEXTMENUITEM_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitContextMenuItem>
{ typedef WebKit2::ContextMenuItem type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class ContextMenuItemClassDef
{
typedef ContextMenuItemClassDef self;
public:
typedef WebKit2::ContextMenuItem instance_type;
typedef ::WebKitContextMenuItemClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ContextMenuItemClass: public detail::ClassTemplate<WebKit2::impl::internal::ContextMenuItemClassDef, GObject::impl::internal::InitiallyUnownedClass>
{
typedef ContextMenuItemClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::ContextMenuItemClassDef, GObject::impl::internal::InitiallyUnownedClass> super;

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

using ContextMenuItemImpl = detail::ObjectImpl<ContextMenuItem, internal::ContextMenuItemClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
