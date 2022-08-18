// AUTO-GENERATED

#ifndef _GI_GTK_GRID_IMPL_HPP_
#define _GI_GTK_GRID_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Orientable GridBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

GridBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* gtk_grid_new ();
// ::GtkGrid* gtk_grid_new ();
Gtk::Grid base::GridBase::new_ () noexcept
{
  typedef ::GtkGrid* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_grid_attach (GtkGrid* grid, GtkWidget* child, gint left, gint top, gint width, gint height);
// void gtk_grid_attach (::GtkGrid* grid, ::GtkWidget* child, gint left, gint top, gint width, gint height);
void base::GridBase::attach (Gtk::Widget child, gint left, gint top, gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkGrid* grid, ::GtkWidget* child, gint left, gint top, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_attach;
  auto height_to_c = height;
  auto width_to_c = width;
  auto top_to_c = top;
  auto left_to_c = left;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkGrid*) (gobj_()), (::GtkWidget*) (child_to_c), (gint) (left_to_c), (gint) (top_to_c), (gint) (width_to_c), (gint) (height_to_c));
}

// void gtk_grid_attach_next_to (GtkGrid* grid, GtkWidget* child, GtkWidget* sibling, GtkPositionType side, gint width, gint height);
// void gtk_grid_attach_next_to (::GtkGrid* grid, ::GtkWidget* child, ::GtkWidget* sibling, ::GtkPositionType side, gint width, gint height);
void base::GridBase::attach_next_to (Gtk::Widget child, Gtk::Widget sibling, Gtk::PositionType side, gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkGrid* grid, ::GtkWidget* child, ::GtkWidget* sibling, ::GtkPositionType side, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_attach_next_to;
  auto height_to_c = height;
  auto width_to_c = width;
  auto side_to_c = gi::unwrap (side);
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkGrid*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (sibling_to_c), (::GtkPositionType) (side_to_c), (gint) (width_to_c), (gint) (height_to_c));
}
void base::GridBase::attach_next_to (Gtk::Widget child, Gtk::PositionType side, gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkGrid* grid, ::GtkWidget* child, ::GtkWidget* sibling, ::GtkPositionType side, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_attach_next_to;
  auto height_to_c = height;
  auto width_to_c = width;
  auto side_to_c = gi::unwrap (side);
  auto sibling_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkGrid*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (sibling_to_c), (::GtkPositionType) (side_to_c), (gint) (width_to_c), (gint) (height_to_c));
}

// gint gtk_grid_get_baseline_row (GtkGrid* grid);
// gint gtk_grid_get_baseline_row (::GtkGrid* grid);
gint base::GridBase::get_baseline_row () noexcept
{
  typedef gint (*call_wrap_t) (::GtkGrid* grid);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_get_baseline_row;
  auto _temp_ret = call_wrap_v ((::GtkGrid*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* gtk_grid_get_child_at (GtkGrid* grid, gint left, gint top);
// ::GtkWidget* gtk_grid_get_child_at (::GtkGrid* grid, gint left, gint top);
Gtk::Widget base::GridBase::get_child_at (gint left, gint top) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkGrid* grid, gint left, gint top);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_get_child_at;
  auto top_to_c = top;
  auto left_to_c = left;
  auto _temp_ret = call_wrap_v ((::GtkGrid*) (gobj_()), (gint) (left_to_c), (gint) (top_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_grid_get_column_homogeneous (GtkGrid* grid);
// gboolean gtk_grid_get_column_homogeneous (::GtkGrid* grid);
bool base::GridBase::get_column_homogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGrid* grid);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_get_column_homogeneous;
  auto _temp_ret = call_wrap_v ((::GtkGrid*) (gobj_()));
  return _temp_ret;
}

// guint gtk_grid_get_column_spacing (GtkGrid* grid);
// guint gtk_grid_get_column_spacing (::GtkGrid* grid);
guint base::GridBase::get_column_spacing () noexcept
{
  typedef guint (*call_wrap_t) (::GtkGrid* grid);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_get_column_spacing;
  auto _temp_ret = call_wrap_v ((::GtkGrid*) (gobj_()));
  return _temp_ret;
}

// GtkBaselinePosition gtk_grid_get_row_baseline_position (GtkGrid* grid, gint row);
// ::GtkBaselinePosition gtk_grid_get_row_baseline_position (::GtkGrid* grid, gint row);
Gtk::BaselinePosition base::GridBase::get_row_baseline_position (gint row) noexcept
{
  typedef ::GtkBaselinePosition (*call_wrap_t) (::GtkGrid* grid, gint row);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_get_row_baseline_position;
  auto row_to_c = row;
  auto _temp_ret = call_wrap_v ((::GtkGrid*) (gobj_()), (gint) (row_to_c));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_grid_get_row_homogeneous (GtkGrid* grid);
// gboolean gtk_grid_get_row_homogeneous (::GtkGrid* grid);
bool base::GridBase::get_row_homogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGrid* grid);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_get_row_homogeneous;
  auto _temp_ret = call_wrap_v ((::GtkGrid*) (gobj_()));
  return _temp_ret;
}

// guint gtk_grid_get_row_spacing (GtkGrid* grid);
// guint gtk_grid_get_row_spacing (::GtkGrid* grid);
guint base::GridBase::get_row_spacing () noexcept
{
  typedef guint (*call_wrap_t) (::GtkGrid* grid);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_get_row_spacing;
  auto _temp_ret = call_wrap_v ((::GtkGrid*) (gobj_()));
  return _temp_ret;
}

// void gtk_grid_insert_column (GtkGrid* grid, gint position);
// void gtk_grid_insert_column (::GtkGrid* grid, gint position);
void base::GridBase::insert_column (gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkGrid* grid, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_insert_column;
  auto position_to_c = position;
  call_wrap_v ((::GtkGrid*) (gobj_()), (gint) (position_to_c));
}

// void gtk_grid_insert_next_to (GtkGrid* grid, GtkWidget* sibling, GtkPositionType side);
// void gtk_grid_insert_next_to (::GtkGrid* grid, ::GtkWidget* sibling, ::GtkPositionType side);
void base::GridBase::insert_next_to (Gtk::Widget sibling, Gtk::PositionType side) noexcept
{
  typedef void (*call_wrap_t) (::GtkGrid* grid, ::GtkWidget* sibling, ::GtkPositionType side);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_insert_next_to;
  auto side_to_c = gi::unwrap (side);
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkGrid*) (gobj_()), (::GtkWidget*) (sibling_to_c), (::GtkPositionType) (side_to_c));
}

// void gtk_grid_insert_row (GtkGrid* grid, gint position);
// void gtk_grid_insert_row (::GtkGrid* grid, gint position);
void base::GridBase::insert_row (gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkGrid* grid, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_insert_row;
  auto position_to_c = position;
  call_wrap_v ((::GtkGrid*) (gobj_()), (gint) (position_to_c));
}

// void gtk_grid_remove_column (GtkGrid* grid, gint position);
// void gtk_grid_remove_column (::GtkGrid* grid, gint position);
void base::GridBase::remove_column (gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkGrid* grid, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_remove_column;
  auto position_to_c = position;
  call_wrap_v ((::GtkGrid*) (gobj_()), (gint) (position_to_c));
}

// void gtk_grid_remove_row (GtkGrid* grid, gint position);
// void gtk_grid_remove_row (::GtkGrid* grid, gint position);
void base::GridBase::remove_row (gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkGrid* grid, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_remove_row;
  auto position_to_c = position;
  call_wrap_v ((::GtkGrid*) (gobj_()), (gint) (position_to_c));
}

// void gtk_grid_set_baseline_row (GtkGrid* grid, gint row);
// void gtk_grid_set_baseline_row (::GtkGrid* grid, gint row);
void base::GridBase::set_baseline_row (gint row) noexcept
{
  typedef void (*call_wrap_t) (::GtkGrid* grid, gint row);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_set_baseline_row;
  auto row_to_c = row;
  call_wrap_v ((::GtkGrid*) (gobj_()), (gint) (row_to_c));
}

// void gtk_grid_set_column_homogeneous (GtkGrid* grid, gboolean homogeneous);
// void gtk_grid_set_column_homogeneous (::GtkGrid* grid, gboolean homogeneous);
void base::GridBase::set_column_homogeneous (gboolean homogeneous) noexcept
{
  typedef void (*call_wrap_t) (::GtkGrid* grid, gboolean homogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_set_column_homogeneous;
  auto homogeneous_to_c = homogeneous;
  call_wrap_v ((::GtkGrid*) (gobj_()), (gboolean) (homogeneous_to_c));
}

// void gtk_grid_set_column_spacing (GtkGrid* grid, guint spacing);
// void gtk_grid_set_column_spacing (::GtkGrid* grid, guint spacing);
void base::GridBase::set_column_spacing (guint spacing) noexcept
{
  typedef void (*call_wrap_t) (::GtkGrid* grid, guint spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_set_column_spacing;
  auto spacing_to_c = spacing;
  call_wrap_v ((::GtkGrid*) (gobj_()), (guint) (spacing_to_c));
}

// void gtk_grid_set_row_baseline_position (GtkGrid* grid, gint row, GtkBaselinePosition pos);
// void gtk_grid_set_row_baseline_position (::GtkGrid* grid, gint row, ::GtkBaselinePosition pos);
void base::GridBase::set_row_baseline_position (gint row, Gtk::BaselinePosition pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkGrid* grid, gint row, ::GtkBaselinePosition pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_set_row_baseline_position;
  auto pos_to_c = gi::unwrap (pos);
  auto row_to_c = row;
  call_wrap_v ((::GtkGrid*) (gobj_()), (gint) (row_to_c), (::GtkBaselinePosition) (pos_to_c));
}

// void gtk_grid_set_row_homogeneous (GtkGrid* grid, gboolean homogeneous);
// void gtk_grid_set_row_homogeneous (::GtkGrid* grid, gboolean homogeneous);
void base::GridBase::set_row_homogeneous (gboolean homogeneous) noexcept
{
  typedef void (*call_wrap_t) (::GtkGrid* grid, gboolean homogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_set_row_homogeneous;
  auto homogeneous_to_c = homogeneous;
  call_wrap_v ((::GtkGrid*) (gobj_()), (gboolean) (homogeneous_to_c));
}

// void gtk_grid_set_row_spacing (GtkGrid* grid, guint spacing);
// void gtk_grid_set_row_spacing (::GtkGrid* grid, guint spacing);
void base::GridBase::set_row_spacing (guint spacing) noexcept
{
  typedef void (*call_wrap_t) (::GtkGrid* grid, guint spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grid_set_row_spacing;
  auto spacing_to_c = spacing;
  call_wrap_v ((::GtkGrid*) (gobj_()), (guint) (spacing_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/grid_extra_def_impl.hpp>)
#include <gtk/grid_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/grid_extra_impl.hpp>)
#include <gtk/grid_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void GridClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkGridClass *methods = (::GtkGridClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
