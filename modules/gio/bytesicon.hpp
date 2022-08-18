// AUTO-GENERATED

#ifndef _GI_GIO_BYTESICON_HPP_
#define _GI_GIO_BYTESICON_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Icon;
class LoadableIcon;

class BytesIcon;

namespace base {


#define GI_GIO_BYTESICON_BASE base::BytesIconBase
class BytesIconBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GBytesIcon BaseObjectType;

BytesIconBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_bytes_icon_get_type(); } 

GI_INLINE_DECL Gio::Icon interface_ (gi::interface_tag<Gio::Icon>);

GI_INLINE_DECL operator Gio::Icon ();

GI_INLINE_DECL Gio::LoadableIcon interface_ (gi::interface_tag<Gio::LoadableIcon>);

GI_INLINE_DECL operator Gio::LoadableIcon ();

// GIcon* g_bytes_icon_new (GBytes* bytes);
// ::GBytesIcon* g_bytes_icon_new (::GBytes* bytes);
static GI_INLINE_DECL Gio::BytesIcon new_ (GLib::Bytes bytes) noexcept;

// GBytes* g_bytes_icon_get_bytes (GBytesIcon* icon);
// ::GBytes* g_bytes_icon_get_bytes (::GBytesIcon* icon);
GI_INLINE_DECL GLib::Bytes get_bytes () noexcept;

gi::property_proxy<GLib::Bytes, base::BytesIconBase> property_bytes()
{ return gi::property_proxy<GLib::Bytes, base::BytesIconBase> (*this, "bytes"); }
const gi::property_proxy<GLib::Bytes, base::BytesIconBase> property_bytes() const
{ return gi::property_proxy<GLib::Bytes, base::BytesIconBase> (*this, "bytes"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/bytesicon_extra_def.hpp>)
#include <gio/bytesicon_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/bytesicon_extra.hpp>)
#include <gio/bytesicon_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class BytesIcon : public GI_GIO_BYTESICON_BASE
{ typedef GI_GIO_BYTESICON_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GBytesIcon>
{ typedef Gio::BytesIcon type; }; 

} // namespace repository

} // namespace gi

#endif
