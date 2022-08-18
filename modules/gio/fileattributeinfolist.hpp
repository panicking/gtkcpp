// AUTO-GENERATED

#ifndef _GI_GIO_FILEATTRIBUTEINFOLIST_HPP_
#define _GI_GIO_FILEATTRIBUTEINFOLIST_HPP_


namespace gi {

namespace repository {

namespace Gio {

class FileAttributeInfo;

class FileAttributeInfoList;

namespace base {


#define GI_GIO_FILEATTRIBUTEINFOLIST_BASE base::FileAttributeInfoListBase
class FileAttributeInfoListBase : public gi::detail::GBoxedWrapper<FileAttributeInfoListBase, ::GFileAttributeInfoList>
{
typedef gi::detail::GBoxedWrapper<FileAttributeInfoListBase, ::GFileAttributeInfoList> super_type;
public:

FileAttributeInfoListBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_file_attribute_info_list_get_type(); } 

// ::GFileAttributeInfo* FileAttributeInfoList::infos (const ::GFileAttributeInfoList* obj);
// ::GFileAttributeInfo* FileAttributeInfoList::infos (const ::GFileAttributeInfoList* obj);
GI_INLINE_DECL Gio::FileAttributeInfo infos_ () const noexcept;

// gint FileAttributeInfoList::n_infos (const ::GFileAttributeInfoList* obj);
// gint FileAttributeInfoList::n_infos (const ::GFileAttributeInfoList* obj);
GI_INLINE_DECL gint n_infos_ () const noexcept;

//  FileAttributeInfoList::n_infos (::GFileAttributeInfoList* obj, gint _value);
// void FileAttributeInfoList::n_infos (::GFileAttributeInfoList* obj, gint _value);
GI_INLINE_DECL void n_infos_ (gint _value) noexcept;

// GFileAttributeInfoList* g_file_attribute_info_list_new ();
// ::GFileAttributeInfoList* g_file_attribute_info_list_new ();
static GI_INLINE_DECL Gio::FileAttributeInfoList new_ () noexcept;

// void g_file_attribute_info_list_add (GFileAttributeInfoList* list, const char* name, GFileAttributeType type, GFileAttributeInfoFlags flags);
// void g_file_attribute_info_list_add (::GFileAttributeInfoList* list, const char* name, ::GFileAttributeType type, ::GFileAttributeInfoFlags flags);
GI_INLINE_DECL void add (const std::string & name, Gio::FileAttributeType type, Gio::FileAttributeInfoFlags flags) noexcept;

// GFileAttributeInfoList* g_file_attribute_info_list_dup (GFileAttributeInfoList* list);
// ::GFileAttributeInfoList* g_file_attribute_info_list_dup (::GFileAttributeInfoList* list);
GI_INLINE_DECL Gio::FileAttributeInfoList dup () noexcept;

// const GFileAttributeInfo* g_file_attribute_info_list_lookup (GFileAttributeInfoList* list, const char* name);
// const ::GFileAttributeInfo* g_file_attribute_info_list_lookup (::GFileAttributeInfoList* list, const char* name);
GI_INLINE_DECL Gio::FileAttributeInfo lookup (const std::string & name) noexcept;

// GFileAttributeInfoList* g_file_attribute_info_list_ref (GFileAttributeInfoList* list);
// ::GFileAttributeInfoList* g_file_attribute_info_list_ref (::GFileAttributeInfoList* list);
// IGNORE; marked ignore

// void g_file_attribute_info_list_unref (GFileAttributeInfoList* list);
// void g_file_attribute_info_list_unref (::GFileAttributeInfoList* list);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileattributeinfolist_extra_def.hpp>)
#include <gio/fileattributeinfolist_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileattributeinfolist_extra.hpp>)
#include <gio/fileattributeinfolist_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FileAttributeInfoList : public GI_GIO_FILEATTRIBUTEINFOLIST_BASE
{ typedef GI_GIO_FILEATTRIBUTEINFOLIST_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFileAttributeInfoList>
{ typedef Gio::FileAttributeInfoList type; }; 

} // namespace repository

} // namespace gi

#endif
