// AUTO-GENERATED

#ifndef _GI_GIO_FILEINPUTSTREAM_HPP_
#define _GI_GIO_FILEINPUTSTREAM_HPP_

#include "inputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class FileInfo;
class Seekable;

class FileInputStream;

namespace base {


#define GI_GIO_FILEINPUTSTREAM_BASE base::FileInputStreamBase
class FileInputStreamBase : public Gio::InputStream
{
typedef Gio::InputStream super_type;
public:
typedef ::GFileInputStream BaseObjectType;

FileInputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_file_input_stream_get_type(); } 

GI_INLINE_DECL Gio::Seekable interface_ (gi::interface_tag<Gio::Seekable>);

GI_INLINE_DECL operator Gio::Seekable ();

// GFileInfo* g_file_input_stream_query_info (GFileInputStream* stream, const char* attributes, GCancellable* cancellable, GError ** error);
// ::GFileInfo* g_file_input_stream_query_info (::GFileInputStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info (const std::string & attributes, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileInfo query_info (const std::string & attributes);
GI_INLINE_DECL Gio::FileInfo query_info (const std::string & attributes, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileInfo query_info (const std::string & attributes, GLib::Error * _error) noexcept;

// void g_file_input_stream_query_info_async (GFileInputStream* stream, const char* attributes, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_input_stream_query_info_async (::GFileInputStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void query_info_async (const std::string & attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void query_info_async (const std::string & attributes, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileInfo* g_file_input_stream_query_info_finish (GFileInputStream* stream, GAsyncResult* result, GError ** error);
// ::GFileInfo* g_file_input_stream_query_info_finish (::GFileInputStream* stream, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::FileInfo query_info_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileinputstream_extra_def.hpp>)
#include <gio/fileinputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileinputstream_extra.hpp>)
#include <gio/fileinputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FileInputStream : public GI_GIO_FILEINPUTSTREAM_BASE
{ typedef GI_GIO_FILEINPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFileInputStream>
{ typedef Gio::FileInputStream type; }; 

} // namespace repository

} // namespace gi

#include "seekable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class FileInputStreamClassDef
{
typedef FileInputStreamClassDef self;
public:
typedef Gio::FileInputStream instance_type;
typedef ::GFileInputStreamClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean FileInputStream::can_seek (GFileInputStream* stream);
// gboolean FileInputStream::can_seek (::GFileInputStream* stream);
virtual bool can_seek_ () noexcept = 0;

// GFileInfo* FileInputStream::query_info (GFileInputStream* stream, const char* attributes, GCancellable* cancellable, GError ** error);
// ::GFileInfo* FileInputStream::query_info (::GFileInputStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void FileInputStream::query_info_async (GFileInputStream* stream, const char* attributes, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void FileInputStream::query_info_async (::GFileInputStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileInfo* FileInputStream::query_info_finish (GFileInputStream* stream, GAsyncResult* result, GError ** error);
// ::GFileInfo* FileInputStream::query_info_finish (::GFileInputStream* stream, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean FileInputStream::seek (GFileInputStream* stream, goffset offset, GSeekType type, GCancellable* cancellable, GError ** error);
// gboolean FileInputStream::seek (::GFileInputStream* stream, gint64 offset, ::GSeekType type, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// goffset FileInputStream::tell (GFileInputStream* stream);
// gint64 FileInputStream::tell (::GFileInputStream* stream);
virtual gint64 tell_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class FileInputStreamClass: public detail::ClassTemplate<Gio::impl::internal::FileInputStreamClassDef, Gio::impl::internal::InputStreamClass, Gio::impl::internal::SeekableIfaceClassImpl>
{
typedef FileInputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::FileInputStreamClassDef, Gio::impl::internal::InputStreamClass, Gio::impl::internal::SeekableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::SeekableIfaceClassImpl GSeekableIface_type;


// gboolean FileInputStream::can_seek (GFileInputStream* stream);
// gboolean FileInputStream::can_seek (::GFileInputStream* stream);
GI_INLINE_DECL bool can_seek_ () noexcept override;

// GFileInfo* FileInputStream::query_info (GFileInputStream* stream, const char* attributes, GCancellable* cancellable, GError ** error);
// ::GFileInfo* FileInputStream::query_info (::GFileInputStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void FileInputStream::query_info_async (GFileInputStream* stream, const char* attributes, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void FileInputStream::query_info_async (::GFileInputStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileInfo* FileInputStream::query_info_finish (GFileInputStream* stream, GAsyncResult* result, GError ** error);
// ::GFileInfo* FileInputStream::query_info_finish (::GFileInputStream* stream, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean FileInputStream::seek (GFileInputStream* stream, goffset offset, GSeekType type, GCancellable* cancellable, GError ** error);
// gboolean FileInputStream::seek (::GFileInputStream* stream, gint64 offset, ::GSeekType type, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// goffset FileInputStream::tell (GFileInputStream* stream);
// gint64 FileInputStream::tell (::GFileInputStream* stream);
GI_INLINE_DECL gint64 tell_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using FileInputStreamImpl = detail::ObjectImpl<FileInputStream, internal::FileInputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
