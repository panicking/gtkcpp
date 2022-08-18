// AUTO-GENERATED

#ifndef _GI_GTK_RECENTFILTER_HPP_
#define _GI_GTK_RECENTFILTER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Buildable;
class RecentFilterInfo;

class RecentFilter;

namespace base {


#define GI_GTK_RECENTFILTER_BASE base::RecentFilterBase
class RecentFilterBase : public GObject::InitiallyUnowned
{
typedef GObject::InitiallyUnowned super_type;
public:
typedef ::GtkRecentFilter BaseObjectType;

RecentFilterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_recent_filter_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

// GtkRecentFilter* gtk_recent_filter_new ();
// ::GtkRecentFilter* gtk_recent_filter_new ();
static GI_INLINE_DECL Gtk::RecentFilter new_ () noexcept;

// void gtk_recent_filter_add_age (GtkRecentFilter* filter, gint days);
// void gtk_recent_filter_add_age (::GtkRecentFilter* filter, gint days);
GI_INLINE_DECL void add_age (gint days) noexcept;

// void gtk_recent_filter_add_application (GtkRecentFilter* filter, const gchar* application);
// void gtk_recent_filter_add_application (::GtkRecentFilter* filter, const char* application);
GI_INLINE_DECL void add_application (const std::string & application) noexcept;

// void gtk_recent_filter_add_custom (GtkRecentFilter* filter, GtkRecentFilterFlags needed, GtkRecentFilterFunc func, gpointer data, GDestroyNotify data_destroy);
// void gtk_recent_filter_add_custom (::GtkRecentFilter* filter, ::GtkRecentFilterFlags needed, Gtk::RecentFilterFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type data_destroy);
GI_INLINE_DECL void add_custom (Gtk::RecentFilterFlags needed, Gtk::RecentFilterFunc func) noexcept;

// void gtk_recent_filter_add_group (GtkRecentFilter* filter, const gchar* group);
// void gtk_recent_filter_add_group (::GtkRecentFilter* filter, const char* group);
GI_INLINE_DECL void add_group (const std::string & group) noexcept;

// void gtk_recent_filter_add_mime_type (GtkRecentFilter* filter, const gchar* mime_type);
// void gtk_recent_filter_add_mime_type (::GtkRecentFilter* filter, const char* mime_type);
GI_INLINE_DECL void add_mime_type (const std::string & mime_type) noexcept;

// void gtk_recent_filter_add_pattern (GtkRecentFilter* filter, const gchar* pattern);
// void gtk_recent_filter_add_pattern (::GtkRecentFilter* filter, const char* pattern);
GI_INLINE_DECL void add_pattern (const std::string & pattern) noexcept;

// void gtk_recent_filter_add_pixbuf_formats (GtkRecentFilter* filter);
// void gtk_recent_filter_add_pixbuf_formats (::GtkRecentFilter* filter);
GI_INLINE_DECL void add_pixbuf_formats () noexcept;

// gboolean gtk_recent_filter_filter (GtkRecentFilter* filter, const GtkRecentFilterInfo* filter_info);
// gboolean gtk_recent_filter_filter (::GtkRecentFilter* filter, const ::GtkRecentFilterInfo* filter_info);
GI_INLINE_DECL bool filter (const Gtk::RecentFilterInfo & filter_info) noexcept;

// const gchar* gtk_recent_filter_get_name (GtkRecentFilter* filter);
// const char* gtk_recent_filter_get_name (::GtkRecentFilter* filter);
GI_INLINE_DECL std::string get_name () noexcept;

// GtkRecentFilterFlags gtk_recent_filter_get_needed (GtkRecentFilter* filter);
// ::GtkRecentFilterFlags gtk_recent_filter_get_needed (::GtkRecentFilter* filter);
GI_INLINE_DECL Gtk::RecentFilterFlags get_needed () noexcept;

// void gtk_recent_filter_set_name (GtkRecentFilter* filter, const gchar* name);
// void gtk_recent_filter_set_name (::GtkRecentFilter* filter, const char* name);
GI_INLINE_DECL void set_name (const std::string & name) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentfilter_extra_def.hpp>)
#include <gtk/recentfilter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentfilter_extra.hpp>)
#include <gtk/recentfilter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RecentFilter : public GI_GTK_RECENTFILTER_BASE
{ typedef GI_GTK_RECENTFILTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRecentFilter>
{ typedef Gtk::RecentFilter type; }; 

} // namespace repository

} // namespace gi

#endif
