// AUTO-GENERATED

#ifndef _GI_SOUP_ADDRESS_HPP_
#define _GI_SOUP_ADDRESS_HPP_


namespace gi {

namespace repository {

namespace Soup {


class Address;

namespace base {


#define GI_SOUP_ADDRESS_BASE base::AddressBase
class AddressBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::SoupAddress BaseObjectType;

AddressBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_address_get_type(); } 

GI_INLINE_DECL Gio::SocketConnectable interface_ (gi::interface_tag<Gio::SocketConnectable>);

GI_INLINE_DECL operator Gio::SocketConnectable ();

// SoupAddress* soup_address_new (const char* name, guint port);
// ::SoupAddress* soup_address_new (const char* name, guint port);
static GI_INLINE_DECL Soup::Address new_ (const std::string & name, guint port) noexcept;

// SoupAddress* soup_address_new_any (SoupAddressFamily family, guint port);
// ::SoupAddress* soup_address_new_any (::SoupAddressFamily family, guint port);
static GI_INLINE_DECL Soup::Address new_any (Soup::AddressFamily family, guint port) noexcept;

// SoupAddress* soup_address_new_from_sockaddr (sockaddr* sa, int len);
// ::SoupAddress* soup_address_new_from_sockaddr (void* sa, gint len);
static GI_INLINE_DECL Soup::Address new_from_sockaddr (void* sa, gint len) noexcept;

// gboolean soup_address_equal_by_ip (gconstpointer addr1, gconstpointer addr2);
// gboolean soup_address_equal_by_ip (const ::SoupAddress* addr1, const ::SoupAddress* addr2);
GI_INLINE_DECL bool equal_by_ip (const Soup::Address & addr2) const noexcept;

// gboolean soup_address_equal_by_name (gconstpointer addr1, gconstpointer addr2);
// gboolean soup_address_equal_by_name (const ::SoupAddress* addr1, const ::SoupAddress* addr2);
GI_INLINE_DECL bool equal_by_name (const Soup::Address & addr2) const noexcept;

// GSocketAddress* soup_address_get_gsockaddr (SoupAddress* addr);
// ::GSocketAddress* soup_address_get_gsockaddr (::SoupAddress* addr);
GI_INLINE_DECL Gio::SocketAddress get_gsockaddr () noexcept;

// const char* soup_address_get_name (SoupAddress* addr);
// const char* soup_address_get_name (::SoupAddress* addr);
GI_INLINE_DECL std::string get_name () noexcept;

// const char* soup_address_get_physical (SoupAddress* addr);
// const char* soup_address_get_physical (::SoupAddress* addr);
GI_INLINE_DECL std::string get_physical () noexcept;

// guint soup_address_get_port (SoupAddress* addr);
// guint soup_address_get_port (::SoupAddress* addr);
GI_INLINE_DECL guint get_port () noexcept;

// sockaddr* soup_address_get_sockaddr (SoupAddress* addr, int* len);
// void* soup_address_get_sockaddr (::SoupAddress* addr, gint len);
// SKIP; inconsistent in len pointer depth (1 vs 0)

// guint soup_address_hash_by_ip (gconstpointer addr);
// guint soup_address_hash_by_ip (const ::SoupAddress* addr);
GI_INLINE_DECL guint hash_by_ip () const noexcept;

// guint soup_address_hash_by_name (gconstpointer addr);
// guint soup_address_hash_by_name (const ::SoupAddress* addr);
GI_INLINE_DECL guint hash_by_name () const noexcept;

// gboolean soup_address_is_resolved (SoupAddress* addr);
// gboolean soup_address_is_resolved (::SoupAddress* addr);
GI_INLINE_DECL bool is_resolved () noexcept;

// void soup_address_resolve_async (SoupAddress* addr, GMainContext* async_context, GCancellable* cancellable, SoupAddressCallback callback, gpointer user_data);
// void soup_address_resolve_async (::SoupAddress* addr, ::GMainContext* async_context, ::GCancellable* cancellable, Soup::AddressCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void resolve_async (GLib::MainContext async_context, Gio::Cancellable cancellable, Soup::AddressCallback callback) noexcept;
GI_INLINE_DECL void resolve_async (Soup::AddressCallback callback) noexcept;

// guint soup_address_resolve_sync (SoupAddress* addr, GCancellable* cancellable);
// guint soup_address_resolve_sync (::SoupAddress* addr, ::GCancellable* cancellable);
GI_INLINE_DECL guint resolve_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL guint resolve_sync () noexcept;

gi::property_proxy<Soup::AddressFamily, base::AddressBase> property_family()
{ return gi::property_proxy<Soup::AddressFamily, base::AddressBase> (*this, "family"); }
const gi::property_proxy<Soup::AddressFamily, base::AddressBase> property_family() const
{ return gi::property_proxy<Soup::AddressFamily, base::AddressBase> (*this, "family"); }

gi::property_proxy<std::string, base::AddressBase> property_name()
{ return gi::property_proxy<std::string, base::AddressBase> (*this, "name"); }
const gi::property_proxy<std::string, base::AddressBase> property_name() const
{ return gi::property_proxy<std::string, base::AddressBase> (*this, "name"); }

gi::property_proxy<std::string, base::AddressBase> property_physical()
{ return gi::property_proxy<std::string, base::AddressBase> (*this, "physical"); }
const gi::property_proxy<std::string, base::AddressBase> property_physical() const
{ return gi::property_proxy<std::string, base::AddressBase> (*this, "physical"); }

gi::property_proxy<gint, base::AddressBase> property_port()
{ return gi::property_proxy<gint, base::AddressBase> (*this, "port"); }
const gi::property_proxy<gint, base::AddressBase> property_port() const
{ return gi::property_proxy<gint, base::AddressBase> (*this, "port"); }

gi::property_proxy<std::string, base::AddressBase> property_protocol()
{ return gi::property_proxy<std::string, base::AddressBase> (*this, "protocol"); }
const gi::property_proxy<std::string, base::AddressBase> property_protocol() const
{ return gi::property_proxy<std::string, base::AddressBase> (*this, "protocol"); }

gi::property_proxy<gpointer, base::AddressBase> property_sockaddr()
{ return gi::property_proxy<gpointer, base::AddressBase> (*this, "sockaddr"); }
const gi::property_proxy<gpointer, base::AddressBase> property_sockaddr() const
{ return gi::property_proxy<gpointer, base::AddressBase> (*this, "sockaddr"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/address_extra_def.hpp>)
#include <soup/address_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/address_extra.hpp>)
#include <soup/address_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class Address : public GI_SOUP_ADDRESS_BASE
{ typedef GI_SOUP_ADDRESS_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupAddress>
{ typedef Soup::Address type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class AddressClassDef
{
typedef AddressClassDef self;
public:
typedef Soup::Address instance_type;
typedef ::SoupAddressClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class AddressClass: public detail::ClassTemplate<Soup::impl::internal::AddressClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::SocketConnectableIfaceClassImpl>
{
typedef AddressClass self;
typedef detail::ClassTemplate<Soup::impl::internal::AddressClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::SocketConnectableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::SocketConnectableIfaceClassImpl GSocketConnectableIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using AddressImpl = detail::ObjectImpl<Address, internal::AddressClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
