// AUTO-GENERATED

#ifndef _GI_GTK_CSSSECTION_IMPL_HPP_
#define _GI_GTK_CSSSECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// guint gtk_css_section_get_end_line (const GtkCssSection* section);
// guint gtk_css_section_get_end_line (const ::GtkCssSection* section);
guint base::CssSectionBase::get_end_line () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkCssSection* section);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_section_get_end_line;
  auto _temp_ret = call_wrap_v ((const ::GtkCssSection*) (gobj_()));
  return _temp_ret;
}

// guint gtk_css_section_get_end_position (const GtkCssSection* section);
// guint gtk_css_section_get_end_position (const ::GtkCssSection* section);
guint base::CssSectionBase::get_end_position () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkCssSection* section);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_section_get_end_position;
  auto _temp_ret = call_wrap_v ((const ::GtkCssSection*) (gobj_()));
  return _temp_ret;
}

// GFile* gtk_css_section_get_file (const GtkCssSection* section);
// ::GFile* gtk_css_section_get_file (const ::GtkCssSection* section);
Gio::File base::CssSectionBase::get_file () const noexcept
{
  typedef ::GFile* (*call_wrap_t) (const ::GtkCssSection* section);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_section_get_file;
  auto _temp_ret = call_wrap_v ((const ::GtkCssSection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkCssSection* gtk_css_section_get_parent (const GtkCssSection* section);
// ::GtkCssSection* gtk_css_section_get_parent (const ::GtkCssSection* section);
Gtk::CssSection base::CssSectionBase::get_parent () const noexcept
{
  typedef ::GtkCssSection* (*call_wrap_t) (const ::GtkCssSection* section);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_section_get_parent;
  auto _temp_ret = call_wrap_v ((const ::GtkCssSection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkCssSectionType gtk_css_section_get_section_type (const GtkCssSection* section);
// ::GtkCssSectionType gtk_css_section_get_section_type (const ::GtkCssSection* section);
Gtk::CssSectionType base::CssSectionBase::get_section_type () const noexcept
{
  typedef ::GtkCssSectionType (*call_wrap_t) (const ::GtkCssSection* section);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_section_get_section_type;
  auto _temp_ret = call_wrap_v ((const ::GtkCssSection*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guint gtk_css_section_get_start_line (const GtkCssSection* section);
// guint gtk_css_section_get_start_line (const ::GtkCssSection* section);
guint base::CssSectionBase::get_start_line () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkCssSection* section);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_section_get_start_line;
  auto _temp_ret = call_wrap_v ((const ::GtkCssSection*) (gobj_()));
  return _temp_ret;
}

// guint gtk_css_section_get_start_position (const GtkCssSection* section);
// guint gtk_css_section_get_start_position (const ::GtkCssSection* section);
guint base::CssSectionBase::get_start_position () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkCssSection* section);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_section_get_start_position;
  auto _temp_ret = call_wrap_v ((const ::GtkCssSection*) (gobj_()));
  return _temp_ret;
}

// GtkCssSection* gtk_css_section_ref (GtkCssSection* section);
// ::GtkCssSection* gtk_css_section_ref (::GtkCssSection* section);
// IGNORE; marked ignore

// void gtk_css_section_unref (GtkCssSection* section);
// void gtk_css_section_unref (::GtkCssSection* section);
// IGNORE; marked ignore


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/csssection_extra_def_impl.hpp>)
#include <gtk/csssection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/csssection_extra_impl.hpp>)
#include <gtk/csssection_extra_impl.hpp>
#endif
#endif

#endif
