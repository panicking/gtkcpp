// AUTO-GENERATED

#ifndef _GI_GIO_DESKTOPAPPINFO_HPP_
#define _GI_GIO_DESKTOPAPPINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AppInfo;
class AppLaunchContext;

class DesktopAppInfo;

namespace base {


#define GI_GIO_DESKTOPAPPINFO_BASE base::DesktopAppInfoBase
class DesktopAppInfoBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDesktopAppInfo BaseObjectType;

DesktopAppInfoBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_desktop_app_info_get_type(); } 

GI_INLINE_DECL Gio::AppInfo interface_ (gi::interface_tag<Gio::AppInfo>);

GI_INLINE_DECL operator Gio::AppInfo ();

// GDesktopAppInfo* g_desktop_app_info_new (const char* desktop_id);
// ::GDesktopAppInfo* g_desktop_app_info_new (const char* desktop_id);
static GI_INLINE_DECL Gio::DesktopAppInfo new_ (const std::string & desktop_id) noexcept;

// GDesktopAppInfo* g_desktop_app_info_new_from_filename (const char* filename);
// ::GDesktopAppInfo* g_desktop_app_info_new_from_filename (const char* filename);
static GI_INLINE_DECL Gio::DesktopAppInfo new_from_filename (const std::string & filename) noexcept;

// GDesktopAppInfo* g_desktop_app_info_new_from_keyfile (GKeyFile* key_file);
// ::GDesktopAppInfo* g_desktop_app_info_new_from_keyfile (::GKeyFile* key_file);
static GI_INLINE_DECL Gio::DesktopAppInfo new_from_keyfile (GLib::KeyFile key_file) noexcept;

// GList* g_desktop_app_info_get_implementations (const gchar* interface);
// ::GList* g_desktop_app_info_get_implementations (const char* interface);
static GI_INLINE_DECL std::vector<Gio::DesktopAppInfo> get_implementations (const std::string & interface) noexcept;

//  g_desktop_app_info_search (const gchar* search_string);
//  g_desktop_app_info_search (const char* search_string);
// SKIP; inconsistent list element info

// void g_desktop_app_info_set_desktop_env (const char* desktop_env);
// void g_desktop_app_info_set_desktop_env (const char* desktop_env);
// IGNORE; deprecated

// gchar* g_desktop_app_info_get_action_name (GDesktopAppInfo* info, const gchar* action_name);
// char* g_desktop_app_info_get_action_name (::GDesktopAppInfo* info, const char* action_name);
GI_INLINE_DECL std::string get_action_name (const std::string & action_name) noexcept;

// gboolean g_desktop_app_info_get_boolean (GDesktopAppInfo* info, const char* key);
// gboolean g_desktop_app_info_get_boolean (::GDesktopAppInfo* info, const char* key);
GI_INLINE_DECL bool get_boolean (const std::string & key) noexcept;

// const char* g_desktop_app_info_get_categories (GDesktopAppInfo* info);
// const char* g_desktop_app_info_get_categories (::GDesktopAppInfo* info);
GI_INLINE_DECL std::string get_categories () noexcept;

// const char* g_desktop_app_info_get_filename (GDesktopAppInfo* info);
// const char* g_desktop_app_info_get_filename (::GDesktopAppInfo* info);
GI_INLINE_DECL std::string get_filename () noexcept;

// const char* g_desktop_app_info_get_generic_name (GDesktopAppInfo* info);
// const char* g_desktop_app_info_get_generic_name (::GDesktopAppInfo* info);
GI_INLINE_DECL std::string get_generic_name () noexcept;

// gboolean g_desktop_app_info_get_is_hidden (GDesktopAppInfo* info);
// gboolean g_desktop_app_info_get_is_hidden (::GDesktopAppInfo* info);
GI_INLINE_DECL bool get_is_hidden () noexcept;

// const char* const* g_desktop_app_info_get_keywords (GDesktopAppInfo* info);
// const char** g_desktop_app_info_get_keywords (::GDesktopAppInfo* info);
GI_INLINE_DECL std::vector<std::string> get_keywords () noexcept;

// char* g_desktop_app_info_get_locale_string (GDesktopAppInfo* info, const char* key);
// char* g_desktop_app_info_get_locale_string (::GDesktopAppInfo* info, const char* key);
GI_INLINE_DECL std::string get_locale_string (const std::string & key) noexcept;

// gboolean g_desktop_app_info_get_nodisplay (GDesktopAppInfo* info);
// gboolean g_desktop_app_info_get_nodisplay (::GDesktopAppInfo* info);
GI_INLINE_DECL bool get_nodisplay () noexcept;

// gboolean g_desktop_app_info_get_show_in (GDesktopAppInfo* info, const gchar* desktop_env);
// gboolean g_desktop_app_info_get_show_in (::GDesktopAppInfo* info, const char* desktop_env);
GI_INLINE_DECL bool get_show_in (const std::string & desktop_env) noexcept;
GI_INLINE_DECL bool get_show_in () noexcept;

// const char* g_desktop_app_info_get_startup_wm_class (GDesktopAppInfo* info);
// const char* g_desktop_app_info_get_startup_wm_class (::GDesktopAppInfo* info);
GI_INLINE_DECL std::string get_startup_wm_class () noexcept;

// char* g_desktop_app_info_get_string (GDesktopAppInfo* info, const char* key);
// char* g_desktop_app_info_get_string (::GDesktopAppInfo* info, const char* key);
GI_INLINE_DECL std::string get_string (const std::string & key) noexcept;

// gchar** g_desktop_app_info_get_string_list (GDesktopAppInfo* info, const char* key, gsize* length);
// char** g_desktop_app_info_get_string_list (::GDesktopAppInfo* info, const char* key, gsize* length);
GI_INLINE_DECL std::vector<std::string> get_string_list (const std::string & key, gsize * length = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::vector<std::string>, gsize> get_string_list (const std::string & key) noexcept;

// gboolean g_desktop_app_info_has_key (GDesktopAppInfo* info, const char* key);
// gboolean g_desktop_app_info_has_key (::GDesktopAppInfo* info, const char* key);
GI_INLINE_DECL bool has_key (const std::string & key) noexcept;

// void g_desktop_app_info_launch_action (GDesktopAppInfo* info, const gchar* action_name, GAppLaunchContext* launch_context);
// void g_desktop_app_info_launch_action (::GDesktopAppInfo* info, const char* action_name, ::GAppLaunchContext* launch_context);
GI_INLINE_DECL void launch_action (const std::string & action_name, Gio::AppLaunchContext launch_context) noexcept;
GI_INLINE_DECL void launch_action (const std::string & action_name) noexcept;

// gboolean g_desktop_app_info_launch_uris_as_manager (GDesktopAppInfo* appinfo, GList* uris, GAppLaunchContext* launch_context, GSpawnFlags spawn_flags, GSpawnChildSetupFunc user_setup, gpointer user_setup_data, GDesktopAppLaunchCallback pid_callback, gpointer pid_callback_data, GError ** error);
// gboolean g_desktop_app_info_launch_uris_as_manager (::GDesktopAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* launch_context, ::GSpawnFlags spawn_flags, GLib::SpawnChildSetupFunc::cfunction_type user_setup, void* user_setup_data, Gio::DesktopAppLaunchCallback::cfunction_type pid_callback, void* pid_callback_data, GError ** error);
GI_INLINE_DECL bool launch_uris_as_manager (const std::vector<std::string> & uris, Gio::AppLaunchContext launch_context, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback);
GI_INLINE_DECL bool launch_uris_as_manager (const std::vector<std::string> & uris, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback);
GI_INLINE_DECL bool launch_uris_as_manager (const std::vector<std::string> & uris, Gio::AppLaunchContext launch_context, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool launch_uris_as_manager (const std::vector<std::string> & uris, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback, GLib::Error * _error) noexcept;

// gboolean g_desktop_app_info_launch_uris_as_manager_with_fds (GDesktopAppInfo* appinfo, GList* uris, GAppLaunchContext* launch_context, GSpawnFlags spawn_flags, GSpawnChildSetupFunc user_setup, gpointer user_setup_data, GDesktopAppLaunchCallback pid_callback, gpointer pid_callback_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
// gboolean g_desktop_app_info_launch_uris_as_manager_with_fds (::GDesktopAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* launch_context, ::GSpawnFlags spawn_flags, GLib::SpawnChildSetupFunc::cfunction_type user_setup, void* user_setup_data, Gio::DesktopAppLaunchCallback::cfunction_type pid_callback, void* pid_callback_data, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError ** error);
GI_INLINE_DECL bool launch_uris_as_manager_with_fds (const std::vector<std::string> & uris, Gio::AppLaunchContext launch_context, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback, gint stdin_fd, gint stdout_fd, gint stderr_fd);
GI_INLINE_DECL bool launch_uris_as_manager_with_fds (const std::vector<std::string> & uris, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback, gint stdin_fd, gint stdout_fd, gint stderr_fd);
GI_INLINE_DECL bool launch_uris_as_manager_with_fds (const std::vector<std::string> & uris, Gio::AppLaunchContext launch_context, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool launch_uris_as_manager_with_fds (const std::vector<std::string> & uris, GLib::SpawnFlags spawn_flags, GLib::SpawnChildSetupFunc user_setup, Gio::DesktopAppLaunchCallback pid_callback, gint stdin_fd, gint stdout_fd, gint stderr_fd, GLib::Error * _error) noexcept;

// const gchar* const* g_desktop_app_info_list_actions (GDesktopAppInfo* info);
// const char** g_desktop_app_info_list_actions (::GDesktopAppInfo* info);
GI_INLINE_DECL std::vector<std::string> list_actions () noexcept;

gi::property_proxy<std::string, base::DesktopAppInfoBase> property_filename()
{ return gi::property_proxy<std::string, base::DesktopAppInfoBase> (*this, "filename"); }
const gi::property_proxy<std::string, base::DesktopAppInfoBase> property_filename() const
{ return gi::property_proxy<std::string, base::DesktopAppInfoBase> (*this, "filename"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/desktopappinfo_extra_def.hpp>)
#include <gio/desktopappinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/desktopappinfo_extra.hpp>)
#include <gio/desktopappinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DesktopAppInfo : public GI_GIO_DESKTOPAPPINFO_BASE
{ typedef GI_GIO_DESKTOPAPPINFO_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDesktopAppInfo>
{ typedef Gio::DesktopAppInfo type; }; 

} // namespace repository

} // namespace gi

#include "appinfo.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DesktopAppInfoClassDef
{
typedef DesktopAppInfoClassDef self;
public:
typedef Gio::DesktopAppInfo instance_type;
typedef ::GDesktopAppInfoClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DesktopAppInfoClass: public detail::ClassTemplate<Gio::impl::internal::DesktopAppInfoClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::AppInfoIfaceClassImpl>
{
typedef DesktopAppInfoClass self;
typedef detail::ClassTemplate<Gio::impl::internal::DesktopAppInfoClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::AppInfoIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::AppInfoIfaceClassImpl GAppInfoIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using DesktopAppInfoImpl = detail::ObjectImpl<DesktopAppInfo, internal::DesktopAppInfoClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
