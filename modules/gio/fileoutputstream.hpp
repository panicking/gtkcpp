// AUTO-GENERATED

#ifndef _GI_GIO_FILEOUTPUTSTREAM_HPP_
#define _GI_GIO_FILEOUTPUTSTREAM_HPP_

#include "outputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class FileInfo;
class Seekable;

class FileOutputStream;

namespace base {


#define GI_GIO_FILEOUTPUTSTREAM_BASE base::FileOutputStreamBase
class FileOutputStreamBase : public Gio::OutputStream
{
typedef Gio::OutputStream super_type;
public:
typedef ::GFileOutputStream BaseObjectType;

FileOutputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_file_output_stream_get_type(); } 

GI_INLINE_DECL Gio::Seekable interface_ (gi::interface_tag<Gio::Seekable>);

GI_INLINE_DECL operator Gio::Seekable ();

// char* g_file_output_stream_get_etag (GFileOutputStream* stream);
// char* g_file_output_stream_get_etag (::GFileOutputStream* stream);
GI_INLINE_DECL std::string get_etag () noexcept;

// GFileInfo* g_file_output_stream_query_info (GFileOutputStream* stream, const char* attributes, GCancellable* cancellable, GError ** error);
// ::GFileInfo* g_file_output_stream_query_info (::GFileOutputStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info (const std::string & attributes, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileInfo query_info (const std::string & attributes);
GI_INLINE_DECL Gio::FileInfo query_info (const std::string & attributes, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileInfo query_info (const std::string & attributes, GLib::Error * _error) noexcept;

// void g_file_output_stream_query_info_async (GFileOutputStream* stream, const char* attributes, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_output_stream_query_info_async (::GFileOutputStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void query_info_async (const std::string & attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void query_info_async (const std::string & attributes, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileInfo* g_file_output_stream_query_info_finish (GFileOutputStream* stream, GAsyncResult* result, GError ** error);
// ::GFileInfo* g_file_output_stream_query_info_finish (::GFileOutputStream* stream, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::FileInfo query_info_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileoutputstream_extra_def.hpp>)
#include <gio/fileoutputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileoutputstream_extra.hpp>)
#include <gio/fileoutputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FileOutputStream : public GI_GIO_FILEOUTPUTSTREAM_BASE
{ typedef GI_GIO_FILEOUTPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFileOutputStream>
{ typedef Gio::FileOutputStream type; }; 

} // namespace repository

} // namespace gi

#include "seekable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class FileOutputStreamClassDef
{
typedef FileOutputStreamClassDef self;
public:
typedef Gio::FileOutputStream instance_type;
typedef ::GFileOutputStreamClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean FileOutputStream::can_seek (GFileOutputStream* stream);
// gboolean FileOutputStream::can_seek (::GFileOutputStream* stream);
virtual bool can_seek_ () noexcept = 0;

// gboolean FileOutputStream::can_truncate (GFileOutputStream* stream);
// gboolean FileOutputStream::can_truncate (::GFileOutputStream* stream);
virtual bool can_truncate_ () noexcept = 0;

// char* FileOutputStream::get_etag (GFileOutputStream* stream);
// char* FileOutputStream::get_etag (::GFileOutputStream* stream);
virtual std::string get_etag_ () noexcept = 0;

// GFileInfo* FileOutputStream::query_info (GFileOutputStream* stream, const char* attributes, GCancellable* cancellable, GError ** error);
// ::GFileInfo* FileOutputStream::query_info (::GFileOutputStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void FileOutputStream::query_info_async (GFileOutputStream* stream, const char* attributes, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void FileOutputStream::query_info_async (::GFileOutputStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileInfo* FileOutputStream::query_info_finish (GFileOutputStream* stream, GAsyncResult* result, GError ** error);
// ::GFileInfo* FileOutputStream::query_info_finish (::GFileOutputStream* stream, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean FileOutputStream::seek (GFileOutputStream* stream, goffset offset, GSeekType type, GCancellable* cancellable, GError ** error);
// gboolean FileOutputStream::seek (::GFileOutputStream* stream, gint64 offset, ::GSeekType type, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// goffset FileOutputStream::tell (GFileOutputStream* stream);
// gint64 FileOutputStream::tell (::GFileOutputStream* stream);
virtual gint64 tell_ () noexcept = 0;

// gboolean FileOutputStream::truncate_fn (GFileOutputStream* stream, goffset size, GCancellable* cancellable, GError ** error);
// gboolean FileOutputStream::truncate_fn (::GFileOutputStream* stream, gint64 size, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported


};

GI_CLASS_IMPL_BEGIN


class FileOutputStreamClass: public detail::ClassTemplate<Gio::impl::internal::FileOutputStreamClassDef, Gio::impl::internal::OutputStreamClass, Gio::impl::internal::SeekableIfaceClassImpl>
{
typedef FileOutputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::FileOutputStreamClassDef, Gio::impl::internal::OutputStreamClass, Gio::impl::internal::SeekableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::SeekableIfaceClassImpl GSeekableIface_type;


// gboolean FileOutputStream::can_seek (GFileOutputStream* stream);
// gboolean FileOutputStream::can_seek (::GFileOutputStream* stream);
GI_INLINE_DECL bool can_seek_ () noexcept override;

// gboolean FileOutputStream::can_truncate (GFileOutputStream* stream);
// gboolean FileOutputStream::can_truncate (::GFileOutputStream* stream);
GI_INLINE_DECL bool can_truncate_ () noexcept override;

// char* FileOutputStream::get_etag (GFileOutputStream* stream);
// char* FileOutputStream::get_etag (::GFileOutputStream* stream);
GI_INLINE_DECL std::string get_etag_ () noexcept override;

// GFileInfo* FileOutputStream::query_info (GFileOutputStream* stream, const char* attributes, GCancellable* cancellable, GError ** error);
// ::GFileInfo* FileOutputStream::query_info (::GFileOutputStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void FileOutputStream::query_info_async (GFileOutputStream* stream, const char* attributes, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void FileOutputStream::query_info_async (::GFileOutputStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileInfo* FileOutputStream::query_info_finish (GFileOutputStream* stream, GAsyncResult* result, GError ** error);
// ::GFileInfo* FileOutputStream::query_info_finish (::GFileOutputStream* stream, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean FileOutputStream::seek (GFileOutputStream* stream, goffset offset, GSeekType type, GCancellable* cancellable, GError ** error);
// gboolean FileOutputStream::seek (::GFileOutputStream* stream, gint64 offset, ::GSeekType type, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// goffset FileOutputStream::tell (GFileOutputStream* stream);
// gint64 FileOutputStream::tell (::GFileOutputStream* stream);
GI_INLINE_DECL gint64 tell_ () noexcept override;

// gboolean FileOutputStream::truncate_fn (GFileOutputStream* stream, goffset size, GCancellable* cancellable, GError ** error);
// gboolean FileOutputStream::truncate_fn (::GFileOutputStream* stream, gint64 size, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using FileOutputStreamImpl = detail::ObjectImpl<FileOutputStream, internal::FileOutputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
