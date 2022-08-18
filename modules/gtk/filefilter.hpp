// AUTO-GENERATED

#ifndef _GI_GTK_FILEFILTER_HPP_
#define _GI_GTK_FILEFILTER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Buildable;
class FileFilterInfo;

class FileFilter;

namespace base {


#define GI_GTK_FILEFILTER_BASE base::FileFilterBase
class FileFilterBase : public GObject::InitiallyUnowned
{
typedef GObject::InitiallyUnowned super_type;
public:
typedef ::GtkFileFilter BaseObjectType;

FileFilterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_file_filter_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

// GtkFileFilter* gtk_file_filter_new ();
// ::GtkFileFilter* gtk_file_filter_new ();
static GI_INLINE_DECL Gtk::FileFilter new_ () noexcept;

// GtkFileFilter* gtk_file_filter_new_from_gvariant (GVariant* variant);
// ::GtkFileFilter* gtk_file_filter_new_from_gvariant (::GVariant* variant);
static GI_INLINE_DECL Gtk::FileFilter new_from_gvariant (GLib::Variant variant) noexcept;

// void gtk_file_filter_add_custom (GtkFileFilter* filter, GtkFileFilterFlags needed, GtkFileFilterFunc func, gpointer data, GDestroyNotify notify);
// void gtk_file_filter_add_custom (::GtkFileFilter* filter, ::GtkFileFilterFlags needed, Gtk::FileFilterFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type notify);
GI_INLINE_DECL void add_custom (Gtk::FileFilterFlags needed, Gtk::FileFilterFunc func) noexcept;

// void gtk_file_filter_add_mime_type (GtkFileFilter* filter, const gchar* mime_type);
// void gtk_file_filter_add_mime_type (::GtkFileFilter* filter, const char* mime_type);
GI_INLINE_DECL void add_mime_type (const std::string & mime_type) noexcept;

// void gtk_file_filter_add_pattern (GtkFileFilter* filter, const gchar* pattern);
// void gtk_file_filter_add_pattern (::GtkFileFilter* filter, const char* pattern);
GI_INLINE_DECL void add_pattern (const std::string & pattern) noexcept;

// void gtk_file_filter_add_pixbuf_formats (GtkFileFilter* filter);
// void gtk_file_filter_add_pixbuf_formats (::GtkFileFilter* filter);
GI_INLINE_DECL void add_pixbuf_formats () noexcept;

// gboolean gtk_file_filter_filter (GtkFileFilter* filter, const GtkFileFilterInfo* filter_info);
// gboolean gtk_file_filter_filter (::GtkFileFilter* filter, const ::GtkFileFilterInfo* filter_info);
GI_INLINE_DECL bool filter (const Gtk::FileFilterInfo & filter_info) noexcept;

// const gchar* gtk_file_filter_get_name (GtkFileFilter* filter);
// const char* gtk_file_filter_get_name (::GtkFileFilter* filter);
GI_INLINE_DECL std::string get_name () noexcept;

// GtkFileFilterFlags gtk_file_filter_get_needed (GtkFileFilter* filter);
// ::GtkFileFilterFlags gtk_file_filter_get_needed (::GtkFileFilter* filter);
GI_INLINE_DECL Gtk::FileFilterFlags get_needed () noexcept;

// void gtk_file_filter_set_name (GtkFileFilter* filter, const gchar* name);
// void gtk_file_filter_set_name (::GtkFileFilter* filter, const char* name);
GI_INLINE_DECL void set_name (const std::string & name) noexcept;
GI_INLINE_DECL void set_name () noexcept;

// GVariant* gtk_file_filter_to_gvariant (GtkFileFilter* filter);
// ::GVariant* gtk_file_filter_to_gvariant (::GtkFileFilter* filter);
GI_INLINE_DECL GLib::Variant to_gvariant () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filefilter_extra_def.hpp>)
#include <gtk/filefilter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filefilter_extra.hpp>)
#include <gtk/filefilter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FileFilter : public GI_GTK_FILEFILTER_BASE
{ typedef GI_GTK_FILEFILTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFileFilter>
{ typedef Gtk::FileFilter type; }; 

} // namespace repository

} // namespace gi

#endif
