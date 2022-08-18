// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERERTEXT_IMPL_HPP_
#define _GI_GTK_CELLRENDERERTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkCellRenderer* gtk_cell_renderer_text_new ();
// ::GtkCellRendererText* gtk_cell_renderer_text_new ();
Gtk::CellRendererText base::CellRendererTextBase::new_ () noexcept
{
  typedef ::GtkCellRendererText* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_text_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_cell_renderer_text_set_fixed_height_from_font (GtkCellRendererText* renderer, gint number_of_rows);
// void gtk_cell_renderer_text_set_fixed_height_from_font (::GtkCellRendererText* renderer, gint number_of_rows);
void base::CellRendererTextBase::set_fixed_height_from_font (gint number_of_rows) noexcept
{
  typedef void (*call_wrap_t) (::GtkCellRendererText* renderer, gint number_of_rows);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_text_set_fixed_height_from_font;
  auto number_of_rows_to_c = number_of_rows;
  call_wrap_v ((::GtkCellRendererText*) (gobj_()), (gint) (number_of_rows_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrenderertext_extra_def_impl.hpp>)
#include <gtk/cellrenderertext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrenderertext_extra_impl.hpp>)
#include <gtk/cellrenderertext_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CellRendererTextClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkCellRendererTextClass *methods = (::GtkCellRendererTextClass *) class_struct;
  (void) methods;

  methods->edited = (decltype (methods->edited)) detail::method_wrapper<self, void (*) (const std::string & path, const std::string & new_text), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::edited_>;
}

// void CellRendererText::edited (GtkCellRendererText* cell_renderer_text, const gchar* path, const gchar* new_text);
// void CellRendererText::edited (::GtkCellRendererText* cell_renderer_text, const char* path, const char* new_text);
void CellRendererTextClass::edited_ (const std::string & path, const std::string & new_text) noexcept
{
  if (!get_struct_()->edited) return ;
  typedef void (*call_wrap_t) (::GtkCellRendererText* cell_renderer_text, const char* path, const char* new_text);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->edited;
  auto new_text_to_c = gi::unwrap (new_text, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkCellRendererText*) (gobj_()), (const char*) (path_to_c), (const char*) (new_text_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
