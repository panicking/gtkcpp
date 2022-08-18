// AUTO-GENERATED

#ifndef _GI_ATK_SOCKET_HPP_
#define _GI_ATK_SOCKET_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Atk {

class Component;

class Socket;

namespace base {


#define GI_ATK_SOCKET_BASE base::SocketBase
class SocketBase : public Atk::Object
{
typedef Atk::Object super_type;
public:
typedef ::AtkSocket BaseObjectType;

SocketBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_socket_get_type(); } 

GI_INLINE_DECL Atk::Component interface_ (gi::interface_tag<Atk::Component>);

GI_INLINE_DECL operator Atk::Component ();

// AtkObject* atk_socket_new ();
// ::AtkSocket* atk_socket_new ();
static GI_INLINE_DECL Atk::Socket new_ () noexcept;

// void atk_socket_embed (AtkSocket* obj, const gchar* plug_id);
// void atk_socket_embed (::AtkSocket* obj, const char* plug_id);
GI_INLINE_DECL void embed (const std::string & plug_id) noexcept;

// gboolean atk_socket_is_occupied (AtkSocket* obj);
// gboolean atk_socket_is_occupied (::AtkSocket* obj);
GI_INLINE_DECL bool is_occupied () noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/socket_extra_def.hpp>)
#include <atk/socket_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/socket_extra.hpp>)
#include <atk/socket_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Socket : public GI_ATK_SOCKET_BASE
{ typedef GI_ATK_SOCKET_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkSocket>
{ typedef Atk::Socket type; }; 

} // namespace repository

} // namespace gi

#include "component.hpp"

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class SocketClassDef
{
typedef SocketClassDef self;
public:
typedef Atk::Socket instance_type;
typedef ::AtkSocketClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Socket::embed (AtkSocket* obj, const gchar* plug_id);
// void Socket::embed (::AtkSocket* obj, const char* plug_id);
virtual void embed_ (const std::string & plug_id) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class SocketClass: public detail::ClassTemplate<Atk::impl::internal::SocketClassDef, Atk::impl::internal::ObjectClass, Atk::impl::internal::ComponentIfaceClassImpl>
{
typedef SocketClass self;
typedef detail::ClassTemplate<Atk::impl::internal::SocketClassDef, Atk::impl::internal::ObjectClass, Atk::impl::internal::ComponentIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::ComponentIfaceClassImpl AtkComponentIface_type;


// void Socket::embed (AtkSocket* obj, const gchar* plug_id);
// void Socket::embed (::AtkSocket* obj, const char* plug_id);
GI_INLINE_DECL void embed_ (const std::string & plug_id) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using SocketImpl = detail::ObjectImpl<Socket, internal::SocketClass>;

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
