// AUTO-GENERATED

#ifndef _GI_GIO_PROXYADDRESSENUMERATOR_HPP_
#define _GI_GIO_PROXYADDRESSENUMERATOR_HPP_

#include "socketaddressenumerator.hpp"

namespace gi {

namespace repository {

namespace Gio {

class ProxyResolver;
class SocketConnectable;

class ProxyAddressEnumerator;

namespace base {


#define GI_GIO_PROXYADDRESSENUMERATOR_BASE base::ProxyAddressEnumeratorBase
class ProxyAddressEnumeratorBase : public Gio::SocketAddressEnumerator
{
typedef Gio::SocketAddressEnumerator super_type;
public:
typedef ::GProxyAddressEnumerator BaseObjectType;

ProxyAddressEnumeratorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_proxy_address_enumerator_get_type(); } 

gi::property_proxy<Gio::SocketConnectable, base::ProxyAddressEnumeratorBase> property_connectable()
{ return gi::property_proxy<Gio::SocketConnectable, base::ProxyAddressEnumeratorBase> (*this, "connectable"); }
const gi::property_proxy<Gio::SocketConnectable, base::ProxyAddressEnumeratorBase> property_connectable() const
{ return gi::property_proxy<Gio::SocketConnectable, base::ProxyAddressEnumeratorBase> (*this, "connectable"); }

gi::property_proxy<guint, base::ProxyAddressEnumeratorBase> property_default_port()
{ return gi::property_proxy<guint, base::ProxyAddressEnumeratorBase> (*this, "default-port"); }
const gi::property_proxy<guint, base::ProxyAddressEnumeratorBase> property_default_port() const
{ return gi::property_proxy<guint, base::ProxyAddressEnumeratorBase> (*this, "default-port"); }

gi::property_proxy<Gio::ProxyResolver, base::ProxyAddressEnumeratorBase> property_proxy_resolver()
{ return gi::property_proxy<Gio::ProxyResolver, base::ProxyAddressEnumeratorBase> (*this, "proxy-resolver"); }
const gi::property_proxy<Gio::ProxyResolver, base::ProxyAddressEnumeratorBase> property_proxy_resolver() const
{ return gi::property_proxy<Gio::ProxyResolver, base::ProxyAddressEnumeratorBase> (*this, "proxy-resolver"); }

gi::property_proxy<std::string, base::ProxyAddressEnumeratorBase> property_uri()
{ return gi::property_proxy<std::string, base::ProxyAddressEnumeratorBase> (*this, "uri"); }
const gi::property_proxy<std::string, base::ProxyAddressEnumeratorBase> property_uri() const
{ return gi::property_proxy<std::string, base::ProxyAddressEnumeratorBase> (*this, "uri"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/proxyaddressenumerator_extra_def.hpp>)
#include <gio/proxyaddressenumerator_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/proxyaddressenumerator_extra.hpp>)
#include <gio/proxyaddressenumerator_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class ProxyAddressEnumerator : public GI_GIO_PROXYADDRESSENUMERATOR_BASE
{ typedef GI_GIO_PROXYADDRESSENUMERATOR_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GProxyAddressEnumerator>
{ typedef Gio::ProxyAddressEnumerator type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ProxyAddressEnumeratorClassDef
{
typedef ProxyAddressEnumeratorClassDef self;
public:
typedef Gio::ProxyAddressEnumerator instance_type;
typedef ::GProxyAddressEnumeratorClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ProxyAddressEnumeratorClass: public detail::ClassTemplate<Gio::impl::internal::ProxyAddressEnumeratorClassDef, Gio::impl::internal::SocketAddressEnumeratorClass>
{
typedef ProxyAddressEnumeratorClass self;
typedef detail::ClassTemplate<Gio::impl::internal::ProxyAddressEnumeratorClassDef, Gio::impl::internal::SocketAddressEnumeratorClass> super;

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

using ProxyAddressEnumeratorImpl = detail::ObjectImpl<ProxyAddressEnumerator, internal::ProxyAddressEnumeratorClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
