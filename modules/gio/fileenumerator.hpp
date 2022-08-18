// AUTO-GENERATED

#ifndef _GI_GIO_FILEENUMERATOR_HPP_
#define _GI_GIO_FILEENUMERATOR_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class File;
class FileInfo;

class FileEnumerator;

namespace base {


#define GI_GIO_FILEENUMERATOR_BASE base::FileEnumeratorBase
class FileEnumeratorBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GFileEnumerator BaseObjectType;

FileEnumeratorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_file_enumerator_get_type(); } 

// gboolean g_file_enumerator_close (GFileEnumerator* enumerator, GCancellable* cancellable, GError ** error);
// gboolean g_file_enumerator_close (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool close (Gio::Cancellable cancellable);
GI_INLINE_DECL bool close ();
GI_INLINE_DECL bool close (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool close (GLib::Error * _error) noexcept;

// void g_file_enumerator_close_async (GFileEnumerator* enumerator, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_enumerator_close_async (::GFileEnumerator* enumerator, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void close_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void close_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_enumerator_close_finish (GFileEnumerator* enumerator, GAsyncResult* result, GError ** error);
// gboolean g_file_enumerator_close_finish (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GFile* g_file_enumerator_get_child (GFileEnumerator* enumerator, GFileInfo* info);
// ::GFile* g_file_enumerator_get_child (::GFileEnumerator* enumerator, ::GFileInfo* info);
GI_INLINE_DECL Gio::File get_child (Gio::FileInfo info) noexcept;

// GFile* g_file_enumerator_get_container (GFileEnumerator* enumerator);
// ::GFile* g_file_enumerator_get_container (::GFileEnumerator* enumerator);
GI_INLINE_DECL Gio::File get_container () noexcept;

// gboolean g_file_enumerator_has_pending (GFileEnumerator* enumerator);
// gboolean g_file_enumerator_has_pending (::GFileEnumerator* enumerator);
GI_INLINE_DECL bool has_pending () noexcept;

// gboolean g_file_enumerator_is_closed (GFileEnumerator* enumerator);
// gboolean g_file_enumerator_is_closed (::GFileEnumerator* enumerator);
GI_INLINE_DECL bool is_closed () noexcept;

// gboolean g_file_enumerator_iterate (GFileEnumerator* direnum, GFileInfo** out_info, GFile** out_child, GCancellable* cancellable, GError ** error);
// gboolean g_file_enumerator_iterate (::GFileEnumerator* direnum, ::GFileInfo** out_info, ::GFile** out_child, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool iterate (Gio::FileInfo * out_info, Gio::File * out_child, Gio::Cancellable cancellable);
GI_INLINE_DECL bool iterate (Gio::FileInfo * out_info = nullptr, Gio::File * out_child = nullptr);
GI_INLINE_DECL bool iterate (Gio::FileInfo * out_info, Gio::File * out_child, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool iterate (Gio::FileInfo * out_info, Gio::File * out_child, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, Gio::FileInfo, Gio::File> iterate (Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<bool, Gio::FileInfo, Gio::File> iterate ();
GI_INLINE_DECL std::tuple<bool, Gio::FileInfo, Gio::File> iterate (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, Gio::FileInfo, Gio::File> iterate (GLib::Error * _error) noexcept;

// GFileInfo* g_file_enumerator_next_file (GFileEnumerator* enumerator, GCancellable* cancellable, GError ** error);
// ::GFileInfo* g_file_enumerator_next_file (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::FileInfo next_file (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileInfo next_file ();
GI_INLINE_DECL Gio::FileInfo next_file (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileInfo next_file (GLib::Error * _error) noexcept;

// void g_file_enumerator_next_files_async (GFileEnumerator* enumerator, int num_files, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_enumerator_next_files_async (::GFileEnumerator* enumerator, gint num_files, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void next_files_async (gint num_files, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void next_files_async (gint num_files, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GList* g_file_enumerator_next_files_finish (GFileEnumerator* enumerator, GAsyncResult* result, GError ** error);
// ::GList* g_file_enumerator_next_files_finish (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL std::vector<Gio::FileInfo> next_files_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::vector<Gio::FileInfo> next_files_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_file_enumerator_set_pending (GFileEnumerator* enumerator, gboolean pending);
// void g_file_enumerator_set_pending (::GFileEnumerator* enumerator, gboolean pending);
GI_INLINE_DECL void set_pending (gboolean pending) noexcept;

gi::property_proxy_write<Gio::File, base::FileEnumeratorBase> property_container()
{ return gi::property_proxy_write<Gio::File, base::FileEnumeratorBase> (*this, "container"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileenumerator_extra_def.hpp>)
#include <gio/fileenumerator_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileenumerator_extra.hpp>)
#include <gio/fileenumerator_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FileEnumerator : public GI_GIO_FILEENUMERATOR_BASE
{ typedef GI_GIO_FILEENUMERATOR_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFileEnumerator>
{ typedef Gio::FileEnumerator type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class FileEnumeratorClassDef
{
typedef FileEnumeratorClassDef self;
public:
typedef Gio::FileEnumerator instance_type;
typedef ::GFileEnumeratorClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void FileEnumerator::close_async (GFileEnumerator* enumerator, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void FileEnumerator::close_async (::GFileEnumerator* enumerator, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean FileEnumerator::close_finish (GFileEnumerator* enumerator, GAsyncResult* result, GError ** error);
// gboolean FileEnumerator::close_finish (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean FileEnumerator::close_fn (GFileEnumerator* enumerator, GCancellable* cancellable, GError ** error);
// gboolean FileEnumerator::close_fn (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// GFileInfo* FileEnumerator::next_file (GFileEnumerator* enumerator, GCancellable* cancellable, GError ** error);
// ::GFileInfo* FileEnumerator::next_file (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void FileEnumerator::next_files_async (GFileEnumerator* enumerator, int num_files, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void FileEnumerator::next_files_async (::GFileEnumerator* enumerator, gint num_files, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GList* FileEnumerator::next_files_finish (GFileEnumerator* enumerator, GAsyncResult* result, GError ** error);
// ::GList* FileEnumerator::next_files_finish (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported


};

GI_CLASS_IMPL_BEGIN


class FileEnumeratorClass: public detail::ClassTemplate<Gio::impl::internal::FileEnumeratorClassDef, GObject::impl::internal::ObjectClass>
{
typedef FileEnumeratorClass self;
typedef detail::ClassTemplate<Gio::impl::internal::FileEnumeratorClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void FileEnumerator::close_async (GFileEnumerator* enumerator, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void FileEnumerator::close_async (::GFileEnumerator* enumerator, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean FileEnumerator::close_finish (GFileEnumerator* enumerator, GAsyncResult* result, GError ** error);
// gboolean FileEnumerator::close_finish (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean FileEnumerator::close_fn (GFileEnumerator* enumerator, GCancellable* cancellable, GError ** error);
// gboolean FileEnumerator::close_fn (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// GFileInfo* FileEnumerator::next_file (GFileEnumerator* enumerator, GCancellable* cancellable, GError ** error);
// ::GFileInfo* FileEnumerator::next_file (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void FileEnumerator::next_files_async (GFileEnumerator* enumerator, int num_files, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void FileEnumerator::next_files_async (::GFileEnumerator* enumerator, gint num_files, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GList* FileEnumerator::next_files_finish (GFileEnumerator* enumerator, GAsyncResult* result, GError ** error);
// ::GList* FileEnumerator::next_files_finish (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using FileEnumeratorImpl = detail::ObjectImpl<FileEnumerator, internal::FileEnumeratorClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
