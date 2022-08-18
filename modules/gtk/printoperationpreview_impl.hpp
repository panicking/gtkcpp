// AUTO-GENERATED

#ifndef _GI_GTK_PRINTOPERATIONPREVIEW_IMPL_HPP_
#define _GI_GTK_PRINTOPERATIONPREVIEW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_print_operation_preview_end_preview (GtkPrintOperationPreview* preview);
// void gtk_print_operation_preview_end_preview (::GtkPrintOperationPreview* preview);
void base::PrintOperationPreviewBase::end_preview () noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperationPreview* preview);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_preview_end_preview;
  call_wrap_v ((::GtkPrintOperationPreview*) (gobj_()));
}

// gboolean gtk_print_operation_preview_is_selected (GtkPrintOperationPreview* preview, gint page_nr);
// gboolean gtk_print_operation_preview_is_selected (::GtkPrintOperationPreview* preview, gint page_nr);
bool base::PrintOperationPreviewBase::is_selected (gint page_nr) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintOperationPreview* preview, gint page_nr);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_preview_is_selected;
  auto page_nr_to_c = page_nr;
  auto _temp_ret = call_wrap_v ((::GtkPrintOperationPreview*) (gobj_()), (gint) (page_nr_to_c));
  return _temp_ret;
}

// void gtk_print_operation_preview_render_page (GtkPrintOperationPreview* preview, gint page_nr);
// void gtk_print_operation_preview_render_page (::GtkPrintOperationPreview* preview, gint page_nr);
void base::PrintOperationPreviewBase::render_page (gint page_nr) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintOperationPreview* preview, gint page_nr);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_operation_preview_render_page;
  auto page_nr_to_c = page_nr;
  call_wrap_v ((::GtkPrintOperationPreview*) (gobj_()), (gint) (page_nr_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printoperationpreview_extra_def_impl.hpp>)
#include <gtk/printoperationpreview_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printoperationpreview_extra_impl.hpp>)
#include <gtk/printoperationpreview_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void PrintOperationPreviewIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GtkPrintOperationPreviewIface *methods = (::GtkPrintOperationPreviewIface *) interface_struct;
  (void) methods;

  methods->end_preview = (decltype (methods->end_preview)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::end_preview_>;
  methods->got_page_size = (decltype (methods->got_page_size)) detail::method_wrapper<self, void (*) (Gtk::PrintContext context, Gtk::PageSetup page_setup), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::got_page_size_>;
  methods->is_selected = (decltype (methods->is_selected)) detail::method_wrapper<self, bool (*) (gint page_nr), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::is_selected_>;
  methods->ready = (decltype (methods->ready)) detail::method_wrapper<self, void (*) (Gtk::PrintContext context), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::ready_>;
  methods->render_page = (decltype (methods->render_page)) detail::method_wrapper<self, void (*) (gint page_nr), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::render_page_>;
}

// void PrintOperationPreview::end_preview (GtkPrintOperationPreview* preview);
// void PrintOperationPreview::end_preview (::GtkPrintOperationPreview* preview);
void PrintOperationPreviewIfaceClassImpl::end_preview_ () noexcept
{
  if (!get_struct_()->end_preview) return ;
  typedef void (*call_wrap_t) (::GtkPrintOperationPreview* preview);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->end_preview;
  call_wrap_v ((::GtkPrintOperationPreview*) (gobj_()));
}

// void PrintOperationPreview::got_page_size (GtkPrintOperationPreview* preview, GtkPrintContext* context, GtkPageSetup* page_setup);
// void PrintOperationPreview::got_page_size (::GtkPrintOperationPreview* preview, ::GtkPrintContext* context, ::GtkPageSetup* page_setup);
void PrintOperationPreviewIfaceClassImpl::got_page_size_ (Gtk::PrintContext context, Gtk::PageSetup page_setup) noexcept
{
  if (!get_struct_()->got_page_size) return ;
  typedef void (*call_wrap_t) (::GtkPrintOperationPreview* preview, ::GtkPrintContext* context, ::GtkPageSetup* page_setup);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->got_page_size;
  auto page_setup_to_c = gi::unwrap (page_setup, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintOperationPreview*) (gobj_()), (::GtkPrintContext*) (context_to_c), (::GtkPageSetup*) (page_setup_to_c));
}

// gboolean PrintOperationPreview::is_selected (GtkPrintOperationPreview* preview, gint page_nr);
// gboolean PrintOperationPreview::is_selected (::GtkPrintOperationPreview* preview, gint page_nr);
bool PrintOperationPreviewIfaceClassImpl::is_selected_ (gint page_nr) noexcept
{
  if (!get_struct_()->is_selected) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkPrintOperationPreview* preview, gint page_nr);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_selected;
  auto page_nr_to_c = page_nr;
  auto _temp_ret = call_wrap_v ((::GtkPrintOperationPreview*) (gobj_()), (gint) (page_nr_to_c));
  return _temp_ret;
}

// void PrintOperationPreview::ready (GtkPrintOperationPreview* preview, GtkPrintContext* context);
// void PrintOperationPreview::ready (::GtkPrintOperationPreview* preview, ::GtkPrintContext* context);
void PrintOperationPreviewIfaceClassImpl::ready_ (Gtk::PrintContext context) noexcept
{
  if (!get_struct_()->ready) return ;
  typedef void (*call_wrap_t) (::GtkPrintOperationPreview* preview, ::GtkPrintContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->ready;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintOperationPreview*) (gobj_()), (::GtkPrintContext*) (context_to_c));
}

// void PrintOperationPreview::render_page (GtkPrintOperationPreview* preview, gint page_nr);
// void PrintOperationPreview::render_page (::GtkPrintOperationPreview* preview, gint page_nr);
void PrintOperationPreviewIfaceClassImpl::render_page_ (gint page_nr) noexcept
{
  if (!get_struct_()->render_page) return ;
  typedef void (*call_wrap_t) (::GtkPrintOperationPreview* preview, gint page_nr);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render_page;
  auto page_nr_to_c = page_nr;
  call_wrap_v ((::GtkPrintOperationPreview*) (gobj_()), (gint) (page_nr_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
