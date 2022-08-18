// AUTO-GENERATED

#ifndef _GI_GTK_TOOLITEM_HPP_
#define _GI_GTK_TOOLITEM_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Activatable;
class SizeGroup;
class Widget;

class ToolItem;

namespace base {


#define GI_GTK_TOOLITEM_BASE base::ToolItemBase
class ToolItemBase : public Gtk::Bin
{
typedef Gtk::Bin super_type;
public:
typedef ::GtkToolItem BaseObjectType;

ToolItemBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tool_item_get_type(); } 

GI_INLINE_DECL Gtk::Activatable interface_ (gi::interface_tag<Gtk::Activatable>);

GI_INLINE_DECL operator Gtk::Activatable ();

// GtkToolItem* gtk_tool_item_new ();
// ::GtkToolItem* gtk_tool_item_new ();
static GI_INLINE_DECL Gtk::ToolItem new_ () noexcept;

// PangoEllipsizeMode gtk_tool_item_get_ellipsize_mode (GtkToolItem* tool_item);
// ::PangoEllipsizeMode gtk_tool_item_get_ellipsize_mode (::GtkToolItem* tool_item);
GI_INLINE_DECL Pango::EllipsizeMode get_ellipsize_mode () noexcept;

// gboolean gtk_tool_item_get_expand (GtkToolItem* tool_item);
// gboolean gtk_tool_item_get_expand (::GtkToolItem* tool_item);
GI_INLINE_DECL bool get_expand () noexcept;

// gboolean gtk_tool_item_get_homogeneous (GtkToolItem* tool_item);
// gboolean gtk_tool_item_get_homogeneous (::GtkToolItem* tool_item);
GI_INLINE_DECL bool get_homogeneous () noexcept;

// GtkIconSize gtk_tool_item_get_icon_size (GtkToolItem* tool_item);
// gint gtk_tool_item_get_icon_size (::GtkToolItem* tool_item);
GI_INLINE_DECL gint get_icon_size () noexcept;

// gboolean gtk_tool_item_get_is_important (GtkToolItem* tool_item);
// gboolean gtk_tool_item_get_is_important (::GtkToolItem* tool_item);
GI_INLINE_DECL bool get_is_important () noexcept;

// GtkOrientation gtk_tool_item_get_orientation (GtkToolItem* tool_item);
// ::GtkOrientation gtk_tool_item_get_orientation (::GtkToolItem* tool_item);
GI_INLINE_DECL Gtk::Orientation get_orientation () noexcept;

// GtkWidget* gtk_tool_item_get_proxy_menu_item (GtkToolItem* tool_item, const gchar* menu_item_id);
// ::GtkWidget* gtk_tool_item_get_proxy_menu_item (::GtkToolItem* tool_item, const char* menu_item_id);
GI_INLINE_DECL Gtk::Widget get_proxy_menu_item (const std::string & menu_item_id) noexcept;

// GtkReliefStyle gtk_tool_item_get_relief_style (GtkToolItem* tool_item);
// ::GtkReliefStyle gtk_tool_item_get_relief_style (::GtkToolItem* tool_item);
GI_INLINE_DECL Gtk::ReliefStyle get_relief_style () noexcept;

// gfloat gtk_tool_item_get_text_alignment (GtkToolItem* tool_item);
// gfloat gtk_tool_item_get_text_alignment (::GtkToolItem* tool_item);
GI_INLINE_DECL gfloat get_text_alignment () noexcept;

// GtkOrientation gtk_tool_item_get_text_orientation (GtkToolItem* tool_item);
// ::GtkOrientation gtk_tool_item_get_text_orientation (::GtkToolItem* tool_item);
GI_INLINE_DECL Gtk::Orientation get_text_orientation () noexcept;

// GtkSizeGroup* gtk_tool_item_get_text_size_group (GtkToolItem* tool_item);
// ::GtkSizeGroup* gtk_tool_item_get_text_size_group (::GtkToolItem* tool_item);
GI_INLINE_DECL Gtk::SizeGroup get_text_size_group () noexcept;

// GtkToolbarStyle gtk_tool_item_get_toolbar_style (GtkToolItem* tool_item);
// ::GtkToolbarStyle gtk_tool_item_get_toolbar_style (::GtkToolItem* tool_item);
GI_INLINE_DECL Gtk::ToolbarStyle get_toolbar_style () noexcept;

// gboolean gtk_tool_item_get_use_drag_window (GtkToolItem* tool_item);
// gboolean gtk_tool_item_get_use_drag_window (::GtkToolItem* tool_item);
GI_INLINE_DECL bool get_use_drag_window () noexcept;

// gboolean gtk_tool_item_get_visible_horizontal (GtkToolItem* tool_item);
// gboolean gtk_tool_item_get_visible_horizontal (::GtkToolItem* tool_item);
GI_INLINE_DECL bool get_visible_horizontal () noexcept;

// gboolean gtk_tool_item_get_visible_vertical (GtkToolItem* tool_item);
// gboolean gtk_tool_item_get_visible_vertical (::GtkToolItem* tool_item);
GI_INLINE_DECL bool get_visible_vertical () noexcept;

// void gtk_tool_item_rebuild_menu (GtkToolItem* tool_item);
// void gtk_tool_item_rebuild_menu (::GtkToolItem* tool_item);
GI_INLINE_DECL void rebuild_menu () noexcept;

// GtkWidget* gtk_tool_item_retrieve_proxy_menu_item (GtkToolItem* tool_item);
// ::GtkWidget* gtk_tool_item_retrieve_proxy_menu_item (::GtkToolItem* tool_item);
GI_INLINE_DECL Gtk::Widget retrieve_proxy_menu_item () noexcept;

// void gtk_tool_item_set_expand (GtkToolItem* tool_item, gboolean expand);
// void gtk_tool_item_set_expand (::GtkToolItem* tool_item, gboolean expand);
GI_INLINE_DECL void set_expand (gboolean expand) noexcept;

// void gtk_tool_item_set_homogeneous (GtkToolItem* tool_item, gboolean homogeneous);
// void gtk_tool_item_set_homogeneous (::GtkToolItem* tool_item, gboolean homogeneous);
GI_INLINE_DECL void set_homogeneous (gboolean homogeneous) noexcept;

// void gtk_tool_item_set_is_important (GtkToolItem* tool_item, gboolean is_important);
// void gtk_tool_item_set_is_important (::GtkToolItem* tool_item, gboolean is_important);
GI_INLINE_DECL void set_is_important (gboolean is_important) noexcept;

// void gtk_tool_item_set_proxy_menu_item (GtkToolItem* tool_item, const gchar* menu_item_id, GtkWidget* menu_item);
// void gtk_tool_item_set_proxy_menu_item (::GtkToolItem* tool_item, const char* menu_item_id, ::GtkWidget* menu_item);
GI_INLINE_DECL void set_proxy_menu_item (const std::string & menu_item_id, Gtk::Widget menu_item) noexcept;
GI_INLINE_DECL void set_proxy_menu_item (const std::string & menu_item_id) noexcept;

// void gtk_tool_item_set_tooltip_markup (GtkToolItem* tool_item, const gchar* markup);
// void gtk_tool_item_set_tooltip_markup (::GtkToolItem* tool_item, const char* markup);
GI_INLINE_DECL void set_tooltip_markup (const std::string & markup) noexcept;

// void gtk_tool_item_set_tooltip_text (GtkToolItem* tool_item, const gchar* text);
// void gtk_tool_item_set_tooltip_text (::GtkToolItem* tool_item, const char* text);
GI_INLINE_DECL void set_tooltip_text (const std::string & text) noexcept;

// void gtk_tool_item_set_use_drag_window (GtkToolItem* tool_item, gboolean use_drag_window);
// void gtk_tool_item_set_use_drag_window (::GtkToolItem* tool_item, gboolean use_drag_window);
GI_INLINE_DECL void set_use_drag_window (gboolean use_drag_window) noexcept;

// void gtk_tool_item_set_visible_horizontal (GtkToolItem* tool_item, gboolean visible_horizontal);
// void gtk_tool_item_set_visible_horizontal (::GtkToolItem* tool_item, gboolean visible_horizontal);
GI_INLINE_DECL void set_visible_horizontal (gboolean visible_horizontal) noexcept;

// void gtk_tool_item_set_visible_vertical (GtkToolItem* tool_item, gboolean visible_vertical);
// void gtk_tool_item_set_visible_vertical (::GtkToolItem* tool_item, gboolean visible_vertical);
GI_INLINE_DECL void set_visible_vertical (gboolean visible_vertical) noexcept;

// void gtk_tool_item_toolbar_reconfigured (GtkToolItem* tool_item);
// void gtk_tool_item_toolbar_reconfigured (::GtkToolItem* tool_item);
GI_INLINE_DECL void toolbar_reconfigured () noexcept;

gi::property_proxy<bool, base::ToolItemBase> property_is_important()
{ return gi::property_proxy<bool, base::ToolItemBase> (*this, "is-important"); }
const gi::property_proxy<bool, base::ToolItemBase> property_is_important() const
{ return gi::property_proxy<bool, base::ToolItemBase> (*this, "is-important"); }

gi::property_proxy<bool, base::ToolItemBase> property_visible_horizontal()
{ return gi::property_proxy<bool, base::ToolItemBase> (*this, "visible-horizontal"); }
const gi::property_proxy<bool, base::ToolItemBase> property_visible_horizontal() const
{ return gi::property_proxy<bool, base::ToolItemBase> (*this, "visible-horizontal"); }

gi::property_proxy<bool, base::ToolItemBase> property_visible_vertical()
{ return gi::property_proxy<bool, base::ToolItemBase> (*this, "visible-vertical"); }
const gi::property_proxy<bool, base::ToolItemBase> property_visible_vertical() const
{ return gi::property_proxy<bool, base::ToolItemBase> (*this, "visible-vertical"); }

// signal create-menu-proxy
gi::signal_proxy<bool(Gtk::ToolItem)> signal_create_menu_proxy()
{ return gi::signal_proxy<bool(Gtk::ToolItem)> (*this, "create-menu-proxy"); }

// signal toolbar-reconfigured
gi::signal_proxy<void(Gtk::ToolItem)> signal_toolbar_reconfigured()
{ return gi::signal_proxy<void(Gtk::ToolItem)> (*this, "toolbar-reconfigured"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/toolitem_extra_def.hpp>)
#include <gtk/toolitem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/toolitem_extra.hpp>)
#include <gtk/toolitem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ToolItem : public GI_GTK_TOOLITEM_BASE
{ typedef GI_GTK_TOOLITEM_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkToolItem>
{ typedef Gtk::ToolItem type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ToolItemClassDef
{
typedef ToolItemClassDef self;
public:
typedef Gtk::ToolItem instance_type;
typedef ::GtkToolItemClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean ToolItem::create_menu_proxy (GtkToolItem* tool_item);
// gboolean ToolItem::create_menu_proxy (::GtkToolItem* tool_item);
virtual bool create_menu_proxy_ () noexcept = 0;

// void ToolItem::toolbar_reconfigured (GtkToolItem* tool_item);
// void ToolItem::toolbar_reconfigured (::GtkToolItem* tool_item);
virtual void toolbar_reconfigured_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ToolItemClass: public detail::ClassTemplate<Gtk::impl::internal::ToolItemClassDef, Gtk::impl::internal::BinClass>
{
typedef ToolItemClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ToolItemClassDef, Gtk::impl::internal::BinClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean ToolItem::create_menu_proxy (GtkToolItem* tool_item);
// gboolean ToolItem::create_menu_proxy (::GtkToolItem* tool_item);
GI_INLINE_DECL bool create_menu_proxy_ () noexcept override;

// void ToolItem::toolbar_reconfigured (GtkToolItem* tool_item);
// void ToolItem::toolbar_reconfigured (::GtkToolItem* tool_item);
GI_INLINE_DECL void toolbar_reconfigured_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ToolItemImpl = detail::ObjectImpl<ToolItem, internal::ToolItemClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
