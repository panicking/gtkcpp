// AUTO-GENERATED

#ifndef _GI_GTK_IMCONTEXTSIMPLE_IMPL_HPP_
#define _GI_GTK_IMCONTEXTSIMPLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkIMContext* gtk_im_context_simple_new ();
// ::GtkIMContextSimple* gtk_im_context_simple_new ();
Gtk::IMContextSimple base::IMContextSimpleBase::new_ () noexcept
{
  typedef ::GtkIMContextSimple* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_im_context_simple_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_im_context_simple_add_compose_file (GtkIMContextSimple* context_simple, const gchar* compose_file);
// void gtk_im_context_simple_add_compose_file (::GtkIMContextSimple* context_simple, const char* compose_file);
void base::IMContextSimpleBase::add_compose_file (const std::string & compose_file) noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContextSimple* context_simple, const char* compose_file);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_im_context_simple_add_compose_file;
  auto compose_file_to_c = gi::unwrap (compose_file, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIMContextSimple*) (gobj_()), (const char*) (compose_file_to_c));
}

// void gtk_im_context_simple_add_table (GtkIMContextSimple* context_simple, gint max_seq_len, gint n_seqs);
// void gtk_im_context_simple_add_table (::GtkIMContextSimple* context_simple, gint max_seq_len, gint n_seqs);
// IGNORE; not introspectable, inconsistent array info


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/imcontextsimple_extra_def_impl.hpp>)
#include <gtk/imcontextsimple_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/imcontextsimple_extra_impl.hpp>)
#include <gtk/imcontextsimple_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void IMContextSimpleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkIMContextSimpleClass *methods = (::GtkIMContextSimpleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
