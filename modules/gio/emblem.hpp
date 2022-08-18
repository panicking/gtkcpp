// AUTO-GENERATED

#ifndef _GI_GIO_EMBLEM_HPP_
#define _GI_GIO_EMBLEM_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Icon;

class Emblem;

namespace base {


#define GI_GIO_EMBLEM_BASE base::EmblemBase
class EmblemBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GEmblem BaseObjectType;

EmblemBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_emblem_get_type(); } 

GI_INLINE_DECL Gio::Icon interface_ (gi::interface_tag<Gio::Icon>);

GI_INLINE_DECL operator Gio::Icon ();

// GEmblem* g_emblem_new (GIcon* icon);
// ::GEmblem* g_emblem_new (::GIcon* icon);
static GI_INLINE_DECL Gio::Emblem new_ (Gio::Icon icon) noexcept;

// GEmblem* g_emblem_new_with_origin (GIcon* icon, GEmblemOrigin origin);
// ::GEmblem* g_emblem_new_with_origin (::GIcon* icon, ::GEmblemOrigin origin);
static GI_INLINE_DECL Gio::Emblem new_with_origin (Gio::Icon icon, Gio::EmblemOrigin origin) noexcept;

// GIcon* g_emblem_get_icon (GEmblem* emblem);
// ::GIcon* g_emblem_get_icon (::GEmblem* emblem);
GI_INLINE_DECL Gio::Icon get_icon () noexcept;

// GEmblemOrigin g_emblem_get_origin (GEmblem* emblem);
// ::GEmblemOrigin g_emblem_get_origin (::GEmblem* emblem);
GI_INLINE_DECL Gio::EmblemOrigin get_origin () noexcept;

gi::property_proxy<GObject::Object, base::EmblemBase> property_icon()
{ return gi::property_proxy<GObject::Object, base::EmblemBase> (*this, "icon"); }
const gi::property_proxy<GObject::Object, base::EmblemBase> property_icon() const
{ return gi::property_proxy<GObject::Object, base::EmblemBase> (*this, "icon"); }

gi::property_proxy<Gio::EmblemOrigin, base::EmblemBase> property_origin()
{ return gi::property_proxy<Gio::EmblemOrigin, base::EmblemBase> (*this, "origin"); }
const gi::property_proxy<Gio::EmblemOrigin, base::EmblemBase> property_origin() const
{ return gi::property_proxy<Gio::EmblemOrigin, base::EmblemBase> (*this, "origin"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/emblem_extra_def.hpp>)
#include <gio/emblem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/emblem_extra.hpp>)
#include <gio/emblem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Emblem : public GI_GIO_EMBLEM_BASE
{ typedef GI_GIO_EMBLEM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GEmblem>
{ typedef Gio::Emblem type; }; 

} // namespace repository

} // namespace gi

#endif
