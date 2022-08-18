// AUTO-GENERATED

#ifndef _GI_GIO_FILEATTRIBUTEINFO_HPP_
#define _GI_GIO_FILEATTRIBUTEINFO_HPP_


namespace gi {

namespace repository {

namespace Gio {


class FileAttributeInfo;

namespace base {


#define GI_GIO_FILEATTRIBUTEINFO_BASE base::FileAttributeInfoBase
class FileAttributeInfoBase : public gi::detail::CBoxedWrapper<FileAttributeInfoBase, ::GFileAttributeInfo>
{
typedef gi::detail::CBoxedWrapper<FileAttributeInfoBase, ::GFileAttributeInfo> super_type;
public:

FileAttributeInfoBase (std::nullptr_t = nullptr) : super_type() {}

// char* FileAttributeInfo::name (const ::GFileAttributeInfo* obj);
// char* FileAttributeInfo::name (const ::GFileAttributeInfo* obj);
GI_INLINE_DECL std::string name_ () const noexcept;

// ::GFileAttributeType FileAttributeInfo::type (const ::GFileAttributeInfo* obj);
// ::GFileAttributeType FileAttributeInfo::type (const ::GFileAttributeInfo* obj);
GI_INLINE_DECL Gio::FileAttributeType type_ () const noexcept;

//  FileAttributeInfo::type (::GFileAttributeInfo* obj, ::GFileAttributeType _value);
// void FileAttributeInfo::type (::GFileAttributeInfo* obj, ::GFileAttributeType _value);
GI_INLINE_DECL void type_ (Gio::FileAttributeType _value) noexcept;

// ::GFileAttributeInfoFlags FileAttributeInfo::flags (const ::GFileAttributeInfo* obj);
// ::GFileAttributeInfoFlags FileAttributeInfo::flags (const ::GFileAttributeInfo* obj);
GI_INLINE_DECL Gio::FileAttributeInfoFlags flags_ () const noexcept;

//  FileAttributeInfo::flags (::GFileAttributeInfo* obj, ::GFileAttributeInfoFlags _value);
// void FileAttributeInfo::flags (::GFileAttributeInfo* obj, ::GFileAttributeInfoFlags _value);
GI_INLINE_DECL void flags_ (Gio::FileAttributeInfoFlags _value) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileattributeinfo_extra_def.hpp>)
#include <gio/fileattributeinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileattributeinfo_extra.hpp>)
#include <gio/fileattributeinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FileAttributeInfo : public GI_GIO_FILEATTRIBUTEINFO_BASE
{ typedef GI_GIO_FILEATTRIBUTEINFO_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFileAttributeInfo>
{ typedef Gio::FileAttributeInfo type; }; 

} // namespace repository

} // namespace gi

#endif
