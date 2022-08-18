// AUTO-GENERATED

#ifndef _GI_GOBJECT_INITIALLYUNOWNED_HPP_
#define _GI_GOBJECT_INITIALLYUNOWNED_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace GObject {


class InitiallyUnowned;

namespace base {


#define GI_GOBJECT_INITIALLYUNOWNED_BASE base::InitiallyUnownedBase
class InitiallyUnownedBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GInitiallyUnowned BaseObjectType;

InitiallyUnownedBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_initially_unowned_get_type(); } 

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/initiallyunowned_extra_def.hpp>)
#include <gobject/initiallyunowned_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/initiallyunowned_extra.hpp>)
#include <gobject/initiallyunowned_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class InitiallyUnowned : public GI_GOBJECT_INITIALLYUNOWNED_BASE
{ typedef GI_GOBJECT_INITIALLYUNOWNED_BASE super_type; using super_type::super_type; };

} // namespace GObject

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GObject {

namespace impl {

namespace internal {


class InitiallyUnownedClassDef
{
typedef InitiallyUnownedClassDef self;
public:
typedef GObject::InitiallyUnowned instance_type;
typedef ::GInitiallyUnownedClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class InitiallyUnownedClass: public detail::ClassTemplate<GObject::impl::internal::InitiallyUnownedClassDef, GObject::impl::internal::ObjectClass>
{
typedef InitiallyUnownedClass self;
typedef detail::ClassTemplate<GObject::impl::internal::InitiallyUnownedClassDef, GObject::impl::internal::ObjectClass> super;

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

using InitiallyUnownedImpl = detail::ObjectImpl<InitiallyUnowned, internal::InitiallyUnownedClass>;

} // namespace impl

} // namespace GObject

} // namespace repository

} // namespace gi

#endif
