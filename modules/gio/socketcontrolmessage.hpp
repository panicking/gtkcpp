// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETCONTROLMESSAGE_HPP_
#define _GI_GIO_SOCKETCONTROLMESSAGE_HPP_


namespace gi {

namespace repository {

namespace Gio {


class SocketControlMessage;

namespace base {


#define GI_GIO_SOCKETCONTROLMESSAGE_BASE base::SocketControlMessageBase
class SocketControlMessageBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSocketControlMessage BaseObjectType;

SocketControlMessageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_socket_control_message_get_type(); } 

// GSocketControlMessage* g_socket_control_message_deserialize (int level, int type, gsize size, gpointer data);
// ::GSocketControlMessage* g_socket_control_message_deserialize (gint level, gint type, gsize size, guint8* data);
static GI_INLINE_DECL Gio::SocketControlMessage deserialize (gint level, gint type, gsize size, guint8 * data) noexcept;

// int g_socket_control_message_get_level (GSocketControlMessage* message);
// gint g_socket_control_message_get_level (::GSocketControlMessage* message);
GI_INLINE_DECL gint get_level () noexcept;

// int g_socket_control_message_get_msg_type (GSocketControlMessage* message);
// gint g_socket_control_message_get_msg_type (::GSocketControlMessage* message);
GI_INLINE_DECL gint get_msg_type () noexcept;

// gsize g_socket_control_message_get_size (GSocketControlMessage* message);
// gsize g_socket_control_message_get_size (::GSocketControlMessage* message);
GI_INLINE_DECL gsize get_size () noexcept;

// void g_socket_control_message_serialize (GSocketControlMessage* message, gpointer data);
// void g_socket_control_message_serialize (::GSocketControlMessage* message, void* data);
GI_INLINE_DECL void serialize (void* data) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketcontrolmessage_extra_def.hpp>)
#include <gio/socketcontrolmessage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketcontrolmessage_extra.hpp>)
#include <gio/socketcontrolmessage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SocketControlMessage : public GI_GIO_SOCKETCONTROLMESSAGE_BASE
{ typedef GI_GIO_SOCKETCONTROLMESSAGE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSocketControlMessage>
{ typedef Gio::SocketControlMessage type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SocketControlMessageClassDef
{
typedef SocketControlMessageClassDef self;
public:
typedef Gio::SocketControlMessage instance_type;
typedef ::GSocketControlMessageClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// int SocketControlMessage::get_level (GSocketControlMessage* message);
// gint SocketControlMessage::get_level (::GSocketControlMessage* message);
virtual gint get_level_ () noexcept = 0;

// gsize SocketControlMessage::get_size (GSocketControlMessage* message);
// gsize SocketControlMessage::get_size (::GSocketControlMessage* message);
virtual gsize get_size_ () noexcept = 0;

// int SocketControlMessage::get_type (GSocketControlMessage* message);
// gint SocketControlMessage::get_type (::GSocketControlMessage* message);
virtual gint get_type_ () noexcept = 0;

// void SocketControlMessage::serialize (GSocketControlMessage* message, gpointer data);
// void SocketControlMessage::serialize (::GSocketControlMessage* message, void* data);
virtual void serialize_ (void* data) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class SocketControlMessageClass: public detail::ClassTemplate<Gio::impl::internal::SocketControlMessageClassDef, GObject::impl::internal::ObjectClass>
{
typedef SocketControlMessageClass self;
typedef detail::ClassTemplate<Gio::impl::internal::SocketControlMessageClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// int SocketControlMessage::get_level (GSocketControlMessage* message);
// gint SocketControlMessage::get_level (::GSocketControlMessage* message);
GI_INLINE_DECL gint get_level_ () noexcept override;

// gsize SocketControlMessage::get_size (GSocketControlMessage* message);
// gsize SocketControlMessage::get_size (::GSocketControlMessage* message);
GI_INLINE_DECL gsize get_size_ () noexcept override;

// int SocketControlMessage::get_type (GSocketControlMessage* message);
// gint SocketControlMessage::get_type (::GSocketControlMessage* message);
GI_INLINE_DECL gint get_type_ () noexcept override;

// void SocketControlMessage::serialize (GSocketControlMessage* message, gpointer data);
// void SocketControlMessage::serialize (::GSocketControlMessage* message, void* data);
GI_INLINE_DECL void serialize_ (void* data) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using SocketControlMessageImpl = detail::ObjectImpl<SocketControlMessage, internal::SocketControlMessageClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
