// AUTO-GENERATED

#ifndef _GI_GIO_MEMORYINPUTSTREAM_HPP_
#define _GI_GIO_MEMORYINPUTSTREAM_HPP_

#include "inputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class PollableInputStream;
class Seekable;

class MemoryInputStream;

namespace base {


#define GI_GIO_MEMORYINPUTSTREAM_BASE base::MemoryInputStreamBase
class MemoryInputStreamBase : public Gio::InputStream
{
typedef Gio::InputStream super_type;
public:
typedef ::GMemoryInputStream BaseObjectType;

MemoryInputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_memory_input_stream_get_type(); } 

GI_INLINE_DECL Gio::PollableInputStream interface_ (gi::interface_tag<Gio::PollableInputStream>);

GI_INLINE_DECL operator Gio::PollableInputStream ();

GI_INLINE_DECL Gio::Seekable interface_ (gi::interface_tag<Gio::Seekable>);

GI_INLINE_DECL operator Gio::Seekable ();

// GInputStream* g_memory_input_stream_new ();
// ::GMemoryInputStream* g_memory_input_stream_new ();
static GI_INLINE_DECL Gio::MemoryInputStream new_ () noexcept;

// GInputStream* g_memory_input_stream_new_from_bytes (GBytes* bytes);
// ::GMemoryInputStream* g_memory_input_stream_new_from_bytes (::GBytes* bytes);
static GI_INLINE_DECL Gio::MemoryInputStream new_from_bytes (GLib::Bytes bytes) noexcept;

// GInputStream* g_memory_input_stream_new_from_data (void* data, gssize len, GDestroyNotify destroy);
// ::GMemoryInputStream* g_memory_input_stream_new_from_data (guint8* data, gssize len, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; callback misses closure info

// void g_memory_input_stream_add_bytes (GMemoryInputStream* stream, GBytes* bytes);
// void g_memory_input_stream_add_bytes (::GMemoryInputStream* stream, ::GBytes* bytes);
GI_INLINE_DECL void add_bytes (GLib::Bytes bytes) noexcept;

// void g_memory_input_stream_add_data (GMemoryInputStream* stream, void* data, gssize len, GDestroyNotify destroy);
// void g_memory_input_stream_add_data (::GMemoryInputStream* stream, guint8* data, gssize len, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; callback misses closure info

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/memoryinputstream_extra_def.hpp>)
#include <gio/memoryinputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/memoryinputstream_extra.hpp>)
#include <gio/memoryinputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class MemoryInputStream : public GI_GIO_MEMORYINPUTSTREAM_BASE
{ typedef GI_GIO_MEMORYINPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GMemoryInputStream>
{ typedef Gio::MemoryInputStream type; }; 

} // namespace repository

} // namespace gi

#include "pollableinputstream.hpp"
#include "seekable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class MemoryInputStreamClassDef
{
typedef MemoryInputStreamClassDef self;
public:
typedef Gio::MemoryInputStream instance_type;
typedef ::GMemoryInputStreamClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MemoryInputStreamClass: public detail::ClassTemplate<Gio::impl::internal::MemoryInputStreamClassDef, Gio::impl::internal::InputStreamClass, Gio::impl::internal::PollableInputStreamInterfaceClassImpl, Gio::impl::internal::SeekableIfaceClassImpl>
{
typedef MemoryInputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::MemoryInputStreamClassDef, Gio::impl::internal::InputStreamClass, Gio::impl::internal::PollableInputStreamInterfaceClassImpl, Gio::impl::internal::SeekableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::PollableInputStreamInterfaceClassImpl GPollableInputStreamInterface_type;
typedef Gio::impl::internal::SeekableIfaceClassImpl GSeekableIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using MemoryInputStreamImpl = detail::ObjectImpl<MemoryInputStream, internal::MemoryInputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
