// AUTO-GENERATED

#ifndef _GI_GIO_FILEINFO_HPP_
#define _GI_GIO_FILEINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {

class FileAttributeMatcher;
class Icon;

class FileInfo;

namespace base {


#define GI_GIO_FILEINFO_BASE base::FileInfoBase
class FileInfoBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GFileInfo BaseObjectType;

FileInfoBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_file_info_get_type(); } 

// GFileInfo* g_file_info_new ();
// ::GFileInfo* g_file_info_new ();
static GI_INLINE_DECL Gio::FileInfo new_ () noexcept;

// void g_file_info_clear_status (GFileInfo* info);
// void g_file_info_clear_status (::GFileInfo* info);
GI_INLINE_DECL void clear_status () noexcept;

// void g_file_info_copy_into (GFileInfo* src_info, GFileInfo* dest_info);
// void g_file_info_copy_into (::GFileInfo* src_info, ::GFileInfo* dest_info);
GI_INLINE_DECL void copy_into (Gio::FileInfo dest_info) noexcept;

// GFileInfo* g_file_info_dup (GFileInfo* other);
// ::GFileInfo* g_file_info_dup (::GFileInfo* other);
GI_INLINE_DECL Gio::FileInfo dup () noexcept;

// GDateTime* g_file_info_get_access_date_time (GFileInfo* info);
// ::GDateTime* g_file_info_get_access_date_time (::GFileInfo* info);
GI_INLINE_DECL GLib::DateTime get_access_date_time () noexcept;

// char* g_file_info_get_attribute_as_string (GFileInfo* info, const char* attribute);
// char* g_file_info_get_attribute_as_string (::GFileInfo* info, const char* attribute);
GI_INLINE_DECL std::string get_attribute_as_string (const std::string & attribute) noexcept;

// gboolean g_file_info_get_attribute_boolean (GFileInfo* info, const char* attribute);
// gboolean g_file_info_get_attribute_boolean (::GFileInfo* info, const char* attribute);
GI_INLINE_DECL bool get_attribute_boolean (const std::string & attribute) noexcept;

// const char* g_file_info_get_attribute_byte_string (GFileInfo* info, const char* attribute);
// const char* g_file_info_get_attribute_byte_string (::GFileInfo* info, const char* attribute);
GI_INLINE_DECL std::string get_attribute_byte_string (const std::string & attribute) noexcept;

// gboolean g_file_info_get_attribute_data (GFileInfo* info, const char* attribute, GFileAttributeType* type, gpointer* value_pp, GFileAttributeStatus* status);
// gboolean g_file_info_get_attribute_data (::GFileInfo* info, const char* attribute, ::GFileAttributeType* type, void** value_pp, ::GFileAttributeStatus* status);
GI_INLINE_DECL bool get_attribute_data (const std::string & attribute, Gio::FileAttributeType * type = nullptr, gpointer * value_pp = nullptr, Gio::FileAttributeStatus * status = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, Gio::FileAttributeType, gpointer, Gio::FileAttributeStatus> get_attribute_data (const std::string & attribute) noexcept;

// gint32 g_file_info_get_attribute_int32 (GFileInfo* info, const char* attribute);
// gint32 g_file_info_get_attribute_int32 (::GFileInfo* info, const char* attribute);
GI_INLINE_DECL gint32 get_attribute_int32 (const std::string & attribute) noexcept;

// gint64 g_file_info_get_attribute_int64 (GFileInfo* info, const char* attribute);
// gint64 g_file_info_get_attribute_int64 (::GFileInfo* info, const char* attribute);
GI_INLINE_DECL gint64 get_attribute_int64 (const std::string & attribute) noexcept;

// GObject* g_file_info_get_attribute_object (GFileInfo* info, const char* attribute);
// ::GObject* g_file_info_get_attribute_object (::GFileInfo* info, const char* attribute);
GI_INLINE_DECL GObject::Object get_attribute_object (const std::string & attribute) noexcept;

// GFileAttributeStatus g_file_info_get_attribute_status (GFileInfo* info, const char* attribute);
// ::GFileAttributeStatus g_file_info_get_attribute_status (::GFileInfo* info, const char* attribute);
GI_INLINE_DECL Gio::FileAttributeStatus get_attribute_status (const std::string & attribute) noexcept;

// const char* g_file_info_get_attribute_string (GFileInfo* info, const char* attribute);
// const char* g_file_info_get_attribute_string (::GFileInfo* info, const char* attribute);
GI_INLINE_DECL std::string get_attribute_string (const std::string & attribute) noexcept;

// char** g_file_info_get_attribute_stringv (GFileInfo* info, const char* attribute);
// char** g_file_info_get_attribute_stringv (::GFileInfo* info, const char* attribute);
GI_INLINE_DECL std::vector<std::string> get_attribute_stringv (const std::string & attribute) noexcept;

// GFileAttributeType g_file_info_get_attribute_type (GFileInfo* info, const char* attribute);
// ::GFileAttributeType g_file_info_get_attribute_type (::GFileInfo* info, const char* attribute);
GI_INLINE_DECL Gio::FileAttributeType get_attribute_type (const std::string & attribute) noexcept;

// guint32 g_file_info_get_attribute_uint32 (GFileInfo* info, const char* attribute);
// guint32 g_file_info_get_attribute_uint32 (::GFileInfo* info, const char* attribute);
GI_INLINE_DECL guint32 get_attribute_uint32 (const std::string & attribute) noexcept;

// guint64 g_file_info_get_attribute_uint64 (GFileInfo* info, const char* attribute);
// guint64 g_file_info_get_attribute_uint64 (::GFileInfo* info, const char* attribute);
GI_INLINE_DECL guint64 get_attribute_uint64 (const std::string & attribute) noexcept;

// const char* g_file_info_get_content_type (GFileInfo* info);
// const char* g_file_info_get_content_type (::GFileInfo* info);
GI_INLINE_DECL std::string get_content_type () noexcept;

// GDateTime* g_file_info_get_creation_date_time (GFileInfo* info);
// ::GDateTime* g_file_info_get_creation_date_time (::GFileInfo* info);
GI_INLINE_DECL GLib::DateTime get_creation_date_time () noexcept;

// GDateTime* g_file_info_get_deletion_date (GFileInfo* info);
// ::GDateTime* g_file_info_get_deletion_date (::GFileInfo* info);
GI_INLINE_DECL GLib::DateTime get_deletion_date () noexcept;

// const char* g_file_info_get_display_name (GFileInfo* info);
// const char* g_file_info_get_display_name (::GFileInfo* info);
GI_INLINE_DECL std::string get_display_name () noexcept;

// const char* g_file_info_get_edit_name (GFileInfo* info);
// const char* g_file_info_get_edit_name (::GFileInfo* info);
GI_INLINE_DECL std::string get_edit_name () noexcept;

// const char* g_file_info_get_etag (GFileInfo* info);
// const char* g_file_info_get_etag (::GFileInfo* info);
GI_INLINE_DECL std::string get_etag () noexcept;

// GFileType g_file_info_get_file_type (GFileInfo* info);
// ::GFileType g_file_info_get_file_type (::GFileInfo* info);
GI_INLINE_DECL Gio::FileType get_file_type () noexcept;

// GIcon* g_file_info_get_icon (GFileInfo* info);
// ::GIcon* g_file_info_get_icon (::GFileInfo* info);
GI_INLINE_DECL Gio::Icon get_icon () noexcept;

// gboolean g_file_info_get_is_backup (GFileInfo* info);
// gboolean g_file_info_get_is_backup (::GFileInfo* info);
GI_INLINE_DECL bool get_is_backup () noexcept;

// gboolean g_file_info_get_is_hidden (GFileInfo* info);
// gboolean g_file_info_get_is_hidden (::GFileInfo* info);
GI_INLINE_DECL bool get_is_hidden () noexcept;

// gboolean g_file_info_get_is_symlink (GFileInfo* info);
// gboolean g_file_info_get_is_symlink (::GFileInfo* info);
GI_INLINE_DECL bool get_is_symlink () noexcept;

// GDateTime* g_file_info_get_modification_date_time (GFileInfo* info);
// ::GDateTime* g_file_info_get_modification_date_time (::GFileInfo* info);
GI_INLINE_DECL GLib::DateTime get_modification_date_time () noexcept;

// void g_file_info_get_modification_time (GFileInfo* info, GTimeVal* result);
// void g_file_info_get_modification_time (::GFileInfo* info,  result);
// IGNORE; deprecated

// const char* g_file_info_get_name (GFileInfo* info);
// const char* g_file_info_get_name (::GFileInfo* info);
GI_INLINE_DECL std::string get_name () noexcept;

// goffset g_file_info_get_size (GFileInfo* info);
// gint64 g_file_info_get_size (::GFileInfo* info);
GI_INLINE_DECL gint64 get_size () noexcept;

// gint32 g_file_info_get_sort_order (GFileInfo* info);
// gint32 g_file_info_get_sort_order (::GFileInfo* info);
GI_INLINE_DECL gint32 get_sort_order () noexcept;

// GIcon* g_file_info_get_symbolic_icon (GFileInfo* info);
// ::GIcon* g_file_info_get_symbolic_icon (::GFileInfo* info);
GI_INLINE_DECL Gio::Icon get_symbolic_icon () noexcept;

// const char* g_file_info_get_symlink_target (GFileInfo* info);
// const char* g_file_info_get_symlink_target (::GFileInfo* info);
GI_INLINE_DECL std::string get_symlink_target () noexcept;

// gboolean g_file_info_has_attribute (GFileInfo* info, const char* attribute);
// gboolean g_file_info_has_attribute (::GFileInfo* info, const char* attribute);
GI_INLINE_DECL bool has_attribute (const std::string & attribute) noexcept;

// gboolean g_file_info_has_namespace (GFileInfo* info, const char* name_space);
// gboolean g_file_info_has_namespace (::GFileInfo* info, const char* name_space);
GI_INLINE_DECL bool has_namespace (const std::string & name_space) noexcept;

// char** g_file_info_list_attributes (GFileInfo* info, const char* name_space);
// char** g_file_info_list_attributes (::GFileInfo* info, const char* name_space);
GI_INLINE_DECL std::vector<std::string> list_attributes (const std::string & name_space) noexcept;
GI_INLINE_DECL std::vector<std::string> list_attributes () noexcept;

// void g_file_info_remove_attribute (GFileInfo* info, const char* attribute);
// void g_file_info_remove_attribute (::GFileInfo* info, const char* attribute);
GI_INLINE_DECL void remove_attribute (const std::string & attribute) noexcept;

// void g_file_info_set_access_date_time (GFileInfo* info, GDateTime* atime);
// void g_file_info_set_access_date_time (::GFileInfo* info, ::GDateTime* atime);
GI_INLINE_DECL void set_access_date_time (GLib::DateTime atime) noexcept;

// void g_file_info_set_attribute (GFileInfo* info, const char* attribute, GFileAttributeType type, gpointer value_p);
// void g_file_info_set_attribute (::GFileInfo* info, const char* attribute, ::GFileAttributeType type, void* value_p);
GI_INLINE_DECL void set_attribute (const std::string & attribute, Gio::FileAttributeType type, void* value_p) noexcept;

// void g_file_info_set_attribute_boolean (GFileInfo* info, const char* attribute, gboolean attr_value);
// void g_file_info_set_attribute_boolean (::GFileInfo* info, const char* attribute, gboolean attr_value);
GI_INLINE_DECL void set_attribute_boolean (const std::string & attribute, gboolean attr_value) noexcept;

// void g_file_info_set_attribute_byte_string (GFileInfo* info, const char* attribute, const char* attr_value);
// void g_file_info_set_attribute_byte_string (::GFileInfo* info, const char* attribute, const char* attr_value);
GI_INLINE_DECL void set_attribute_byte_string (const std::string & attribute, const std::string & attr_value) noexcept;

// void g_file_info_set_attribute_int32 (GFileInfo* info, const char* attribute, gint32 attr_value);
// void g_file_info_set_attribute_int32 (::GFileInfo* info, const char* attribute, gint32 attr_value);
GI_INLINE_DECL void set_attribute_int32 (const std::string & attribute, gint32 attr_value) noexcept;

// void g_file_info_set_attribute_int64 (GFileInfo* info, const char* attribute, gint64 attr_value);
// void g_file_info_set_attribute_int64 (::GFileInfo* info, const char* attribute, gint64 attr_value);
GI_INLINE_DECL void set_attribute_int64 (const std::string & attribute, gint64 attr_value) noexcept;

// void g_file_info_set_attribute_mask (GFileInfo* info, GFileAttributeMatcher* mask);
// void g_file_info_set_attribute_mask (::GFileInfo* info, ::GFileAttributeMatcher* mask);
GI_INLINE_DECL void set_attribute_mask (Gio::FileAttributeMatcher mask) noexcept;

// void g_file_info_set_attribute_object (GFileInfo* info, const char* attribute, GObject* attr_value);
// void g_file_info_set_attribute_object (::GFileInfo* info, const char* attribute, ::GObject* attr_value);
GI_INLINE_DECL void set_attribute_object (const std::string & attribute, GObject::Object attr_value) noexcept;

// gboolean g_file_info_set_attribute_status (GFileInfo* info, const char* attribute, GFileAttributeStatus status);
// gboolean g_file_info_set_attribute_status (::GFileInfo* info, const char* attribute, ::GFileAttributeStatus status);
GI_INLINE_DECL bool set_attribute_status (const std::string & attribute, Gio::FileAttributeStatus status) noexcept;

// void g_file_info_set_attribute_string (GFileInfo* info, const char* attribute, const char* attr_value);
// void g_file_info_set_attribute_string (::GFileInfo* info, const char* attribute, const char* attr_value);
GI_INLINE_DECL void set_attribute_string (const std::string & attribute, const std::string & attr_value) noexcept;

// void g_file_info_set_attribute_stringv (GFileInfo* info, const char* attribute, char** attr_value);
// void g_file_info_set_attribute_stringv (::GFileInfo* info, const char* attribute, char** attr_value);
GI_INLINE_DECL void set_attribute_stringv (const std::string & attribute, const std::vector<std::string> & attr_value) noexcept;

// void g_file_info_set_attribute_uint32 (GFileInfo* info, const char* attribute, guint32 attr_value);
// void g_file_info_set_attribute_uint32 (::GFileInfo* info, const char* attribute, guint32 attr_value);
GI_INLINE_DECL void set_attribute_uint32 (const std::string & attribute, guint32 attr_value) noexcept;

// void g_file_info_set_attribute_uint64 (GFileInfo* info, const char* attribute, guint64 attr_value);
// void g_file_info_set_attribute_uint64 (::GFileInfo* info, const char* attribute, guint64 attr_value);
GI_INLINE_DECL void set_attribute_uint64 (const std::string & attribute, guint64 attr_value) noexcept;

// void g_file_info_set_content_type (GFileInfo* info, const char* content_type);
// void g_file_info_set_content_type (::GFileInfo* info, const char* content_type);
GI_INLINE_DECL void set_content_type (const std::string & content_type) noexcept;

// void g_file_info_set_creation_date_time (GFileInfo* info, GDateTime* creation_time);
// void g_file_info_set_creation_date_time (::GFileInfo* info, ::GDateTime* creation_time);
GI_INLINE_DECL void set_creation_date_time (GLib::DateTime creation_time) noexcept;

// void g_file_info_set_display_name (GFileInfo* info, const char* display_name);
// void g_file_info_set_display_name (::GFileInfo* info, const char* display_name);
GI_INLINE_DECL void set_display_name (const std::string & display_name) noexcept;

// void g_file_info_set_edit_name (GFileInfo* info, const char* edit_name);
// void g_file_info_set_edit_name (::GFileInfo* info, const char* edit_name);
GI_INLINE_DECL void set_edit_name (const std::string & edit_name) noexcept;

// void g_file_info_set_file_type (GFileInfo* info, GFileType type);
// void g_file_info_set_file_type (::GFileInfo* info, ::GFileType type);
GI_INLINE_DECL void set_file_type (Gio::FileType type) noexcept;

// void g_file_info_set_icon (GFileInfo* info, GIcon* icon);
// void g_file_info_set_icon (::GFileInfo* info, ::GIcon* icon);
GI_INLINE_DECL void set_icon (Gio::Icon icon) noexcept;

// void g_file_info_set_is_hidden (GFileInfo* info, gboolean is_hidden);
// void g_file_info_set_is_hidden (::GFileInfo* info, gboolean is_hidden);
GI_INLINE_DECL void set_is_hidden (gboolean is_hidden) noexcept;

// void g_file_info_set_is_symlink (GFileInfo* info, gboolean is_symlink);
// void g_file_info_set_is_symlink (::GFileInfo* info, gboolean is_symlink);
GI_INLINE_DECL void set_is_symlink (gboolean is_symlink) noexcept;

// void g_file_info_set_modification_date_time (GFileInfo* info, GDateTime* mtime);
// void g_file_info_set_modification_date_time (::GFileInfo* info, ::GDateTime* mtime);
GI_INLINE_DECL void set_modification_date_time (GLib::DateTime mtime) noexcept;

// void g_file_info_set_modification_time (GFileInfo* info, GTimeVal* mtime);
// void g_file_info_set_modification_time (::GFileInfo* info,  mtime);
// IGNORE; deprecated

// void g_file_info_set_name (GFileInfo* info, const char* name);
// void g_file_info_set_name (::GFileInfo* info, const char* name);
GI_INLINE_DECL void set_name (const std::string & name) noexcept;

// void g_file_info_set_size (GFileInfo* info, goffset size);
// void g_file_info_set_size (::GFileInfo* info, gint64 size);
GI_INLINE_DECL void set_size (gint64 size) noexcept;

// void g_file_info_set_sort_order (GFileInfo* info, gint32 sort_order);
// void g_file_info_set_sort_order (::GFileInfo* info, gint32 sort_order);
GI_INLINE_DECL void set_sort_order (gint32 sort_order) noexcept;

// void g_file_info_set_symbolic_icon (GFileInfo* info, GIcon* icon);
// void g_file_info_set_symbolic_icon (::GFileInfo* info, ::GIcon* icon);
GI_INLINE_DECL void set_symbolic_icon (Gio::Icon icon) noexcept;

// void g_file_info_set_symlink_target (GFileInfo* info, const char* symlink_target);
// void g_file_info_set_symlink_target (::GFileInfo* info, const char* symlink_target);
GI_INLINE_DECL void set_symlink_target (const std::string & symlink_target) noexcept;

// void g_file_info_unset_attribute_mask (GFileInfo* info);
// void g_file_info_unset_attribute_mask (::GFileInfo* info);
GI_INLINE_DECL void unset_attribute_mask () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileinfo_extra_def.hpp>)
#include <gio/fileinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileinfo_extra.hpp>)
#include <gio/fileinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FileInfo : public GI_GIO_FILEINFO_BASE
{ typedef GI_GIO_FILEINFO_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFileInfo>
{ typedef Gio::FileInfo type; }; 

} // namespace repository

} // namespace gi

#endif
