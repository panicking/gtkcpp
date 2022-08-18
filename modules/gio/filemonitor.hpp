// AUTO-GENERATED

#ifndef _GI_GIO_FILEMONITOR_HPP_
#define _GI_GIO_FILEMONITOR_HPP_


namespace gi {

namespace repository {

namespace Gio {

class File;

class FileMonitor;

namespace base {


#define GI_GIO_FILEMONITOR_BASE base::FileMonitorBase
class FileMonitorBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GFileMonitor BaseObjectType;

FileMonitorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_file_monitor_get_type(); } 

// gboolean g_file_monitor_cancel (GFileMonitor* monitor);
// gboolean g_file_monitor_cancel (::GFileMonitor* monitor);
GI_INLINE_DECL bool cancel () noexcept;

// void g_file_monitor_emit_event (GFileMonitor* monitor, GFile* child, GFile* other_file, GFileMonitorEvent event_type);
// void g_file_monitor_emit_event (::GFileMonitor* monitor, ::GFile* child, ::GFile* other_file, ::GFileMonitorEvent event_type);
GI_INLINE_DECL void emit_event (Gio::File child, Gio::File other_file, Gio::FileMonitorEvent event_type) noexcept;

// gboolean g_file_monitor_is_cancelled (GFileMonitor* monitor);
// gboolean g_file_monitor_is_cancelled (::GFileMonitor* monitor);
GI_INLINE_DECL bool is_cancelled () noexcept;

// void g_file_monitor_set_rate_limit (GFileMonitor* monitor, gint limit_msecs);
// void g_file_monitor_set_rate_limit (::GFileMonitor* monitor, gint limit_msecs);
GI_INLINE_DECL void set_rate_limit (gint limit_msecs) noexcept;

gi::property_proxy<bool, base::FileMonitorBase> property_cancelled()
{ return gi::property_proxy<bool, base::FileMonitorBase> (*this, "cancelled"); }
const gi::property_proxy<bool, base::FileMonitorBase> property_cancelled() const
{ return gi::property_proxy<bool, base::FileMonitorBase> (*this, "cancelled"); }

gi::property_proxy<gint, base::FileMonitorBase> property_rate_limit()
{ return gi::property_proxy<gint, base::FileMonitorBase> (*this, "rate-limit"); }
const gi::property_proxy<gint, base::FileMonitorBase> property_rate_limit() const
{ return gi::property_proxy<gint, base::FileMonitorBase> (*this, "rate-limit"); }

// signal changed
gi::signal_proxy<void(Gio::FileMonitor, Gio::File file, Gio::File other_file, Gio::FileMonitorEvent event_type)> signal_changed()
{ return gi::signal_proxy<void(Gio::FileMonitor, Gio::File file, Gio::File other_file, Gio::FileMonitorEvent event_type)> (*this, "changed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/filemonitor_extra_def.hpp>)
#include <gio/filemonitor_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/filemonitor_extra.hpp>)
#include <gio/filemonitor_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FileMonitor : public GI_GIO_FILEMONITOR_BASE
{ typedef GI_GIO_FILEMONITOR_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFileMonitor>
{ typedef Gio::FileMonitor type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class FileMonitorClassDef
{
typedef FileMonitorClassDef self;
public:
typedef Gio::FileMonitor instance_type;
typedef ::GFileMonitorClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean FileMonitor::cancel (GFileMonitor* monitor);
// gboolean FileMonitor::cancel (::GFileMonitor* monitor);
virtual bool cancel_ () noexcept = 0;

// void FileMonitor::changed (GFileMonitor* monitor, GFile* file, GFile* other_file, GFileMonitorEvent event_type);
// void FileMonitor::changed (::GFileMonitor* monitor, ::GFile* file, ::GFile* other_file, ::GFileMonitorEvent event_type);
virtual void changed_ (Gio::File file, Gio::File other_file, Gio::FileMonitorEvent event_type) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class FileMonitorClass: public detail::ClassTemplate<Gio::impl::internal::FileMonitorClassDef, GObject::impl::internal::ObjectClass>
{
typedef FileMonitorClass self;
typedef detail::ClassTemplate<Gio::impl::internal::FileMonitorClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean FileMonitor::cancel (GFileMonitor* monitor);
// gboolean FileMonitor::cancel (::GFileMonitor* monitor);
GI_INLINE_DECL bool cancel_ () noexcept override;

// void FileMonitor::changed (GFileMonitor* monitor, GFile* file, GFile* other_file, GFileMonitorEvent event_type);
// void FileMonitor::changed (::GFileMonitor* monitor, ::GFile* file, ::GFile* other_file, ::GFileMonitorEvent event_type);
GI_INLINE_DECL void changed_ (Gio::File file, Gio::File other_file, Gio::FileMonitorEvent event_type) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using FileMonitorImpl = detail::ObjectImpl<FileMonitor, internal::FileMonitorClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
