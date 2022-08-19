// AUTO-GENERATED

#ifndef _GI_WEBKIT2_CONTEXTMENU_HPP_
#define _GI_WEBKIT2_CONTEXTMENU_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class ContextMenuItem;

class ContextMenu;

namespace base {


#define GI_WEBKIT2_CONTEXTMENU_BASE base::ContextMenuBase
class ContextMenuBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitContextMenu BaseObjectType;

ContextMenuBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_context_menu_get_type(); } 

// WebKitContextMenu* webkit_context_menu_new ();
// ::WebKitContextMenu* webkit_context_menu_new ();
static GI_INLINE_DECL WebKit2::ContextMenu new_ () noexcept;

// WebKitContextMenu* webkit_context_menu_new_with_items (GList* items);
// ::WebKitContextMenu* webkit_context_menu_new_with_items (::GList* items);
static GI_INLINE_DECL WebKit2::ContextMenu new_with_items (const std::vector<WebKit2::ContextMenuItem> & items) noexcept;

// void webkit_context_menu_append (WebKitContextMenu* menu, WebKitContextMenuItem* item);
// void webkit_context_menu_append (::WebKitContextMenu* menu, ::WebKitContextMenuItem* item);
GI_INLINE_DECL void append (WebKit2::ContextMenuItem item) noexcept;

// WebKitContextMenuItem* webkit_context_menu_first (WebKitContextMenu* menu);
// ::WebKitContextMenuItem* webkit_context_menu_first (::WebKitContextMenu* menu);
GI_INLINE_DECL WebKit2::ContextMenuItem first () noexcept;

// WebKitContextMenuItem* webkit_context_menu_get_item_at_position (WebKitContextMenu* menu, guint position);
// ::WebKitContextMenuItem* webkit_context_menu_get_item_at_position (::WebKitContextMenu* menu, guint position);
GI_INLINE_DECL WebKit2::ContextMenuItem get_item_at_position (guint position) noexcept;

// GList* webkit_context_menu_get_items (WebKitContextMenu* menu);
// ::GList* webkit_context_menu_get_items (::WebKitContextMenu* menu);
GI_INLINE_DECL std::vector<WebKit2::ContextMenuItem> get_items () noexcept;

// guint webkit_context_menu_get_n_items (WebKitContextMenu* menu);
// guint webkit_context_menu_get_n_items (::WebKitContextMenu* menu);
GI_INLINE_DECL guint get_n_items () noexcept;

// GVariant* webkit_context_menu_get_user_data (WebKitContextMenu* menu);
// ::GVariant* webkit_context_menu_get_user_data (::WebKitContextMenu* menu);
GI_INLINE_DECL GLib::Variant get_user_data () noexcept;

// void webkit_context_menu_insert (WebKitContextMenu* menu, WebKitContextMenuItem* item, gint position);
// void webkit_context_menu_insert (::WebKitContextMenu* menu, ::WebKitContextMenuItem* item, gint position);
GI_INLINE_DECL void insert (WebKit2::ContextMenuItem item, gint position) noexcept;

// WebKitContextMenuItem* webkit_context_menu_last (WebKitContextMenu* menu);
// ::WebKitContextMenuItem* webkit_context_menu_last (::WebKitContextMenu* menu);
GI_INLINE_DECL WebKit2::ContextMenuItem last () noexcept;

// void webkit_context_menu_move_item (WebKitContextMenu* menu, WebKitContextMenuItem* item, gint position);
// void webkit_context_menu_move_item (::WebKitContextMenu* menu, ::WebKitContextMenuItem* item, gint position);
GI_INLINE_DECL void move_item (WebKit2::ContextMenuItem item, gint position) noexcept;

// void webkit_context_menu_prepend (WebKitContextMenu* menu, WebKitContextMenuItem* item);
// void webkit_context_menu_prepend (::WebKitContextMenu* menu, ::WebKitContextMenuItem* item);
GI_INLINE_DECL void prepend (WebKit2::ContextMenuItem item) noexcept;

// void webkit_context_menu_remove (WebKitContextMenu* menu, WebKitContextMenuItem* item);
// void webkit_context_menu_remove (::WebKitContextMenu* menu, ::WebKitContextMenuItem* item);
GI_INLINE_DECL void remove (WebKit2::ContextMenuItem item) noexcept;

// void webkit_context_menu_remove_all (WebKitContextMenu* menu);
// void webkit_context_menu_remove_all (::WebKitContextMenu* menu);
GI_INLINE_DECL void remove_all () noexcept;

// void webkit_context_menu_set_user_data (WebKitContextMenu* menu, GVariant* user_data);
// void webkit_context_menu_set_user_data (::WebKitContextMenu* menu, ::GVariant* user_data);
GI_INLINE_DECL void set_user_data (GLib::Variant user_data) noexcept;

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/contextmenu_extra_def.hpp>)
#include <webkit2/contextmenu_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/contextmenu_extra.hpp>)
#include <webkit2/contextmenu_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class ContextMenu : public GI_WEBKIT2_CONTEXTMENU_BASE
{ typedef GI_WEBKIT2_CONTEXTMENU_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitContextMenu>
{ typedef WebKit2::ContextMenu type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class ContextMenuClassDef
{
typedef ContextMenuClassDef self;
public:
typedef WebKit2::ContextMenu instance_type;
typedef ::WebKitContextMenuClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ContextMenuClass: public detail::ClassTemplate<WebKit2::impl::internal::ContextMenuClassDef, GObject::impl::internal::ObjectClass>
{
typedef ContextMenuClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::ContextMenuClassDef, GObject::impl::internal::ObjectClass> super;

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

using ContextMenuImpl = detail::ObjectImpl<ContextMenu, internal::ContextMenuClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
