// AUTO-GENERATED

#ifndef _GI_GIO_EMBLEMEDICON_HPP_
#define _GI_GIO_EMBLEMEDICON_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Emblem;
class Icon;

class EmblemedIcon;

namespace base {


#define GI_GIO_EMBLEMEDICON_BASE base::EmblemedIconBase
class EmblemedIconBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GEmblemedIcon BaseObjectType;

EmblemedIconBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_emblemed_icon_get_type(); } 

GI_INLINE_DECL Gio::Icon interface_ (gi::interface_tag<Gio::Icon>);

GI_INLINE_DECL operator Gio::Icon ();

// GIcon* g_emblemed_icon_new (GIcon* icon, GEmblem* emblem);
// ::GEmblemedIcon* g_emblemed_icon_new (::GIcon* icon, ::GEmblem* emblem);
static GI_INLINE_DECL Gio::EmblemedIcon new_ (Gio::Icon icon, Gio::Emblem emblem) noexcept;
static GI_INLINE_DECL Gio::EmblemedIcon new_ (Gio::Icon icon) noexcept;

// void g_emblemed_icon_add_emblem (GEmblemedIcon* emblemed, GEmblem* emblem);
// void g_emblemed_icon_add_emblem (::GEmblemedIcon* emblemed, ::GEmblem* emblem);
GI_INLINE_DECL void add_emblem (Gio::Emblem emblem) noexcept;

// void g_emblemed_icon_clear_emblems (GEmblemedIcon* emblemed);
// void g_emblemed_icon_clear_emblems (::GEmblemedIcon* emblemed);
GI_INLINE_DECL void clear_emblems () noexcept;

// GList* g_emblemed_icon_get_emblems (GEmblemedIcon* emblemed);
// ::GList* g_emblemed_icon_get_emblems (::GEmblemedIcon* emblemed);
GI_INLINE_DECL std::vector<Gio::Emblem> get_emblems () noexcept;

// GIcon* g_emblemed_icon_get_icon (GEmblemedIcon* emblemed);
// ::GIcon* g_emblemed_icon_get_icon (::GEmblemedIcon* emblemed);
GI_INLINE_DECL Gio::Icon get_icon () noexcept;

gi::property_proxy<Gio::Icon, base::EmblemedIconBase> property_gicon()
{ return gi::property_proxy<Gio::Icon, base::EmblemedIconBase> (*this, "gicon"); }
const gi::property_proxy<Gio::Icon, base::EmblemedIconBase> property_gicon() const
{ return gi::property_proxy<Gio::Icon, base::EmblemedIconBase> (*this, "gicon"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/emblemedicon_extra_def.hpp>)
#include <gio/emblemedicon_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/emblemedicon_extra.hpp>)
#include <gio/emblemedicon_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class EmblemedIcon : public GI_GIO_EMBLEMEDICON_BASE
{ typedef GI_GIO_EMBLEMEDICON_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GEmblemedIcon>
{ typedef Gio::EmblemedIcon type; }; 

} // namespace repository

} // namespace gi

#include "icon.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class EmblemedIconClassDef
{
typedef EmblemedIconClassDef self;
public:
typedef Gio::EmblemedIcon instance_type;
typedef ::GEmblemedIconClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class EmblemedIconClass: public detail::ClassTemplate<Gio::impl::internal::EmblemedIconClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::IconIfaceClassImpl>
{
typedef EmblemedIconClass self;
typedef detail::ClassTemplate<Gio::impl::internal::EmblemedIconClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::IconIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::IconIfaceClassImpl GIconIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using EmblemedIconImpl = detail::ObjectImpl<EmblemedIcon, internal::EmblemedIconClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
