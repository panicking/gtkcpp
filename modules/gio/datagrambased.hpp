// AUTO-GENERATED

#ifndef _GI_GIO_DATAGRAMBASED_HPP_
#define _GI_GIO_DATAGRAMBASED_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Cancellable;
class InputMessage;
class OutputMessage;

class DatagramBased;

namespace base {


#define GI_GIO_DATAGRAMBASED_BASE base::DatagramBasedBase
class DatagramBasedBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GDatagramBased BaseObjectType;

DatagramBasedBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_datagram_based_get_type(); } 

// GIOCondition g_datagram_based_condition_check (GDatagramBased* datagram_based, GIOCondition condition);
// ::GIOCondition g_datagram_based_condition_check (::GDatagramBased* datagram_based, ::GIOCondition condition);
GI_INLINE_DECL GLib::IOCondition condition_check (GLib::IOCondition condition) noexcept;

// gboolean g_datagram_based_condition_wait (GDatagramBased* datagram_based, GIOCondition condition, gint64 timeout, GCancellable* cancellable, GError ** error);
// gboolean g_datagram_based_condition_wait (::GDatagramBased* datagram_based, ::GIOCondition condition, gint64 timeout, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool condition_wait (GLib::IOCondition condition, gint64 timeout, Gio::Cancellable cancellable);
GI_INLINE_DECL bool condition_wait (GLib::IOCondition condition, gint64 timeout);
GI_INLINE_DECL bool condition_wait (GLib::IOCondition condition, gint64 timeout, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool condition_wait (GLib::IOCondition condition, gint64 timeout, GLib::Error * _error) noexcept;

// GSource* g_datagram_based_create_source (GDatagramBased* datagram_based, GIOCondition condition, GCancellable* cancellable);
// ::GSource* g_datagram_based_create_source (::GDatagramBased* datagram_based, ::GIOCondition condition, ::GCancellable* cancellable);
GI_INLINE_DECL GLib::Source create_source (GLib::IOCondition condition, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL GLib::Source create_source (GLib::IOCondition condition) noexcept;

// gint g_datagram_based_receive_messages (GDatagramBased* datagram_based, GInputMessage* messages, guint num_messages, gint flags, gint64 timeout, GCancellable* cancellable, GError ** error);
// gint g_datagram_based_receive_messages (::GDatagramBased* datagram_based, ::GInputMessage** messages, guint num_messages, gint flags, gint64 timeout, ::GCancellable* cancellable, GError ** error);
// SKIP; inconsistent in messages pointer depth (1 vs 2)

// gint g_datagram_based_send_messages (GDatagramBased* datagram_based, GOutputMessage* messages, guint num_messages, gint flags, gint64 timeout, GCancellable* cancellable, GError ** error);
// gint g_datagram_based_send_messages (::GDatagramBased* datagram_based, ::GOutputMessage** messages, guint num_messages, gint flags, gint64 timeout, ::GCancellable* cancellable, GError ** error);
// SKIP; inconsistent in messages pointer depth (1 vs 2)

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/datagrambased_extra_def.hpp>)
#include <gio/datagrambased_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/datagrambased_extra.hpp>)
#include <gio/datagrambased_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DatagramBased : public GI_GIO_DATAGRAMBASED_BASE
{ typedef GI_GIO_DATAGRAMBASED_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDatagramBased>
{ typedef Gio::DatagramBased type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DatagramBasedInterfaceDef
{
typedef DatagramBasedInterfaceDef self;
public:
typedef Gio::DatagramBased instance_type;
typedef ::GDatagramBasedInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GIOCondition DatagramBased::condition_check (GDatagramBased* datagram_based, GIOCondition condition);
// ::GIOCondition DatagramBased::condition_check (::GDatagramBased* datagram_based, ::GIOCondition condition);
virtual GLib::IOCondition condition_check_ (GLib::IOCondition condition) noexcept = 0;

// gboolean DatagramBased::condition_wait (GDatagramBased* datagram_based, GIOCondition condition, gint64 timeout, GCancellable* cancellable, GError ** error);
// gboolean DatagramBased::condition_wait (::GDatagramBased* datagram_based, ::GIOCondition condition, gint64 timeout, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// GSource* DatagramBased::create_source (GDatagramBased* datagram_based, GIOCondition condition, GCancellable* cancellable);
// ::GSource* DatagramBased::create_source (::GDatagramBased* datagram_based, ::GIOCondition condition, ::GCancellable* cancellable);
virtual GLib::Source create_source_ (GLib::IOCondition condition, Gio::Cancellable cancellable) noexcept = 0;

// gint DatagramBased::receive_messages (GDatagramBased* datagram_based, GInputMessage* messages, guint num_messages, gint flags, gint64 timeout, GCancellable* cancellable, GError ** error);
// gint DatagramBased::receive_messages (::GDatagramBased* datagram_based, ::GInputMessage** messages, guint num_messages, gint flags, gint64 timeout, ::GCancellable* cancellable, GError ** error);
// SKIP; virtual-method container parameter not supported, callee GError not supported

// gint DatagramBased::send_messages (GDatagramBased* datagram_based, GOutputMessage* messages, guint num_messages, gint flags, gint64 timeout, GCancellable* cancellable, GError ** error);
// gint DatagramBased::send_messages (::GDatagramBased* datagram_based, ::GOutputMessage** messages, guint num_messages, gint flags, gint64 timeout, ::GCancellable* cancellable, GError ** error);
// SKIP; virtual-method container parameter not supported, callee GError not supported


};

using DatagramBasedImpl = detail::InterfaceImpl<DatagramBasedInterfaceDef>;

class DatagramBasedInterfaceClassImpl: public detail::InterfaceClassImpl<DatagramBasedImpl>
{
typedef DatagramBasedInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<DatagramBasedImpl> super;

protected:
using super::super;

// GIOCondition DatagramBased::condition_check (GDatagramBased* datagram_based, GIOCondition condition);
// ::GIOCondition DatagramBased::condition_check (::GDatagramBased* datagram_based, ::GIOCondition condition);
GI_INLINE_DECL GLib::IOCondition condition_check_ (GLib::IOCondition condition) noexcept override;

// gboolean DatagramBased::condition_wait (GDatagramBased* datagram_based, GIOCondition condition, gint64 timeout, GCancellable* cancellable, GError ** error);
// gboolean DatagramBased::condition_wait (::GDatagramBased* datagram_based, ::GIOCondition condition, gint64 timeout, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// GSource* DatagramBased::create_source (GDatagramBased* datagram_based, GIOCondition condition, GCancellable* cancellable);
// ::GSource* DatagramBased::create_source (::GDatagramBased* datagram_based, ::GIOCondition condition, ::GCancellable* cancellable);
GI_INLINE_DECL GLib::Source create_source_ (GLib::IOCondition condition, Gio::Cancellable cancellable) noexcept override;

// gint DatagramBased::receive_messages (GDatagramBased* datagram_based, GInputMessage* messages, guint num_messages, gint flags, gint64 timeout, GCancellable* cancellable, GError ** error);
// gint DatagramBased::receive_messages (::GDatagramBased* datagram_based, ::GInputMessage** messages, guint num_messages, gint flags, gint64 timeout, ::GCancellable* cancellable, GError ** error);
// SKIP; virtual-method container parameter not supported, callee GError not supported

// gint DatagramBased::send_messages (GDatagramBased* datagram_based, GOutputMessage* messages, guint num_messages, gint flags, gint64 timeout, GCancellable* cancellable, GError ** error);
// gint DatagramBased::send_messages (::GDatagramBased* datagram_based, ::GOutputMessage** messages, guint num_messages, gint flags, gint64 timeout, ::GCancellable* cancellable, GError ** error);
// SKIP; virtual-method container parameter not supported, callee GError not supported


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
