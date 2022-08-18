// AUTO-GENERATED

#ifndef _GI_GIO_ICON_HPP_
#define _GI_GIO_ICON_HPP_


namespace gi {

namespace repository {

namespace Gio {


class Icon;

namespace base {


#define GI_GIO_ICON_BASE base::IconBase
class IconBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GIcon BaseObjectType;

IconBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_icon_get_type(); } 

// GIcon* g_icon_deserialize (GVariant* value);
// ::GIcon* g_icon_deserialize (::GVariant* value);
static GI_INLINE_DECL Gio::Icon deserialize (GLib::Variant value) noexcept;

// guint g_icon_hash (gconstpointer icon);
// guint g_icon_hash (const void* icon);
static GI_INLINE_DECL guint hash (const void* icon) noexcept;

// GIcon* g_icon_new_for_string (const gchar* str, GError ** error);
// ::GIcon* g_icon_new_for_string (const char* str, GError ** error);
static GI_INLINE_DECL Gio::Icon new_for_string (const std::string & str);
static GI_INLINE_DECL Gio::Icon new_for_string (const std::string & str, GLib::Error * _error) noexcept;

// gboolean g_icon_equal (GIcon* icon1, GIcon* icon2);
// gboolean g_icon_equal (::GIcon* icon1, ::GIcon* icon2);
GI_INLINE_DECL bool equal (Gio::Icon icon2) noexcept;
GI_INLINE_DECL bool equal () noexcept;

// GVariant* g_icon_serialize (GIcon* icon);
// ::GVariant* g_icon_serialize (::GIcon* icon);
GI_INLINE_DECL GLib::Variant serialize () noexcept;

// gchar* g_icon_to_string (GIcon* icon);
// char* g_icon_to_string (::GIcon* icon);
GI_INLINE_DECL std::string to_string () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/icon_extra_def.hpp>)
#include <gio/icon_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/icon_extra.hpp>)
#include <gio/icon_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Icon : public GI_GIO_ICON_BASE
{ typedef GI_GIO_ICON_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GIcon>
{ typedef Gio::Icon type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class IconIfaceDef
{
typedef IconIfaceDef self;
public:
typedef Gio::Icon instance_type;
typedef ::GIconIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Icon::equal (GIcon* icon1, GIcon* icon2);
// gboolean Icon::equal (::GIcon* icon1, ::GIcon* icon2);
virtual bool equal_ (Gio::Icon icon2) noexcept = 0;

// guint Icon::hash (GIcon* icon);
// guint Icon::hash (::GIcon* icon);
virtual guint hash_ () noexcept = 0;

// GVariant* Icon::serialize (GIcon* icon);
// ::GVariant* Icon::serialize (::GIcon* icon);
virtual GLib::Variant serialize_ () noexcept = 0;


};

using IconImpl = detail::InterfaceImpl<IconIfaceDef>;

class IconIfaceClassImpl: public detail::InterfaceClassImpl<IconImpl>
{
typedef IconIfaceClassImpl self;
typedef detail::InterfaceClassImpl<IconImpl> super;

protected:
using super::super;

// gboolean Icon::equal (GIcon* icon1, GIcon* icon2);
// gboolean Icon::equal (::GIcon* icon1, ::GIcon* icon2);
GI_INLINE_DECL bool equal_ (Gio::Icon icon2) noexcept override;

// guint Icon::hash (GIcon* icon);
// guint Icon::hash (::GIcon* icon);
GI_INLINE_DECL guint hash_ () noexcept override;

// GVariant* Icon::serialize (GIcon* icon);
// ::GVariant* Icon::serialize (::GIcon* icon);
GI_INLINE_DECL GLib::Variant serialize_ () noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
