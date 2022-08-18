// AUTO-GENERATED

#ifndef _GI_GIO_NATIVESOCKETADDRESS_HPP_
#define _GI_GIO_NATIVESOCKETADDRESS_HPP_

#include "socketaddress.hpp"

namespace gi {

namespace repository {

namespace Gio {


class NativeSocketAddress;

namespace base {


#define GI_GIO_NATIVESOCKETADDRESS_BASE base::NativeSocketAddressBase
class NativeSocketAddressBase : public Gio::SocketAddress
{
typedef Gio::SocketAddress super_type;
public:
typedef ::GNativeSocketAddress BaseObjectType;

NativeSocketAddressBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_native_socket_address_get_type(); } 

// GSocketAddress* g_native_socket_address_new (gpointer native, gsize len);
// ::GNativeSocketAddress* g_native_socket_address_new (void* native, gsize len);
static GI_INLINE_DECL Gio::NativeSocketAddress new_ (void* native, gsize len) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/nativesocketaddress_extra_def.hpp>)
#include <gio/nativesocketaddress_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/nativesocketaddress_extra.hpp>)
#include <gio/nativesocketaddress_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class NativeSocketAddress : public GI_GIO_NATIVESOCKETADDRESS_BASE
{ typedef GI_GIO_NATIVESOCKETADDRESS_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GNativeSocketAddress>
{ typedef Gio::NativeSocketAddress type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class NativeSocketAddressClassDef
{
typedef NativeSocketAddressClassDef self;
public:
typedef Gio::NativeSocketAddress instance_type;
typedef ::GNativeSocketAddressClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class NativeSocketAddressClass: public detail::ClassTemplate<Gio::impl::internal::NativeSocketAddressClassDef, Gio::impl::internal::SocketAddressClass>
{
typedef NativeSocketAddressClass self;
typedef detail::ClassTemplate<Gio::impl::internal::NativeSocketAddressClassDef, Gio::impl::internal::SocketAddressClass> super;

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

using NativeSocketAddressImpl = detail::ObjectImpl<NativeSocketAddress, internal::NativeSocketAddressClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
