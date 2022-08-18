// AUTO-GENERATED

#ifndef _GI_GIO_APPINFO_HPP_
#define _GI_GIO_APPINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AppLaunchContext;
class AsyncResult;
class Cancellable;
class File;
class Icon;

class AppInfo;

namespace base {


#define GI_GIO_APPINFO_BASE base::AppInfoBase
class AppInfoBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GAppInfo BaseObjectType;

AppInfoBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_app_info_get_type(); } 

// GAppInfo* g_app_info_create_from_commandline (const char* commandline, const char* application_name, GAppInfoCreateFlags flags, GError ** error);
// ::GAppInfo* g_app_info_create_from_commandline (const char* commandline, const char* application_name, ::GAppInfoCreateFlags flags, GError ** error);
static GI_INLINE_DECL Gio::AppInfo create_from_commandline (const std::string & commandline, const std::string & application_name, Gio::AppInfoCreateFlags flags);
static GI_INLINE_DECL Gio::AppInfo create_from_commandline (const std::string & commandline, Gio::AppInfoCreateFlags flags);
static GI_INLINE_DECL Gio::AppInfo create_from_commandline (const std::string & commandline, const std::string & application_name, Gio::AppInfoCreateFlags flags, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::AppInfo create_from_commandline (const std::string & commandline, Gio::AppInfoCreateFlags flags, GLib::Error * _error) noexcept;

// GList* g_app_info_get_all ();
// ::GList* g_app_info_get_all ();
static GI_INLINE_DECL std::vector<Gio::AppInfo> get_all () noexcept;

// GList* g_app_info_get_all_for_type (const char* content_type);
// ::GList* g_app_info_get_all_for_type (const char* content_type);
static GI_INLINE_DECL std::vector<Gio::AppInfo> get_all_for_type (const std::string & content_type) noexcept;

// GAppInfo* g_app_info_get_default_for_type (const char* content_type, gboolean must_support_uris);
// ::GAppInfo* g_app_info_get_default_for_type (const char* content_type, gboolean must_support_uris);
static GI_INLINE_DECL Gio::AppInfo get_default_for_type (const std::string & content_type, gboolean must_support_uris) noexcept;

// GAppInfo* g_app_info_get_default_for_uri_scheme (const char* uri_scheme);
// ::GAppInfo* g_app_info_get_default_for_uri_scheme (const char* uri_scheme);
static GI_INLINE_DECL Gio::AppInfo get_default_for_uri_scheme (const std::string & uri_scheme) noexcept;

// GList* g_app_info_get_fallback_for_type (const gchar* content_type);
// ::GList* g_app_info_get_fallback_for_type (const char* content_type);
static GI_INLINE_DECL std::vector<Gio::AppInfo> get_fallback_for_type (const std::string & content_type) noexcept;

// GList* g_app_info_get_recommended_for_type (const gchar* content_type);
// ::GList* g_app_info_get_recommended_for_type (const char* content_type);
static GI_INLINE_DECL std::vector<Gio::AppInfo> get_recommended_for_type (const std::string & content_type) noexcept;

// gboolean g_app_info_launch_default_for_uri (const char* uri, GAppLaunchContext* context, GError ** error);
// gboolean g_app_info_launch_default_for_uri (const char* uri, ::GAppLaunchContext* context, GError ** error);
static GI_INLINE_DECL bool launch_default_for_uri (const std::string & uri, Gio::AppLaunchContext context);
static GI_INLINE_DECL bool launch_default_for_uri (const std::string & uri);
static GI_INLINE_DECL bool launch_default_for_uri (const std::string & uri, Gio::AppLaunchContext context, GLib::Error * _error) noexcept;
static GI_INLINE_DECL bool launch_default_for_uri (const std::string & uri, GLib::Error * _error) noexcept;

// void g_app_info_launch_default_for_uri_async (const char* uri, GAppLaunchContext* context, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_app_info_launch_default_for_uri_async (const char* uri, ::GAppLaunchContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
static GI_INLINE_DECL void launch_default_for_uri_async (const std::string & uri, Gio::AppLaunchContext context, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void launch_default_for_uri_async (const std::string & uri, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_app_info_launch_default_for_uri_finish (GAsyncResult* result, GError ** error);
// gboolean g_app_info_launch_default_for_uri_finish (::GAsyncResult* result, GError ** error);
static GI_INLINE_DECL bool launch_default_for_uri_finish (Gio::AsyncResult result);
static GI_INLINE_DECL bool launch_default_for_uri_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_app_info_reset_type_associations (const char* content_type);
// void g_app_info_reset_type_associations (const char* content_type);
static GI_INLINE_DECL void reset_type_associations (const std::string & content_type) noexcept;

// gboolean g_app_info_add_supports_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean g_app_info_add_supports_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
GI_INLINE_DECL bool add_supports_type (const std::string & content_type);
GI_INLINE_DECL bool add_supports_type (const std::string & content_type, GLib::Error * _error) noexcept;

// gboolean g_app_info_can_delete (GAppInfo* appinfo);
// gboolean g_app_info_can_delete (::GAppInfo* appinfo);
GI_INLINE_DECL bool can_delete () noexcept;

// gboolean g_app_info_can_remove_supports_type (GAppInfo* appinfo);
// gboolean g_app_info_can_remove_supports_type (::GAppInfo* appinfo);
GI_INLINE_DECL bool can_remove_supports_type () noexcept;

// gboolean g_app_info_delete (GAppInfo* appinfo);
// gboolean g_app_info_delete (::GAppInfo* appinfo);
GI_INLINE_DECL bool delete_ () noexcept;

// GAppInfo* g_app_info_dup (GAppInfo* appinfo);
// ::GAppInfo* g_app_info_dup (::GAppInfo* appinfo);
GI_INLINE_DECL Gio::AppInfo dup () noexcept;

// gboolean g_app_info_equal (GAppInfo* appinfo1, GAppInfo* appinfo2);
// gboolean g_app_info_equal (::GAppInfo* appinfo1, ::GAppInfo* appinfo2);
GI_INLINE_DECL bool equal (Gio::AppInfo appinfo2) noexcept;

// const char* g_app_info_get_commandline (GAppInfo* appinfo);
// const char* g_app_info_get_commandline (::GAppInfo* appinfo);
GI_INLINE_DECL std::string get_commandline () noexcept;

// const char* g_app_info_get_description (GAppInfo* appinfo);
// const char* g_app_info_get_description (::GAppInfo* appinfo);
GI_INLINE_DECL std::string get_description () noexcept;

// const char* g_app_info_get_display_name (GAppInfo* appinfo);
// const char* g_app_info_get_display_name (::GAppInfo* appinfo);
GI_INLINE_DECL std::string get_display_name () noexcept;

// const char* g_app_info_get_executable (GAppInfo* appinfo);
// const char* g_app_info_get_executable (::GAppInfo* appinfo);
GI_INLINE_DECL std::string get_executable () noexcept;

// GIcon* g_app_info_get_icon (GAppInfo* appinfo);
// ::GIcon* g_app_info_get_icon (::GAppInfo* appinfo);
GI_INLINE_DECL Gio::Icon get_icon () noexcept;

// const char* g_app_info_get_id (GAppInfo* appinfo);
// const char* g_app_info_get_id (::GAppInfo* appinfo);
GI_INLINE_DECL std::string get_id () noexcept;

// const char* g_app_info_get_name (GAppInfo* appinfo);
// const char* g_app_info_get_name (::GAppInfo* appinfo);
GI_INLINE_DECL std::string get_name () noexcept;

// const char** g_app_info_get_supported_types (GAppInfo* appinfo);
// const char** g_app_info_get_supported_types (::GAppInfo* appinfo);
GI_INLINE_DECL std::vector<std::string> get_supported_types () noexcept;

// gboolean g_app_info_launch (GAppInfo* appinfo, GList* files, GAppLaunchContext* context, GError ** error);
// gboolean g_app_info_launch (::GAppInfo* appinfo, ::GList* files, ::GAppLaunchContext* context, GError ** error);
GI_INLINE_DECL bool launch (const std::vector<Gio::File> & files, Gio::AppLaunchContext context);
GI_INLINE_DECL bool launch (const std::vector<Gio::File> & files);
GI_INLINE_DECL bool launch (const std::vector<Gio::File> & files, Gio::AppLaunchContext context, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool launch (const std::vector<Gio::File> & files, GLib::Error * _error) noexcept;

// gboolean g_app_info_launch_uris (GAppInfo* appinfo, GList* uris, GAppLaunchContext* context, GError ** error);
// gboolean g_app_info_launch_uris (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, GError ** error);
GI_INLINE_DECL bool launch_uris (const std::vector<std::string> & uris, Gio::AppLaunchContext context);
GI_INLINE_DECL bool launch_uris (const std::vector<std::string> & uris);
GI_INLINE_DECL bool launch_uris (const std::vector<std::string> & uris, Gio::AppLaunchContext context, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool launch_uris (const std::vector<std::string> & uris, GLib::Error * _error) noexcept;

// void g_app_info_launch_uris_async (GAppInfo* appinfo, GList* uris, GAppLaunchContext* context, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_app_info_launch_uris_async (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void launch_uris_async (const std::vector<std::string> & uris, Gio::AppLaunchContext context, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void launch_uris_async (const std::vector<std::string> & uris, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_app_info_launch_uris_finish (GAppInfo* appinfo, GAsyncResult* result, GError ** error);
// gboolean g_app_info_launch_uris_finish (::GAppInfo* appinfo, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool launch_uris_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool launch_uris_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_app_info_remove_supports_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean g_app_info_remove_supports_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
GI_INLINE_DECL bool remove_supports_type (const std::string & content_type);
GI_INLINE_DECL bool remove_supports_type (const std::string & content_type, GLib::Error * _error) noexcept;

// gboolean g_app_info_set_as_default_for_extension (GAppInfo* appinfo, const char* extension, GError ** error);
// gboolean g_app_info_set_as_default_for_extension (::GAppInfo* appinfo, const char* extension, GError ** error);
GI_INLINE_DECL bool set_as_default_for_extension (const std::string & extension);
GI_INLINE_DECL bool set_as_default_for_extension (const std::string & extension, GLib::Error * _error) noexcept;

// gboolean g_app_info_set_as_default_for_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean g_app_info_set_as_default_for_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
GI_INLINE_DECL bool set_as_default_for_type (const std::string & content_type);
GI_INLINE_DECL bool set_as_default_for_type (const std::string & content_type, GLib::Error * _error) noexcept;

// gboolean g_app_info_set_as_last_used_for_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean g_app_info_set_as_last_used_for_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
GI_INLINE_DECL bool set_as_last_used_for_type (const std::string & content_type);
GI_INLINE_DECL bool set_as_last_used_for_type (const std::string & content_type, GLib::Error * _error) noexcept;

// gboolean g_app_info_should_show (GAppInfo* appinfo);
// gboolean g_app_info_should_show (::GAppInfo* appinfo);
GI_INLINE_DECL bool should_show () noexcept;

// gboolean g_app_info_supports_files (GAppInfo* appinfo);
// gboolean g_app_info_supports_files (::GAppInfo* appinfo);
GI_INLINE_DECL bool supports_files () noexcept;

// gboolean g_app_info_supports_uris (GAppInfo* appinfo);
// gboolean g_app_info_supports_uris (::GAppInfo* appinfo);
GI_INLINE_DECL bool supports_uris () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/appinfo_extra_def.hpp>)
#include <gio/appinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/appinfo_extra.hpp>)
#include <gio/appinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class AppInfo : public GI_GIO_APPINFO_BASE
{ typedef GI_GIO_APPINFO_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GAppInfo>
{ typedef Gio::AppInfo type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class AppInfoIfaceDef
{
typedef AppInfoIfaceDef self;
public:
typedef Gio::AppInfo instance_type;
typedef ::GAppInfoIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean AppInfo::add_supports_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean AppInfo::add_supports_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
// SKIP; callee GError not supported

// gboolean AppInfo::can_delete (GAppInfo* appinfo);
// gboolean AppInfo::can_delete (::GAppInfo* appinfo);
virtual bool can_delete_ () noexcept = 0;

// gboolean AppInfo::can_remove_supports_type (GAppInfo* appinfo);
// gboolean AppInfo::can_remove_supports_type (::GAppInfo* appinfo);
virtual bool can_remove_supports_type_ () noexcept = 0;

// gboolean AppInfo::do_delete (GAppInfo* appinfo);
// gboolean AppInfo::do_delete (::GAppInfo* appinfo);
virtual bool do_delete_ () noexcept = 0;

// GAppInfo* AppInfo::dup (GAppInfo* appinfo);
// ::GAppInfo* AppInfo::dup (::GAppInfo* appinfo);
virtual Gio::AppInfo dup_ () noexcept = 0;

// gboolean AppInfo::equal (GAppInfo* appinfo1, GAppInfo* appinfo2);
// gboolean AppInfo::equal (::GAppInfo* appinfo1, ::GAppInfo* appinfo2);
virtual bool equal_ (Gio::AppInfo appinfo2) noexcept = 0;

// const char* AppInfo::get_commandline (GAppInfo* appinfo);
// const char* AppInfo::get_commandline (::GAppInfo* appinfo);
// SKIP; invalid callback return transfer none

// const char* AppInfo::get_description (GAppInfo* appinfo);
// const char* AppInfo::get_description (::GAppInfo* appinfo);
// SKIP; invalid callback return transfer none

// const char* AppInfo::get_display_name (GAppInfo* appinfo);
// const char* AppInfo::get_display_name (::GAppInfo* appinfo);
// SKIP; invalid callback return transfer none

// const char* AppInfo::get_executable (GAppInfo* appinfo);
// const char* AppInfo::get_executable (::GAppInfo* appinfo);
// SKIP; invalid callback return transfer none

// GIcon* AppInfo::get_icon (GAppInfo* appinfo);
// ::GIcon* AppInfo::get_icon (::GAppInfo* appinfo);
virtual Gio::Icon get_icon_ () noexcept = 0;

// const char* AppInfo::get_id (GAppInfo* appinfo);
// const char* AppInfo::get_id (::GAppInfo* appinfo);
// SKIP; invalid callback return transfer none

// const char* AppInfo::get_name (GAppInfo* appinfo);
// const char* AppInfo::get_name (::GAppInfo* appinfo);
// SKIP; invalid callback return transfer none

// const char** AppInfo::get_supported_types (GAppInfo* appinfo);
// const char** AppInfo::get_supported_types (::GAppInfo* appinfo);
// SKIP; container return not supported

// gboolean AppInfo::launch (GAppInfo* appinfo, GList* files, GAppLaunchContext* context, GError ** error);
// gboolean AppInfo::launch (::GAppInfo* appinfo, ::GList* files, ::GAppLaunchContext* context, GError ** error);
// SKIP; virtual-method container parameter not supported, callee GError not supported

// gboolean AppInfo::launch_uris (GAppInfo* appinfo, GList* uris, GAppLaunchContext* context, GError ** error);
// gboolean AppInfo::launch_uris (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, GError ** error);
// SKIP; virtual-method container parameter not supported, callee GError not supported

// void AppInfo::launch_uris_async (GAppInfo* appinfo, GList* uris, GAppLaunchContext* context, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void AppInfo::launch_uris_async (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method container parameter not supported, virtual-method callback parameter not supported

// gboolean AppInfo::launch_uris_finish (GAppInfo* appinfo, GAsyncResult* result, GError ** error);
// gboolean AppInfo::launch_uris_finish (::GAppInfo* appinfo, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean AppInfo::remove_supports_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean AppInfo::remove_supports_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
// SKIP; callee GError not supported

// gboolean AppInfo::set_as_default_for_extension (GAppInfo* appinfo, const char* extension, GError ** error);
// gboolean AppInfo::set_as_default_for_extension (::GAppInfo* appinfo, const char* extension, GError ** error);
// SKIP; callee GError not supported

// gboolean AppInfo::set_as_default_for_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean AppInfo::set_as_default_for_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
// SKIP; callee GError not supported

// gboolean AppInfo::set_as_last_used_for_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean AppInfo::set_as_last_used_for_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
// SKIP; callee GError not supported

// gboolean AppInfo::should_show (GAppInfo* appinfo);
// gboolean AppInfo::should_show (::GAppInfo* appinfo);
virtual bool should_show_ () noexcept = 0;

// gboolean AppInfo::supports_files (GAppInfo* appinfo);
// gboolean AppInfo::supports_files (::GAppInfo* appinfo);
virtual bool supports_files_ () noexcept = 0;

// gboolean AppInfo::supports_uris (GAppInfo* appinfo);
// gboolean AppInfo::supports_uris (::GAppInfo* appinfo);
virtual bool supports_uris_ () noexcept = 0;


};

using AppInfoImpl = detail::InterfaceImpl<AppInfoIfaceDef>;

class AppInfoIfaceClassImpl: public detail::InterfaceClassImpl<AppInfoImpl>
{
typedef AppInfoIfaceClassImpl self;
typedef detail::InterfaceClassImpl<AppInfoImpl> super;

protected:
using super::super;

// gboolean AppInfo::add_supports_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean AppInfo::add_supports_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
// SKIP; callee GError not supported

// gboolean AppInfo::can_delete (GAppInfo* appinfo);
// gboolean AppInfo::can_delete (::GAppInfo* appinfo);
GI_INLINE_DECL bool can_delete_ () noexcept override;

// gboolean AppInfo::can_remove_supports_type (GAppInfo* appinfo);
// gboolean AppInfo::can_remove_supports_type (::GAppInfo* appinfo);
GI_INLINE_DECL bool can_remove_supports_type_ () noexcept override;

// gboolean AppInfo::do_delete (GAppInfo* appinfo);
// gboolean AppInfo::do_delete (::GAppInfo* appinfo);
GI_INLINE_DECL bool do_delete_ () noexcept override;

// GAppInfo* AppInfo::dup (GAppInfo* appinfo);
// ::GAppInfo* AppInfo::dup (::GAppInfo* appinfo);
GI_INLINE_DECL Gio::AppInfo dup_ () noexcept override;

// gboolean AppInfo::equal (GAppInfo* appinfo1, GAppInfo* appinfo2);
// gboolean AppInfo::equal (::GAppInfo* appinfo1, ::GAppInfo* appinfo2);
GI_INLINE_DECL bool equal_ (Gio::AppInfo appinfo2) noexcept override;

// const char* AppInfo::get_commandline (GAppInfo* appinfo);
// const char* AppInfo::get_commandline (::GAppInfo* appinfo);
// SKIP; invalid callback return transfer none

// const char* AppInfo::get_description (GAppInfo* appinfo);
// const char* AppInfo::get_description (::GAppInfo* appinfo);
// SKIP; invalid callback return transfer none

// const char* AppInfo::get_display_name (GAppInfo* appinfo);
// const char* AppInfo::get_display_name (::GAppInfo* appinfo);
// SKIP; invalid callback return transfer none

// const char* AppInfo::get_executable (GAppInfo* appinfo);
// const char* AppInfo::get_executable (::GAppInfo* appinfo);
// SKIP; invalid callback return transfer none

// GIcon* AppInfo::get_icon (GAppInfo* appinfo);
// ::GIcon* AppInfo::get_icon (::GAppInfo* appinfo);
GI_INLINE_DECL Gio::Icon get_icon_ () noexcept override;

// const char* AppInfo::get_id (GAppInfo* appinfo);
// const char* AppInfo::get_id (::GAppInfo* appinfo);
// SKIP; invalid callback return transfer none

// const char* AppInfo::get_name (GAppInfo* appinfo);
// const char* AppInfo::get_name (::GAppInfo* appinfo);
// SKIP; invalid callback return transfer none

// const char** AppInfo::get_supported_types (GAppInfo* appinfo);
// const char** AppInfo::get_supported_types (::GAppInfo* appinfo);
// SKIP; container return not supported

// gboolean AppInfo::launch (GAppInfo* appinfo, GList* files, GAppLaunchContext* context, GError ** error);
// gboolean AppInfo::launch (::GAppInfo* appinfo, ::GList* files, ::GAppLaunchContext* context, GError ** error);
// SKIP; virtual-method container parameter not supported, callee GError not supported

// gboolean AppInfo::launch_uris (GAppInfo* appinfo, GList* uris, GAppLaunchContext* context, GError ** error);
// gboolean AppInfo::launch_uris (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, GError ** error);
// SKIP; virtual-method container parameter not supported, callee GError not supported

// void AppInfo::launch_uris_async (GAppInfo* appinfo, GList* uris, GAppLaunchContext* context, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void AppInfo::launch_uris_async (::GAppInfo* appinfo, ::GList* uris, ::GAppLaunchContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method container parameter not supported, virtual-method callback parameter not supported

// gboolean AppInfo::launch_uris_finish (GAppInfo* appinfo, GAsyncResult* result, GError ** error);
// gboolean AppInfo::launch_uris_finish (::GAppInfo* appinfo, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean AppInfo::remove_supports_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean AppInfo::remove_supports_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
// SKIP; callee GError not supported

// gboolean AppInfo::set_as_default_for_extension (GAppInfo* appinfo, const char* extension, GError ** error);
// gboolean AppInfo::set_as_default_for_extension (::GAppInfo* appinfo, const char* extension, GError ** error);
// SKIP; callee GError not supported

// gboolean AppInfo::set_as_default_for_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean AppInfo::set_as_default_for_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
// SKIP; callee GError not supported

// gboolean AppInfo::set_as_last_used_for_type (GAppInfo* appinfo, const char* content_type, GError ** error);
// gboolean AppInfo::set_as_last_used_for_type (::GAppInfo* appinfo, const char* content_type, GError ** error);
// SKIP; callee GError not supported

// gboolean AppInfo::should_show (GAppInfo* appinfo);
// gboolean AppInfo::should_show (::GAppInfo* appinfo);
GI_INLINE_DECL bool should_show_ () noexcept override;

// gboolean AppInfo::supports_files (GAppInfo* appinfo);
// gboolean AppInfo::supports_files (::GAppInfo* appinfo);
GI_INLINE_DECL bool supports_files_ () noexcept override;

// gboolean AppInfo::supports_uris (GAppInfo* appinfo);
// gboolean AppInfo::supports_uris (::GAppInfo* appinfo);
GI_INLINE_DECL bool supports_uris_ () noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
