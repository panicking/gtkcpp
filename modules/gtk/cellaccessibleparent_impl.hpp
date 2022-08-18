// AUTO-GENERATED

#ifndef _GI_GTK_CELLACCESSIBLEPARENT_IMPL_HPP_
#define _GI_GTK_CELLACCESSIBLEPARENT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_cell_accessible_parent_activate (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// void gtk_cell_accessible_parent_activate (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
void base::CellAccessibleParentBase::activate (Gtk::CellAccessible cell) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_accessible_parent_activate;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c));
}

// void gtk_cell_accessible_parent_edit (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// void gtk_cell_accessible_parent_edit (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
void base::CellAccessibleParentBase::edit (Gtk::CellAccessible cell) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_accessible_parent_edit;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c));
}

// void gtk_cell_accessible_parent_expand_collapse (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// void gtk_cell_accessible_parent_expand_collapse (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
void base::CellAccessibleParentBase::expand_collapse (Gtk::CellAccessible cell) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_accessible_parent_expand_collapse;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c));
}

// void gtk_cell_accessible_parent_get_cell_area (GtkCellAccessibleParent* parent, GtkCellAccessible* cell, GdkRectangle* cell_rect);
// void gtk_cell_accessible_parent_get_cell_area (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, ::GdkRectangle* cell_rect);
void base::CellAccessibleParentBase::get_cell_area (Gtk::CellAccessible cell, Gdk::Rectangle & cell_rect) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, ::GdkRectangle* cell_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_accessible_parent_get_cell_area;
  traits::unset_wrapper<::GdkRectangle>::type cell_rect_c;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c), (::GdkRectangle*) ((::GdkRectangle*) &cell_rect_c));
  cell_rect = gi::wrap ((::GdkRectangle*) &cell_rect_c, gi::transfer_none, gi::direction_out);
}
Gdk::Rectangle base::CellAccessibleParentBase::get_cell_area (Gtk::CellAccessible cell) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, ::GdkRectangle* cell_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_accessible_parent_get_cell_area;
  traits::unset_wrapper<::GdkRectangle>::type cell_rect_c;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c), (::GdkRectangle*) ((::GdkRectangle*) &cell_rect_c));
  return gi::wrap ((::GdkRectangle*) &cell_rect_c, gi::transfer_none, gi::direction_out);
}

// void gtk_cell_accessible_parent_get_cell_extents (GtkCellAccessibleParent* parent, GtkCellAccessible* cell, gint* x, gint* y, gint* width, gint* height, AtkCoordType coord_type);
// void gtk_cell_accessible_parent_get_cell_extents (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coord_type);
void base::CellAccessibleParentBase::get_cell_extents (Gtk::CellAccessible cell, gint & x, gint & y, gint & width, gint & height, Atk::CoordType coord_type) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coord_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_accessible_parent_get_cell_extents;
  auto coord_type_to_c = gi::unwrap (coord_type);
  gint height_o {};
  gint width_o {};
  gint y_o {};
  gint x_o {};
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c), (gint*) (&x_o), (gint*) (&y_o), (gint*) (&width_o), (gint*) (&height_o), (::AtkCoordType) (coord_type_to_c));
  height = height_o;
  width = width_o;
  y = y_o;
  x = x_o;
}
std::tuple<gint, gint, gint, gint> base::CellAccessibleParentBase::get_cell_extents (Gtk::CellAccessible cell, Atk::CoordType coord_type) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coord_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_accessible_parent_get_cell_extents;
  auto coord_type_to_c = gi::unwrap (coord_type);
  gint height_o {};
  gint width_o {};
  gint y_o {};
  gint x_o {};
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c), (gint*) (&x_o), (gint*) (&y_o), (gint*) (&width_o), (gint*) (&height_o), (::AtkCoordType) (coord_type_to_c));
  return std::make_tuple (x_o, y_o, width_o, height_o);
}

// void gtk_cell_accessible_parent_get_cell_position (GtkCellAccessibleParent* parent, GtkCellAccessible* cell, gint* row, gint* column);
// void gtk_cell_accessible_parent_get_cell_position (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, gint* row, gint* column);
void base::CellAccessibleParentBase::get_cell_position (Gtk::CellAccessible cell, gint & row, gint & column) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, gint* row, gint* column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_accessible_parent_get_cell_position;
  gint column_o {};
  gint row_o {};
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c), (gint*) (&row_o), (gint*) (&column_o));
  column = column_o;
  row = row_o;
}
std::tuple<gint, gint> base::CellAccessibleParentBase::get_cell_position (Gtk::CellAccessible cell) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, gint* row, gint* column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_accessible_parent_get_cell_position;
  gint column_o {};
  gint row_o {};
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c), (gint*) (&row_o), (gint*) (&column_o));
  return std::make_tuple (row_o, column_o);
}

// int gtk_cell_accessible_parent_get_child_index (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// gint gtk_cell_accessible_parent_get_child_index (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
gint base::CellAccessibleParentBase::get_child_index (Gtk::CellAccessible cell) noexcept
{
  typedef gint (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_accessible_parent_get_child_index;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c));
  return _temp_ret;
}

// GPtrArray* gtk_cell_accessible_parent_get_column_header_cells (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
//  gtk_cell_accessible_parent_get_column_header_cells (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
// SKIP;  type  not supported

// GtkCellRendererState gtk_cell_accessible_parent_get_renderer_state (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// ::GtkCellRendererState gtk_cell_accessible_parent_get_renderer_state (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
Gtk::CellRendererState base::CellAccessibleParentBase::get_renderer_state (Gtk::CellAccessible cell) noexcept
{
  typedef ::GtkCellRendererState (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_accessible_parent_get_renderer_state;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c));
  return gi::wrap (_temp_ret);
}

// GPtrArray* gtk_cell_accessible_parent_get_row_header_cells (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
//  gtk_cell_accessible_parent_get_row_header_cells (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
// SKIP;  type  not supported

// gboolean gtk_cell_accessible_parent_grab_focus (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// gboolean gtk_cell_accessible_parent_grab_focus (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
bool base::CellAccessibleParentBase::grab_focus (Gtk::CellAccessible cell) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_accessible_parent_grab_focus;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c));
  return _temp_ret;
}

// void gtk_cell_accessible_parent_update_relationset (GtkCellAccessibleParent* parent, GtkCellAccessible* cell, AtkRelationSet* relationset);
// void gtk_cell_accessible_parent_update_relationset (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, ::AtkRelationSet* relationset);
void base::CellAccessibleParentBase::update_relationset (Gtk::CellAccessible cell, Atk::RelationSet relationset) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, ::AtkRelationSet* relationset);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_accessible_parent_update_relationset;
  auto relationset_to_c = gi::unwrap (relationset, gi::transfer_none, gi::direction_in);
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c), (::AtkRelationSet*) (relationset_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellaccessibleparent_extra_def_impl.hpp>)
#include <gtk/cellaccessibleparent_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellaccessibleparent_extra_impl.hpp>)
#include <gtk/cellaccessibleparent_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CellAccessibleParentIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GtkCellAccessibleParentIface *methods = (::GtkCellAccessibleParentIface *) interface_struct;
  (void) methods;

  methods->activate = (decltype (methods->activate)) detail::method_wrapper<self, void (*) (Gtk::CellAccessible cell), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::activate_>;
  methods->edit = (decltype (methods->edit)) detail::method_wrapper<self, void (*) (Gtk::CellAccessible cell), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::edit_>;
  methods->expand_collapse = (decltype (methods->expand_collapse)) detail::method_wrapper<self, void (*) (Gtk::CellAccessible cell), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::expand_collapse_>;
  methods->get_child_index = (decltype (methods->get_child_index)) detail::method_wrapper<self, gint (*) (Gtk::CellAccessible cell), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_child_index_>;
  methods->get_renderer_state = (decltype (methods->get_renderer_state)) detail::method_wrapper<self, Gtk::CellRendererState (*) (Gtk::CellAccessible cell), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_renderer_state_>;
  methods->grab_focus = (decltype (methods->grab_focus)) detail::method_wrapper<self, bool (*) (Gtk::CellAccessible cell), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::grab_focus_>;
  methods->update_relationset = (decltype (methods->update_relationset)) detail::method_wrapper<self, void (*) (Gtk::CellAccessible cell, Atk::RelationSet relationset), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::update_relationset_>;
}

// void CellAccessibleParent::activate (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// void CellAccessibleParent::activate (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
void CellAccessibleParentIfaceClassImpl::activate_ (Gtk::CellAccessible cell) noexcept
{
  if (!get_struct_()->activate) return ;
  typedef void (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c));
}

// void CellAccessibleParent::edit (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// void CellAccessibleParent::edit (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
void CellAccessibleParentIfaceClassImpl::edit_ (Gtk::CellAccessible cell) noexcept
{
  if (!get_struct_()->edit) return ;
  typedef void (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->edit;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c));
}

// void CellAccessibleParent::expand_collapse (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// void CellAccessibleParent::expand_collapse (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
void CellAccessibleParentIfaceClassImpl::expand_collapse_ (Gtk::CellAccessible cell) noexcept
{
  if (!get_struct_()->expand_collapse) return ;
  typedef void (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->expand_collapse;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c));
}

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
gint CellAccessibleParentIfaceClassImpl::get_child_index_ (Gtk::CellAccessible cell) noexcept
{
  if (!get_struct_()->get_child_index) return gint{};
  typedef gint (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_child_index;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c));
  return _temp_ret;
}

// GPtrArray* CellAccessibleParent::get_column_header_cells (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
//  CellAccessibleParent::get_column_header_cells (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
// SKIP;  type  not supported

// GtkCellRendererState CellAccessibleParent::get_renderer_state (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// ::GtkCellRendererState CellAccessibleParent::get_renderer_state (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
Gtk::CellRendererState CellAccessibleParentIfaceClassImpl::get_renderer_state_ (Gtk::CellAccessible cell) noexcept
{
  if (!get_struct_()->get_renderer_state) return Gtk::CellRendererState{};
  typedef ::GtkCellRendererState (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_renderer_state;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c));
  return gi::wrap (_temp_ret);
}

// GPtrArray* CellAccessibleParent::get_row_header_cells (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
//  CellAccessibleParent::get_row_header_cells (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
// SKIP;  type  not supported

// gboolean CellAccessibleParent::grab_focus (GtkCellAccessibleParent* parent, GtkCellAccessible* cell);
// gboolean CellAccessibleParent::grab_focus (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
bool CellAccessibleParentIfaceClassImpl::grab_focus_ (Gtk::CellAccessible cell) noexcept
{
  if (!get_struct_()->grab_focus) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->grab_focus;
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c));
  return _temp_ret;
}

// void CellAccessibleParent::update_relationset (GtkCellAccessibleParent* parent, GtkCellAccessible* cell, AtkRelationSet* relationset);
// void CellAccessibleParent::update_relationset (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, ::AtkRelationSet* relationset);
void CellAccessibleParentIfaceClassImpl::update_relationset_ (Gtk::CellAccessible cell, Atk::RelationSet relationset) noexcept
{
  if (!get_struct_()->update_relationset) return ;
  typedef void (*call_wrap_t) (::GtkCellAccessibleParent* parent, ::GtkCellAccessible* cell, ::AtkRelationSet* relationset);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->update_relationset;
  auto relationset_to_c = gi::unwrap (relationset, gi::transfer_none, gi::direction_in);
  auto cell_to_c = gi::unwrap (cell, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellAccessibleParent*) (gobj_()), (::GtkCellAccessible*) (cell_to_c), (::AtkRelationSet*) (relationset_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
