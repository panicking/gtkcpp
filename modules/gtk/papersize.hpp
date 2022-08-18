// AUTO-GENERATED

#ifndef _GI_GTK_PAPERSIZE_HPP_
#define _GI_GTK_PAPERSIZE_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class PaperSize;

namespace base {


#define GI_GTK_PAPERSIZE_BASE base::PaperSizeBase
class PaperSizeBase : public gi::detail::GBoxedWrapper<PaperSizeBase, ::GtkPaperSize>
{
typedef gi::detail::GBoxedWrapper<PaperSizeBase, ::GtkPaperSize> super_type;
public:

PaperSizeBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_paper_size_get_type(); } 

// GtkPaperSize* gtk_paper_size_new (const gchar* name);
// ::GtkPaperSize* gtk_paper_size_new (const char* name);
static GI_INLINE_DECL Gtk::PaperSize new_ (const std::string & name) noexcept;
static GI_INLINE_DECL Gtk::PaperSize new_ () noexcept;

// GtkPaperSize* gtk_paper_size_new_custom (const gchar* name, const gchar* display_name, gdouble width, gdouble height, GtkUnit unit);
// ::GtkPaperSize* gtk_paper_size_new_custom (const char* name, const char* display_name, gdouble width, gdouble height, ::GtkUnit unit);
static GI_INLINE_DECL Gtk::PaperSize new_custom (const std::string & name, const std::string & display_name, gdouble width, gdouble height, Gtk::Unit unit) noexcept;

// GtkPaperSize* gtk_paper_size_new_from_gvariant (GVariant* variant);
// ::GtkPaperSize* gtk_paper_size_new_from_gvariant (::GVariant* variant);
static GI_INLINE_DECL Gtk::PaperSize new_from_gvariant (GLib::Variant variant) noexcept;

// GtkPaperSize* gtk_paper_size_new_from_ipp (const gchar* ipp_name, gdouble width, gdouble height);
// ::GtkPaperSize* gtk_paper_size_new_from_ipp (const char* ipp_name, gdouble width, gdouble height);
static GI_INLINE_DECL Gtk::PaperSize new_from_ipp (const std::string & ipp_name, gdouble width, gdouble height) noexcept;

// GtkPaperSize* gtk_paper_size_new_from_key_file (GKeyFile* key_file, const gchar* group_name, GError ** error);
// ::GtkPaperSize* gtk_paper_size_new_from_key_file (::GKeyFile* key_file, const char* group_name, GError ** error);
static GI_INLINE_DECL Gtk::PaperSize new_from_key_file (GLib::KeyFile key_file, const std::string & group_name);
static GI_INLINE_DECL Gtk::PaperSize new_from_key_file (GLib::KeyFile key_file);
static GI_INLINE_DECL Gtk::PaperSize new_from_key_file (GLib::KeyFile key_file, const std::string & group_name, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gtk::PaperSize new_from_key_file (GLib::KeyFile key_file, GLib::Error * _error) noexcept;

// GtkPaperSize* gtk_paper_size_new_from_ppd (const gchar* ppd_name, const gchar* ppd_display_name, gdouble width, gdouble height);
// ::GtkPaperSize* gtk_paper_size_new_from_ppd (const char* ppd_name, const char* ppd_display_name, gdouble width, gdouble height);
static GI_INLINE_DECL Gtk::PaperSize new_from_ppd (const std::string & ppd_name, const std::string & ppd_display_name, gdouble width, gdouble height) noexcept;

// GtkPaperSize* gtk_paper_size_copy (GtkPaperSize* other);
// ::GtkPaperSize* gtk_paper_size_copy (::GtkPaperSize* other);
GI_INLINE_DECL Gtk::PaperSize copy () noexcept;

// void gtk_paper_size_free (GtkPaperSize* size);
// void gtk_paper_size_free (::GtkPaperSize* size);
// IGNORE; marked ignore

// gdouble gtk_paper_size_get_default_bottom_margin (GtkPaperSize* size, GtkUnit unit);
// gdouble gtk_paper_size_get_default_bottom_margin (::GtkPaperSize* size, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_default_bottom_margin (Gtk::Unit unit) noexcept;

// gdouble gtk_paper_size_get_default_left_margin (GtkPaperSize* size, GtkUnit unit);
// gdouble gtk_paper_size_get_default_left_margin (::GtkPaperSize* size, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_default_left_margin (Gtk::Unit unit) noexcept;

// gdouble gtk_paper_size_get_default_right_margin (GtkPaperSize* size, GtkUnit unit);
// gdouble gtk_paper_size_get_default_right_margin (::GtkPaperSize* size, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_default_right_margin (Gtk::Unit unit) noexcept;

// gdouble gtk_paper_size_get_default_top_margin (GtkPaperSize* size, GtkUnit unit);
// gdouble gtk_paper_size_get_default_top_margin (::GtkPaperSize* size, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_default_top_margin (Gtk::Unit unit) noexcept;

// const gchar* gtk_paper_size_get_display_name (GtkPaperSize* size);
// const char* gtk_paper_size_get_display_name (::GtkPaperSize* size);
GI_INLINE_DECL std::string get_display_name () noexcept;

// gdouble gtk_paper_size_get_height (GtkPaperSize* size, GtkUnit unit);
// gdouble gtk_paper_size_get_height (::GtkPaperSize* size, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_height (Gtk::Unit unit) noexcept;

// const gchar* gtk_paper_size_get_name (GtkPaperSize* size);
// const char* gtk_paper_size_get_name (::GtkPaperSize* size);
GI_INLINE_DECL std::string get_name () noexcept;

// const gchar* gtk_paper_size_get_ppd_name (GtkPaperSize* size);
// const char* gtk_paper_size_get_ppd_name (::GtkPaperSize* size);
GI_INLINE_DECL std::string get_ppd_name () noexcept;

// gdouble gtk_paper_size_get_width (GtkPaperSize* size, GtkUnit unit);
// gdouble gtk_paper_size_get_width (::GtkPaperSize* size, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_width (Gtk::Unit unit) noexcept;

// gboolean gtk_paper_size_is_custom (GtkPaperSize* size);
// gboolean gtk_paper_size_is_custom (::GtkPaperSize* size);
GI_INLINE_DECL bool is_custom () noexcept;

// gboolean gtk_paper_size_is_equal (GtkPaperSize* size1, GtkPaperSize* size2);
// gboolean gtk_paper_size_is_equal (::GtkPaperSize* size1, ::GtkPaperSize* size2);
GI_INLINE_DECL bool is_equal (Gtk::PaperSize size2) noexcept;

// gboolean gtk_paper_size_is_ipp (GtkPaperSize* size);
// gboolean gtk_paper_size_is_ipp (::GtkPaperSize* size);
GI_INLINE_DECL bool is_ipp () noexcept;

// void gtk_paper_size_set_size (GtkPaperSize* size, gdouble width, gdouble height, GtkUnit unit);
// void gtk_paper_size_set_size (::GtkPaperSize* size, gdouble width, gdouble height, ::GtkUnit unit);
GI_INLINE_DECL void set_size (gdouble width, gdouble height, Gtk::Unit unit) noexcept;

// GVariant* gtk_paper_size_to_gvariant (GtkPaperSize* paper_size);
// ::GVariant* gtk_paper_size_to_gvariant (::GtkPaperSize* paper_size);
GI_INLINE_DECL GLib::Variant to_gvariant () noexcept;

// void gtk_paper_size_to_key_file (GtkPaperSize* size, GKeyFile* key_file, const gchar* group_name);
// void gtk_paper_size_to_key_file (::GtkPaperSize* size, ::GKeyFile* key_file, const char* group_name);
GI_INLINE_DECL void to_key_file (GLib::KeyFile key_file, const std::string & group_name) noexcept;

// const gchar* gtk_paper_size_get_default ();
// const char* gtk_paper_size_get_default ();
static GI_INLINE_DECL std::string get_default () noexcept;

// GList* gtk_paper_size_get_paper_sizes (gboolean include_custom);
// ::GList* gtk_paper_size_get_paper_sizes (gboolean include_custom);
static GI_INLINE_DECL std::vector<Gtk::PaperSize> get_paper_sizes (gboolean include_custom) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/papersize_extra_def.hpp>)
#include <gtk/papersize_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/papersize_extra.hpp>)
#include <gtk/papersize_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PaperSize : public GI_GTK_PAPERSIZE_BASE
{ typedef GI_GTK_PAPERSIZE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPaperSize>
{ typedef Gtk::PaperSize type; }; 

} // namespace repository

} // namespace gi

#endif
