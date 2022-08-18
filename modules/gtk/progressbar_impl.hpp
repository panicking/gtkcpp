// AUTO-GENERATED

#ifndef _GI_GTK_PROGRESSBAR_IMPL_HPP_
#define _GI_GTK_PROGRESSBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Orientable ProgressBarBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ProgressBarBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* gtk_progress_bar_new ();
// ::GtkProgressBar* gtk_progress_bar_new ();
Gtk::ProgressBar base::ProgressBarBase::new_ () noexcept
{
  typedef ::GtkProgressBar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_progress_bar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoEllipsizeMode gtk_progress_bar_get_ellipsize (GtkProgressBar* pbar);
// ::PangoEllipsizeMode gtk_progress_bar_get_ellipsize (::GtkProgressBar* pbar);
Pango::EllipsizeMode base::ProgressBarBase::get_ellipsize () noexcept
{
  typedef ::PangoEllipsizeMode (*call_wrap_t) (::GtkProgressBar* pbar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_progress_bar_get_ellipsize;
  auto _temp_ret = call_wrap_v ((::GtkProgressBar*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gdouble gtk_progress_bar_get_fraction (GtkProgressBar* pbar);
// gdouble gtk_progress_bar_get_fraction (::GtkProgressBar* pbar);
gdouble base::ProgressBarBase::get_fraction () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkProgressBar* pbar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_progress_bar_get_fraction;
  auto _temp_ret = call_wrap_v ((::GtkProgressBar*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_progress_bar_get_inverted (GtkProgressBar* pbar);
// gboolean gtk_progress_bar_get_inverted (::GtkProgressBar* pbar);
bool base::ProgressBarBase::get_inverted () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkProgressBar* pbar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_progress_bar_get_inverted;
  auto _temp_ret = call_wrap_v ((::GtkProgressBar*) (gobj_()));
  return _temp_ret;
}

// gdouble gtk_progress_bar_get_pulse_step (GtkProgressBar* pbar);
// gdouble gtk_progress_bar_get_pulse_step (::GtkProgressBar* pbar);
gdouble base::ProgressBarBase::get_pulse_step () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkProgressBar* pbar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_progress_bar_get_pulse_step;
  auto _temp_ret = call_wrap_v ((::GtkProgressBar*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_progress_bar_get_show_text (GtkProgressBar* pbar);
// gboolean gtk_progress_bar_get_show_text (::GtkProgressBar* pbar);
bool base::ProgressBarBase::get_show_text () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkProgressBar* pbar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_progress_bar_get_show_text;
  auto _temp_ret = call_wrap_v ((::GtkProgressBar*) (gobj_()));
  return _temp_ret;
}

// const gchar* gtk_progress_bar_get_text (GtkProgressBar* pbar);
// const char* gtk_progress_bar_get_text (::GtkProgressBar* pbar);
std::string base::ProgressBarBase::get_text () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkProgressBar* pbar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_progress_bar_get_text;
  auto _temp_ret = call_wrap_v ((::GtkProgressBar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_progress_bar_pulse (GtkProgressBar* pbar);
// void gtk_progress_bar_pulse (::GtkProgressBar* pbar);
void base::ProgressBarBase::pulse () noexcept
{
  typedef void (*call_wrap_t) (::GtkProgressBar* pbar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_progress_bar_pulse;
  call_wrap_v ((::GtkProgressBar*) (gobj_()));
}

// void gtk_progress_bar_set_ellipsize (GtkProgressBar* pbar, PangoEllipsizeMode mode);
// void gtk_progress_bar_set_ellipsize (::GtkProgressBar* pbar, ::PangoEllipsizeMode mode);
void base::ProgressBarBase::set_ellipsize (Pango::EllipsizeMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkProgressBar* pbar, ::PangoEllipsizeMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_progress_bar_set_ellipsize;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::GtkProgressBar*) (gobj_()), (::PangoEllipsizeMode) (mode_to_c));
}

// void gtk_progress_bar_set_fraction (GtkProgressBar* pbar, gdouble fraction);
// void gtk_progress_bar_set_fraction (::GtkProgressBar* pbar, gdouble fraction);
void base::ProgressBarBase::set_fraction (gdouble fraction) noexcept
{
  typedef void (*call_wrap_t) (::GtkProgressBar* pbar, gdouble fraction);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_progress_bar_set_fraction;
  auto fraction_to_c = fraction;
  call_wrap_v ((::GtkProgressBar*) (gobj_()), (gdouble) (fraction_to_c));
}

// void gtk_progress_bar_set_inverted (GtkProgressBar* pbar, gboolean inverted);
// void gtk_progress_bar_set_inverted (::GtkProgressBar* pbar, gboolean inverted);
void base::ProgressBarBase::set_inverted (gboolean inverted) noexcept
{
  typedef void (*call_wrap_t) (::GtkProgressBar* pbar, gboolean inverted);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_progress_bar_set_inverted;
  auto inverted_to_c = inverted;
  call_wrap_v ((::GtkProgressBar*) (gobj_()), (gboolean) (inverted_to_c));
}

// void gtk_progress_bar_set_pulse_step (GtkProgressBar* pbar, gdouble fraction);
// void gtk_progress_bar_set_pulse_step (::GtkProgressBar* pbar, gdouble fraction);
void base::ProgressBarBase::set_pulse_step (gdouble fraction) noexcept
{
  typedef void (*call_wrap_t) (::GtkProgressBar* pbar, gdouble fraction);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_progress_bar_set_pulse_step;
  auto fraction_to_c = fraction;
  call_wrap_v ((::GtkProgressBar*) (gobj_()), (gdouble) (fraction_to_c));
}

// void gtk_progress_bar_set_show_text (GtkProgressBar* pbar, gboolean show_text);
// void gtk_progress_bar_set_show_text (::GtkProgressBar* pbar, gboolean show_text);
void base::ProgressBarBase::set_show_text (gboolean show_text) noexcept
{
  typedef void (*call_wrap_t) (::GtkProgressBar* pbar, gboolean show_text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_progress_bar_set_show_text;
  auto show_text_to_c = show_text;
  call_wrap_v ((::GtkProgressBar*) (gobj_()), (gboolean) (show_text_to_c));
}

// void gtk_progress_bar_set_text (GtkProgressBar* pbar, const gchar* text);
// void gtk_progress_bar_set_text (::GtkProgressBar* pbar, const char* text);
void base::ProgressBarBase::set_text (const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::GtkProgressBar* pbar, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_progress_bar_set_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkProgressBar*) (gobj_()), (const char*) (text_to_c));
}
void base::ProgressBarBase::set_text () noexcept
{
  typedef void (*call_wrap_t) (::GtkProgressBar* pbar, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_progress_bar_set_text;
  auto text_to_c = nullptr;
  call_wrap_v ((::GtkProgressBar*) (gobj_()), (const char*) (text_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/progressbar_extra_def_impl.hpp>)
#include <gtk/progressbar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/progressbar_extra_impl.hpp>)
#include <gtk/progressbar_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ProgressBarClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkProgressBarClass *methods = (::GtkProgressBarClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
