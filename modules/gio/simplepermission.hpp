// AUTO-GENERATED

#ifndef _GI_GIO_SIMPLEPERMISSION_HPP_
#define _GI_GIO_SIMPLEPERMISSION_HPP_

#include "permission.hpp"

namespace gi {

namespace repository {

namespace Gio {


class SimplePermission;

namespace base {


#define GI_GIO_SIMPLEPERMISSION_BASE base::SimplePermissionBase
class SimplePermissionBase : public Gio::Permission
{
typedef Gio::Permission super_type;
public:
typedef ::GSimplePermission BaseObjectType;

SimplePermissionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_simple_permission_get_type(); } 

// GPermission* g_simple_permission_new (gboolean allowed);
// ::GSimplePermission* g_simple_permission_new (gboolean allowed);
static GI_INLINE_DECL Gio::SimplePermission new_ (gboolean allowed) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/simplepermission_extra_def.hpp>)
#include <gio/simplepermission_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/simplepermission_extra.hpp>)
#include <gio/simplepermission_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SimplePermission : public GI_GIO_SIMPLEPERMISSION_BASE
{ typedef GI_GIO_SIMPLEPERMISSION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSimplePermission>
{ typedef Gio::SimplePermission type; }; 

} // namespace repository

} // namespace gi

#endif
