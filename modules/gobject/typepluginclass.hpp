// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEPLUGINCLASS_HPP_
#define _GI_GOBJECT_TYPEPLUGINCLASS_HPP_


namespace gi {

namespace repository {

namespace GObject {


class TypePluginClass;

namespace base {


#define GI_GOBJECT_TYPEPLUGINCLASS_BASE base::TypePluginClassBase
class TypePluginClassBase : public gi::detail::CBoxedWrapper<TypePluginClassBase, ::GTypePluginClass>
{
typedef gi::detail::CBoxedWrapper<TypePluginClassBase, ::GTypePluginClass> super_type;
public:

TypePluginClassBase (std::nullptr_t = nullptr) : super_type() {}

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typepluginclass_extra_def.hpp>)
#include <gobject/typepluginclass_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typepluginclass_extra.hpp>)
#include <gobject/typepluginclass_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class TypePluginClass : public GI_GOBJECT_TYPEPLUGINCLASS_BASE
{ typedef GI_GOBJECT_TYPEPLUGINCLASS_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GTypePluginClass>
{ typedef GObject::TypePluginClass type; }; 

} // namespace repository

} // namespace gi

#endif
