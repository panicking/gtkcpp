// AUTO-GENERATED

#ifndef _GI_GIO_VFS_HPP_
#define _GI_GIO_VFS_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Cancellable;
class File;
class FileAttributeInfoList;
class FileAttributeMatcher;
class FileInfo;

class Vfs;

namespace base {


#define GI_GIO_VFS_BASE base::VfsBase
class VfsBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GVfs BaseObjectType;

VfsBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_vfs_get_type(); } 

// GVfs* g_vfs_get_default ();
// ::GVfs* g_vfs_get_default ();
static GI_INLINE_DECL Gio::Vfs get_default () noexcept;

// GVfs* g_vfs_get_local ();
// ::GVfs* g_vfs_get_local ();
static GI_INLINE_DECL Gio::Vfs get_local () noexcept;

// GFile* g_vfs_get_file_for_path (GVfs* vfs, const char* path);
// ::GFile* g_vfs_get_file_for_path (::GVfs* vfs, const char* path);
GI_INLINE_DECL Gio::File get_file_for_path (const std::string & path) noexcept;

// GFile* g_vfs_get_file_for_uri (GVfs* vfs, const char* uri);
// ::GFile* g_vfs_get_file_for_uri (::GVfs* vfs, const char* uri);
GI_INLINE_DECL Gio::File get_file_for_uri (const std::string & uri) noexcept;

// const gchar* const* g_vfs_get_supported_uri_schemes (GVfs* vfs);
// const char** g_vfs_get_supported_uri_schemes (::GVfs* vfs);
GI_INLINE_DECL std::vector<std::string> get_supported_uri_schemes () noexcept;

// gboolean g_vfs_is_active (GVfs* vfs);
// gboolean g_vfs_is_active (::GVfs* vfs);
GI_INLINE_DECL bool is_active () noexcept;

// GFile* g_vfs_parse_name (GVfs* vfs, const char* parse_name);
// ::GFile* g_vfs_parse_name (::GVfs* vfs, const char* parse_name);
GI_INLINE_DECL Gio::File parse_name (const std::string & parse_name) noexcept;

// gboolean g_vfs_register_uri_scheme (GVfs* vfs, const char* scheme, GVfsFileLookupFunc uri_func, gpointer uri_data, GDestroyNotify uri_destroy, GVfsFileLookupFunc parse_name_func, gpointer parse_name_data, GDestroyNotify parse_name_destroy);
// gboolean g_vfs_register_uri_scheme (::GVfs* vfs, const char* scheme, Gio::VfsFileLookupFunc::cfunction_type uri_func, void* uri_data, GLib::DestroyNotify::cfunction_type uri_destroy, Gio::VfsFileLookupFunc::cfunction_type parse_name_func, void* parse_name_data, GLib::DestroyNotify::cfunction_type parse_name_destroy);
GI_INLINE_DECL bool register_uri_scheme (const std::string & scheme, Gio::VfsFileLookupFunc uri_func, Gio::VfsFileLookupFunc parse_name_func) noexcept;

// gboolean g_vfs_unregister_uri_scheme (GVfs* vfs, const char* scheme);
// gboolean g_vfs_unregister_uri_scheme (::GVfs* vfs, const char* scheme);
GI_INLINE_DECL bool unregister_uri_scheme (const std::string & scheme) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/vfs_extra_def.hpp>)
#include <gio/vfs_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/vfs_extra.hpp>)
#include <gio/vfs_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Vfs : public GI_GIO_VFS_BASE
{ typedef GI_GIO_VFS_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GVfs>
{ typedef Gio::Vfs type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class VfsClassDef
{
typedef VfsClassDef self;
public:
typedef Gio::Vfs instance_type;
typedef ::GVfsClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Vfs::add_writable_namespaces (GVfs* vfs, GFileAttributeInfoList* list);
// void Vfs::add_writable_namespaces (::GVfs* vfs, ::GFileAttributeInfoList* list);
virtual void add_writable_namespaces_ (Gio::FileAttributeInfoList list) noexcept = 0;

// GFile* Vfs::get_file_for_path (GVfs* vfs, const char* path);
// ::GFile* Vfs::get_file_for_path (::GVfs* vfs, const char* path);
virtual Gio::File get_file_for_path_ (const std::string & path) noexcept = 0;

// GFile* Vfs::get_file_for_uri (GVfs* vfs, const char* uri);
// ::GFile* Vfs::get_file_for_uri (::GVfs* vfs, const char* uri);
virtual Gio::File get_file_for_uri_ (const std::string & uri) noexcept = 0;

// const gchar* const* Vfs::get_supported_uri_schemes (GVfs* vfs);
// const char** Vfs::get_supported_uri_schemes (::GVfs* vfs);
// SKIP; container return not supported

// gboolean Vfs::is_active (GVfs* vfs);
// gboolean Vfs::is_active (::GVfs* vfs);
virtual bool is_active_ () noexcept = 0;

// void Vfs::local_file_add_info (GVfs* vfs, const char* filename, guint64 device, GFileAttributeMatcher* attribute_matcher, GFileInfo* info, GCancellable* cancellable, gpointer* extra_data, GDestroyNotify* free_extra_data);
// void Vfs::local_file_add_info (::GVfs* vfs, const char* filename, guint64 device, ::GFileAttributeMatcher* attribute_matcher, ::GFileInfo* info, ::GCancellable* cancellable, void* extra_data, GLib::DestroyNotify::cfunction_type free_extra_data);
// SKIP; virtual-method callback parameter not supported

// void Vfs::local_file_moved (GVfs* vfs, const char* source, const char* dest);
// void Vfs::local_file_moved (::GVfs* vfs, const char* source, const char* dest);
virtual void local_file_moved_ (const std::string & source, const std::string & dest) noexcept = 0;

// void Vfs::local_file_removed (GVfs* vfs, const char* filename);
// void Vfs::local_file_removed (::GVfs* vfs, const char* filename);
virtual void local_file_removed_ (const std::string & filename) noexcept = 0;

// gboolean Vfs::local_file_set_attributes (GVfs* vfs, const char* filename, GFileInfo* info, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean Vfs::local_file_set_attributes (::GVfs* vfs, const char* filename, ::GFileInfo* info, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// GFile* Vfs::parse_name (GVfs* vfs, const char* parse_name);
// ::GFile* Vfs::parse_name (::GVfs* vfs, const char* parse_name);
virtual Gio::File parse_name_ (const std::string & parse_name) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class VfsClass: public detail::ClassTemplate<Gio::impl::internal::VfsClassDef, GObject::impl::internal::ObjectClass>
{
typedef VfsClass self;
typedef detail::ClassTemplate<Gio::impl::internal::VfsClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Vfs::add_writable_namespaces (GVfs* vfs, GFileAttributeInfoList* list);
// void Vfs::add_writable_namespaces (::GVfs* vfs, ::GFileAttributeInfoList* list);
GI_INLINE_DECL void add_writable_namespaces_ (Gio::FileAttributeInfoList list) noexcept override;

// GFile* Vfs::get_file_for_path (GVfs* vfs, const char* path);
// ::GFile* Vfs::get_file_for_path (::GVfs* vfs, const char* path);
GI_INLINE_DECL Gio::File get_file_for_path_ (const std::string & path) noexcept override;

// GFile* Vfs::get_file_for_uri (GVfs* vfs, const char* uri);
// ::GFile* Vfs::get_file_for_uri (::GVfs* vfs, const char* uri);
GI_INLINE_DECL Gio::File get_file_for_uri_ (const std::string & uri) noexcept override;

// const gchar* const* Vfs::get_supported_uri_schemes (GVfs* vfs);
// const char** Vfs::get_supported_uri_schemes (::GVfs* vfs);
// SKIP; container return not supported

// gboolean Vfs::is_active (GVfs* vfs);
// gboolean Vfs::is_active (::GVfs* vfs);
GI_INLINE_DECL bool is_active_ () noexcept override;

// void Vfs::local_file_add_info (GVfs* vfs, const char* filename, guint64 device, GFileAttributeMatcher* attribute_matcher, GFileInfo* info, GCancellable* cancellable, gpointer* extra_data, GDestroyNotify* free_extra_data);
// void Vfs::local_file_add_info (::GVfs* vfs, const char* filename, guint64 device, ::GFileAttributeMatcher* attribute_matcher, ::GFileInfo* info, ::GCancellable* cancellable, void* extra_data, GLib::DestroyNotify::cfunction_type free_extra_data);
// SKIP; virtual-method callback parameter not supported

// void Vfs::local_file_moved (GVfs* vfs, const char* source, const char* dest);
// void Vfs::local_file_moved (::GVfs* vfs, const char* source, const char* dest);
GI_INLINE_DECL void local_file_moved_ (const std::string & source, const std::string & dest) noexcept override;

// void Vfs::local_file_removed (GVfs* vfs, const char* filename);
// void Vfs::local_file_removed (::GVfs* vfs, const char* filename);
GI_INLINE_DECL void local_file_removed_ (const std::string & filename) noexcept override;

// gboolean Vfs::local_file_set_attributes (GVfs* vfs, const char* filename, GFileInfo* info, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean Vfs::local_file_set_attributes (::GVfs* vfs, const char* filename, ::GFileInfo* info, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// GFile* Vfs::parse_name (GVfs* vfs, const char* parse_name);
// ::GFile* Vfs::parse_name (::GVfs* vfs, const char* parse_name);
GI_INLINE_DECL Gio::File parse_name_ (const std::string & parse_name) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using VfsImpl = detail::ObjectImpl<Vfs, internal::VfsClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
