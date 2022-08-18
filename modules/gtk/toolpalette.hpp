// AUTO-GENERATED

#ifndef _GI_GTK_TOOLPALETTE_HPP_
#define _GI_GTK_TOOLPALETTE_HPP_

#include "container.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;
class Orientable;
class Scrollable;
class SelectionData;
class TargetEntry;
class ToolItem;
class ToolItemGroup;
class Widget;

class ToolPalette;

namespace base {


#define GI_GTK_TOOLPALETTE_BASE base::ToolPaletteBase
class ToolPaletteBase : public Gtk::Container
{
typedef Gtk::Container super_type;
public:
typedef ::GtkToolPalette BaseObjectType;

ToolPaletteBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tool_palette_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

GI_INLINE_DECL Gtk::Scrollable interface_ (gi::interface_tag<Gtk::Scrollable>);

GI_INLINE_DECL operator Gtk::Scrollable ();

// GtkWidget* gtk_tool_palette_new ();
// ::GtkToolPalette* gtk_tool_palette_new ();
static GI_INLINE_DECL Gtk::ToolPalette new_ () noexcept;

// const GtkTargetEntry* gtk_tool_palette_get_drag_target_group ();
// const ::GtkTargetEntry* gtk_tool_palette_get_drag_target_group ();
static GI_INLINE_DECL Gtk::TargetEntry get_drag_target_group () noexcept;

// const GtkTargetEntry* gtk_tool_palette_get_drag_target_item ();
// const ::GtkTargetEntry* gtk_tool_palette_get_drag_target_item ();
static GI_INLINE_DECL Gtk::TargetEntry get_drag_target_item () noexcept;

// void gtk_tool_palette_add_drag_dest (GtkToolPalette* palette, GtkWidget* widget, GtkDestDefaults flags, GtkToolPaletteDragTargets targets, GdkDragAction actions);
// void gtk_tool_palette_add_drag_dest (::GtkToolPalette* palette, ::GtkWidget* widget, ::GtkDestDefaults flags, ::GtkToolPaletteDragTargets targets, ::GdkDragAction actions);
GI_INLINE_DECL void add_drag_dest (Gtk::Widget widget, Gtk::DestDefaults flags, Gtk::ToolPaletteDragTargets targets, Gdk::DragAction actions) noexcept;

// GtkWidget* gtk_tool_palette_get_drag_item (GtkToolPalette* palette, const GtkSelectionData* selection);
// ::GtkWidget* gtk_tool_palette_get_drag_item (::GtkToolPalette* palette, const ::GtkSelectionData* selection);
GI_INLINE_DECL Gtk::Widget get_drag_item (const Gtk::SelectionData & selection) noexcept;

// GtkToolItemGroup* gtk_tool_palette_get_drop_group (GtkToolPalette* palette, gint x, gint y);
// ::GtkToolItemGroup* gtk_tool_palette_get_drop_group (::GtkToolPalette* palette, gint x, gint y);
GI_INLINE_DECL Gtk::ToolItemGroup get_drop_group (gint x, gint y) noexcept;

// GtkToolItem* gtk_tool_palette_get_drop_item (GtkToolPalette* palette, gint x, gint y);
// ::GtkToolItem* gtk_tool_palette_get_drop_item (::GtkToolPalette* palette, gint x, gint y);
GI_INLINE_DECL Gtk::ToolItem get_drop_item (gint x, gint y) noexcept;

// gboolean gtk_tool_palette_get_exclusive (GtkToolPalette* palette, GtkToolItemGroup* group);
// gboolean gtk_tool_palette_get_exclusive (::GtkToolPalette* palette, ::GtkToolItemGroup* group);
GI_INLINE_DECL bool get_exclusive (Gtk::ToolItemGroup group) noexcept;

// gboolean gtk_tool_palette_get_expand (GtkToolPalette* palette, GtkToolItemGroup* group);
// gboolean gtk_tool_palette_get_expand (::GtkToolPalette* palette, ::GtkToolItemGroup* group);
GI_INLINE_DECL bool get_expand (Gtk::ToolItemGroup group) noexcept;

// gint gtk_tool_palette_get_group_position (GtkToolPalette* palette, GtkToolItemGroup* group);
// gint gtk_tool_palette_get_group_position (::GtkToolPalette* palette, ::GtkToolItemGroup* group);
GI_INLINE_DECL gint get_group_position (Gtk::ToolItemGroup group) noexcept;

// GtkAdjustment* gtk_tool_palette_get_hadjustment (GtkToolPalette* palette);
// ::GtkAdjustment* gtk_tool_palette_get_hadjustment (::GtkToolPalette* palette);
// IGNORE; deprecated

// GtkIconSize gtk_tool_palette_get_icon_size (GtkToolPalette* palette);
// gint gtk_tool_palette_get_icon_size (::GtkToolPalette* palette);
GI_INLINE_DECL gint get_icon_size () noexcept;

// GtkToolbarStyle gtk_tool_palette_get_style (GtkToolPalette* palette);
// ::GtkToolbarStyle gtk_tool_palette_get_style (::GtkToolPalette* palette);
GI_INLINE_DECL Gtk::ToolbarStyle get_style () noexcept;

// GtkAdjustment* gtk_tool_palette_get_vadjustment (GtkToolPalette* palette);
// ::GtkAdjustment* gtk_tool_palette_get_vadjustment (::GtkToolPalette* palette);
// IGNORE; deprecated

// void gtk_tool_palette_set_drag_source (GtkToolPalette* palette, GtkToolPaletteDragTargets targets);
// void gtk_tool_palette_set_drag_source (::GtkToolPalette* palette, ::GtkToolPaletteDragTargets targets);
GI_INLINE_DECL void set_drag_source (Gtk::ToolPaletteDragTargets targets) noexcept;

// void gtk_tool_palette_set_exclusive (GtkToolPalette* palette, GtkToolItemGroup* group, gboolean exclusive);
// void gtk_tool_palette_set_exclusive (::GtkToolPalette* palette, ::GtkToolItemGroup* group, gboolean exclusive);
GI_INLINE_DECL void set_exclusive (Gtk::ToolItemGroup group, gboolean exclusive) noexcept;

// void gtk_tool_palette_set_expand (GtkToolPalette* palette, GtkToolItemGroup* group, gboolean expand);
// void gtk_tool_palette_set_expand (::GtkToolPalette* palette, ::GtkToolItemGroup* group, gboolean expand);
GI_INLINE_DECL void set_expand (Gtk::ToolItemGroup group, gboolean expand) noexcept;

// void gtk_tool_palette_set_group_position (GtkToolPalette* palette, GtkToolItemGroup* group, gint position);
// void gtk_tool_palette_set_group_position (::GtkToolPalette* palette, ::GtkToolItemGroup* group, gint position);
GI_INLINE_DECL void set_group_position (Gtk::ToolItemGroup group, gint position) noexcept;

// void gtk_tool_palette_set_icon_size (GtkToolPalette* palette, GtkIconSize icon_size);
// void gtk_tool_palette_set_icon_size (::GtkToolPalette* palette, gint icon_size);
GI_INLINE_DECL void set_icon_size (gint icon_size) noexcept;

// void gtk_tool_palette_set_style (GtkToolPalette* palette, GtkToolbarStyle style);
// void gtk_tool_palette_set_style (::GtkToolPalette* palette, ::GtkToolbarStyle style);
GI_INLINE_DECL void set_style (Gtk::ToolbarStyle style) noexcept;

// void gtk_tool_palette_unset_icon_size (GtkToolPalette* palette);
// void gtk_tool_palette_unset_icon_size (::GtkToolPalette* palette);
GI_INLINE_DECL void unset_icon_size () noexcept;

// void gtk_tool_palette_unset_style (GtkToolPalette* palette);
// void gtk_tool_palette_unset_style (::GtkToolPalette* palette);
GI_INLINE_DECL void unset_style () noexcept;

gi::property_proxy<Gtk::IconSize, base::ToolPaletteBase> property_icon_size()
{ return gi::property_proxy<Gtk::IconSize, base::ToolPaletteBase> (*this, "icon-size"); }
const gi::property_proxy<Gtk::IconSize, base::ToolPaletteBase> property_icon_size() const
{ return gi::property_proxy<Gtk::IconSize, base::ToolPaletteBase> (*this, "icon-size"); }

gi::property_proxy<bool, base::ToolPaletteBase> property_icon_size_set()
{ return gi::property_proxy<bool, base::ToolPaletteBase> (*this, "icon-size-set"); }
const gi::property_proxy<bool, base::ToolPaletteBase> property_icon_size_set() const
{ return gi::property_proxy<bool, base::ToolPaletteBase> (*this, "icon-size-set"); }

gi::property_proxy<Gtk::ToolbarStyle, base::ToolPaletteBase> property_toolbar_style()
{ return gi::property_proxy<Gtk::ToolbarStyle, base::ToolPaletteBase> (*this, "toolbar-style"); }
const gi::property_proxy<Gtk::ToolbarStyle, base::ToolPaletteBase> property_toolbar_style() const
{ return gi::property_proxy<Gtk::ToolbarStyle, base::ToolPaletteBase> (*this, "toolbar-style"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/toolpalette_extra_def.hpp>)
#include <gtk/toolpalette_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/toolpalette_extra.hpp>)
#include <gtk/toolpalette_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ToolPalette : public GI_GTK_TOOLPALETTE_BASE
{ typedef GI_GTK_TOOLPALETTE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkToolPalette>
{ typedef Gtk::ToolPalette type; }; 

} // namespace repository

} // namespace gi

#include "orientable.hpp"
#include "scrollable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ToolPaletteClassDef
{
typedef ToolPaletteClassDef self;
public:
typedef Gtk::ToolPalette instance_type;
typedef ::GtkToolPaletteClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ToolPaletteClass: public detail::ClassTemplate<Gtk::impl::internal::ToolPaletteClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::OrientableIfaceClassImpl, Gtk::impl::internal::ScrollableInterfaceClassImpl>
{
typedef ToolPaletteClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ToolPaletteClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::OrientableIfaceClassImpl, Gtk::impl::internal::ScrollableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;
typedef Gtk::impl::internal::ScrollableInterfaceClassImpl GtkScrollableInterface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using ToolPaletteImpl = detail::ObjectImpl<ToolPalette, internal::ToolPaletteClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
