// AUTO-GENERATED

#ifndef _GI_GIO_FILEIOSTREAM_HPP_
#define _GI_GIO_FILEIOSTREAM_HPP_

#include "iostream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class FileInfo;
class Seekable;

class FileIOStream;

namespace base {


#define GI_GIO_FILEIOSTREAM_BASE base::FileIOStreamBase
class FileIOStreamBase : public Gio::IOStream
{
typedef Gio::IOStream super_type;
public:
typedef ::GFileIOStream BaseObjectType;

FileIOStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_file_io_stream_get_type(); } 

GI_INLINE_DECL Gio::Seekable interface_ (gi::interface_tag<Gio::Seekable>);

GI_INLINE_DECL operator Gio::Seekable ();

// char* g_file_io_stream_get_etag (GFileIOStream* stream);
// char* g_file_io_stream_get_etag (::GFileIOStream* stream);
GI_INLINE_DECL std::string get_etag () noexcept;

// GFileInfo* g_file_io_stream_query_info (GFileIOStream* stream, const char* attributes, GCancellable* cancellable, GError ** error);
// ::GFileInfo* g_file_io_stream_query_info (::GFileIOStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info (const std::string & attributes, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileInfo query_info (const std::string & attributes);
GI_INLINE_DECL Gio::FileInfo query_info (const std::string & attributes, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileInfo query_info (const std::string & attributes, GLib::Error * _error) noexcept;

// void g_file_io_stream_query_info_async (GFileIOStream* stream, const char* attributes, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_io_stream_query_info_async (::GFileIOStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void query_info_async (const std::string & attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void query_info_async (const std::string & attributes, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileInfo* g_file_io_stream_query_info_finish (GFileIOStream* stream, GAsyncResult* result, GError ** error);
// ::GFileInfo* g_file_io_stream_query_info_finish (::GFileIOStream* stream, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::FileInfo query_info_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileiostream_extra_def.hpp>)
#include <gio/fileiostream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileiostream_extra.hpp>)
#include <gio/fileiostream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FileIOStream : public GI_GIO_FILEIOSTREAM_BASE
{ typedef GI_GIO_FILEIOSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFileIOStream>
{ typedef Gio::FileIOStream type; }; 

} // namespace repository

} // namespace gi

#include "seekable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class FileIOStreamClassDef
{
typedef FileIOStreamClassDef self;
public:
typedef Gio::FileIOStream instance_type;
typedef ::GFileIOStreamClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean FileIOStream::can_seek (GFileIOStream* stream);
// gboolean FileIOStream::can_seek (::GFileIOStream* stream);
virtual bool can_seek_ () noexcept = 0;

// gboolean FileIOStream::can_truncate (GFileIOStream* stream);
// gboolean FileIOStream::can_truncate (::GFileIOStream* stream);
virtual bool can_truncate_ () noexcept = 0;

// char* FileIOStream::get_etag (GFileIOStream* stream);
// char* FileIOStream::get_etag (::GFileIOStream* stream);
virtual std::string get_etag_ () noexcept = 0;

// GFileInfo* FileIOStream::query_info (GFileIOStream* stream, const char* attributes, GCancellable* cancellable, GError ** error);
// ::GFileInfo* FileIOStream::query_info (::GFileIOStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void FileIOStream::query_info_async (GFileIOStream* stream, const char* attributes, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void FileIOStream::query_info_async (::GFileIOStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileInfo* FileIOStream::query_info_finish (GFileIOStream* stream, GAsyncResult* result, GError ** error);
// ::GFileInfo* FileIOStream::query_info_finish (::GFileIOStream* stream, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean FileIOStream::seek (GFileIOStream* stream, goffset offset, GSeekType type, GCancellable* cancellable, GError ** error);
// gboolean FileIOStream::seek (::GFileIOStream* stream, gint64 offset, ::GSeekType type, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// goffset FileIOStream::tell (GFileIOStream* stream);
// gint64 FileIOStream::tell (::GFileIOStream* stream);
virtual gint64 tell_ () noexcept = 0;

// gboolean FileIOStream::truncate_fn (GFileIOStream* stream, goffset size, GCancellable* cancellable, GError ** error);
// gboolean FileIOStream::truncate_fn (::GFileIOStream* stream, gint64 size, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported


};

GI_CLASS_IMPL_BEGIN


class FileIOStreamClass: public detail::ClassTemplate<Gio::impl::internal::FileIOStreamClassDef, Gio::impl::internal::IOStreamClass, Gio::impl::internal::SeekableIfaceClassImpl>
{
typedef FileIOStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::FileIOStreamClassDef, Gio::impl::internal::IOStreamClass, Gio::impl::internal::SeekableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::SeekableIfaceClassImpl GSeekableIface_type;


// gboolean FileIOStream::can_seek (GFileIOStream* stream);
// gboolean FileIOStream::can_seek (::GFileIOStream* stream);
GI_INLINE_DECL bool can_seek_ () noexcept override;

// gboolean FileIOStream::can_truncate (GFileIOStream* stream);
// gboolean FileIOStream::can_truncate (::GFileIOStream* stream);
GI_INLINE_DECL bool can_truncate_ () noexcept override;

// char* FileIOStream::get_etag (GFileIOStream* stream);
// char* FileIOStream::get_etag (::GFileIOStream* stream);
GI_INLINE_DECL std::string get_etag_ () noexcept override;

// GFileInfo* FileIOStream::query_info (GFileIOStream* stream, const char* attributes, GCancellable* cancellable, GError ** error);
// ::GFileInfo* FileIOStream::query_info (::GFileIOStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void FileIOStream::query_info_async (GFileIOStream* stream, const char* attributes, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void FileIOStream::query_info_async (::GFileIOStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileInfo* FileIOStream::query_info_finish (GFileIOStream* stream, GAsyncResult* result, GError ** error);
// ::GFileInfo* FileIOStream::query_info_finish (::GFileIOStream* stream, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean FileIOStream::seek (GFileIOStream* stream, goffset offset, GSeekType type, GCancellable* cancellable, GError ** error);
// gboolean FileIOStream::seek (::GFileIOStream* stream, gint64 offset, ::GSeekType type, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// goffset FileIOStream::tell (GFileIOStream* stream);
// gint64 FileIOStream::tell (::GFileIOStream* stream);
GI_INLINE_DECL gint64 tell_ () noexcept override;

// gboolean FileIOStream::truncate_fn (GFileIOStream* stream, goffset size, GCancellable* cancellable, GError ** error);
// gboolean FileIOStream::truncate_fn (::GFileIOStream* stream, gint64 size, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using FileIOStreamImpl = detail::ObjectImpl<FileIOStream, internal::FileIOStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
