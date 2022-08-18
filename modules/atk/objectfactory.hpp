// AUTO-GENERATED

#ifndef _GI_ATK_OBJECTFACTORY_HPP_
#define _GI_ATK_OBJECTFACTORY_HPP_


namespace gi {

namespace repository {

namespace Atk {

class Object;

class ObjectFactory;

namespace base {


#define GI_ATK_OBJECTFACTORY_BASE base::ObjectFactoryBase
class ObjectFactoryBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AtkObjectFactory BaseObjectType;

ObjectFactoryBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_object_factory_get_type(); } 

// AtkObject* atk_object_factory_create_accessible (AtkObjectFactory* factory, GObject* obj);
// ::AtkObject* atk_object_factory_create_accessible (::AtkObjectFactory* factory, ::GObject* obj);
GI_INLINE_DECL Atk::Object create_accessible (GObject::Object obj) noexcept;

// GType atk_object_factory_get_accessible_type (AtkObjectFactory* factory);
// GType atk_object_factory_get_accessible_type (::AtkObjectFactory* factory);
GI_INLINE_DECL GType get_accessible_type () noexcept;

// void atk_object_factory_invalidate (AtkObjectFactory* factory);
// void atk_object_factory_invalidate (::AtkObjectFactory* factory);
GI_INLINE_DECL void invalidate () noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/objectfactory_extra_def.hpp>)
#include <atk/objectfactory_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/objectfactory_extra.hpp>)
#include <atk/objectfactory_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class ObjectFactory : public GI_ATK_OBJECTFACTORY_BASE
{ typedef GI_ATK_OBJECTFACTORY_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkObjectFactory>
{ typedef Atk::ObjectFactory type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class ObjectFactoryClassDef
{
typedef ObjectFactoryClassDef self;
public:
typedef Atk::ObjectFactory instance_type;
typedef ::AtkObjectFactoryClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ObjectFactory::invalidate (AtkObjectFactory* factory);
// void ObjectFactory::invalidate (::AtkObjectFactory* factory);
virtual void invalidate_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ObjectFactoryClass: public detail::ClassTemplate<Atk::impl::internal::ObjectFactoryClassDef, GObject::impl::internal::ObjectClass>
{
typedef ObjectFactoryClass self;
typedef detail::ClassTemplate<Atk::impl::internal::ObjectFactoryClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void ObjectFactory::invalidate (AtkObjectFactory* factory);
// void ObjectFactory::invalidate (::AtkObjectFactory* factory);
GI_INLINE_DECL void invalidate_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ObjectFactoryImpl = detail::ObjectImpl<ObjectFactory, internal::ObjectFactoryClass>;

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
