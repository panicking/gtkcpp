// AUTO-GENERATED

#ifndef _GI_GTK_RECENTINFO_HPP_
#define _GI_GTK_RECENTINFO_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class RecentInfo;

namespace base {


#define GI_GTK_RECENTINFO_BASE base::RecentInfoBase
class RecentInfoBase : public gi::detail::GBoxedWrapper<RecentInfoBase, ::GtkRecentInfo>
{
typedef gi::detail::GBoxedWrapper<RecentInfoBase, ::GtkRecentInfo> super_type;
public:

RecentInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_recent_info_get_type(); } 

// GAppInfo* gtk_recent_info_create_app_info (GtkRecentInfo* info, const gchar* app_name, GError ** error);
// ::GAppInfo* gtk_recent_info_create_app_info (::GtkRecentInfo* info, const char* app_name, GError ** error);
GI_INLINE_DECL Gio::AppInfo create_app_info (const std::string & app_name);
GI_INLINE_DECL Gio::AppInfo create_app_info ();
GI_INLINE_DECL Gio::AppInfo create_app_info (const std::string & app_name, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::AppInfo create_app_info (GLib::Error * _error) noexcept;

// gboolean gtk_recent_info_exists (GtkRecentInfo* info);
// gboolean gtk_recent_info_exists (::GtkRecentInfo* info);
GI_INLINE_DECL bool exists () noexcept;

// time_t gtk_recent_info_get_added (GtkRecentInfo* info);
// glong gtk_recent_info_get_added (::GtkRecentInfo* info);
GI_INLINE_DECL glong get_added () noexcept;

// gint gtk_recent_info_get_age (GtkRecentInfo* info);
// gint gtk_recent_info_get_age (::GtkRecentInfo* info);
GI_INLINE_DECL gint get_age () noexcept;

// gboolean gtk_recent_info_get_application_info (GtkRecentInfo* info, const gchar* app_name, const gchar** app_exec, guint* count, time_t* time_);
// gboolean gtk_recent_info_get_application_info (::GtkRecentInfo* info, const char* app_name, const char** app_exec, guint* count, glong* time_);
GI_INLINE_DECL bool get_application_info (const std::string & app_name, std::string & app_exec, guint & count, glong & time_) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string, guint, glong> get_application_info (const std::string & app_name) noexcept;

// gchar** gtk_recent_info_get_applications (GtkRecentInfo* info, gsize* length);
// char** gtk_recent_info_get_applications (::GtkRecentInfo* info, gsize* length);
GI_INLINE_DECL std::vector<std::string> get_applications (gsize * length = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::vector<std::string>, gsize> get_applications () noexcept;

// const gchar* gtk_recent_info_get_description (GtkRecentInfo* info);
// const char* gtk_recent_info_get_description (::GtkRecentInfo* info);
GI_INLINE_DECL std::string get_description () noexcept;

// const gchar* gtk_recent_info_get_display_name (GtkRecentInfo* info);
// const char* gtk_recent_info_get_display_name (::GtkRecentInfo* info);
GI_INLINE_DECL std::string get_display_name () noexcept;

// GIcon* gtk_recent_info_get_gicon (GtkRecentInfo* info);
// ::GIcon* gtk_recent_info_get_gicon (::GtkRecentInfo* info);
GI_INLINE_DECL Gio::Icon get_gicon () noexcept;

// gchar** gtk_recent_info_get_groups (GtkRecentInfo* info, gsize* length);
// char** gtk_recent_info_get_groups (::GtkRecentInfo* info, gsize* length);
GI_INLINE_DECL std::vector<std::string> get_groups (gsize * length = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::vector<std::string>, gsize> get_groups () noexcept;

// GdkPixbuf* gtk_recent_info_get_icon (GtkRecentInfo* info, gint size);
// ::GdkPixbuf* gtk_recent_info_get_icon (::GtkRecentInfo* info, gint size);
GI_INLINE_DECL GdkPixbuf::Pixbuf get_icon (gint size) noexcept;

// const gchar* gtk_recent_info_get_mime_type (GtkRecentInfo* info);
// const char* gtk_recent_info_get_mime_type (::GtkRecentInfo* info);
GI_INLINE_DECL std::string get_mime_type () noexcept;

// time_t gtk_recent_info_get_modified (GtkRecentInfo* info);
// glong gtk_recent_info_get_modified (::GtkRecentInfo* info);
GI_INLINE_DECL glong get_modified () noexcept;

// gboolean gtk_recent_info_get_private_hint (GtkRecentInfo* info);
// gboolean gtk_recent_info_get_private_hint (::GtkRecentInfo* info);
GI_INLINE_DECL bool get_private_hint () noexcept;

// gchar* gtk_recent_info_get_short_name (GtkRecentInfo* info);
// char* gtk_recent_info_get_short_name (::GtkRecentInfo* info);
GI_INLINE_DECL std::string get_short_name () noexcept;

// const gchar* gtk_recent_info_get_uri (GtkRecentInfo* info);
// const char* gtk_recent_info_get_uri (::GtkRecentInfo* info);
GI_INLINE_DECL std::string get_uri () noexcept;

// gchar* gtk_recent_info_get_uri_display (GtkRecentInfo* info);
// char* gtk_recent_info_get_uri_display (::GtkRecentInfo* info);
GI_INLINE_DECL std::string get_uri_display () noexcept;

// time_t gtk_recent_info_get_visited (GtkRecentInfo* info);
// glong gtk_recent_info_get_visited (::GtkRecentInfo* info);
GI_INLINE_DECL glong get_visited () noexcept;

// gboolean gtk_recent_info_has_application (GtkRecentInfo* info, const gchar* app_name);
// gboolean gtk_recent_info_has_application (::GtkRecentInfo* info, const char* app_name);
GI_INLINE_DECL bool has_application (const std::string & app_name) noexcept;

// gboolean gtk_recent_info_has_group (GtkRecentInfo* info, const gchar* group_name);
// gboolean gtk_recent_info_has_group (::GtkRecentInfo* info, const char* group_name);
GI_INLINE_DECL bool has_group (const std::string & group_name) noexcept;

// gboolean gtk_recent_info_is_local (GtkRecentInfo* info);
// gboolean gtk_recent_info_is_local (::GtkRecentInfo* info);
GI_INLINE_DECL bool is_local () noexcept;

// gchar* gtk_recent_info_last_application (GtkRecentInfo* info);
// char* gtk_recent_info_last_application (::GtkRecentInfo* info);
GI_INLINE_DECL std::string last_application () noexcept;

// gboolean gtk_recent_info_match (GtkRecentInfo* info_a, GtkRecentInfo* info_b);
// gboolean gtk_recent_info_match (::GtkRecentInfo* info_a, ::GtkRecentInfo* info_b);
GI_INLINE_DECL bool match (Gtk::RecentInfo info_b) noexcept;

// GtkRecentInfo* gtk_recent_info_ref (GtkRecentInfo* info);
// ::GtkRecentInfo* gtk_recent_info_ref (::GtkRecentInfo* info);
// IGNORE; marked ignore

// void gtk_recent_info_unref (GtkRecentInfo* info);
// void gtk_recent_info_unref (::GtkRecentInfo* info);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentinfo_extra_def.hpp>)
#include <gtk/recentinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentinfo_extra.hpp>)
#include <gtk/recentinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RecentInfo : public GI_GTK_RECENTINFO_BASE
{ typedef GI_GTK_RECENTINFO_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRecentInfo>
{ typedef Gtk::RecentInfo type; }; 

} // namespace repository

} // namespace gi

#endif
