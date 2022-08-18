// AUTO-GENERATED

#ifndef _GI_GTK_PAPERSIZE_IMPL_HPP_
#define _GI_GTK_PAPERSIZE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkPaperSize* gtk_paper_size_new (const gchar* name);
// ::GtkPaperSize* gtk_paper_size_new (const char* name);
Gtk::PaperSize base::PaperSizeBase::new_ (const std::string & name) noexcept
{
  typedef ::GtkPaperSize* (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_new;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gtk::PaperSize base::PaperSizeBase::new_ () noexcept
{
  typedef ::GtkPaperSize* (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_new;
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkPaperSize* gtk_paper_size_new_custom (const gchar* name, const gchar* display_name, gdouble width, gdouble height, GtkUnit unit);
// ::GtkPaperSize* gtk_paper_size_new_custom (const char* name, const char* display_name, gdouble width, gdouble height, ::GtkUnit unit);
Gtk::PaperSize base::PaperSizeBase::new_custom (const std::string & name, const std::string & display_name, gdouble width, gdouble height, Gtk::Unit unit) noexcept
{
  typedef ::GtkPaperSize* (*call_wrap_t) (const char* name, const char* display_name, gdouble width, gdouble height, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_new_custom;
  auto unit_to_c = gi::unwrap (unit);
  auto height_to_c = height;
  auto width_to_c = width;
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (display_name_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c), (::GtkUnit) (unit_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkPaperSize* gtk_paper_size_new_from_gvariant (GVariant* variant);
// ::GtkPaperSize* gtk_paper_size_new_from_gvariant (::GVariant* variant);
Gtk::PaperSize base::PaperSizeBase::new_from_gvariant (GLib::Variant variant) noexcept
{
  typedef ::GtkPaperSize* (*call_wrap_t) (::GVariant* variant);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_new_from_gvariant;
  auto variant_to_c = gi::unwrap (variant, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVariant*) (variant_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkPaperSize* gtk_paper_size_new_from_ipp (const gchar* ipp_name, gdouble width, gdouble height);
// ::GtkPaperSize* gtk_paper_size_new_from_ipp (const char* ipp_name, gdouble width, gdouble height);
Gtk::PaperSize base::PaperSizeBase::new_from_ipp (const std::string & ipp_name, gdouble width, gdouble height) noexcept
{
  typedef ::GtkPaperSize* (*call_wrap_t) (const char* ipp_name, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_new_from_ipp;
  auto height_to_c = height;
  auto width_to_c = width;
  auto ipp_name_to_c = gi::unwrap (ipp_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (ipp_name_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkPaperSize* gtk_paper_size_new_from_key_file (GKeyFile* key_file, const gchar* group_name, GError ** error);
// ::GtkPaperSize* gtk_paper_size_new_from_key_file (::GKeyFile* key_file, const char* group_name, GError ** error);
Gtk::PaperSize base::PaperSizeBase::new_from_key_file (GLib::KeyFile key_file, const std::string & group_name)
{
  typedef ::GtkPaperSize* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_new_from_key_file;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gtk::PaperSize base::PaperSizeBase::new_from_key_file (GLib::KeyFile key_file)
{
  typedef ::GtkPaperSize* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_new_from_key_file;
  auto group_name_to_c = nullptr;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gtk::PaperSize base::PaperSizeBase::new_from_key_file (GLib::KeyFile key_file, const std::string & group_name, GLib::Error * _error) noexcept
{
  typedef ::GtkPaperSize* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_new_from_key_file;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gtk::PaperSize base::PaperSizeBase::new_from_key_file (GLib::KeyFile key_file, GLib::Error * _error) noexcept
{
  typedef ::GtkPaperSize* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_new_from_key_file;
  auto group_name_to_c = nullptr;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkPaperSize* gtk_paper_size_new_from_ppd (const gchar* ppd_name, const gchar* ppd_display_name, gdouble width, gdouble height);
// ::GtkPaperSize* gtk_paper_size_new_from_ppd (const char* ppd_name, const char* ppd_display_name, gdouble width, gdouble height);
Gtk::PaperSize base::PaperSizeBase::new_from_ppd (const std::string & ppd_name, const std::string & ppd_display_name, gdouble width, gdouble height) noexcept
{
  typedef ::GtkPaperSize* (*call_wrap_t) (const char* ppd_name, const char* ppd_display_name, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_new_from_ppd;
  auto height_to_c = height;
  auto width_to_c = width;
  auto ppd_display_name_to_c = gi::unwrap (ppd_display_name, gi::transfer_none, gi::direction_in);
  auto ppd_name_to_c = gi::unwrap (ppd_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (ppd_name_to_c), (const char*) (ppd_display_name_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkPaperSize* gtk_paper_size_copy (GtkPaperSize* other);
// ::GtkPaperSize* gtk_paper_size_copy (::GtkPaperSize* other);
Gtk::PaperSize base::PaperSizeBase::copy () noexcept
{
  typedef ::GtkPaperSize* (*call_wrap_t) (::GtkPaperSize* other);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_copy;
  auto _temp_ret = call_wrap_v ((::GtkPaperSize*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_paper_size_free (GtkPaperSize* size);
// void gtk_paper_size_free (::GtkPaperSize* size);
// IGNORE; marked ignore

// gdouble gtk_paper_size_get_default_bottom_margin (GtkPaperSize* size, GtkUnit unit);
// gdouble gtk_paper_size_get_default_bottom_margin (::GtkPaperSize* size, ::GtkUnit unit);
gdouble base::PaperSizeBase::get_default_bottom_margin (Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPaperSize* size, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_get_default_bottom_margin;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::GtkPaperSize*) (gobj_()), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// gdouble gtk_paper_size_get_default_left_margin (GtkPaperSize* size, GtkUnit unit);
// gdouble gtk_paper_size_get_default_left_margin (::GtkPaperSize* size, ::GtkUnit unit);
gdouble base::PaperSizeBase::get_default_left_margin (Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPaperSize* size, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_get_default_left_margin;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::GtkPaperSize*) (gobj_()), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// gdouble gtk_paper_size_get_default_right_margin (GtkPaperSize* size, GtkUnit unit);
// gdouble gtk_paper_size_get_default_right_margin (::GtkPaperSize* size, ::GtkUnit unit);
gdouble base::PaperSizeBase::get_default_right_margin (Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPaperSize* size, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_get_default_right_margin;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::GtkPaperSize*) (gobj_()), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// gdouble gtk_paper_size_get_default_top_margin (GtkPaperSize* size, GtkUnit unit);
// gdouble gtk_paper_size_get_default_top_margin (::GtkPaperSize* size, ::GtkUnit unit);
gdouble base::PaperSizeBase::get_default_top_margin (Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPaperSize* size, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_get_default_top_margin;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::GtkPaperSize*) (gobj_()), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// const gchar* gtk_paper_size_get_display_name (GtkPaperSize* size);
// const char* gtk_paper_size_get_display_name (::GtkPaperSize* size);
std::string base::PaperSizeBase::get_display_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPaperSize* size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_get_display_name;
  auto _temp_ret = call_wrap_v ((::GtkPaperSize*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gdouble gtk_paper_size_get_height (GtkPaperSize* size, GtkUnit unit);
// gdouble gtk_paper_size_get_height (::GtkPaperSize* size, ::GtkUnit unit);
gdouble base::PaperSizeBase::get_height (Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPaperSize* size, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_get_height;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::GtkPaperSize*) (gobj_()), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// const gchar* gtk_paper_size_get_name (GtkPaperSize* size);
// const char* gtk_paper_size_get_name (::GtkPaperSize* size);
std::string base::PaperSizeBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPaperSize* size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_get_name;
  auto _temp_ret = call_wrap_v ((::GtkPaperSize*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_paper_size_get_ppd_name (GtkPaperSize* size);
// const char* gtk_paper_size_get_ppd_name (::GtkPaperSize* size);
std::string base::PaperSizeBase::get_ppd_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPaperSize* size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_get_ppd_name;
  auto _temp_ret = call_wrap_v ((::GtkPaperSize*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gdouble gtk_paper_size_get_width (GtkPaperSize* size, GtkUnit unit);
// gdouble gtk_paper_size_get_width (::GtkPaperSize* size, ::GtkUnit unit);
gdouble base::PaperSizeBase::get_width (Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPaperSize* size, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_get_width;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::GtkPaperSize*) (gobj_()), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// gboolean gtk_paper_size_is_custom (GtkPaperSize* size);
// gboolean gtk_paper_size_is_custom (::GtkPaperSize* size);
bool base::PaperSizeBase::is_custom () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPaperSize* size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_is_custom;
  auto _temp_ret = call_wrap_v ((::GtkPaperSize*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_paper_size_is_equal (GtkPaperSize* size1, GtkPaperSize* size2);
// gboolean gtk_paper_size_is_equal (::GtkPaperSize* size1, ::GtkPaperSize* size2);
bool base::PaperSizeBase::is_equal (Gtk::PaperSize size2) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPaperSize* size1, ::GtkPaperSize* size2);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_is_equal;
  auto size2_to_c = gi::unwrap (size2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkPaperSize*) (gobj_()), (::GtkPaperSize*) (size2_to_c));
  return _temp_ret;
}

// gboolean gtk_paper_size_is_ipp (GtkPaperSize* size);
// gboolean gtk_paper_size_is_ipp (::GtkPaperSize* size);
bool base::PaperSizeBase::is_ipp () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPaperSize* size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_is_ipp;
  auto _temp_ret = call_wrap_v ((::GtkPaperSize*) (gobj_()));
  return _temp_ret;
}

// void gtk_paper_size_set_size (GtkPaperSize* size, gdouble width, gdouble height, GtkUnit unit);
// void gtk_paper_size_set_size (::GtkPaperSize* size, gdouble width, gdouble height, ::GtkUnit unit);
void base::PaperSizeBase::set_size (gdouble width, gdouble height, Gtk::Unit unit) noexcept
{
  typedef void (*call_wrap_t) (::GtkPaperSize* size, gdouble width, gdouble height, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_set_size;
  auto unit_to_c = gi::unwrap (unit);
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkPaperSize*) (gobj_()), (gdouble) (width_to_c), (gdouble) (height_to_c), (::GtkUnit) (unit_to_c));
}

// GVariant* gtk_paper_size_to_gvariant (GtkPaperSize* paper_size);
// ::GVariant* gtk_paper_size_to_gvariant (::GtkPaperSize* paper_size);
GLib::Variant base::PaperSizeBase::to_gvariant () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GtkPaperSize* paper_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_to_gvariant;
  auto _temp_ret = call_wrap_v ((::GtkPaperSize*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_paper_size_to_key_file (GtkPaperSize* size, GKeyFile* key_file, const gchar* group_name);
// void gtk_paper_size_to_key_file (::GtkPaperSize* size, ::GKeyFile* key_file, const char* group_name);
void base::PaperSizeBase::to_key_file (GLib::KeyFile key_file, const std::string & group_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkPaperSize* size, ::GKeyFile* key_file, const char* group_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_to_key_file;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPaperSize*) (gobj_()), (::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c));
}

// const gchar* gtk_paper_size_get_default ();
// const char* gtk_paper_size_get_default ();
std::string base::PaperSizeBase::get_default () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* gtk_paper_size_get_paper_sizes (gboolean include_custom);
// ::GList* gtk_paper_size_get_paper_sizes (gboolean include_custom);
std::vector<Gtk::PaperSize> base::PaperSizeBase::get_paper_sizes (gboolean include_custom) noexcept
{
  typedef ::GList* (*call_wrap_t) (gboolean include_custom);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_paper_size_get_paper_sizes;
  auto include_custom_to_c = include_custom;
  auto _temp_ret = call_wrap_v ((gboolean) (include_custom_to_c));
  return gi::detail::wrap_list<Gtk::PaperSize> (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/papersize_extra_def_impl.hpp>)
#include <gtk/papersize_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/papersize_extra_impl.hpp>)
#include <gtk/papersize_extra_impl.hpp>
#endif
#endif

#endif
