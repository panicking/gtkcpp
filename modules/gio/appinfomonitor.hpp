// AUTO-GENERATED

#ifndef _GI_GIO_APPINFOMONITOR_HPP_
#define _GI_GIO_APPINFOMONITOR_HPP_


namespace gi {

namespace repository {

namespace Gio {


class AppInfoMonitor;

namespace base {


#define GI_GIO_APPINFOMONITOR_BASE base::AppInfoMonitorBase
class AppInfoMonitorBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GAppInfoMonitor BaseObjectType;

AppInfoMonitorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_app_info_monitor_get_type(); } 

// GAppInfoMonitor* g_app_info_monitor_get ();
// ::GAppInfoMonitor* g_app_info_monitor_get ();
static GI_INLINE_DECL Gio::AppInfoMonitor get () noexcept;

// signal changed
gi::signal_proxy<void(Gio::AppInfoMonitor)> signal_changed()
{ return gi::signal_proxy<void(Gio::AppInfoMonitor)> (*this, "changed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/appinfomonitor_extra_def.hpp>)
#include <gio/appinfomonitor_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/appinfomonitor_extra.hpp>)
#include <gio/appinfomonitor_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class AppInfoMonitor : public GI_GIO_APPINFOMONITOR_BASE
{ typedef GI_GIO_APPINFOMONITOR_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GAppInfoMonitor>
{ typedef Gio::AppInfoMonitor type; }; 

} // namespace repository

} // namespace gi

#endif
