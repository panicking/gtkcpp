// AUTO-GENERATED

#ifndef _GI_GIO_NATIVEVOLUMEMONITOR_HPP_
#define _GI_GIO_NATIVEVOLUMEMONITOR_HPP_

#include "volumemonitor.hpp"

namespace gi {

namespace repository {

namespace Gio {


class NativeVolumeMonitor;

namespace base {


#define GI_GIO_NATIVEVOLUMEMONITOR_BASE base::NativeVolumeMonitorBase
class NativeVolumeMonitorBase : public Gio::VolumeMonitor
{
typedef Gio::VolumeMonitor super_type;
public:
typedef ::GNativeVolumeMonitor BaseObjectType;

NativeVolumeMonitorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_native_volume_monitor_get_type(); } 

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/nativevolumemonitor_extra_def.hpp>)
#include <gio/nativevolumemonitor_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/nativevolumemonitor_extra.hpp>)
#include <gio/nativevolumemonitor_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class NativeVolumeMonitor : public GI_GIO_NATIVEVOLUMEMONITOR_BASE
{ typedef GI_GIO_NATIVEVOLUMEMONITOR_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GNativeVolumeMonitor>
{ typedef Gio::NativeVolumeMonitor type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class NativeVolumeMonitorClassDef
{
typedef NativeVolumeMonitorClassDef self;
public:
typedef Gio::NativeVolumeMonitor instance_type;
typedef ::GNativeVolumeMonitorClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class NativeVolumeMonitorClass: public detail::ClassTemplate<Gio::impl::internal::NativeVolumeMonitorClassDef, Gio::impl::internal::VolumeMonitorClass>
{
typedef NativeVolumeMonitorClass self;
typedef detail::ClassTemplate<Gio::impl::internal::NativeVolumeMonitorClassDef, Gio::impl::internal::VolumeMonitorClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using NativeVolumeMonitorImpl = detail::ObjectImpl<NativeVolumeMonitor, internal::NativeVolumeMonitorClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
