// AUTO-GENERATED

#ifndef _GI_GTK_FILEFILTERINFO_HPP_
#define _GI_GTK_FILEFILTERINFO_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class FileFilterInfo;

namespace base {


#define GI_GTK_FILEFILTERINFO_BASE base::FileFilterInfoBase
class FileFilterInfoBase : public gi::detail::CBoxedWrapper<FileFilterInfoBase, ::GtkFileFilterInfo>
{
typedef gi::detail::CBoxedWrapper<FileFilterInfoBase, ::GtkFileFilterInfo> super_type;
public:

FileFilterInfoBase (std::nullptr_t = nullptr) : super_type() {}

// ::GtkFileFilterFlags FileFilterInfo::contains (const ::GtkFileFilterInfo* obj);
// ::GtkFileFilterFlags FileFilterInfo::contains (const ::GtkFileFilterInfo* obj);
GI_INLINE_DECL Gtk::FileFilterFlags contains_ () const noexcept;

//  FileFilterInfo::contains (::GtkFileFilterInfo* obj, ::GtkFileFilterFlags _value);
// void FileFilterInfo::contains (::GtkFileFilterInfo* obj, ::GtkFileFilterFlags _value);
GI_INLINE_DECL void contains_ (Gtk::FileFilterFlags _value) noexcept;

// const char* FileFilterInfo::filename (const ::GtkFileFilterInfo* obj);
// const char* FileFilterInfo::filename (const ::GtkFileFilterInfo* obj);
GI_INLINE_DECL std::string filename_ () const noexcept;

// const char* FileFilterInfo::uri (const ::GtkFileFilterInfo* obj);
// const char* FileFilterInfo::uri (const ::GtkFileFilterInfo* obj);
GI_INLINE_DECL std::string uri_ () const noexcept;

// const char* FileFilterInfo::display_name (const ::GtkFileFilterInfo* obj);
// const char* FileFilterInfo::display_name (const ::GtkFileFilterInfo* obj);
GI_INLINE_DECL std::string display_name_ () const noexcept;

// const char* FileFilterInfo::mime_type (const ::GtkFileFilterInfo* obj);
// const char* FileFilterInfo::mime_type (const ::GtkFileFilterInfo* obj);
GI_INLINE_DECL std::string mime_type_ () const noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filefilterinfo_extra_def.hpp>)
#include <gtk/filefilterinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filefilterinfo_extra.hpp>)
#include <gtk/filefilterinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FileFilterInfo : public GI_GTK_FILEFILTERINFO_BASE
{ typedef GI_GTK_FILEFILTERINFO_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFileFilterInfo>
{ typedef Gtk::FileFilterInfo type; }; 

} // namespace repository

} // namespace gi

#endif
