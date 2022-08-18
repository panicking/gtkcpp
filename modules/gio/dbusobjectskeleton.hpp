// AUTO-GENERATED

#ifndef _GI_GIO_DBUSOBJECTSKELETON_HPP_
#define _GI_GIO_DBUSOBJECTSKELETON_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusInterfaceSkeleton;
class DBusMethodInvocation;
class DBusObject;

class DBusObjectSkeleton;

namespace base {


#define GI_GIO_DBUSOBJECTSKELETON_BASE base::DBusObjectSkeletonBase
class DBusObjectSkeletonBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDBusObjectSkeleton BaseObjectType;

DBusObjectSkeletonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_object_skeleton_get_type(); } 

GI_INLINE_DECL Gio::DBusObject interface_ (gi::interface_tag<Gio::DBusObject>);

GI_INLINE_DECL operator Gio::DBusObject ();

// GDBusObjectSkeleton* g_dbus_object_skeleton_new (const gchar* object_path);
// ::GDBusObjectSkeleton* g_dbus_object_skeleton_new (const char* object_path);
static GI_INLINE_DECL Gio::DBusObjectSkeleton new_ (const std::string & object_path) noexcept;

// void g_dbus_object_skeleton_add_interface (GDBusObjectSkeleton* object, GDBusInterfaceSkeleton* interface_);
// void g_dbus_object_skeleton_add_interface (::GDBusObjectSkeleton* object, ::GDBusInterfaceSkeleton* interface_);
GI_INLINE_DECL void add_interface (Gio::DBusInterfaceSkeleton interface_) noexcept;

// void g_dbus_object_skeleton_flush (GDBusObjectSkeleton* object);
// void g_dbus_object_skeleton_flush (::GDBusObjectSkeleton* object);
GI_INLINE_DECL void flush () noexcept;

// void g_dbus_object_skeleton_remove_interface (GDBusObjectSkeleton* object, GDBusInterfaceSkeleton* interface_);
// void g_dbus_object_skeleton_remove_interface (::GDBusObjectSkeleton* object, ::GDBusInterfaceSkeleton* interface_);
GI_INLINE_DECL void remove_interface (Gio::DBusInterfaceSkeleton interface_) noexcept;

// void g_dbus_object_skeleton_remove_interface_by_name (GDBusObjectSkeleton* object, const gchar* interface_name);
// void g_dbus_object_skeleton_remove_interface_by_name (::GDBusObjectSkeleton* object, const char* interface_name);
GI_INLINE_DECL void remove_interface_by_name (const std::string & interface_name) noexcept;

// void g_dbus_object_skeleton_set_object_path (GDBusObjectSkeleton* object, const gchar* object_path);
// void g_dbus_object_skeleton_set_object_path (::GDBusObjectSkeleton* object, const char* object_path);
GI_INLINE_DECL void set_object_path (const std::string & object_path) noexcept;

gi::property_proxy<std::string, base::DBusObjectSkeletonBase> property_g_object_path()
{ return gi::property_proxy<std::string, base::DBusObjectSkeletonBase> (*this, "g-object-path"); }
const gi::property_proxy<std::string, base::DBusObjectSkeletonBase> property_g_object_path() const
{ return gi::property_proxy<std::string, base::DBusObjectSkeletonBase> (*this, "g-object-path"); }

// signal authorize-method
gi::signal_proxy<bool(Gio::DBusObjectSkeleton, Gio::DBusInterfaceSkeleton interface, Gio::DBusMethodInvocation invocation)> signal_authorize_method()
{ return gi::signal_proxy<bool(Gio::DBusObjectSkeleton, Gio::DBusInterfaceSkeleton interface, Gio::DBusMethodInvocation invocation)> (*this, "authorize-method"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusobjectskeleton_extra_def.hpp>)
#include <gio/dbusobjectskeleton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusobjectskeleton_extra.hpp>)
#include <gio/dbusobjectskeleton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusObjectSkeleton : public GI_GIO_DBUSOBJECTSKELETON_BASE
{ typedef GI_GIO_DBUSOBJECTSKELETON_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusObjectSkeleton>
{ typedef Gio::DBusObjectSkeleton type; }; 

} // namespace repository

} // namespace gi

#include "dbusobject.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DBusObjectSkeletonClassDef
{
typedef DBusObjectSkeletonClassDef self;
public:
typedef Gio::DBusObjectSkeleton instance_type;
typedef ::GDBusObjectSkeletonClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean DBusObjectSkeleton::authorize_method (GDBusObjectSkeleton* object, GDBusInterfaceSkeleton* interface_, GDBusMethodInvocation* invocation);
// gboolean DBusObjectSkeleton::authorize_method (::GDBusObjectSkeleton* object, ::GDBusInterfaceSkeleton* interface_, ::GDBusMethodInvocation* invocation);
virtual bool authorize_method_ (Gio::DBusInterfaceSkeleton interface_, Gio::DBusMethodInvocation invocation) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class DBusObjectSkeletonClass: public detail::ClassTemplate<Gio::impl::internal::DBusObjectSkeletonClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::DBusObjectIfaceClassImpl>
{
typedef DBusObjectSkeletonClass self;
typedef detail::ClassTemplate<Gio::impl::internal::DBusObjectSkeletonClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::DBusObjectIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::DBusObjectIfaceClassImpl GDBusObjectIface_type;


// gboolean DBusObjectSkeleton::authorize_method (GDBusObjectSkeleton* object, GDBusInterfaceSkeleton* interface_, GDBusMethodInvocation* invocation);
// gboolean DBusObjectSkeleton::authorize_method (::GDBusObjectSkeleton* object, ::GDBusInterfaceSkeleton* interface_, ::GDBusMethodInvocation* invocation);
GI_INLINE_DECL bool authorize_method_ (Gio::DBusInterfaceSkeleton interface_, Gio::DBusMethodInvocation invocation) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using DBusObjectSkeletonImpl = detail::ObjectImpl<DBusObjectSkeleton, internal::DBusObjectSkeletonClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
