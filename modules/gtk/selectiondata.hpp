// AUTO-GENERATED

#ifndef _GI_GTK_SELECTIONDATA_HPP_
#define _GI_GTK_SELECTIONDATA_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TextBuffer;

class SelectionData;

namespace base {


#define GI_GTK_SELECTIONDATA_BASE base::SelectionDataBase
class SelectionDataBase : public gi::detail::GBoxedWrapper<SelectionDataBase, ::GtkSelectionData>
{
typedef gi::detail::GBoxedWrapper<SelectionDataBase, ::GtkSelectionData> super_type;
public:

SelectionDataBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_selection_data_get_type(); } 

// GtkSelectionData* gtk_selection_data_copy (const GtkSelectionData* data);
// ::GtkSelectionData* gtk_selection_data_copy (const ::GtkSelectionData* data);
GI_INLINE_DECL Gtk::SelectionData copy () const noexcept;

// void gtk_selection_data_free (GtkSelectionData* data);
// void gtk_selection_data_free (::GtkSelectionData* data);
// IGNORE; marked ignore

//  gtk_selection_data_get_data (const GtkSelectionData* selection_data);
//  gtk_selection_data_get_data (const ::GtkSelectionData* selection_data);
// IGNORE; not introspectable; shadowed-by get_data_with_length, inconsistent array info

// GdkAtom gtk_selection_data_get_data_type (const GtkSelectionData* selection_data);
//  gtk_selection_data_get_data_type (const ::GtkSelectionData* selection_data);
// SKIP;  type  not supported

// const guchar* gtk_selection_data_get_data_with_length (const GtkSelectionData* selection_data, gint* length);
// const guint8* gtk_selection_data_get_data_with_length (const ::GtkSelectionData* selection_data, gint* length);
GI_INLINE_DECL std::vector<guint8> get_data () const noexcept;

// GdkDisplay* gtk_selection_data_get_display (const GtkSelectionData* selection_data);
// ::GdkDisplay* gtk_selection_data_get_display (const ::GtkSelectionData* selection_data);
GI_INLINE_DECL Gdk::Display get_display () const noexcept;

// gint gtk_selection_data_get_format (const GtkSelectionData* selection_data);
// gint gtk_selection_data_get_format (const ::GtkSelectionData* selection_data);
GI_INLINE_DECL gint get_format () const noexcept;

// gint gtk_selection_data_get_length (const GtkSelectionData* selection_data);
// gint gtk_selection_data_get_length (const ::GtkSelectionData* selection_data);
GI_INLINE_DECL gint get_length () const noexcept;

// GdkPixbuf* gtk_selection_data_get_pixbuf (const GtkSelectionData* selection_data);
// ::GdkPixbuf* gtk_selection_data_get_pixbuf (const ::GtkSelectionData* selection_data);
GI_INLINE_DECL GdkPixbuf::Pixbuf get_pixbuf () const noexcept;

// GdkAtom gtk_selection_data_get_selection (const GtkSelectionData* selection_data);
//  gtk_selection_data_get_selection (const ::GtkSelectionData* selection_data);
// SKIP;  type  not supported

// GdkAtom gtk_selection_data_get_target (const GtkSelectionData* selection_data);
//  gtk_selection_data_get_target (const ::GtkSelectionData* selection_data);
// SKIP;  type  not supported

// gboolean gtk_selection_data_get_targets (const GtkSelectionData* selection_data, gint* n_atoms);
// gboolean gtk_selection_data_get_targets (const ::GtkSelectionData* selection_data, gint* n_atoms);
// SKIP; container element not supported

// guchar* gtk_selection_data_get_text (const GtkSelectionData* selection_data);
// char* gtk_selection_data_get_text (const ::GtkSelectionData* selection_data);
GI_INLINE_DECL std::string get_text () const noexcept;

// gchar** gtk_selection_data_get_uris (const GtkSelectionData* selection_data);
// char** gtk_selection_data_get_uris (const ::GtkSelectionData* selection_data);
GI_INLINE_DECL std::vector<std::string> get_uris () const noexcept;

// void gtk_selection_data_set (GtkSelectionData* selection_data, GdkAtom type, gint format, const guchar* data, gint length);
// void gtk_selection_data_set (::GtkSelectionData* selection_data,  type, gint format, const guint8* data, gint length);
// SKIP; type type  not supported

// gboolean gtk_selection_data_set_pixbuf (GtkSelectionData* selection_data, GdkPixbuf* pixbuf);
// gboolean gtk_selection_data_set_pixbuf (::GtkSelectionData* selection_data, ::GdkPixbuf* pixbuf);
GI_INLINE_DECL bool set_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept;

// gboolean gtk_selection_data_set_text (GtkSelectionData* selection_data, const gchar* str, gint len);
// gboolean gtk_selection_data_set_text (::GtkSelectionData* selection_data, const char* str, gint len);
GI_INLINE_DECL bool set_text (const std::string & str, gint len) noexcept;

// gboolean gtk_selection_data_set_uris (GtkSelectionData* selection_data, gchar** uris);
// gboolean gtk_selection_data_set_uris (::GtkSelectionData* selection_data, char** uris);
GI_INLINE_DECL bool set_uris (const std::vector<std::string> & uris) noexcept;

// gboolean gtk_selection_data_targets_include_image (const GtkSelectionData* selection_data, gboolean writable);
// gboolean gtk_selection_data_targets_include_image (const ::GtkSelectionData* selection_data, gboolean writable);
GI_INLINE_DECL bool targets_include_image (gboolean writable) const noexcept;

// gboolean gtk_selection_data_targets_include_rich_text (const GtkSelectionData* selection_data, GtkTextBuffer* buffer);
// gboolean gtk_selection_data_targets_include_rich_text (const ::GtkSelectionData* selection_data, ::GtkTextBuffer* buffer);
GI_INLINE_DECL bool targets_include_rich_text (Gtk::TextBuffer buffer) const noexcept;

// gboolean gtk_selection_data_targets_include_text (const GtkSelectionData* selection_data);
// gboolean gtk_selection_data_targets_include_text (const ::GtkSelectionData* selection_data);
GI_INLINE_DECL bool targets_include_text () const noexcept;

// gboolean gtk_selection_data_targets_include_uri (const GtkSelectionData* selection_data);
// gboolean gtk_selection_data_targets_include_uri (const ::GtkSelectionData* selection_data);
GI_INLINE_DECL bool targets_include_uri () const noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/selectiondata_extra_def.hpp>)
#include <gtk/selectiondata_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/selectiondata_extra.hpp>)
#include <gtk/selectiondata_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SelectionData : public GI_GTK_SELECTIONDATA_BASE
{ typedef GI_GTK_SELECTIONDATA_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSelectionData>
{ typedef Gtk::SelectionData type; }; 

} // namespace repository

} // namespace gi

#endif
