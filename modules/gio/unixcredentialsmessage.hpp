// AUTO-GENERATED

#ifndef _GI_GIO_UNIXCREDENTIALSMESSAGE_HPP_
#define _GI_GIO_UNIXCREDENTIALSMESSAGE_HPP_

#include "socketcontrolmessage.hpp"

namespace gi {

namespace repository {

namespace Gio {

class Credentials;

class UnixCredentialsMessage;

namespace base {


#define GI_GIO_UNIXCREDENTIALSMESSAGE_BASE base::UnixCredentialsMessageBase
class UnixCredentialsMessageBase : public Gio::SocketControlMessage
{
typedef Gio::SocketControlMessage super_type;
public:
typedef ::GUnixCredentialsMessage BaseObjectType;

UnixCredentialsMessageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_unix_credentials_message_get_type(); } 

// GSocketControlMessage* g_unix_credentials_message_new ();
// ::GUnixCredentialsMessage* g_unix_credentials_message_new ();
static GI_INLINE_DECL Gio::UnixCredentialsMessage new_ () noexcept;

// GSocketControlMessage* g_unix_credentials_message_new_with_credentials (GCredentials* credentials);
// ::GUnixCredentialsMessage* g_unix_credentials_message_new_with_credentials (::GCredentials* credentials);
static GI_INLINE_DECL Gio::UnixCredentialsMessage new_with_credentials (Gio::Credentials credentials) noexcept;

// gboolean g_unix_credentials_message_is_supported ();
// gboolean g_unix_credentials_message_is_supported ();
static GI_INLINE_DECL bool is_supported () noexcept;

// GCredentials* g_unix_credentials_message_get_credentials (GUnixCredentialsMessage* message);
// ::GCredentials* g_unix_credentials_message_get_credentials (::GUnixCredentialsMessage* message);
GI_INLINE_DECL Gio::Credentials get_credentials () noexcept;

gi::property_proxy<Gio::Credentials, base::UnixCredentialsMessageBase> property_credentials()
{ return gi::property_proxy<Gio::Credentials, base::UnixCredentialsMessageBase> (*this, "credentials"); }
const gi::property_proxy<Gio::Credentials, base::UnixCredentialsMessageBase> property_credentials() const
{ return gi::property_proxy<Gio::Credentials, base::UnixCredentialsMessageBase> (*this, "credentials"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixcredentialsmessage_extra_def.hpp>)
#include <gio/unixcredentialsmessage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixcredentialsmessage_extra.hpp>)
#include <gio/unixcredentialsmessage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class UnixCredentialsMessage : public GI_GIO_UNIXCREDENTIALSMESSAGE_BASE
{ typedef GI_GIO_UNIXCREDENTIALSMESSAGE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GUnixCredentialsMessage>
{ typedef Gio::UnixCredentialsMessage type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class UnixCredentialsMessageClassDef
{
typedef UnixCredentialsMessageClassDef self;
public:
typedef Gio::UnixCredentialsMessage instance_type;
typedef ::GUnixCredentialsMessageClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class UnixCredentialsMessageClass: public detail::ClassTemplate<Gio::impl::internal::UnixCredentialsMessageClassDef, Gio::impl::internal::SocketControlMessageClass>
{
typedef UnixCredentialsMessageClass self;
typedef detail::ClassTemplate<Gio::impl::internal::UnixCredentialsMessageClassDef, Gio::impl::internal::SocketControlMessageClass> super;

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

using UnixCredentialsMessageImpl = detail::ObjectImpl<UnixCredentialsMessage, internal::UnixCredentialsMessageClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
