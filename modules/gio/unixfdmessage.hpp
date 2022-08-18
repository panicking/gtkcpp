// AUTO-GENERATED

#ifndef _GI_GIO_UNIXFDMESSAGE_HPP_
#define _GI_GIO_UNIXFDMESSAGE_HPP_

#include "socketcontrolmessage.hpp"

namespace gi {

namespace repository {

namespace Gio {

class UnixFDList;

class UnixFDMessage;

namespace base {


#define GI_GIO_UNIXFDMESSAGE_BASE base::UnixFDMessageBase
class UnixFDMessageBase : public Gio::SocketControlMessage
{
typedef Gio::SocketControlMessage super_type;
public:
typedef ::GUnixFDMessage BaseObjectType;

UnixFDMessageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_unix_fd_message_get_type(); } 

// GSocketControlMessage* g_unix_fd_message_new ();
// ::GUnixFDMessage* g_unix_fd_message_new ();
static GI_INLINE_DECL Gio::UnixFDMessage new_ () noexcept;

// GSocketControlMessage* g_unix_fd_message_new_with_fd_list (GUnixFDList* fd_list);
// ::GUnixFDMessage* g_unix_fd_message_new_with_fd_list (::GUnixFDList* fd_list);
static GI_INLINE_DECL Gio::UnixFDMessage new_with_fd_list (Gio::UnixFDList fd_list) noexcept;

// gboolean g_unix_fd_message_append_fd (GUnixFDMessage* message, gint fd, GError ** error);
// gboolean g_unix_fd_message_append_fd (::GUnixFDMessage* message, gint fd, GError ** error);
GI_INLINE_DECL bool append_fd (gint fd);
GI_INLINE_DECL bool append_fd (gint fd, GLib::Error * _error) noexcept;

// GUnixFDList* g_unix_fd_message_get_fd_list (GUnixFDMessage* message);
// ::GUnixFDList* g_unix_fd_message_get_fd_list (::GUnixFDMessage* message);
GI_INLINE_DECL Gio::UnixFDList get_fd_list () noexcept;

// gint* g_unix_fd_message_steal_fds (GUnixFDMessage* message, gint* length);
// gint* g_unix_fd_message_steal_fds (::GUnixFDMessage* message, gint* length);
GI_INLINE_DECL std::vector<gint> steal_fds () noexcept;

gi::property_proxy<Gio::UnixFDList, base::UnixFDMessageBase> property_fd_list()
{ return gi::property_proxy<Gio::UnixFDList, base::UnixFDMessageBase> (*this, "fd-list"); }
const gi::property_proxy<Gio::UnixFDList, base::UnixFDMessageBase> property_fd_list() const
{ return gi::property_proxy<Gio::UnixFDList, base::UnixFDMessageBase> (*this, "fd-list"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixfdmessage_extra_def.hpp>)
#include <gio/unixfdmessage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixfdmessage_extra.hpp>)
#include <gio/unixfdmessage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class UnixFDMessage : public GI_GIO_UNIXFDMESSAGE_BASE
{ typedef GI_GIO_UNIXFDMESSAGE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GUnixFDMessage>
{ typedef Gio::UnixFDMessage type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class UnixFDMessageClassDef
{
typedef UnixFDMessageClassDef self;
public:
typedef Gio::UnixFDMessage instance_type;
typedef ::GUnixFDMessageClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class UnixFDMessageClass: public detail::ClassTemplate<Gio::impl::internal::UnixFDMessageClassDef, Gio::impl::internal::SocketControlMessageClass>
{
typedef UnixFDMessageClass self;
typedef detail::ClassTemplate<Gio::impl::internal::UnixFDMessageClassDef, Gio::impl::internal::SocketControlMessageClass> super;

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

using UnixFDMessageImpl = detail::ObjectImpl<UnixFDMessage, internal::UnixFDMessageClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
