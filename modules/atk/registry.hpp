// AUTO-GENERATED

#ifndef _GI_ATK_REGISTRY_HPP_
#define _GI_ATK_REGISTRY_HPP_


namespace gi {

namespace repository {

namespace Atk {

class ObjectFactory;

class Registry;

namespace base {


#define GI_ATK_REGISTRY_BASE base::RegistryBase
class RegistryBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AtkRegistry BaseObjectType;

RegistryBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_registry_get_type(); } 

// AtkObjectFactory* atk_registry_get_factory (AtkRegistry* registry, GType type);
// ::AtkObjectFactory* atk_registry_get_factory (::AtkRegistry* registry, GType type);
GI_INLINE_DECL Atk::ObjectFactory get_factory (GType type) noexcept;

// GType atk_registry_get_factory_type (AtkRegistry* registry, GType type);
// GType atk_registry_get_factory_type (::AtkRegistry* registry, GType type);
GI_INLINE_DECL GType get_factory_type (GType type) noexcept;

// void atk_registry_set_factory_type (AtkRegistry* registry, GType type, GType factory_type);
// void atk_registry_set_factory_type (::AtkRegistry* registry, GType type, GType factory_type);
GI_INLINE_DECL void set_factory_type (GType type, GType factory_type) noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/registry_extra_def.hpp>)
#include <atk/registry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/registry_extra.hpp>)
#include <atk/registry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Registry : public GI_ATK_REGISTRY_BASE
{ typedef GI_ATK_REGISTRY_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkRegistry>
{ typedef Atk::Registry type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class RegistryClassDef
{
typedef RegistryClassDef self;
public:
typedef Atk::Registry instance_type;
typedef ::AtkRegistryClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class RegistryClass: public detail::ClassTemplate<Atk::impl::internal::RegistryClassDef, GObject::impl::internal::ObjectClass>
{
typedef RegistryClass self;
typedef detail::ClassTemplate<Atk::impl::internal::RegistryClassDef, GObject::impl::internal::ObjectClass> super;

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

using RegistryImpl = detail::ObjectImpl<Registry, internal::RegistryClass>;

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
