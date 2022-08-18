// AUTO-GENERATED

#ifndef _GI_GTK_GRID_HPP_
#define _GI_GTK_GRID_HPP_

#include "container.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Orientable;
class Widget;

class Grid;

namespace base {


#define GI_GTK_GRID_BASE base::GridBase
class GridBase : public Gtk::Container
{
typedef Gtk::Container super_type;
public:
typedef ::GtkGrid BaseObjectType;

GridBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_grid_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* gtk_grid_new ();
// ::GtkGrid* gtk_grid_new ();
static GI_INLINE_DECL Gtk::Grid new_ () noexcept;

// void gtk_grid_attach (GtkGrid* grid, GtkWidget* child, gint left, gint top, gint width, gint height);
// void gtk_grid_attach (::GtkGrid* grid, ::GtkWidget* child, gint left, gint top, gint width, gint height);
GI_INLINE_DECL void attach (Gtk::Widget child, gint left, gint top, gint width, gint height) noexcept;

// void gtk_grid_attach_next_to (GtkGrid* grid, GtkWidget* child, GtkWidget* sibling, GtkPositionType side, gint width, gint height);
// void gtk_grid_attach_next_to (::GtkGrid* grid, ::GtkWidget* child, ::GtkWidget* sibling, ::GtkPositionType side, gint width, gint height);
GI_INLINE_DECL void attach_next_to (Gtk::Widget child, Gtk::Widget sibling, Gtk::PositionType side, gint width, gint height) noexcept;
GI_INLINE_DECL void attach_next_to (Gtk::Widget child, Gtk::PositionType side, gint width, gint height) noexcept;

// gint gtk_grid_get_baseline_row (GtkGrid* grid);
// gint gtk_grid_get_baseline_row (::GtkGrid* grid);
GI_INLINE_DECL gint get_baseline_row () noexcept;

// GtkWidget* gtk_grid_get_child_at (GtkGrid* grid, gint left, gint top);
// ::GtkWidget* gtk_grid_get_child_at (::GtkGrid* grid, gint left, gint top);
GI_INLINE_DECL Gtk::Widget get_child_at (gint left, gint top) noexcept;

// gboolean gtk_grid_get_column_homogeneous (GtkGrid* grid);
// gboolean gtk_grid_get_column_homogeneous (::GtkGrid* grid);
GI_INLINE_DECL bool get_column_homogeneous () noexcept;

// guint gtk_grid_get_column_spacing (GtkGrid* grid);
// guint gtk_grid_get_column_spacing (::GtkGrid* grid);
GI_INLINE_DECL guint get_column_spacing () noexcept;

// GtkBaselinePosition gtk_grid_get_row_baseline_position (GtkGrid* grid, gint row);
// ::GtkBaselinePosition gtk_grid_get_row_baseline_position (::GtkGrid* grid, gint row);
GI_INLINE_DECL Gtk::BaselinePosition get_row_baseline_position (gint row) noexcept;

// gboolean gtk_grid_get_row_homogeneous (GtkGrid* grid);
// gboolean gtk_grid_get_row_homogeneous (::GtkGrid* grid);
GI_INLINE_DECL bool get_row_homogeneous () noexcept;

// guint gtk_grid_get_row_spacing (GtkGrid* grid);
// guint gtk_grid_get_row_spacing (::GtkGrid* grid);
GI_INLINE_DECL guint get_row_spacing () noexcept;

// void gtk_grid_insert_column (GtkGrid* grid, gint position);
// void gtk_grid_insert_column (::GtkGrid* grid, gint position);
GI_INLINE_DECL void insert_column (gint position) noexcept;

// void gtk_grid_insert_next_to (GtkGrid* grid, GtkWidget* sibling, GtkPositionType side);
// void gtk_grid_insert_next_to (::GtkGrid* grid, ::GtkWidget* sibling, ::GtkPositionType side);
GI_INLINE_DECL void insert_next_to (Gtk::Widget sibling, Gtk::PositionType side) noexcept;

// void gtk_grid_insert_row (GtkGrid* grid, gint position);
// void gtk_grid_insert_row (::GtkGrid* grid, gint position);
GI_INLINE_DECL void insert_row (gint position) noexcept;

// void gtk_grid_remove_column (GtkGrid* grid, gint position);
// void gtk_grid_remove_column (::GtkGrid* grid, gint position);
GI_INLINE_DECL void remove_column (gint position) noexcept;

// void gtk_grid_remove_row (GtkGrid* grid, gint position);
// void gtk_grid_remove_row (::GtkGrid* grid, gint position);
GI_INLINE_DECL void remove_row (gint position) noexcept;

// void gtk_grid_set_baseline_row (GtkGrid* grid, gint row);
// void gtk_grid_set_baseline_row (::GtkGrid* grid, gint row);
GI_INLINE_DECL void set_baseline_row (gint row) noexcept;

// void gtk_grid_set_column_homogeneous (GtkGrid* grid, gboolean homogeneous);
// void gtk_grid_set_column_homogeneous (::GtkGrid* grid, gboolean homogeneous);
GI_INLINE_DECL void set_column_homogeneous (gboolean homogeneous) noexcept;

// void gtk_grid_set_column_spacing (GtkGrid* grid, guint spacing);
// void gtk_grid_set_column_spacing (::GtkGrid* grid, guint spacing);
GI_INLINE_DECL void set_column_spacing (guint spacing) noexcept;

// void gtk_grid_set_row_baseline_position (GtkGrid* grid, gint row, GtkBaselinePosition pos);
// void gtk_grid_set_row_baseline_position (::GtkGrid* grid, gint row, ::GtkBaselinePosition pos);
GI_INLINE_DECL void set_row_baseline_position (gint row, Gtk::BaselinePosition pos) noexcept;

// void gtk_grid_set_row_homogeneous (GtkGrid* grid, gboolean homogeneous);
// void gtk_grid_set_row_homogeneous (::GtkGrid* grid, gboolean homogeneous);
GI_INLINE_DECL void set_row_homogeneous (gboolean homogeneous) noexcept;

// void gtk_grid_set_row_spacing (GtkGrid* grid, guint spacing);
// void gtk_grid_set_row_spacing (::GtkGrid* grid, guint spacing);
GI_INLINE_DECL void set_row_spacing (guint spacing) noexcept;

gi::property_proxy<gint, base::GridBase> property_baseline_row()
{ return gi::property_proxy<gint, base::GridBase> (*this, "baseline-row"); }
const gi::property_proxy<gint, base::GridBase> property_baseline_row() const
{ return gi::property_proxy<gint, base::GridBase> (*this, "baseline-row"); }

gi::property_proxy<bool, base::GridBase> property_column_homogeneous()
{ return gi::property_proxy<bool, base::GridBase> (*this, "column-homogeneous"); }
const gi::property_proxy<bool, base::GridBase> property_column_homogeneous() const
{ return gi::property_proxy<bool, base::GridBase> (*this, "column-homogeneous"); }

gi::property_proxy<gint, base::GridBase> property_column_spacing()
{ return gi::property_proxy<gint, base::GridBase> (*this, "column-spacing"); }
const gi::property_proxy<gint, base::GridBase> property_column_spacing() const
{ return gi::property_proxy<gint, base::GridBase> (*this, "column-spacing"); }

gi::property_proxy<bool, base::GridBase> property_row_homogeneous()
{ return gi::property_proxy<bool, base::GridBase> (*this, "row-homogeneous"); }
const gi::property_proxy<bool, base::GridBase> property_row_homogeneous() const
{ return gi::property_proxy<bool, base::GridBase> (*this, "row-homogeneous"); }

gi::property_proxy<gint, base::GridBase> property_row_spacing()
{ return gi::property_proxy<gint, base::GridBase> (*this, "row-spacing"); }
const gi::property_proxy<gint, base::GridBase> property_row_spacing() const
{ return gi::property_proxy<gint, base::GridBase> (*this, "row-spacing"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/grid_extra_def.hpp>)
#include <gtk/grid_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/grid_extra.hpp>)
#include <gtk/grid_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Grid : public GI_GTK_GRID_BASE
{ typedef GI_GTK_GRID_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkGrid>
{ typedef Gtk::Grid type; }; 

} // namespace repository

} // namespace gi

#include "orientable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class GridClassDef
{
typedef GridClassDef self;
public:
typedef Gtk::Grid instance_type;
typedef ::GtkGridClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class GridClass: public detail::ClassTemplate<Gtk::impl::internal::GridClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
typedef GridClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::GridClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using GridImpl = detail::ObjectImpl<Grid, internal::GridClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
