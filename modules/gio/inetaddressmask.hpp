// AUTO-GENERATED

#ifndef _GI_GIO_INETADDRESSMASK_HPP_
#define _GI_GIO_INETADDRESSMASK_HPP_


namespace gi {

namespace repository {

namespace Gio {

class InetAddress;
class Initable;

class InetAddressMask;

namespace base {


#define GI_GIO_INETADDRESSMASK_BASE base::InetAddressMaskBase
class InetAddressMaskBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GInetAddressMask BaseObjectType;

InetAddressMaskBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_inet_address_mask_get_type(); } 

GI_INLINE_DECL Gio::Initable interface_ (gi::interface_tag<Gio::Initable>);

GI_INLINE_DECL operator Gio::Initable ();

// GInetAddressMask* g_inet_address_mask_new (GInetAddress* addr, guint length, GError ** error);
// ::GInetAddressMask* g_inet_address_mask_new (::GInetAddress* addr, guint length, GError ** error);
static GI_INLINE_DECL Gio::InetAddressMask new_ (Gio::InetAddress addr, guint length);
static GI_INLINE_DECL Gio::InetAddressMask new_ (Gio::InetAddress addr, guint length, GLib::Error * _error) noexcept;

// GInetAddressMask* g_inet_address_mask_new_from_string (const gchar* mask_string, GError ** error);
// ::GInetAddressMask* g_inet_address_mask_new_from_string (const char* mask_string, GError ** error);
static GI_INLINE_DECL Gio::InetAddressMask new_from_string (const std::string & mask_string);
static GI_INLINE_DECL Gio::InetAddressMask new_from_string (const std::string & mask_string, GLib::Error * _error) noexcept;

// gboolean g_inet_address_mask_equal (GInetAddressMask* mask, GInetAddressMask* mask2);
// gboolean g_inet_address_mask_equal (::GInetAddressMask* mask, ::GInetAddressMask* mask2);
GI_INLINE_DECL bool equal (Gio::InetAddressMask mask2) noexcept;

// GInetAddress* g_inet_address_mask_get_address (GInetAddressMask* mask);
// ::GInetAddress* g_inet_address_mask_get_address (::GInetAddressMask* mask);
GI_INLINE_DECL Gio::InetAddress get_address () noexcept;

// GSocketFamily g_inet_address_mask_get_family (GInetAddressMask* mask);
// ::GSocketFamily g_inet_address_mask_get_family (::GInetAddressMask* mask);
GI_INLINE_DECL Gio::SocketFamily get_family () noexcept;

// guint g_inet_address_mask_get_length (GInetAddressMask* mask);
// guint g_inet_address_mask_get_length (::GInetAddressMask* mask);
GI_INLINE_DECL guint get_length () noexcept;

// gboolean g_inet_address_mask_matches (GInetAddressMask* mask, GInetAddress* address);
// gboolean g_inet_address_mask_matches (::GInetAddressMask* mask, ::GInetAddress* address);
GI_INLINE_DECL bool matches (Gio::InetAddress address) noexcept;

// gchar* g_inet_address_mask_to_string (GInetAddressMask* mask);
// char* g_inet_address_mask_to_string (::GInetAddressMask* mask);
GI_INLINE_DECL std::string to_string () noexcept;

gi::property_proxy<Gio::InetAddress, base::InetAddressMaskBase> property_address()
{ return gi::property_proxy<Gio::InetAddress, base::InetAddressMaskBase> (*this, "address"); }
const gi::property_proxy<Gio::InetAddress, base::InetAddressMaskBase> property_address() const
{ return gi::property_proxy<Gio::InetAddress, base::InetAddressMaskBase> (*this, "address"); }

gi::property_proxy<Gio::SocketFamily, base::InetAddressMaskBase> property_family()
{ return gi::property_proxy<Gio::SocketFamily, base::InetAddressMaskBase> (*this, "family"); }
const gi::property_proxy<Gio::SocketFamily, base::InetAddressMaskBase> property_family() const
{ return gi::property_proxy<Gio::SocketFamily, base::InetAddressMaskBase> (*this, "family"); }

gi::property_proxy<guint, base::InetAddressMaskBase> property_length()
{ return gi::property_proxy<guint, base::InetAddressMaskBase> (*this, "length"); }
const gi::property_proxy<guint, base::InetAddressMaskBase> property_length() const
{ return gi::property_proxy<guint, base::InetAddressMaskBase> (*this, "length"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/inetaddressmask_extra_def.hpp>)
#include <gio/inetaddressmask_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/inetaddressmask_extra.hpp>)
#include <gio/inetaddressmask_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class InetAddressMask : public GI_GIO_INETADDRESSMASK_BASE
{ typedef GI_GIO_INETADDRESSMASK_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GInetAddressMask>
{ typedef Gio::InetAddressMask type; }; 

} // namespace repository

} // namespace gi

#include "initable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class InetAddressMaskClassDef
{
typedef InetAddressMaskClassDef self;
public:
typedef Gio::InetAddressMask instance_type;
typedef ::GInetAddressMaskClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class InetAddressMaskClass: public detail::ClassTemplate<Gio::impl::internal::InetAddressMaskClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::InitableIfaceClassImpl>
{
typedef InetAddressMaskClass self;
typedef detail::ClassTemplate<Gio::impl::internal::InetAddressMaskClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::InitableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::InitableIfaceClassImpl GInitableIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using InetAddressMaskImpl = detail::ObjectImpl<InetAddressMask, internal::InetAddressMaskClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
