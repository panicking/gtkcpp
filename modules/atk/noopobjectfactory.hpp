// AUTO-GENERATED

#ifndef _GI_ATK_NOOPOBJECTFACTORY_HPP_
#define _GI_ATK_NOOPOBJECTFACTORY_HPP_

#include "objectfactory.hpp"

namespace gi {

namespace repository {

namespace Atk {


class NoOpObjectFactory;

namespace base {


#define GI_ATK_NOOPOBJECTFACTORY_BASE base::NoOpObjectFactoryBase
class NoOpObjectFactoryBase : public Atk::ObjectFactory
{
typedef Atk::ObjectFactory super_type;
public:
typedef ::AtkNoOpObjectFactory BaseObjectType;

NoOpObjectFactoryBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_no_op_object_factory_get_type(); } 

// AtkObjectFactory* atk_no_op_object_factory_new ();
// ::AtkNoOpObjectFactory* atk_no_op_object_factory_new ();
static GI_INLINE_DECL Atk::NoOpObjectFactory new_ () noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/noopobjectfactory_extra_def.hpp>)
#include <atk/noopobjectfactory_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/noopobjectfactory_extra.hpp>)
#include <atk/noopobjectfactory_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class NoOpObjectFactory : public GI_ATK_NOOPOBJECTFACTORY_BASE
{ typedef GI_ATK_NOOPOBJECTFACTORY_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkNoOpObjectFactory>
{ typedef Atk::NoOpObjectFactory type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class NoOpObjectFactoryClassDef
{
typedef NoOpObjectFactoryClassDef self;
public:
typedef Atk::NoOpObjectFactory instance_type;
typedef ::AtkNoOpObjectFactoryClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class NoOpObjectFactoryClass: public detail::ClassTemplate<Atk::impl::internal::NoOpObjectFactoryClassDef, Atk::impl::internal::ObjectFactoryClass>
{
typedef NoOpObjectFactoryClass self;
typedef detail::ClassTemplate<Atk::impl::internal::NoOpObjectFactoryClassDef, Atk::impl::internal::ObjectFactoryClass> super;

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

using NoOpObjectFactoryImpl = detail::ObjectImpl<NoOpObjectFactory, internal::NoOpObjectFactoryClass>;

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
