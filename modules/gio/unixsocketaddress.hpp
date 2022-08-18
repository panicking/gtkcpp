// AUTO-GENERATED

#ifndef _GI_GIO_UNIXSOCKETADDRESS_HPP_
#define _GI_GIO_UNIXSOCKETADDRESS_HPP_

#include "socketaddress.hpp"

namespace gi {

namespace repository {

namespace Gio {


class UnixSocketAddress;

namespace base {


#define GI_GIO_UNIXSOCKETADDRESS_BASE base::UnixSocketAddressBase
class UnixSocketAddressBase : public Gio::SocketAddress
{
typedef Gio::SocketAddress super_type;
public:
typedef ::GUnixSocketAddress BaseObjectType;

UnixSocketAddressBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_unix_socket_address_get_type(); } 

// GSocketAddress* g_unix_socket_address_new (const gchar* path);
// ::GUnixSocketAddress* g_unix_socket_address_new (const char* path);
static GI_INLINE_DECL Gio::UnixSocketAddress new_ (const std::string & path) noexcept;

// GSocketAddress* g_unix_socket_address_new_abstract (const gchar* path, gint path_len);
// ::GUnixSocketAddress* g_unix_socket_address_new_abstract (const gchar* path, gint path_len);
// IGNORE; deprecated

// GSocketAddress* g_unix_socket_address_new_with_type (const gchar* path, gint path_len, GUnixSocketAddressType type);
// ::GUnixSocketAddress* g_unix_socket_address_new_with_type (const gchar* path, gint path_len, ::GUnixSocketAddressType type);
static GI_INLINE_DECL Gio::UnixSocketAddress new_with_type (gchar * path, gint path_len, Gio::UnixSocketAddressType type) noexcept;

// gboolean g_unix_socket_address_abstract_names_supported ();
// gboolean g_unix_socket_address_abstract_names_supported ();
static GI_INLINE_DECL bool abstract_names_supported () noexcept;

// GUnixSocketAddressType g_unix_socket_address_get_address_type (GUnixSocketAddress* address);
// ::GUnixSocketAddressType g_unix_socket_address_get_address_type (::GUnixSocketAddress* address);
GI_INLINE_DECL Gio::UnixSocketAddressType get_address_type () noexcept;

// gboolean g_unix_socket_address_get_is_abstract (GUnixSocketAddress* address);
// gboolean g_unix_socket_address_get_is_abstract (::GUnixSocketAddress* address);
// IGNORE; deprecated

// const char* g_unix_socket_address_get_path (GUnixSocketAddress* address);
// const char* g_unix_socket_address_get_path (::GUnixSocketAddress* address);
GI_INLINE_DECL std::string get_path () noexcept;

// gsize g_unix_socket_address_get_path_len (GUnixSocketAddress* address);
// gsize g_unix_socket_address_get_path_len (::GUnixSocketAddress* address);
GI_INLINE_DECL gsize get_path_len () noexcept;

gi::property_proxy<bool, base::UnixSocketAddressBase> property_abstract()
{ return gi::property_proxy<bool, base::UnixSocketAddressBase> (*this, "abstract"); }
const gi::property_proxy<bool, base::UnixSocketAddressBase> property_abstract() const
{ return gi::property_proxy<bool, base::UnixSocketAddressBase> (*this, "abstract"); }

gi::property_proxy<Gio::UnixSocketAddressType, base::UnixSocketAddressBase> property_address_type()
{ return gi::property_proxy<Gio::UnixSocketAddressType, base::UnixSocketAddressBase> (*this, "address-type"); }
const gi::property_proxy<Gio::UnixSocketAddressType, base::UnixSocketAddressBase> property_address_type() const
{ return gi::property_proxy<Gio::UnixSocketAddressType, base::UnixSocketAddressBase> (*this, "address-type"); }

gi::property_proxy<std::string, base::UnixSocketAddressBase> property_path()
{ return gi::property_proxy<std::string, base::UnixSocketAddressBase> (*this, "path"); }
const gi::property_proxy<std::string, base::UnixSocketAddressBase> property_path() const
{ return gi::property_proxy<std::string, base::UnixSocketAddressBase> (*this, "path"); }

gi::property_proxy<GLib::ByteArray, base::UnixSocketAddressBase> property_path_as_array()
{ return gi::property_proxy<GLib::ByteArray, base::UnixSocketAddressBase> (*this, "path-as-array"); }
const gi::property_proxy<GLib::ByteArray, base::UnixSocketAddressBase> property_path_as_array() const
{ return gi::property_proxy<GLib::ByteArray, base::UnixSocketAddressBase> (*this, "path-as-array"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixsocketaddress_extra_def.hpp>)
#include <gio/unixsocketaddress_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixsocketaddress_extra.hpp>)
#include <gio/unixsocketaddress_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class UnixSocketAddress : public GI_GIO_UNIXSOCKETADDRESS_BASE
{ typedef GI_GIO_UNIXSOCKETADDRESS_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GUnixSocketAddress>
{ typedef Gio::UnixSocketAddress type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class UnixSocketAddressClassDef
{
typedef UnixSocketAddressClassDef self;
public:
typedef Gio::UnixSocketAddress instance_type;
typedef ::GUnixSocketAddressClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class UnixSocketAddressClass: public detail::ClassTemplate<Gio::impl::internal::UnixSocketAddressClassDef, Gio::impl::internal::SocketAddressClass>
{
typedef UnixSocketAddressClass self;
typedef detail::ClassTemplate<Gio::impl::internal::UnixSocketAddressClassDef, Gio::impl::internal::SocketAddressClass> super;

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

using UnixSocketAddressImpl = detail::ObjectImpl<UnixSocketAddress, internal::UnixSocketAddressClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
