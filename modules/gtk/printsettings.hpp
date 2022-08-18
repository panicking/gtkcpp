// AUTO-GENERATED

#ifndef _GI_GTK_PRINTSETTINGS_HPP_
#define _GI_GTK_PRINTSETTINGS_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class PageRange;
class PaperSize;

class PrintSettings;

namespace base {


#define GI_GTK_PRINTSETTINGS_BASE base::PrintSettingsBase
class PrintSettingsBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkPrintSettings BaseObjectType;

PrintSettingsBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_print_settings_get_type(); } 

// GtkPrintSettings* gtk_print_settings_new ();
// ::GtkPrintSettings* gtk_print_settings_new ();
static GI_INLINE_DECL Gtk::PrintSettings new_ () noexcept;

// GtkPrintSettings* gtk_print_settings_new_from_file (const gchar* file_name, GError ** error);
// ::GtkPrintSettings* gtk_print_settings_new_from_file (const char* file_name, GError ** error);
static GI_INLINE_DECL Gtk::PrintSettings new_from_file (const std::string & file_name);
static GI_INLINE_DECL Gtk::PrintSettings new_from_file (const std::string & file_name, GLib::Error * _error) noexcept;

// GtkPrintSettings* gtk_print_settings_new_from_gvariant (GVariant* variant);
// ::GtkPrintSettings* gtk_print_settings_new_from_gvariant (::GVariant* variant);
static GI_INLINE_DECL Gtk::PrintSettings new_from_gvariant (GLib::Variant variant) noexcept;

// GtkPrintSettings* gtk_print_settings_new_from_key_file (GKeyFile* key_file, const gchar* group_name, GError ** error);
// ::GtkPrintSettings* gtk_print_settings_new_from_key_file (::GKeyFile* key_file, const char* group_name, GError ** error);
static GI_INLINE_DECL Gtk::PrintSettings new_from_key_file (GLib::KeyFile key_file, const std::string & group_name);
static GI_INLINE_DECL Gtk::PrintSettings new_from_key_file (GLib::KeyFile key_file);
static GI_INLINE_DECL Gtk::PrintSettings new_from_key_file (GLib::KeyFile key_file, const std::string & group_name, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gtk::PrintSettings new_from_key_file (GLib::KeyFile key_file, GLib::Error * _error) noexcept;

// GtkPrintSettings* gtk_print_settings_copy (GtkPrintSettings* other);
// ::GtkPrintSettings* gtk_print_settings_copy (::GtkPrintSettings* other);
GI_INLINE_DECL Gtk::PrintSettings copy () noexcept;

// void gtk_print_settings_foreach (GtkPrintSettings* settings, GtkPrintSettingsFunc func, gpointer user_data);
// void gtk_print_settings_foreach (::GtkPrintSettings* settings, Gtk::PrintSettingsFunc::cfunction_type func, void* user_data);
GI_INLINE_DECL void foreach (Gtk::PrintSettingsFunc func) noexcept;

// const gchar* gtk_print_settings_get (GtkPrintSettings* settings, const gchar* key);
// const char* gtk_print_settings_get (::GtkPrintSettings* settings, const char* key);
GI_INLINE_DECL std::string get (const std::string & key) noexcept;

// gboolean gtk_print_settings_get_bool (GtkPrintSettings* settings, const gchar* key);
// gboolean gtk_print_settings_get_bool (::GtkPrintSettings* settings, const char* key);
GI_INLINE_DECL bool get_bool (const std::string & key) noexcept;

// gboolean gtk_print_settings_get_collate (GtkPrintSettings* settings);
// gboolean gtk_print_settings_get_collate (::GtkPrintSettings* settings);
GI_INLINE_DECL bool get_collate () noexcept;

// const gchar* gtk_print_settings_get_default_source (GtkPrintSettings* settings);
// const char* gtk_print_settings_get_default_source (::GtkPrintSettings* settings);
GI_INLINE_DECL std::string get_default_source () noexcept;

// const gchar* gtk_print_settings_get_dither (GtkPrintSettings* settings);
// const char* gtk_print_settings_get_dither (::GtkPrintSettings* settings);
GI_INLINE_DECL std::string get_dither () noexcept;

// gdouble gtk_print_settings_get_double (GtkPrintSettings* settings, const gchar* key);
// gdouble gtk_print_settings_get_double (::GtkPrintSettings* settings, const char* key);
GI_INLINE_DECL gdouble get_double (const std::string & key) noexcept;

// gdouble gtk_print_settings_get_double_with_default (GtkPrintSettings* settings, const gchar* key, gdouble def);
// gdouble gtk_print_settings_get_double_with_default (::GtkPrintSettings* settings, const char* key, gdouble def);
GI_INLINE_DECL gdouble get_double_with_default (const std::string & key, gdouble def) noexcept;

// GtkPrintDuplex gtk_print_settings_get_duplex (GtkPrintSettings* settings);
// ::GtkPrintDuplex gtk_print_settings_get_duplex (::GtkPrintSettings* settings);
GI_INLINE_DECL Gtk::PrintDuplex get_duplex () noexcept;

// const gchar* gtk_print_settings_get_finishings (GtkPrintSettings* settings);
// const char* gtk_print_settings_get_finishings (::GtkPrintSettings* settings);
GI_INLINE_DECL std::string get_finishings () noexcept;

// gint gtk_print_settings_get_int (GtkPrintSettings* settings, const gchar* key);
// gint gtk_print_settings_get_int (::GtkPrintSettings* settings, const char* key);
GI_INLINE_DECL gint get_int (const std::string & key) noexcept;

// gint gtk_print_settings_get_int_with_default (GtkPrintSettings* settings, const gchar* key, gint def);
// gint gtk_print_settings_get_int_with_default (::GtkPrintSettings* settings, const char* key, gint def);
GI_INLINE_DECL gint get_int_with_default (const std::string & key, gint def) noexcept;

// gdouble gtk_print_settings_get_length (GtkPrintSettings* settings, const gchar* key, GtkUnit unit);
// gdouble gtk_print_settings_get_length (::GtkPrintSettings* settings, const char* key, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_length (const std::string & key, Gtk::Unit unit) noexcept;

// const gchar* gtk_print_settings_get_media_type (GtkPrintSettings* settings);
// const char* gtk_print_settings_get_media_type (::GtkPrintSettings* settings);
GI_INLINE_DECL std::string get_media_type () noexcept;

// gint gtk_print_settings_get_n_copies (GtkPrintSettings* settings);
// gint gtk_print_settings_get_n_copies (::GtkPrintSettings* settings);
GI_INLINE_DECL gint get_n_copies () noexcept;

// gint gtk_print_settings_get_number_up (GtkPrintSettings* settings);
// gint gtk_print_settings_get_number_up (::GtkPrintSettings* settings);
GI_INLINE_DECL gint get_number_up () noexcept;

// GtkNumberUpLayout gtk_print_settings_get_number_up_layout (GtkPrintSettings* settings);
// ::GtkNumberUpLayout gtk_print_settings_get_number_up_layout (::GtkPrintSettings* settings);
GI_INLINE_DECL Gtk::NumberUpLayout get_number_up_layout () noexcept;

// GtkPageOrientation gtk_print_settings_get_orientation (GtkPrintSettings* settings);
// ::GtkPageOrientation gtk_print_settings_get_orientation (::GtkPrintSettings* settings);
GI_INLINE_DECL Gtk::PageOrientation get_orientation () noexcept;

// const gchar* gtk_print_settings_get_output_bin (GtkPrintSettings* settings);
// const char* gtk_print_settings_get_output_bin (::GtkPrintSettings* settings);
GI_INLINE_DECL std::string get_output_bin () noexcept;

// GtkPageRange* gtk_print_settings_get_page_ranges (GtkPrintSettings* settings, gint* num_ranges);
// ::GtkPageRange** gtk_print_settings_get_page_ranges (::GtkPrintSettings* settings, gint* num_ranges);
// SKIP; inconsistent return  pointer depth (1 vs 2)

// GtkPageSet gtk_print_settings_get_page_set (GtkPrintSettings* settings);
// ::GtkPageSet gtk_print_settings_get_page_set (::GtkPrintSettings* settings);
GI_INLINE_DECL Gtk::PageSet get_page_set () noexcept;

// gdouble gtk_print_settings_get_paper_height (GtkPrintSettings* settings, GtkUnit unit);
// gdouble gtk_print_settings_get_paper_height (::GtkPrintSettings* settings, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_paper_height (Gtk::Unit unit) noexcept;

// GtkPaperSize* gtk_print_settings_get_paper_size (GtkPrintSettings* settings);
// ::GtkPaperSize* gtk_print_settings_get_paper_size (::GtkPrintSettings* settings);
GI_INLINE_DECL Gtk::PaperSize get_paper_size () noexcept;

// gdouble gtk_print_settings_get_paper_width (GtkPrintSettings* settings, GtkUnit unit);
// gdouble gtk_print_settings_get_paper_width (::GtkPrintSettings* settings, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_paper_width (Gtk::Unit unit) noexcept;

// GtkPrintPages gtk_print_settings_get_print_pages (GtkPrintSettings* settings);
// ::GtkPrintPages gtk_print_settings_get_print_pages (::GtkPrintSettings* settings);
GI_INLINE_DECL Gtk::PrintPages get_print_pages () noexcept;

// const gchar* gtk_print_settings_get_printer (GtkPrintSettings* settings);
// const char* gtk_print_settings_get_printer (::GtkPrintSettings* settings);
GI_INLINE_DECL std::string get_printer () noexcept;

// gdouble gtk_print_settings_get_printer_lpi (GtkPrintSettings* settings);
// gdouble gtk_print_settings_get_printer_lpi (::GtkPrintSettings* settings);
GI_INLINE_DECL gdouble get_printer_lpi () noexcept;

// GtkPrintQuality gtk_print_settings_get_quality (GtkPrintSettings* settings);
// ::GtkPrintQuality gtk_print_settings_get_quality (::GtkPrintSettings* settings);
GI_INLINE_DECL Gtk::PrintQuality get_quality () noexcept;

// gint gtk_print_settings_get_resolution (GtkPrintSettings* settings);
// gint gtk_print_settings_get_resolution (::GtkPrintSettings* settings);
GI_INLINE_DECL gint get_resolution () noexcept;

// gint gtk_print_settings_get_resolution_x (GtkPrintSettings* settings);
// gint gtk_print_settings_get_resolution_x (::GtkPrintSettings* settings);
GI_INLINE_DECL gint get_resolution_x () noexcept;

// gint gtk_print_settings_get_resolution_y (GtkPrintSettings* settings);
// gint gtk_print_settings_get_resolution_y (::GtkPrintSettings* settings);
GI_INLINE_DECL gint get_resolution_y () noexcept;

// gboolean gtk_print_settings_get_reverse (GtkPrintSettings* settings);
// gboolean gtk_print_settings_get_reverse (::GtkPrintSettings* settings);
GI_INLINE_DECL bool get_reverse () noexcept;

// gdouble gtk_print_settings_get_scale (GtkPrintSettings* settings);
// gdouble gtk_print_settings_get_scale (::GtkPrintSettings* settings);
GI_INLINE_DECL gdouble get_scale () noexcept;

// gboolean gtk_print_settings_get_use_color (GtkPrintSettings* settings);
// gboolean gtk_print_settings_get_use_color (::GtkPrintSettings* settings);
GI_INLINE_DECL bool get_use_color () noexcept;

// gboolean gtk_print_settings_has_key (GtkPrintSettings* settings, const gchar* key);
// gboolean gtk_print_settings_has_key (::GtkPrintSettings* settings, const char* key);
GI_INLINE_DECL bool has_key (const std::string & key) noexcept;

// gboolean gtk_print_settings_load_file (GtkPrintSettings* settings, const gchar* file_name, GError ** error);
// gboolean gtk_print_settings_load_file (::GtkPrintSettings* settings, const char* file_name, GError ** error);
GI_INLINE_DECL bool load_file (const std::string & file_name);
GI_INLINE_DECL bool load_file (const std::string & file_name, GLib::Error * _error) noexcept;

// gboolean gtk_print_settings_load_key_file (GtkPrintSettings* settings, GKeyFile* key_file, const gchar* group_name, GError ** error);
// gboolean gtk_print_settings_load_key_file (::GtkPrintSettings* settings, ::GKeyFile* key_file, const char* group_name, GError ** error);
GI_INLINE_DECL bool load_key_file (GLib::KeyFile key_file, const std::string & group_name);
GI_INLINE_DECL bool load_key_file (GLib::KeyFile key_file);
GI_INLINE_DECL bool load_key_file (GLib::KeyFile key_file, const std::string & group_name, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool load_key_file (GLib::KeyFile key_file, GLib::Error * _error) noexcept;

// void gtk_print_settings_set (GtkPrintSettings* settings, const gchar* key, const gchar* value);
// void gtk_print_settings_set (::GtkPrintSettings* settings, const char* key, const char* value);
GI_INLINE_DECL void set (const std::string & key, const std::string & value) noexcept;
GI_INLINE_DECL void set (const std::string & key) noexcept;

// void gtk_print_settings_set_bool (GtkPrintSettings* settings, const gchar* key, gboolean value);
// void gtk_print_settings_set_bool (::GtkPrintSettings* settings, const char* key, gboolean value);
GI_INLINE_DECL void set_bool (const std::string & key, gboolean value) noexcept;

// void gtk_print_settings_set_collate (GtkPrintSettings* settings, gboolean collate);
// void gtk_print_settings_set_collate (::GtkPrintSettings* settings, gboolean collate);
GI_INLINE_DECL void set_collate (gboolean collate) noexcept;

// void gtk_print_settings_set_default_source (GtkPrintSettings* settings, const gchar* default_source);
// void gtk_print_settings_set_default_source (::GtkPrintSettings* settings, const char* default_source);
GI_INLINE_DECL void set_default_source (const std::string & default_source) noexcept;

// void gtk_print_settings_set_dither (GtkPrintSettings* settings, const gchar* dither);
// void gtk_print_settings_set_dither (::GtkPrintSettings* settings, const char* dither);
GI_INLINE_DECL void set_dither (const std::string & dither) noexcept;

// void gtk_print_settings_set_double (GtkPrintSettings* settings, const gchar* key, gdouble value);
// void gtk_print_settings_set_double (::GtkPrintSettings* settings, const char* key, gdouble value);
GI_INLINE_DECL void set_double (const std::string & key, gdouble value) noexcept;

// void gtk_print_settings_set_duplex (GtkPrintSettings* settings, GtkPrintDuplex duplex);
// void gtk_print_settings_set_duplex (::GtkPrintSettings* settings, ::GtkPrintDuplex duplex);
GI_INLINE_DECL void set_duplex (Gtk::PrintDuplex duplex) noexcept;

// void gtk_print_settings_set_finishings (GtkPrintSettings* settings, const gchar* finishings);
// void gtk_print_settings_set_finishings (::GtkPrintSettings* settings, const char* finishings);
GI_INLINE_DECL void set_finishings (const std::string & finishings) noexcept;

// void gtk_print_settings_set_int (GtkPrintSettings* settings, const gchar* key, gint value);
// void gtk_print_settings_set_int (::GtkPrintSettings* settings, const char* key, gint value);
GI_INLINE_DECL void set_int (const std::string & key, gint value) noexcept;

// void gtk_print_settings_set_length (GtkPrintSettings* settings, const gchar* key, gdouble value, GtkUnit unit);
// void gtk_print_settings_set_length (::GtkPrintSettings* settings, const char* key, gdouble value, ::GtkUnit unit);
GI_INLINE_DECL void set_length (const std::string & key, gdouble value, Gtk::Unit unit) noexcept;

// void gtk_print_settings_set_media_type (GtkPrintSettings* settings, const gchar* media_type);
// void gtk_print_settings_set_media_type (::GtkPrintSettings* settings, const char* media_type);
GI_INLINE_DECL void set_media_type (const std::string & media_type) noexcept;

// void gtk_print_settings_set_n_copies (GtkPrintSettings* settings, gint num_copies);
// void gtk_print_settings_set_n_copies (::GtkPrintSettings* settings, gint num_copies);
GI_INLINE_DECL void set_n_copies (gint num_copies) noexcept;

// void gtk_print_settings_set_number_up (GtkPrintSettings* settings, gint number_up);
// void gtk_print_settings_set_number_up (::GtkPrintSettings* settings, gint number_up);
GI_INLINE_DECL void set_number_up (gint number_up) noexcept;

// void gtk_print_settings_set_number_up_layout (GtkPrintSettings* settings, GtkNumberUpLayout number_up_layout);
// void gtk_print_settings_set_number_up_layout (::GtkPrintSettings* settings, ::GtkNumberUpLayout number_up_layout);
GI_INLINE_DECL void set_number_up_layout (Gtk::NumberUpLayout number_up_layout) noexcept;

// void gtk_print_settings_set_orientation (GtkPrintSettings* settings, GtkPageOrientation orientation);
// void gtk_print_settings_set_orientation (::GtkPrintSettings* settings, ::GtkPageOrientation orientation);
GI_INLINE_DECL void set_orientation (Gtk::PageOrientation orientation) noexcept;

// void gtk_print_settings_set_output_bin (GtkPrintSettings* settings, const gchar* output_bin);
// void gtk_print_settings_set_output_bin (::GtkPrintSettings* settings, const char* output_bin);
GI_INLINE_DECL void set_output_bin (const std::string & output_bin) noexcept;

// void gtk_print_settings_set_page_ranges (GtkPrintSettings* settings, GtkPageRange* page_ranges, gint num_ranges);
// void gtk_print_settings_set_page_ranges (::GtkPrintSettings* settings, ::GtkPageRange** page_ranges, gint num_ranges);
// SKIP; inconsistent in page_ranges pointer depth (1 vs 2)

// void gtk_print_settings_set_page_set (GtkPrintSettings* settings, GtkPageSet page_set);
// void gtk_print_settings_set_page_set (::GtkPrintSettings* settings, ::GtkPageSet page_set);
GI_INLINE_DECL void set_page_set (Gtk::PageSet page_set) noexcept;

// void gtk_print_settings_set_paper_height (GtkPrintSettings* settings, gdouble height, GtkUnit unit);
// void gtk_print_settings_set_paper_height (::GtkPrintSettings* settings, gdouble height, ::GtkUnit unit);
GI_INLINE_DECL void set_paper_height (gdouble height, Gtk::Unit unit) noexcept;

// void gtk_print_settings_set_paper_size (GtkPrintSettings* settings, GtkPaperSize* paper_size);
// void gtk_print_settings_set_paper_size (::GtkPrintSettings* settings, ::GtkPaperSize* paper_size);
GI_INLINE_DECL void set_paper_size (Gtk::PaperSize paper_size) noexcept;

// void gtk_print_settings_set_paper_width (GtkPrintSettings* settings, gdouble width, GtkUnit unit);
// void gtk_print_settings_set_paper_width (::GtkPrintSettings* settings, gdouble width, ::GtkUnit unit);
GI_INLINE_DECL void set_paper_width (gdouble width, Gtk::Unit unit) noexcept;

// void gtk_print_settings_set_print_pages (GtkPrintSettings* settings, GtkPrintPages pages);
// void gtk_print_settings_set_print_pages (::GtkPrintSettings* settings, ::GtkPrintPages pages);
GI_INLINE_DECL void set_print_pages (Gtk::PrintPages pages) noexcept;

// void gtk_print_settings_set_printer (GtkPrintSettings* settings, const gchar* printer);
// void gtk_print_settings_set_printer (::GtkPrintSettings* settings, const char* printer);
GI_INLINE_DECL void set_printer (const std::string & printer) noexcept;

// void gtk_print_settings_set_printer_lpi (GtkPrintSettings* settings, gdouble lpi);
// void gtk_print_settings_set_printer_lpi (::GtkPrintSettings* settings, gdouble lpi);
GI_INLINE_DECL void set_printer_lpi (gdouble lpi) noexcept;

// void gtk_print_settings_set_quality (GtkPrintSettings* settings, GtkPrintQuality quality);
// void gtk_print_settings_set_quality (::GtkPrintSettings* settings, ::GtkPrintQuality quality);
GI_INLINE_DECL void set_quality (Gtk::PrintQuality quality) noexcept;

// void gtk_print_settings_set_resolution (GtkPrintSettings* settings, gint resolution);
// void gtk_print_settings_set_resolution (::GtkPrintSettings* settings, gint resolution);
GI_INLINE_DECL void set_resolution (gint resolution) noexcept;

// void gtk_print_settings_set_resolution_xy (GtkPrintSettings* settings, gint resolution_x, gint resolution_y);
// void gtk_print_settings_set_resolution_xy (::GtkPrintSettings* settings, gint resolution_x, gint resolution_y);
GI_INLINE_DECL void set_resolution_xy (gint resolution_x, gint resolution_y) noexcept;

// void gtk_print_settings_set_reverse (GtkPrintSettings* settings, gboolean reverse);
// void gtk_print_settings_set_reverse (::GtkPrintSettings* settings, gboolean reverse);
GI_INLINE_DECL void set_reverse (gboolean reverse) noexcept;

// void gtk_print_settings_set_scale (GtkPrintSettings* settings, gdouble scale);
// void gtk_print_settings_set_scale (::GtkPrintSettings* settings, gdouble scale);
GI_INLINE_DECL void set_scale (gdouble scale) noexcept;

// void gtk_print_settings_set_use_color (GtkPrintSettings* settings, gboolean use_color);
// void gtk_print_settings_set_use_color (::GtkPrintSettings* settings, gboolean use_color);
GI_INLINE_DECL void set_use_color (gboolean use_color) noexcept;

// gboolean gtk_print_settings_to_file (GtkPrintSettings* settings, const gchar* file_name, GError ** error);
// gboolean gtk_print_settings_to_file (::GtkPrintSettings* settings, const char* file_name, GError ** error);
GI_INLINE_DECL bool to_file (const std::string & file_name);
GI_INLINE_DECL bool to_file (const std::string & file_name, GLib::Error * _error) noexcept;

// GVariant* gtk_print_settings_to_gvariant (GtkPrintSettings* settings);
// ::GVariant* gtk_print_settings_to_gvariant (::GtkPrintSettings* settings);
GI_INLINE_DECL GLib::Variant to_gvariant () noexcept;

// void gtk_print_settings_to_key_file (GtkPrintSettings* settings, GKeyFile* key_file, const gchar* group_name);
// void gtk_print_settings_to_key_file (::GtkPrintSettings* settings, ::GKeyFile* key_file, const char* group_name);
GI_INLINE_DECL void to_key_file (GLib::KeyFile key_file, const std::string & group_name) noexcept;
GI_INLINE_DECL void to_key_file (GLib::KeyFile key_file) noexcept;

// void gtk_print_settings_unset (GtkPrintSettings* settings, const gchar* key);
// void gtk_print_settings_unset (::GtkPrintSettings* settings, const char* key);
GI_INLINE_DECL void unset (const std::string & key) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/printsettings_extra_def.hpp>)
#include <gtk/printsettings_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/printsettings_extra.hpp>)
#include <gtk/printsettings_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PrintSettings : public GI_GTK_PRINTSETTINGS_BASE
{ typedef GI_GTK_PRINTSETTINGS_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPrintSettings>
{ typedef Gtk::PrintSettings type; }; 

} // namespace repository

} // namespace gi

#endif
