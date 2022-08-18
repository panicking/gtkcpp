// AUTO-GENERATED

#ifndef _GI_GIO_POLLABLEOUTPUTSTREAM_HPP_
#define _GI_GIO_POLLABLEOUTPUTSTREAM_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Cancellable;
class OutputVector;

class PollableOutputStream;

namespace base {


#define GI_GIO_POLLABLEOUTPUTSTREAM_BASE base::PollableOutputStreamBase
class PollableOutputStreamBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GPollableOutputStream BaseObjectType;

PollableOutputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_pollable_output_stream_get_type(); } 

// gboolean g_pollable_output_stream_can_poll (GPollableOutputStream* stream);
// gboolean g_pollable_output_stream_can_poll (::GPollableOutputStream* stream);
GI_INLINE_DECL bool can_poll () noexcept;

// GSource* g_pollable_output_stream_create_source (GPollableOutputStream* stream, GCancellable* cancellable);
// ::GSource* g_pollable_output_stream_create_source (::GPollableOutputStream* stream, ::GCancellable* cancellable);
GI_INLINE_DECL GLib::Source create_source (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL GLib::Source create_source () noexcept;

// gboolean g_pollable_output_stream_is_writable (GPollableOutputStream* stream);
// gboolean g_pollable_output_stream_is_writable (::GPollableOutputStream* stream);
GI_INLINE_DECL bool is_writable () noexcept;

// gssize g_pollable_output_stream_write_nonblocking (GPollableOutputStream* stream, void* buffer, gsize count, GCancellable* cancellable, GError ** error);
// gssize g_pollable_output_stream_write_nonblocking (::GPollableOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL gssize write_nonblocking (guint8 * buffer, gsize count, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize write_nonblocking (guint8 * buffer, gsize count);
GI_INLINE_DECL gssize write_nonblocking (guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize write_nonblocking (guint8 * buffer, gsize count, GLib::Error * _error) noexcept;

// GPollableReturn g_pollable_output_stream_writev_nonblocking (GPollableOutputStream* stream, const GOutputVector* vectors, gsize n_vectors, gsize* bytes_written, GCancellable* cancellable, GError ** error);
// ::GPollableReturn g_pollable_output_stream_writev_nonblocking (::GPollableOutputStream* stream, const ::GOutputVector** vectors, gsize n_vectors, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
// SKIP; inconsistent in vectors pointer depth (1 vs 2)

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/pollableoutputstream_extra_def.hpp>)
#include <gio/pollableoutputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/pollableoutputstream_extra.hpp>)
#include <gio/pollableoutputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class PollableOutputStream : public GI_GIO_POLLABLEOUTPUTSTREAM_BASE
{ typedef GI_GIO_POLLABLEOUTPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GPollableOutputStream>
{ typedef Gio::PollableOutputStream type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class PollableOutputStreamInterfaceDef
{
typedef PollableOutputStreamInterfaceDef self;
public:
typedef Gio::PollableOutputStream instance_type;
typedef ::GPollableOutputStreamInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean PollableOutputStream::can_poll (GPollableOutputStream* stream);
// gboolean PollableOutputStream::can_poll (::GPollableOutputStream* stream);
virtual bool can_poll_ () noexcept = 0;

// GSource* PollableOutputStream::create_source (GPollableOutputStream* stream, GCancellable* cancellable);
// ::GSource* PollableOutputStream::create_source (::GPollableOutputStream* stream, ::GCancellable* cancellable);
virtual GLib::Source create_source_ (Gio::Cancellable cancellable) noexcept = 0;

// gboolean PollableOutputStream::is_writable (GPollableOutputStream* stream);
// gboolean PollableOutputStream::is_writable (::GPollableOutputStream* stream);
virtual bool is_writable_ () noexcept = 0;

// gssize PollableOutputStream::write_nonblocking (GPollableOutputStream* stream, void* buffer, gsize count, GError ** error);
// gssize PollableOutputStream::write_nonblocking (::GPollableOutputStream* stream, guint8* buffer, gsize count, GError ** error);
// SKIP; virtual-method container parameter not supported, callee GError not supported

// GPollableReturn PollableOutputStream::writev_nonblocking (GPollableOutputStream* stream, const GOutputVector* vectors, gsize n_vectors, gsize* bytes_written, GError ** error);
// ::GPollableReturn PollableOutputStream::writev_nonblocking (::GPollableOutputStream* stream, const ::GOutputVector** vectors, gsize n_vectors, gsize* bytes_written, GError ** error);
// SKIP; virtual-method container parameter not supported, virtual-method out parameter not supported, callee GError not supported


};

using PollableOutputStreamImpl = detail::InterfaceImpl<PollableOutputStreamInterfaceDef>;

class PollableOutputStreamInterfaceClassImpl: public detail::InterfaceClassImpl<PollableOutputStreamImpl>
{
typedef PollableOutputStreamInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<PollableOutputStreamImpl> super;

protected:
using super::super;

// gboolean PollableOutputStream::can_poll (GPollableOutputStream* stream);
// gboolean PollableOutputStream::can_poll (::GPollableOutputStream* stream);
GI_INLINE_DECL bool can_poll_ () noexcept override;

// GSource* PollableOutputStream::create_source (GPollableOutputStream* stream, GCancellable* cancellable);
// ::GSource* PollableOutputStream::create_source (::GPollableOutputStream* stream, ::GCancellable* cancellable);
GI_INLINE_DECL GLib::Source create_source_ (Gio::Cancellable cancellable) noexcept override;

// gboolean PollableOutputStream::is_writable (GPollableOutputStream* stream);
// gboolean PollableOutputStream::is_writable (::GPollableOutputStream* stream);
GI_INLINE_DECL bool is_writable_ () noexcept override;

// gssize PollableOutputStream::write_nonblocking (GPollableOutputStream* stream, void* buffer, gsize count, GError ** error);
// gssize PollableOutputStream::write_nonblocking (::GPollableOutputStream* stream, guint8* buffer, gsize count, GError ** error);
// SKIP; virtual-method container parameter not supported, callee GError not supported

// GPollableReturn PollableOutputStream::writev_nonblocking (GPollableOutputStream* stream, const GOutputVector* vectors, gsize n_vectors, gsize* bytes_written, GError ** error);
// ::GPollableReturn PollableOutputStream::writev_nonblocking (::GPollableOutputStream* stream, const ::GOutputVector** vectors, gsize n_vectors, gsize* bytes_written, GError ** error);
// SKIP; virtual-method container parameter not supported, virtual-method out parameter not supported, callee GError not supported


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
