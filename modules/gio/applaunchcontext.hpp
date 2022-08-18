// AUTO-GENERATED

#ifndef _GI_GIO_APPLAUNCHCONTEXT_HPP_
#define _GI_GIO_APPLAUNCHCONTEXT_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AppInfo;
class File;

class AppLaunchContext;

namespace base {


#define GI_GIO_APPLAUNCHCONTEXT_BASE base::AppLaunchContextBase
class AppLaunchContextBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GAppLaunchContext BaseObjectType;

AppLaunchContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_app_launch_context_get_type(); } 

// GAppLaunchContext* g_app_launch_context_new ();
// ::GAppLaunchContext* g_app_launch_context_new ();
static GI_INLINE_DECL Gio::AppLaunchContext new_ () noexcept;

// char* g_app_launch_context_get_display (GAppLaunchContext* context, GAppInfo* info, GList* files);
// char* g_app_launch_context_get_display (::GAppLaunchContext* context, ::GAppInfo* info, ::GList* files);
GI_INLINE_DECL std::string get_display (Gio::AppInfo info, const std::vector<Gio::File> & files) noexcept;

// char** g_app_launch_context_get_environment (GAppLaunchContext* context);
// char** g_app_launch_context_get_environment (::GAppLaunchContext* context);
GI_INLINE_DECL std::vector<std::string> get_environment () noexcept;

// char* g_app_launch_context_get_startup_notify_id (GAppLaunchContext* context, GAppInfo* info, GList* files);
// char* g_app_launch_context_get_startup_notify_id (::GAppLaunchContext* context, ::GAppInfo* info, ::GList* files);
GI_INLINE_DECL std::string get_startup_notify_id (Gio::AppInfo info, const std::vector<Gio::File> & files) noexcept;

// void g_app_launch_context_launch_failed (GAppLaunchContext* context, const char* startup_notify_id);
// void g_app_launch_context_launch_failed (::GAppLaunchContext* context, const char* startup_notify_id);
GI_INLINE_DECL void launch_failed (const std::string & startup_notify_id) noexcept;

// void g_app_launch_context_setenv (GAppLaunchContext* context, const char* variable, const char* value);
// void g_app_launch_context_setenv (::GAppLaunchContext* context, const char* variable, const char* value);
GI_INLINE_DECL void setenv (const std::string & variable, const std::string & value) noexcept;

// void g_app_launch_context_unsetenv (GAppLaunchContext* context, const char* variable);
// void g_app_launch_context_unsetenv (::GAppLaunchContext* context, const char* variable);
GI_INLINE_DECL void unsetenv (const std::string & variable) noexcept;

// signal launch-failed
gi::signal_proxy<void(Gio::AppLaunchContext, const std::string & startup_notify_id)> signal_launch_failed()
{ return gi::signal_proxy<void(Gio::AppLaunchContext, const std::string & startup_notify_id)> (*this, "launch-failed"); }

// signal launch-started
gi::signal_proxy<void(Gio::AppLaunchContext, Gio::AppInfo info, GLib::Variant platform_data)> signal_launch_started()
{ return gi::signal_proxy<void(Gio::AppLaunchContext, Gio::AppInfo info, GLib::Variant platform_data)> (*this, "launch-started"); }

// signal launched
gi::signal_proxy<void(Gio::AppLaunchContext, Gio::AppInfo info, GLib::Variant platform_data)> signal_launched()
{ return gi::signal_proxy<void(Gio::AppLaunchContext, Gio::AppInfo info, GLib::Variant platform_data)> (*this, "launched"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/applaunchcontext_extra_def.hpp>)
#include <gio/applaunchcontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/applaunchcontext_extra.hpp>)
#include <gio/applaunchcontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class AppLaunchContext : public GI_GIO_APPLAUNCHCONTEXT_BASE
{ typedef GI_GIO_APPLAUNCHCONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GAppLaunchContext>
{ typedef Gio::AppLaunchContext type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class AppLaunchContextClassDef
{
typedef AppLaunchContextClassDef self;
public:
typedef Gio::AppLaunchContext instance_type;
typedef ::GAppLaunchContextClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// char* AppLaunchContext::get_display (GAppLaunchContext* context, GAppInfo* info, GList* files);
// char* AppLaunchContext::get_display (::GAppLaunchContext* context, ::GAppInfo* info, ::GList* files);
// SKIP; virtual-method container parameter not supported

// char* AppLaunchContext::get_startup_notify_id (GAppLaunchContext* context, GAppInfo* info, GList* files);
// char* AppLaunchContext::get_startup_notify_id (::GAppLaunchContext* context, ::GAppInfo* info, ::GList* files);
// SKIP; virtual-method container parameter not supported

// void AppLaunchContext::launch_failed (GAppLaunchContext* context, const char* startup_notify_id);
// void AppLaunchContext::launch_failed (::GAppLaunchContext* context, const char* startup_notify_id);
virtual void launch_failed_ (const std::string & startup_notify_id) noexcept = 0;

// void AppLaunchContext::launch_started (GAppLaunchContext* context, GAppInfo* info, GVariant* platform_data);
// void AppLaunchContext::launch_started (::GAppLaunchContext* context, ::GAppInfo* info, ::GVariant* platform_data);
virtual void launch_started_ (Gio::AppInfo info, GLib::Variant platform_data) noexcept = 0;

// void AppLaunchContext::launched (GAppLaunchContext* context, GAppInfo* info, GVariant* platform_data);
// void AppLaunchContext::launched (::GAppLaunchContext* context, ::GAppInfo* info, ::GVariant* platform_data);
virtual void launched_ (Gio::AppInfo info, GLib::Variant platform_data) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class AppLaunchContextClass: public detail::ClassTemplate<Gio::impl::internal::AppLaunchContextClassDef, GObject::impl::internal::ObjectClass>
{
typedef AppLaunchContextClass self;
typedef detail::ClassTemplate<Gio::impl::internal::AppLaunchContextClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// char* AppLaunchContext::get_display (GAppLaunchContext* context, GAppInfo* info, GList* files);
// char* AppLaunchContext::get_display (::GAppLaunchContext* context, ::GAppInfo* info, ::GList* files);
// SKIP; virtual-method container parameter not supported

// char* AppLaunchContext::get_startup_notify_id (GAppLaunchContext* context, GAppInfo* info, GList* files);
// char* AppLaunchContext::get_startup_notify_id (::GAppLaunchContext* context, ::GAppInfo* info, ::GList* files);
// SKIP; virtual-method container parameter not supported

// void AppLaunchContext::launch_failed (GAppLaunchContext* context, const char* startup_notify_id);
// void AppLaunchContext::launch_failed (::GAppLaunchContext* context, const char* startup_notify_id);
GI_INLINE_DECL void launch_failed_ (const std::string & startup_notify_id) noexcept override;

// void AppLaunchContext::launch_started (GAppLaunchContext* context, GAppInfo* info, GVariant* platform_data);
// void AppLaunchContext::launch_started (::GAppLaunchContext* context, ::GAppInfo* info, ::GVariant* platform_data);
GI_INLINE_DECL void launch_started_ (Gio::AppInfo info, GLib::Variant platform_data) noexcept override;

// void AppLaunchContext::launched (GAppLaunchContext* context, GAppInfo* info, GVariant* platform_data);
// void AppLaunchContext::launched (::GAppLaunchContext* context, ::GAppInfo* info, ::GVariant* platform_data);
GI_INLINE_DECL void launched_ (Gio::AppInfo info, GLib::Variant platform_data) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using AppLaunchContextImpl = detail::ObjectImpl<AppLaunchContext, internal::AppLaunchContextClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
