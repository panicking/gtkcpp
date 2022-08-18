// AUTO-GENERATED

#ifndef _GI_GTK_CELLVIEW_IMPL_HPP_
#define _GI_GTK_CELLVIEW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::CellLayout CellViewBase::interface_ (gi::interface_tag<Gtk::CellLayout>)
{ return gi::wrap ((Gtk::CellLayout::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

CellViewBase::operator Gtk::CellLayout ()
{ return interface_ (gi::interface_tag<Gtk::CellLayout>()); }

Gtk::Orientable CellViewBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

CellViewBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* gtk_cell_view_new ();
// ::GtkCellView* gtk_cell_view_new ();
Gtk::CellView base::CellViewBase::new_ () noexcept
{
  typedef ::GtkCellView* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_cell_view_new_with_context (GtkCellArea* area, GtkCellAreaContext* context);
// ::GtkCellView* gtk_cell_view_new_with_context (::GtkCellArea* area, ::GtkCellAreaContext* context);
Gtk::CellView base::CellViewBase::new_with_context (Gtk::CellArea area, Gtk::CellAreaContext context) noexcept
{
  typedef ::GtkCellView* (*call_wrap_t) (::GtkCellArea* area, ::GtkCellAreaContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_new_with_context;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto area_to_c = gi::unwrap (area, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellArea*) (area_to_c), (::GtkCellAreaContext*) (context_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_cell_view_new_with_markup (const gchar* markup);
// ::GtkCellView* gtk_cell_view_new_with_markup (const char* markup);
Gtk::CellView base::CellViewBase::new_with_markup (const std::string & markup) noexcept
{
  typedef ::GtkCellView* (*call_wrap_t) (const char* markup);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_new_with_markup;
  auto markup_to_c = gi::unwrap (markup, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (markup_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_cell_view_new_with_pixbuf (GdkPixbuf* pixbuf);
// ::GtkCellView* gtk_cell_view_new_with_pixbuf (::GdkPixbuf* pixbuf);
Gtk::CellView base::CellViewBase::new_with_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept
{
  typedef ::GtkCellView* (*call_wrap_t) (::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_new_with_pixbuf;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkPixbuf*) (pixbuf_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_cell_view_new_with_text (const gchar* text);
// ::GtkCellView* gtk_cell_view_new_with_text (const char* text);
Gtk::CellView base::CellViewBase::new_with_text (const std::string & text) noexcept
{
  typedef ::GtkCellView* (*call_wrap_t) (const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_new_with_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (text_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkTreePath* gtk_cell_view_get_displayed_row (GtkCellView* cell_view);
// ::GtkTreePath* gtk_cell_view_get_displayed_row (::GtkCellView* cell_view);
Gtk::TreePath base::CellViewBase::get_displayed_row () noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) (::GtkCellView* cell_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_get_displayed_row;
  auto _temp_ret = call_wrap_v ((::GtkCellView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_cell_view_get_draw_sensitive (GtkCellView* cell_view);
// gboolean gtk_cell_view_get_draw_sensitive (::GtkCellView* cell_view);
bool base::CellViewBase::get_draw_sensitive () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellView* cell_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_get_draw_sensitive;
  auto _temp_ret = call_wrap_v ((::GtkCellView*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_cell_view_get_fit_model (GtkCellView* cell_view);
// gboolean gtk_cell_view_get_fit_model (::GtkCellView* cell_view);
bool base::CellViewBase::get_fit_model () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkCellView* cell_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_get_fit_model;
  auto _temp_ret = call_wrap_v ((::GtkCellView*) (gobj_()));
  return _temp_ret;
}

// GtkTreeModel* gtk_cell_view_get_model (GtkCellView* cell_view);
// ::GtkTreeModel* gtk_cell_view_get_model (::GtkCellView* cell_view);
Gtk::TreeModel base::CellViewBase::get_model () noexcept
{
  typedef ::GtkTreeModel* (*call_wrap_t) (::GtkCellView* cell_view);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_get_model;
  auto _temp_ret = call_wrap_v ((::GtkCellView*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_cell_view_get_size_of_row (GtkCellView* cell_view, GtkTreePath* path, GtkRequisition* requisition);
// gboolean gtk_cell_view_get_size_of_row (::GtkCellView* cell_view, ::GtkTreePath* path, ::GtkRequisition* requisition);
// IGNORE; deprecated

// void gtk_cell_view_set_background_color (GtkCellView* cell_view, const GdkColor* color);
// void gtk_cell_view_set_background_color (::GtkCellView* cell_view, const  color);
// IGNORE; deprecated

// void gtk_cell_view_set_background_rgba (GtkCellView* cell_view, const GdkRGBA* rgba);
// void gtk_cell_view_set_background_rgba (::GtkCellView* cell_view, const ::GdkRGBA* rgba);
void base::CellViewBase::set_background_rgba (const Gdk::RGBA & rgba) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellView* cell_view, const ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_set_background_rgba;
  auto rgba_to_c = gi::unwrap (rgba, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellView*) (gobj_()), (const ::GdkRGBA*) (rgba_to_c));
}

// void gtk_cell_view_set_displayed_row (GtkCellView* cell_view, GtkTreePath* path);
// void gtk_cell_view_set_displayed_row (::GtkCellView* cell_view, ::GtkTreePath* path);
void base::CellViewBase::set_displayed_row (Gtk::TreePath path) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellView* cell_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_set_displayed_row;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellView*) (gobj_()), (::GtkTreePath*) (path_to_c));
}
void base::CellViewBase::set_displayed_row () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellView* cell_view, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_set_displayed_row;
  auto path_to_c = nullptr;
  call_wrap_v ((::GtkCellView*) (gobj_()), (::GtkTreePath*) (path_to_c));
}

// void gtk_cell_view_set_draw_sensitive (GtkCellView* cell_view, gboolean draw_sensitive);
// void gtk_cell_view_set_draw_sensitive (::GtkCellView* cell_view, gboolean draw_sensitive);
void base::CellViewBase::set_draw_sensitive (gboolean draw_sensitive) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellView* cell_view, gboolean draw_sensitive);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_set_draw_sensitive;
  auto draw_sensitive_to_c = draw_sensitive;
  call_wrap_v ((::GtkCellView*) (gobj_()), (gboolean) (draw_sensitive_to_c));
}

// void gtk_cell_view_set_fit_model (GtkCellView* cell_view, gboolean fit_model);
// void gtk_cell_view_set_fit_model (::GtkCellView* cell_view, gboolean fit_model);
void base::CellViewBase::set_fit_model (gboolean fit_model) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellView* cell_view, gboolean fit_model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_set_fit_model;
  auto fit_model_to_c = fit_model;
  call_wrap_v ((::GtkCellView*) (gobj_()), (gboolean) (fit_model_to_c));
}

// void gtk_cell_view_set_model (GtkCellView* cell_view, GtkTreeModel* model);
// void gtk_cell_view_set_model (::GtkCellView* cell_view, ::GtkTreeModel* model);
void base::CellViewBase::set_model (Gtk::TreeModel model) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellView* cell_view, ::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_set_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellView*) (gobj_()), (::GtkTreeModel*) (model_to_c));
}
void base::CellViewBase::set_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellView* cell_view, ::GtkTreeModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_view_set_model;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkCellView*) (gobj_()), (::GtkTreeModel*) (model_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellview_extra_def_impl.hpp>)
#include <gtk/cellview_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellview_extra_impl.hpp>)
#include <gtk/cellview_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CellViewClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkCellViewClass *methods = (::GtkCellViewClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
