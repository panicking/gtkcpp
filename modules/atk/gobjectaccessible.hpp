// AUTO-GENERATED

#ifndef _GI_ATK_GOBJECTACCESSIBLE_HPP_
#define _GI_ATK_GOBJECTACCESSIBLE_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Atk {

class Object;

class GObjectAccessible;

namespace base {


#define GI_ATK_GOBJECTACCESSIBLE_BASE base::GObjectAccessibleBase
class GObjectAccessibleBase : public Atk::Object
{
typedef Atk::Object super_type;
public:
typedef ::AtkGObjectAccessible BaseObjectType;

GObjectAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_gobject_accessible_get_type(); } 

// AtkObject* atk_gobject_accessible_for_object (GObject* obj);
// ::AtkObject* atk_gobject_accessible_for_object (::GObject* obj);
static GI_INLINE_DECL Atk::Object for_object (GObject::Object obj) noexcept;

// GObject* atk_gobject_accessible_get_object (AtkGObjectAccessible* obj);
// ::GObject* atk_gobject_accessible_get_object (::AtkGObjectAccessible* obj);
GI_INLINE_DECL GObject::Object get_object () noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/gobjectaccessible_extra_def.hpp>)
#include <atk/gobjectaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/gobjectaccessible_extra.hpp>)
#include <atk/gobjectaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class GObjectAccessible : public GI_ATK_GOBJECTACCESSIBLE_BASE
{ typedef GI_ATK_GOBJECTACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkGObjectAccessible>
{ typedef Atk::GObjectAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class GObjectAccessibleClassDef
{
typedef GObjectAccessibleClassDef self;
public:
typedef Atk::GObjectAccessible instance_type;
typedef ::AtkGObjectAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class GObjectAccessibleClass: public detail::ClassTemplate<Atk::impl::internal::GObjectAccessibleClassDef, Atk::impl::internal::ObjectClass>
{
typedef GObjectAccessibleClass self;
typedef detail::ClassTemplate<Atk::impl::internal::GObjectAccessibleClassDef, Atk::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using GObjectAccessibleImpl = detail::ObjectImpl<GObjectAccessible, internal::GObjectAccessibleClass>;

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
