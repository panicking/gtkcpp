// AUTO-GENERATED

#ifndef _GI_GTK_PRINTSETTINGS_IMPL_HPP_
#define _GI_GTK_PRINTSETTINGS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkPrintSettings* gtk_print_settings_new ();
// ::GtkPrintSettings* gtk_print_settings_new ();
Gtk::PrintSettings base::PrintSettingsBase::new_ () noexcept
{
  typedef ::GtkPrintSettings* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkPrintSettings* gtk_print_settings_new_from_file (const gchar* file_name, GError ** error);
// ::GtkPrintSettings* gtk_print_settings_new_from_file (const char* file_name, GError ** error);
Gtk::PrintSettings base::PrintSettingsBase::new_from_file (const std::string & file_name)
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (const char* file_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_new_from_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (file_name_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gtk::PrintSettings base::PrintSettingsBase::new_from_file (const std::string & file_name, GLib::Error * _error) noexcept
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (const char* file_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_new_from_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (file_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkPrintSettings* gtk_print_settings_new_from_gvariant (GVariant* variant);
// ::GtkPrintSettings* gtk_print_settings_new_from_gvariant (::GVariant* variant);
Gtk::PrintSettings base::PrintSettingsBase::new_from_gvariant (GLib::Variant variant) noexcept
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (::GVariant* variant);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_new_from_gvariant;
  auto variant_to_c = gi::unwrap (variant, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVariant*) (variant_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkPrintSettings* gtk_print_settings_new_from_key_file (GKeyFile* key_file, const gchar* group_name, GError ** error);
// ::GtkPrintSettings* gtk_print_settings_new_from_key_file (::GKeyFile* key_file, const char* group_name, GError ** error);
Gtk::PrintSettings base::PrintSettingsBase::new_from_key_file (GLib::KeyFile key_file, const std::string & group_name)
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_new_from_key_file;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gtk::PrintSettings base::PrintSettingsBase::new_from_key_file (GLib::KeyFile key_file)
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_new_from_key_file;
  auto group_name_to_c = nullptr;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gtk::PrintSettings base::PrintSettingsBase::new_from_key_file (GLib::KeyFile key_file, const std::string & group_name, GLib::Error * _error) noexcept
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_new_from_key_file;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gtk::PrintSettings base::PrintSettingsBase::new_from_key_file (GLib::KeyFile key_file, GLib::Error * _error) noexcept
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_new_from_key_file;
  auto group_name_to_c = nullptr;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkPrintSettings* gtk_print_settings_copy (GtkPrintSettings* other);
// ::GtkPrintSettings* gtk_print_settings_copy (::GtkPrintSettings* other);
Gtk::PrintSettings base::PrintSettingsBase::copy () noexcept
{
  typedef ::GtkPrintSettings* (*call_wrap_t) (::GtkPrintSettings* other);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_copy;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_print_settings_foreach (GtkPrintSettings* settings, GtkPrintSettingsFunc func, gpointer user_data);
// void gtk_print_settings_foreach (::GtkPrintSettings* settings, Gtk::PrintSettingsFunc::cfunction_type func, void* user_data);
void base::PrintSettingsBase::foreach (Gtk::PrintSettingsFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, Gtk::PrintSettingsFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (Gtk::PrintSettingsFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// const gchar* gtk_print_settings_get (GtkPrintSettings* settings, const gchar* key);
// const char* gtk_print_settings_get (::GtkPrintSettings* settings, const char* key);
std::string base::PrintSettingsBase::get (const std::string & key) noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrintSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_print_settings_get_bool (GtkPrintSettings* settings, const gchar* key);
// gboolean gtk_print_settings_get_bool (::GtkPrintSettings* settings, const char* key);
bool base::PrintSettingsBase::get_bool (const std::string & key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_bool;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// gboolean gtk_print_settings_get_collate (GtkPrintSettings* settings);
// gboolean gtk_print_settings_get_collate (::GtkPrintSettings* settings);
bool base::PrintSettingsBase::get_collate () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_collate;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// const gchar* gtk_print_settings_get_default_source (GtkPrintSettings* settings);
// const char* gtk_print_settings_get_default_source (::GtkPrintSettings* settings);
std::string base::PrintSettingsBase::get_default_source () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_default_source;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_print_settings_get_dither (GtkPrintSettings* settings);
// const char* gtk_print_settings_get_dither (::GtkPrintSettings* settings);
std::string base::PrintSettingsBase::get_dither () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_dither;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gdouble gtk_print_settings_get_double (GtkPrintSettings* settings, const gchar* key);
// gdouble gtk_print_settings_get_double (::GtkPrintSettings* settings, const char* key);
gdouble base::PrintSettingsBase::get_double (const std::string & key) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPrintSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_double;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// gdouble gtk_print_settings_get_double_with_default (GtkPrintSettings* settings, const gchar* key, gdouble def);
// gdouble gtk_print_settings_get_double_with_default (::GtkPrintSettings* settings, const char* key, gdouble def);
gdouble base::PrintSettingsBase::get_double_with_default (const std::string & key, gdouble def) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPrintSettings* settings, const char* key, gdouble def);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_double_with_default;
  auto def_to_c = def;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c), (gdouble) (def_to_c));
  return _temp_ret;
}

// GtkPrintDuplex gtk_print_settings_get_duplex (GtkPrintSettings* settings);
// ::GtkPrintDuplex gtk_print_settings_get_duplex (::GtkPrintSettings* settings);
Gtk::PrintDuplex base::PrintSettingsBase::get_duplex () noexcept
{
  typedef ::GtkPrintDuplex (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_duplex;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const gchar* gtk_print_settings_get_finishings (GtkPrintSettings* settings);
// const char* gtk_print_settings_get_finishings (::GtkPrintSettings* settings);
std::string base::PrintSettingsBase::get_finishings () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_finishings;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gtk_print_settings_get_int (GtkPrintSettings* settings, const gchar* key);
// gint gtk_print_settings_get_int (::GtkPrintSettings* settings, const char* key);
gint base::PrintSettingsBase::get_int (const std::string & key) noexcept
{
  typedef gint (*call_wrap_t) (::GtkPrintSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_int;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// gint gtk_print_settings_get_int_with_default (GtkPrintSettings* settings, const gchar* key, gint def);
// gint gtk_print_settings_get_int_with_default (::GtkPrintSettings* settings, const char* key, gint def);
gint base::PrintSettingsBase::get_int_with_default (const std::string & key, gint def) noexcept
{
  typedef gint (*call_wrap_t) (::GtkPrintSettings* settings, const char* key, gint def);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_int_with_default;
  auto def_to_c = def;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c), (gint) (def_to_c));
  return _temp_ret;
}

// gdouble gtk_print_settings_get_length (GtkPrintSettings* settings, const gchar* key, GtkUnit unit);
// gdouble gtk_print_settings_get_length (::GtkPrintSettings* settings, const char* key, ::GtkUnit unit);
gdouble base::PrintSettingsBase::get_length (const std::string & key, Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPrintSettings* settings, const char* key, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_length;
  auto unit_to_c = gi::unwrap (unit);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// const gchar* gtk_print_settings_get_media_type (GtkPrintSettings* settings);
// const char* gtk_print_settings_get_media_type (::GtkPrintSettings* settings);
std::string base::PrintSettingsBase::get_media_type () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_media_type;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gtk_print_settings_get_n_copies (GtkPrintSettings* settings);
// gint gtk_print_settings_get_n_copies (::GtkPrintSettings* settings);
gint base::PrintSettingsBase::get_n_copies () noexcept
{
  typedef gint (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_n_copies;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// gint gtk_print_settings_get_number_up (GtkPrintSettings* settings);
// gint gtk_print_settings_get_number_up (::GtkPrintSettings* settings);
gint base::PrintSettingsBase::get_number_up () noexcept
{
  typedef gint (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_number_up;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// GtkNumberUpLayout gtk_print_settings_get_number_up_layout (GtkPrintSettings* settings);
// ::GtkNumberUpLayout gtk_print_settings_get_number_up_layout (::GtkPrintSettings* settings);
Gtk::NumberUpLayout base::PrintSettingsBase::get_number_up_layout () noexcept
{
  typedef ::GtkNumberUpLayout (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_number_up_layout;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkPageOrientation gtk_print_settings_get_orientation (GtkPrintSettings* settings);
// ::GtkPageOrientation gtk_print_settings_get_orientation (::GtkPrintSettings* settings);
Gtk::PageOrientation base::PrintSettingsBase::get_orientation () noexcept
{
  typedef ::GtkPageOrientation (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_orientation;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const gchar* gtk_print_settings_get_output_bin (GtkPrintSettings* settings);
// const char* gtk_print_settings_get_output_bin (::GtkPrintSettings* settings);
std::string base::PrintSettingsBase::get_output_bin () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_output_bin;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkPageRange* gtk_print_settings_get_page_ranges (GtkPrintSettings* settings, gint* num_ranges);
// ::GtkPageRange** gtk_print_settings_get_page_ranges (::GtkPrintSettings* settings, gint* num_ranges);
// SKIP; inconsistent return  pointer depth (1 vs 2)

// GtkPageSet gtk_print_settings_get_page_set (GtkPrintSettings* settings);
// ::GtkPageSet gtk_print_settings_get_page_set (::GtkPrintSettings* settings);
Gtk::PageSet base::PrintSettingsBase::get_page_set () noexcept
{
  typedef ::GtkPageSet (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_page_set;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gdouble gtk_print_settings_get_paper_height (GtkPrintSettings* settings, GtkUnit unit);
// gdouble gtk_print_settings_get_paper_height (::GtkPrintSettings* settings, ::GtkUnit unit);
gdouble base::PrintSettingsBase::get_paper_height (Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPrintSettings* settings, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_paper_height;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// GtkPaperSize* gtk_print_settings_get_paper_size (GtkPrintSettings* settings);
// ::GtkPaperSize* gtk_print_settings_get_paper_size (::GtkPrintSettings* settings);
Gtk::PaperSize base::PrintSettingsBase::get_paper_size () noexcept
{
  typedef ::GtkPaperSize* (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_paper_size;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gdouble gtk_print_settings_get_paper_width (GtkPrintSettings* settings, GtkUnit unit);
// gdouble gtk_print_settings_get_paper_width (::GtkPrintSettings* settings, ::GtkUnit unit);
gdouble base::PrintSettingsBase::get_paper_width (Gtk::Unit unit) noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPrintSettings* settings, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_paper_width;
  auto unit_to_c = gi::unwrap (unit);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GtkUnit) (unit_to_c));
  return _temp_ret;
}

// GtkPrintPages gtk_print_settings_get_print_pages (GtkPrintSettings* settings);
// ::GtkPrintPages gtk_print_settings_get_print_pages (::GtkPrintSettings* settings);
Gtk::PrintPages base::PrintSettingsBase::get_print_pages () noexcept
{
  typedef ::GtkPrintPages (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_print_pages;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const gchar* gtk_print_settings_get_printer (GtkPrintSettings* settings);
// const char* gtk_print_settings_get_printer (::GtkPrintSettings* settings);
std::string base::PrintSettingsBase::get_printer () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_printer;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gdouble gtk_print_settings_get_printer_lpi (GtkPrintSettings* settings);
// gdouble gtk_print_settings_get_printer_lpi (::GtkPrintSettings* settings);
gdouble base::PrintSettingsBase::get_printer_lpi () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_printer_lpi;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// GtkPrintQuality gtk_print_settings_get_quality (GtkPrintSettings* settings);
// ::GtkPrintQuality gtk_print_settings_get_quality (::GtkPrintSettings* settings);
Gtk::PrintQuality base::PrintSettingsBase::get_quality () noexcept
{
  typedef ::GtkPrintQuality (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_quality;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint gtk_print_settings_get_resolution (GtkPrintSettings* settings);
// gint gtk_print_settings_get_resolution (::GtkPrintSettings* settings);
gint base::PrintSettingsBase::get_resolution () noexcept
{
  typedef gint (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_resolution;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// gint gtk_print_settings_get_resolution_x (GtkPrintSettings* settings);
// gint gtk_print_settings_get_resolution_x (::GtkPrintSettings* settings);
gint base::PrintSettingsBase::get_resolution_x () noexcept
{
  typedef gint (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_resolution_x;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// gint gtk_print_settings_get_resolution_y (GtkPrintSettings* settings);
// gint gtk_print_settings_get_resolution_y (::GtkPrintSettings* settings);
gint base::PrintSettingsBase::get_resolution_y () noexcept
{
  typedef gint (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_resolution_y;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_print_settings_get_reverse (GtkPrintSettings* settings);
// gboolean gtk_print_settings_get_reverse (::GtkPrintSettings* settings);
bool base::PrintSettingsBase::get_reverse () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_reverse;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// gdouble gtk_print_settings_get_scale (GtkPrintSettings* settings);
// gdouble gtk_print_settings_get_scale (::GtkPrintSettings* settings);
gdouble base::PrintSettingsBase::get_scale () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_scale;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_print_settings_get_use_color (GtkPrintSettings* settings);
// gboolean gtk_print_settings_get_use_color (::GtkPrintSettings* settings);
bool base::PrintSettingsBase::get_use_color () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_get_use_color;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_print_settings_has_key (GtkPrintSettings* settings, const gchar* key);
// gboolean gtk_print_settings_has_key (::GtkPrintSettings* settings, const char* key);
bool base::PrintSettingsBase::has_key (const std::string & key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_has_key;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// gboolean gtk_print_settings_load_file (GtkPrintSettings* settings, const gchar* file_name, GError ** error);
// gboolean gtk_print_settings_load_file (::GtkPrintSettings* settings, const char* file_name, GError ** error);
bool base::PrintSettingsBase::load_file (const std::string & file_name)
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, const char* file_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_load_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (file_name_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PrintSettingsBase::load_file (const std::string & file_name, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, const char* file_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_load_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (file_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean gtk_print_settings_load_key_file (GtkPrintSettings* settings, GKeyFile* key_file, const gchar* group_name, GError ** error);
// gboolean gtk_print_settings_load_key_file (::GtkPrintSettings* settings, ::GKeyFile* key_file, const char* group_name, GError ** error);
bool base::PrintSettingsBase::load_key_file (GLib::KeyFile key_file, const std::string & group_name)
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, ::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_load_key_file;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PrintSettingsBase::load_key_file (GLib::KeyFile key_file)
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, ::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_load_key_file;
  auto group_name_to_c = nullptr;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PrintSettingsBase::load_key_file (GLib::KeyFile key_file, const std::string & group_name, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, ::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_load_key_file;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::PrintSettingsBase::load_key_file (GLib::KeyFile key_file, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, ::GKeyFile* key_file, const char* group_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_load_key_file;
  auto group_name_to_c = nullptr;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void gtk_print_settings_set (GtkPrintSettings* settings, const gchar* key, const gchar* value);
// void gtk_print_settings_set (::GtkPrintSettings* settings, const char* key, const char* value);
void base::PrintSettingsBase::set (const std::string & key, const std::string & value) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* key, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c), (const char*) (value_to_c));
}
void base::PrintSettingsBase::set (const std::string & key) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* key, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set;
  auto value_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c), (const char*) (value_to_c));
}

// void gtk_print_settings_set_bool (GtkPrintSettings* settings, const gchar* key, gboolean value);
// void gtk_print_settings_set_bool (::GtkPrintSettings* settings, const char* key, gboolean value);
void base::PrintSettingsBase::set_bool (const std::string & key, gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* key, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_bool;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c), (gboolean) (value_to_c));
}

// void gtk_print_settings_set_collate (GtkPrintSettings* settings, gboolean collate);
// void gtk_print_settings_set_collate (::GtkPrintSettings* settings, gboolean collate);
void base::PrintSettingsBase::set_collate (gboolean collate) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gboolean collate);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_collate;
  auto collate_to_c = collate;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gboolean) (collate_to_c));
}

// void gtk_print_settings_set_default_source (GtkPrintSettings* settings, const gchar* default_source);
// void gtk_print_settings_set_default_source (::GtkPrintSettings* settings, const char* default_source);
void base::PrintSettingsBase::set_default_source (const std::string & default_source) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* default_source);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_default_source;
  auto default_source_to_c = gi::unwrap (default_source, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (default_source_to_c));
}

// void gtk_print_settings_set_dither (GtkPrintSettings* settings, const gchar* dither);
// void gtk_print_settings_set_dither (::GtkPrintSettings* settings, const char* dither);
void base::PrintSettingsBase::set_dither (const std::string & dither) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* dither);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_dither;
  auto dither_to_c = gi::unwrap (dither, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (dither_to_c));
}

// void gtk_print_settings_set_double (GtkPrintSettings* settings, const gchar* key, gdouble value);
// void gtk_print_settings_set_double (::GtkPrintSettings* settings, const char* key, gdouble value);
void base::PrintSettingsBase::set_double (const std::string & key, gdouble value) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* key, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_double;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c), (gdouble) (value_to_c));
}

// void gtk_print_settings_set_duplex (GtkPrintSettings* settings, GtkPrintDuplex duplex);
// void gtk_print_settings_set_duplex (::GtkPrintSettings* settings, ::GtkPrintDuplex duplex);
void base::PrintSettingsBase::set_duplex (Gtk::PrintDuplex duplex) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, ::GtkPrintDuplex duplex);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_duplex;
  auto duplex_to_c = gi::unwrap (duplex);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GtkPrintDuplex) (duplex_to_c));
}

// void gtk_print_settings_set_finishings (GtkPrintSettings* settings, const gchar* finishings);
// void gtk_print_settings_set_finishings (::GtkPrintSettings* settings, const char* finishings);
void base::PrintSettingsBase::set_finishings (const std::string & finishings) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* finishings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_finishings;
  auto finishings_to_c = gi::unwrap (finishings, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (finishings_to_c));
}

// void gtk_print_settings_set_int (GtkPrintSettings* settings, const gchar* key, gint value);
// void gtk_print_settings_set_int (::GtkPrintSettings* settings, const char* key, gint value);
void base::PrintSettingsBase::set_int (const std::string & key, gint value) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* key, gint value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_int;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c), (gint) (value_to_c));
}

// void gtk_print_settings_set_length (GtkPrintSettings* settings, const gchar* key, gdouble value, GtkUnit unit);
// void gtk_print_settings_set_length (::GtkPrintSettings* settings, const char* key, gdouble value, ::GtkUnit unit);
void base::PrintSettingsBase::set_length (const std::string & key, gdouble value, Gtk::Unit unit) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* key, gdouble value, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_length;
  auto unit_to_c = gi::unwrap (unit);
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c), (gdouble) (value_to_c), (::GtkUnit) (unit_to_c));
}

// void gtk_print_settings_set_media_type (GtkPrintSettings* settings, const gchar* media_type);
// void gtk_print_settings_set_media_type (::GtkPrintSettings* settings, const char* media_type);
void base::PrintSettingsBase::set_media_type (const std::string & media_type) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* media_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_media_type;
  auto media_type_to_c = gi::unwrap (media_type, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (media_type_to_c));
}

// void gtk_print_settings_set_n_copies (GtkPrintSettings* settings, gint num_copies);
// void gtk_print_settings_set_n_copies (::GtkPrintSettings* settings, gint num_copies);
void base::PrintSettingsBase::set_n_copies (gint num_copies) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gint num_copies);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_n_copies;
  auto num_copies_to_c = num_copies;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gint) (num_copies_to_c));
}

// void gtk_print_settings_set_number_up (GtkPrintSettings* settings, gint number_up);
// void gtk_print_settings_set_number_up (::GtkPrintSettings* settings, gint number_up);
void base::PrintSettingsBase::set_number_up (gint number_up) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gint number_up);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_number_up;
  auto number_up_to_c = number_up;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gint) (number_up_to_c));
}

// void gtk_print_settings_set_number_up_layout (GtkPrintSettings* settings, GtkNumberUpLayout number_up_layout);
// void gtk_print_settings_set_number_up_layout (::GtkPrintSettings* settings, ::GtkNumberUpLayout number_up_layout);
void base::PrintSettingsBase::set_number_up_layout (Gtk::NumberUpLayout number_up_layout) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, ::GtkNumberUpLayout number_up_layout);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_number_up_layout;
  auto number_up_layout_to_c = gi::unwrap (number_up_layout);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GtkNumberUpLayout) (number_up_layout_to_c));
}

// void gtk_print_settings_set_orientation (GtkPrintSettings* settings, GtkPageOrientation orientation);
// void gtk_print_settings_set_orientation (::GtkPrintSettings* settings, ::GtkPageOrientation orientation);
void base::PrintSettingsBase::set_orientation (Gtk::PageOrientation orientation) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, ::GtkPageOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_orientation;
  auto orientation_to_c = gi::unwrap (orientation);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GtkPageOrientation) (orientation_to_c));
}

// void gtk_print_settings_set_output_bin (GtkPrintSettings* settings, const gchar* output_bin);
// void gtk_print_settings_set_output_bin (::GtkPrintSettings* settings, const char* output_bin);
void base::PrintSettingsBase::set_output_bin (const std::string & output_bin) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* output_bin);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_output_bin;
  auto output_bin_to_c = gi::unwrap (output_bin, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (output_bin_to_c));
}

// void gtk_print_settings_set_page_ranges (GtkPrintSettings* settings, GtkPageRange* page_ranges, gint num_ranges);
// void gtk_print_settings_set_page_ranges (::GtkPrintSettings* settings, ::GtkPageRange** page_ranges, gint num_ranges);
// SKIP; inconsistent in page_ranges pointer depth (1 vs 2)

// void gtk_print_settings_set_page_set (GtkPrintSettings* settings, GtkPageSet page_set);
// void gtk_print_settings_set_page_set (::GtkPrintSettings* settings, ::GtkPageSet page_set);
void base::PrintSettingsBase::set_page_set (Gtk::PageSet page_set) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, ::GtkPageSet page_set);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_page_set;
  auto page_set_to_c = gi::unwrap (page_set);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GtkPageSet) (page_set_to_c));
}

// void gtk_print_settings_set_paper_height (GtkPrintSettings* settings, gdouble height, GtkUnit unit);
// void gtk_print_settings_set_paper_height (::GtkPrintSettings* settings, gdouble height, ::GtkUnit unit);
void base::PrintSettingsBase::set_paper_height (gdouble height, Gtk::Unit unit) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gdouble height, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_paper_height;
  auto unit_to_c = gi::unwrap (unit);
  auto height_to_c = height;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gdouble) (height_to_c), (::GtkUnit) (unit_to_c));
}

// void gtk_print_settings_set_paper_size (GtkPrintSettings* settings, GtkPaperSize* paper_size);
// void gtk_print_settings_set_paper_size (::GtkPrintSettings* settings, ::GtkPaperSize* paper_size);
void base::PrintSettingsBase::set_paper_size (Gtk::PaperSize paper_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, ::GtkPaperSize* paper_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_paper_size;
  auto paper_size_to_c = gi::unwrap (paper_size, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GtkPaperSize*) (paper_size_to_c));
}

// void gtk_print_settings_set_paper_width (GtkPrintSettings* settings, gdouble width, GtkUnit unit);
// void gtk_print_settings_set_paper_width (::GtkPrintSettings* settings, gdouble width, ::GtkUnit unit);
void base::PrintSettingsBase::set_paper_width (gdouble width, Gtk::Unit unit) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gdouble width, ::GtkUnit unit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_paper_width;
  auto unit_to_c = gi::unwrap (unit);
  auto width_to_c = width;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gdouble) (width_to_c), (::GtkUnit) (unit_to_c));
}

// void gtk_print_settings_set_print_pages (GtkPrintSettings* settings, GtkPrintPages pages);
// void gtk_print_settings_set_print_pages (::GtkPrintSettings* settings, ::GtkPrintPages pages);
void base::PrintSettingsBase::set_print_pages (Gtk::PrintPages pages) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, ::GtkPrintPages pages);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_print_pages;
  auto pages_to_c = gi::unwrap (pages);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GtkPrintPages) (pages_to_c));
}

// void gtk_print_settings_set_printer (GtkPrintSettings* settings, const gchar* printer);
// void gtk_print_settings_set_printer (::GtkPrintSettings* settings, const char* printer);
void base::PrintSettingsBase::set_printer (const std::string & printer) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* printer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_printer;
  auto printer_to_c = gi::unwrap (printer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (printer_to_c));
}

// void gtk_print_settings_set_printer_lpi (GtkPrintSettings* settings, gdouble lpi);
// void gtk_print_settings_set_printer_lpi (::GtkPrintSettings* settings, gdouble lpi);
void base::PrintSettingsBase::set_printer_lpi (gdouble lpi) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gdouble lpi);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_printer_lpi;
  auto lpi_to_c = lpi;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gdouble) (lpi_to_c));
}

// void gtk_print_settings_set_quality (GtkPrintSettings* settings, GtkPrintQuality quality);
// void gtk_print_settings_set_quality (::GtkPrintSettings* settings, ::GtkPrintQuality quality);
void base::PrintSettingsBase::set_quality (Gtk::PrintQuality quality) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, ::GtkPrintQuality quality);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_quality;
  auto quality_to_c = gi::unwrap (quality);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GtkPrintQuality) (quality_to_c));
}

// void gtk_print_settings_set_resolution (GtkPrintSettings* settings, gint resolution);
// void gtk_print_settings_set_resolution (::GtkPrintSettings* settings, gint resolution);
void base::PrintSettingsBase::set_resolution (gint resolution) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gint resolution);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_resolution;
  auto resolution_to_c = resolution;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gint) (resolution_to_c));
}

// void gtk_print_settings_set_resolution_xy (GtkPrintSettings* settings, gint resolution_x, gint resolution_y);
// void gtk_print_settings_set_resolution_xy (::GtkPrintSettings* settings, gint resolution_x, gint resolution_y);
void base::PrintSettingsBase::set_resolution_xy (gint resolution_x, gint resolution_y) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gint resolution_x, gint resolution_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_resolution_xy;
  auto resolution_y_to_c = resolution_y;
  auto resolution_x_to_c = resolution_x;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gint) (resolution_x_to_c), (gint) (resolution_y_to_c));
}

// void gtk_print_settings_set_reverse (GtkPrintSettings* settings, gboolean reverse);
// void gtk_print_settings_set_reverse (::GtkPrintSettings* settings, gboolean reverse);
void base::PrintSettingsBase::set_reverse (gboolean reverse) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gboolean reverse);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_reverse;
  auto reverse_to_c = reverse;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gboolean) (reverse_to_c));
}

// void gtk_print_settings_set_scale (GtkPrintSettings* settings, gdouble scale);
// void gtk_print_settings_set_scale (::GtkPrintSettings* settings, gdouble scale);
void base::PrintSettingsBase::set_scale (gdouble scale) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gdouble scale);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_scale;
  auto scale_to_c = scale;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gdouble) (scale_to_c));
}

// void gtk_print_settings_set_use_color (GtkPrintSettings* settings, gboolean use_color);
// void gtk_print_settings_set_use_color (::GtkPrintSettings* settings, gboolean use_color);
void base::PrintSettingsBase::set_use_color (gboolean use_color) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, gboolean use_color);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_set_use_color;
  auto use_color_to_c = use_color;
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (gboolean) (use_color_to_c));
}

// gboolean gtk_print_settings_to_file (GtkPrintSettings* settings, const gchar* file_name, GError ** error);
// gboolean gtk_print_settings_to_file (::GtkPrintSettings* settings, const char* file_name, GError ** error);
bool base::PrintSettingsBase::to_file (const std::string & file_name)
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, const char* file_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_to_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (file_name_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::PrintSettingsBase::to_file (const std::string & file_name, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkPrintSettings* settings, const char* file_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_to_file;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (file_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GVariant* gtk_print_settings_to_gvariant (GtkPrintSettings* settings);
// ::GVariant* gtk_print_settings_to_gvariant (::GtkPrintSettings* settings);
GLib::Variant base::PrintSettingsBase::to_gvariant () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_to_gvariant;
  auto _temp_ret = call_wrap_v ((::GtkPrintSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_print_settings_to_key_file (GtkPrintSettings* settings, GKeyFile* key_file, const gchar* group_name);
// void gtk_print_settings_to_key_file (::GtkPrintSettings* settings, ::GKeyFile* key_file, const char* group_name);
void base::PrintSettingsBase::to_key_file (GLib::KeyFile key_file, const std::string & group_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, ::GKeyFile* key_file, const char* group_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_to_key_file;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c));
}
void base::PrintSettingsBase::to_key_file (GLib::KeyFile key_file) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, ::GKeyFile* key_file, const char* group_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_to_key_file;
  auto group_name_to_c = nullptr;
  auto key_file_to_c = gi::unwrap (key_file, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (::GKeyFile*) (key_file_to_c), (const char*) (group_name_to_c));
}

// void gtk_print_settings_unset (GtkPrintSettings* settings, const gchar* key);
// void gtk_print_settings_unset (::GtkPrintSettings* settings, const char* key);
void base::PrintSettingsBase::unset (const std::string & key) noexcept
{
  typedef void (*call_wrap_t) (::GtkPrintSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_settings_unset;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPrintSettings*) (gobj_()), (const char*) (key_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printsettings_extra_def_impl.hpp>)
#include <gtk/printsettings_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printsettings_extra_impl.hpp>)
#include <gtk/printsettings_extra_impl.hpp>
#endif
#endif

#endif
