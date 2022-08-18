// AUTO-GENERATED

#ifndef _GI_GTK_CELLACCESSIBLEPARENT_HPP_
#define _GI_GTK_CELLACCESSIBLEPARENT_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class CellAccessible;

class CellAccessibleParent;

namespace base {


#define GI_GTK_CELLACCESSIBLEPARENT_BASE base::CellAccessibleParentBase
class CellAccessibleParentBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkCellAccessibleParent BaseObjectType;

CellAccessibleParentBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_accessible_parent_get_type(); } 

// void gtk_cell_accessible_parent_activate (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// void gtk_cell_accessible_parent_activate (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
GI_INLINE_DECL void activate (Gtk::CellAccessible cell) noexcept;

// void gtk_cell_accessible_parent_edit (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// void gtk_cell_accessible_parent_edit (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
GI_INLINE_DECL void edit (Gtk::CellAccessible cell) noexcept;

// void gtk_cell_accessible_parent_expand_collapse (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// void gtk_cell_accessible_parent_expand_collapse (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
GI_INLINE_DECL void expand_collapse (Gtk::CellAccessible cell) noexcept;

// void gtk_cell_accessible_parent_get_cell_area (GtkCellAccessibleParent* parent, GtkCellAccessible* cell, GdkRectangle* cell_rect);
// void gtk_cell_accessible_parent_get_cell_area (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, ::GdkRectangle* cell_rect);
GI_INLINE_DECL void get_cell_area (Gtk::CellAccessible cell, Gdk::Rectangle & cell_rect) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_cell_area (Gtk::CellAccessible cell) noexcept;

// void gtk_cell_accessible_parent_get_cell_extents (GtkCellAccessibleParent* parent, GtkCellAccessible* cell, gint* x, gint* y, gint* width, gint* height, AtkCoordType coord_type);
// void gtk_cell_accessible_parent_get_cell_extents (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coord_type);
GI_INLINE_DECL void get_cell_extents (Gtk::CellAccessible cell, gint & x, gint & y, gint & width, gint & height, Atk::CoordType coord_type) noexcept;
GI_INLINE_DECL std::tuple<gint, gint, gint, gint> get_cell_extents (Gtk::CellAccessible cell, Atk::CoordType coord_type) noexcept;

// void gtk_cell_accessible_parent_get_cell_position (GtkCellAccessibleParent* parent, GtkCellAccessible* cell, gint* row, gint* column);
// void gtk_cell_accessible_parent_get_cell_position (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, gint* row, gint* column);
GI_INLINE_DECL void get_cell_position (Gtk::CellAccessible cell, gint & row, gint & column) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_cell_position (Gtk::CellAccessible cell) noexcept;

// int gtk_cell_accessible_parent_get_child_index (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// gint gtk_cell_accessible_parent_get_child_index (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
GI_INLINE_DECL gint get_child_index (Gtk::CellAccessible cell) noexcept;

// GPtrArray* gtk_cell_accessible_parent_get_column_header_cells (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
//  gtk_cell_accessible_parent_get_column_header_cells (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
// SKIP;  type  not supported

// GtkCellRendererState gtk_cell_accessible_parent_get_renderer_state (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// ::GtkCellRendererState gtk_cell_accessible_parent_get_renderer_state (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
GI_INLINE_DECL Gtk::CellRendererState get_renderer_state (Gtk::CellAccessible cell) noexcept;

// GPtrArray* gtk_cell_accessible_parent_get_row_header_cells (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
//  gtk_cell_accessible_parent_get_row_header_cells (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
// SKIP;  type  not supported

// gboolean gtk_cell_accessible_parent_grab_focus (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// gboolean gtk_cell_accessible_parent_grab_focus (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
GI_INLINE_DECL bool grab_focus (Gtk::CellAccessible cell) noexcept;

// void gtk_cell_accessible_parent_update_relationset (GtkCellAccessibleParent* parent, GtkCellAccessible* cell, AtkRelationSet* relationset);
// void gtk_cell_accessible_parent_update_relationset (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, ::AtkRelationSet* relationset);
GI_INLINE_DECL void update_relationset (Gtk::CellAccessible cell, Atk::RelationSet relationset) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellaccessibleparent_extra_def.hpp>)
#include <gtk/cellaccessibleparent_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellaccessibleparent_extra.hpp>)
#include <gtk/cellaccessibleparent_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellAccessibleParent : public GI_GTK_CELLACCESSIBLEPARENT_BASE
{ typedef GI_GTK_CELLACCESSIBLEPARENT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellAccessibleParent>
{ typedef Gtk::CellAccessibleParent type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CellAccessibleParentIfaceDef
{
typedef CellAccessibleParentIfaceDef self;
public:
typedef Gtk::CellAccessibleParent instance_type;
typedef ::GtkCellAccessibleParentIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void CellAccessibleParent::activate (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// void CellAccessibleParent::activate (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
virtual void activate_ (Gtk::CellAccessible cell) noexcept = 0;

// void CellAccessibleParent::edit (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// void CellAccessibleParent::edit (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
virtual void edit_ (Gtk::CellAccessible cell) noexcept = 0;

// void CellAccessibleParent::expand_collapse (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// void CellAccessibleParent::expand_collapse (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
virtual void expand_collapse_ (Gtk::CellAccessible cell) noexcept = 0;

// void CellAccessibleParent::get_cell_area (GtkCellAccessibleParent* parent, GtkCellAccessible* cell, GdkRectangle* cell_rect);
// void CellAccessibleParent::get_cell_area (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, ::GdkRectangle* cell_rect);
// SKIP; virtual-method out parameter not supported

// void CellAccessibleParent::get_cell_extents (GtkCellAccessibleParent* parent, GtkCellAccessible* cell, gint* x, gint* y, gint* width, gint* height, AtkCoordType coord_type);
// void CellAccessibleParent::get_cell_extents (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coord_type);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellAccessibleParent::get_cell_position (GtkCellAccessibleParent* parent, GtkCellAccessible* cell, gint* row, gint* column);
// void CellAccessibleParent::get_cell_position (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, gint* row, gint* column);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// int CellAccessibleParent::get_child_index (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// gint CellAccessibleParent::get_child_index (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
virtual gint get_child_index_ (Gtk::CellAccessible cell) noexcept = 0;

// GPtrArray* CellAccessibleParent::get_column_header_cells (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
//  CellAccessibleParent::get_column_header_cells (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
// SKIP;  type  not supported

// GtkCellRendererState CellAccessibleParent::get_renderer_state (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// ::GtkCellRendererState CellAccessibleParent::get_renderer_state (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
virtual Gtk::CellRendererState get_renderer_state_ (Gtk::CellAccessible cell) noexcept = 0;

// GPtrArray* CellAccessibleParent::get_row_header_cells (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
//  CellAccessibleParent::get_row_header_cells (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
// SKIP;  type  not supported

// gboolean CellAccessibleParent::grab_focus (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// gboolean CellAccessibleParent::grab_focus (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
virtual bool grab_focus_ (Gtk::CellAccessible cell) noexcept = 0;

// void CellAccessibleParent::update_relationset (GtkCellAccessibleParent* parent, GtkCellAccessible* cell, AtkRelationSet* relationset);
// void CellAccessibleParent::update_relationset (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, ::AtkRelationSet* relationset);
virtual void update_relationset_ (Gtk::CellAccessible cell, Atk::RelationSet relationset) noexcept = 0;


};

using CellAccessibleParentImpl = detail::InterfaceImpl<CellAccessibleParentIfaceDef>;

class CellAccessibleParentIfaceClassImpl: public detail::InterfaceClassImpl<CellAccessibleParentImpl>
{
typedef CellAccessibleParentIfaceClassImpl self;
typedef detail::InterfaceClassImpl<CellAccessibleParentImpl> super;

protected:
using super::super;

// void CellAccessibleParent::activate (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// void CellAccessibleParent::activate (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
GI_INLINE_DECL void activate_ (Gtk::CellAccessible cell) noexcept override;

// void CellAccessibleParent::edit (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// void CellAccessibleParent::edit (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
GI_INLINE_DECL void edit_ (Gtk::CellAccessible cell) noexcept override;

// void CellAccessibleParent::expand_collapse (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// void CellAccessibleParent::expand_collapse (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
GI_INLINE_DECL void expand_collapse_ (Gtk::CellAccessible cell) noexcept override;

// void CellAccessibleParent::get_cell_area (GtkCellAccessibleParent* parent, GtkCellAccessible* cell, GdkRectangle* cell_rect);
// void CellAccessibleParent::get_cell_area (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, ::GdkRectangle* cell_rect);
// SKIP; virtual-method out parameter not supported

// void CellAccessibleParent::get_cell_extents (GtkCellAccessibleParent* parent, GtkCellAccessible* cell, gint* x, gint* y, gint* width, gint* height, AtkCoordType coord_type);
// void CellAccessibleParent::get_cell_extents (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coord_type);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// void CellAccessibleParent::get_cell_position (GtkCellAccessibleParent* parent, GtkCellAccessible* cell, gint* row, gint* column);
// void CellAccessibleParent::get_cell_position (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, gint* row, gint* column);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// int CellAccessibleParent::get_child_index (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// gint CellAccessibleParent::get_child_index (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
GI_INLINE_DECL gint get_child_index_ (Gtk::CellAccessible cell) noexcept override;

// GPtrArray* CellAccessibleParent::get_column_header_cells (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
//  CellAccessibleParent::get_column_header_cells (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
// SKIP;  type  not supported

// GtkCellRendererState CellAccessibleParent::get_renderer_state (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// ::GtkCellRendererState CellAccessibleParent::get_renderer_state (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
GI_INLINE_DECL Gtk::CellRendererState get_renderer_state_ (Gtk::CellAccessible cell) noexcept override;

// GPtrArray* CellAccessibleParent::get_row_header_cells (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
//  CellAccessibleParent::get_row_header_cells (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
// SKIP;  type  not supported

// gboolean CellAccessibleParent::grab_focus (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// gboolean CellAccessibleParent::grab_focus (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
GI_INLINE_DECL bool grab_focus_ (Gtk::CellAccessible cell) noexcept override;

// void CellAccessibleParent::update_relationset (GtkCellAccessibleParent* parent, GtkCellAccessible* cell, AtkRelationSet* relationset);
// void CellAccessibleParent::update_relationset (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, ::AtkRelationSet* relationset);
GI_INLINE_DECL void update_relationset_ (Gtk::CellAccessible cell, Atk::RelationSet relationset) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
