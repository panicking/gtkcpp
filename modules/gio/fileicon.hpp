// AUTO-GENERATED

#ifndef _GI_GIO_FILEICON_HPP_
#define _GI_GIO_FILEICON_HPP_


namespace gi {

namespace repository {

namespace Gio {

class File;
class Icon;
class LoadableIcon;

class FileIcon;

namespace base {


#define GI_GIO_FILEICON_BASE base::FileIconBase
class FileIconBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GFileIcon BaseObjectType;

FileIconBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_file_icon_get_type(); } 

GI_INLINE_DECL Gio::Icon interface_ (gi::interface_tag<Gio::Icon>);

GI_INLINE_DECL operator Gio::Icon ();

GI_INLINE_DECL Gio::LoadableIcon interface_ (gi::interface_tag<Gio::LoadableIcon>);

GI_INLINE_DECL operator Gio::LoadableIcon ();

// GIcon* g_file_icon_new (GFile* file);
// ::GFileIcon* g_file_icon_new (::GFile* file);
static GI_INLINE_DECL Gio::FileIcon new_ (Gio::File file) noexcept;

// GFile* g_file_icon_get_file (GFileIcon* icon);
// ::GFile* g_file_icon_get_file (::GFileIcon* icon);
GI_INLINE_DECL Gio::File get_file () noexcept;

gi::property_proxy<Gio::File, base::FileIconBase> property_file()
{ return gi::property_proxy<Gio::File, base::FileIconBase> (*this, "file"); }
const gi::property_proxy<Gio::File, base::FileIconBase> property_file() const
{ return gi::property_proxy<Gio::File, base::FileIconBase> (*this, "file"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileicon_extra_def.hpp>)
#include <gio/fileicon_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileicon_extra.hpp>)
#include <gio/fileicon_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FileIcon : public GI_GIO_FILEICON_BASE
{ typedef GI_GIO_FILEICON_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFileIcon>
{ typedef Gio::FileIcon type; }; 

} // namespace repository

} // namespace gi

#endif
