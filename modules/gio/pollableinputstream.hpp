// AUTO-GENERATED

#ifndef _GI_GIO_POLLABLEINPUTSTREAM_HPP_
#define _GI_GIO_POLLABLEINPUTSTREAM_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Cancellable;

class PollableInputStream;

namespace base {


#define GI_GIO_POLLABLEINPUTSTREAM_BASE base::PollableInputStreamBase
class PollableInputStreamBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GPollableInputStream BaseObjectType;

PollableInputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_pollable_input_stream_get_type(); } 

// gboolean g_pollable_input_stream_can_poll (GPollableInputStream* stream);
// gboolean g_pollable_input_stream_can_poll (::GPollableInputStream* stream);
GI_INLINE_DECL bool can_poll () noexcept;

// GSource* g_pollable_input_stream_create_source (GPollableInputStream* stream, GCancellable* cancellable);
// ::GSource* g_pollable_input_stream_create_source (::GPollableInputStream* stream, ::GCancellable* cancellable);
GI_INLINE_DECL GLib::Source create_source (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL GLib::Source create_source () noexcept;

// gboolean g_pollable_input_stream_is_readable (GPollableInputStream* stream);
// gboolean g_pollable_input_stream_is_readable (::GPollableInputStream* stream);
GI_INLINE_DECL bool is_readable () noexcept;

// gssize g_pollable_input_stream_read_nonblocking (GPollableInputStream* stream, void* buffer, gsize count, GCancellable* cancellable, GError ** error);
// gssize g_pollable_input_stream_read_nonblocking (::GPollableInputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL gssize read_nonblocking (guint8 * buffer, gsize count, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize read_nonblocking (guint8 * buffer, gsize count);
GI_INLINE_DECL gssize read_nonblocking (guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize read_nonblocking (guint8 * buffer, gsize count, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/pollableinputstream_extra_def.hpp>)
#include <gio/pollableinputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/pollableinputstream_extra.hpp>)
#include <gio/pollableinputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class PollableInputStream : public GI_GIO_POLLABLEINPUTSTREAM_BASE
{ typedef GI_GIO_POLLABLEINPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GPollableInputStream>
{ typedef Gio::PollableInputStream type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class PollableInputStreamInterfaceDef
{
typedef PollableInputStreamInterfaceDef self;
public:
typedef Gio::PollableInputStream instance_type;
typedef ::GPollableInputStreamInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean PollableInputStream::can_poll (GPollableInputStream* stream);
// gboolean PollableInputStream::can_poll (::GPollableInputStream* stream);
virtual bool can_poll_ () noexcept = 0;

// GSource* PollableInputStream::create_source (GPollableInputStream* stream, GCancellable* cancellable);
// ::GSource* PollableInputStream::create_source (::GPollableInputStream* stream, ::GCancellable* cancellable);
virtual GLib::Source create_source_ (Gio::Cancellable cancellable) noexcept = 0;

// gboolean PollableInputStream::is_readable (GPollableInputStream* stream);
// gboolean PollableInputStream::is_readable (::GPollableInputStream* stream);
virtual bool is_readable_ () noexcept = 0;

// gssize PollableInputStream::read_nonblocking (GPollableInputStream* stream, void* buffer, gsize count, GError ** error);
// gssize PollableInputStream::read_nonblocking (::GPollableInputStream* stream, guint8* buffer, gsize count, GError ** error);
// SKIP; virtual-method out parameter not supported, callee GError not supported


};

using PollableInputStreamImpl = detail::InterfaceImpl<PollableInputStreamInterfaceDef>;

class PollableInputStreamInterfaceClassImpl: public detail::InterfaceClassImpl<PollableInputStreamImpl>
{
typedef PollableInputStreamInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<PollableInputStreamImpl> super;

protected:
using super::super;

// gboolean PollableInputStream::can_poll (GPollableInputStream* stream);
// gboolean PollableInputStream::can_poll (::GPollableInputStream* stream);
GI_INLINE_DECL bool can_poll_ () noexcept override;

// GSource* PollableInputStream::create_source (GPollableInputStream* stream, GCancellable* cancellable);
// ::GSource* PollableInputStream::create_source (::GPollableInputStream* stream, ::GCancellable* cancellable);
GI_INLINE_DECL GLib::Source create_source_ (Gio::Cancellable cancellable) noexcept override;

// gboolean PollableInputStream::is_readable (GPollableInputStream* stream);
// gboolean PollableInputStream::is_readable (::GPollableInputStream* stream);
GI_INLINE_DECL bool is_readable_ () noexcept override;

// gssize PollableInputStream::read_nonblocking (GPollableInputStream* stream, void* buffer, gsize count, GError ** error);
// gssize PollableInputStream::read_nonblocking (::GPollableInputStream* stream, guint8* buffer, gsize count, GError ** error);
// SKIP; virtual-method out parameter not supported, callee GError not supported


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
