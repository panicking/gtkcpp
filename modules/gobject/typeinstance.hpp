// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEINSTANCE_HPP_
#define _GI_GOBJECT_TYPEINSTANCE_HPP_


namespace gi {

namespace repository {

namespace GObject {


class TypeInstance;

namespace base {


#define GI_GOBJECT_TYPEINSTANCE_BASE base::TypeInstanceBase
class TypeInstanceBase : public gi::detail::CBoxedWrapper<TypeInstanceBase, ::GTypeInstance>
{
typedef gi::detail::CBoxedWrapper<TypeInstanceBase, ::GTypeInstance> super_type;
public:

TypeInstanceBase (std::nullptr_t = nullptr) : super_type() {}

// gpointer g_type_instance_get_private (GTypeInstance* instance, GType private_type);
// void* g_type_instance_get_private (::GTypeInstance* instance, GType private_type);
GI_INLINE_DECL gpointer get_private (GType private_type) noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typeinstance_extra_def.hpp>)
#include <gobject/typeinstance_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typeinstance_extra.hpp>)
#include <gobject/typeinstance_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class TypeInstance : public GI_GOBJECT_TYPEINSTANCE_BASE
{ typedef GI_GOBJECT_TYPEINSTANCE_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GTypeInstance>
{ typedef GObject::TypeInstance type; }; 

} // namespace repository

} // namespace gi

#endif
