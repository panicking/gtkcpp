// AUTO-GENERATED

#ifndef _GI_GOBJECT_OBJECTCONSTRUCTPARAM_HPP_
#define _GI_GOBJECT_OBJECTCONSTRUCTPARAM_HPP_


namespace gi {

namespace repository {

namespace GObject {

class ParamSpec;
class Value;

class ObjectConstructParam;

namespace base {


#define GI_GOBJECT_OBJECTCONSTRUCTPARAM_BASE base::ObjectConstructParamBase
class ObjectConstructParamBase : public gi::detail::CBoxedWrapper<ObjectConstructParamBase, ::GObjectConstructParam>
{
typedef gi::detail::CBoxedWrapper<ObjectConstructParamBase, ::GObjectConstructParam> super_type;
public:

ObjectConstructParamBase (std::nullptr_t = nullptr) : super_type() {}

// ::GParamSpec* ObjectConstructParam::pspec (const ::GObjectConstructParam* obj);
// ::GParamSpec* ObjectConstructParam::pspec (const ::GObjectConstructParam* obj);
GI_INLINE_DECL GObject::ParamSpec pspec_ () const noexcept;

// ::GValue* ObjectConstructParam::value (const ::GObjectConstructParam* obj);
// ::GValue* ObjectConstructParam::value (const ::GObjectConstructParam* obj);
GI_INLINE_DECL GObject::Value value_ () const noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/objectconstructparam_extra_def.hpp>)
#include <gobject/objectconstructparam_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/objectconstructparam_extra.hpp>)
#include <gobject/objectconstructparam_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class ObjectConstructParam : public GI_GOBJECT_OBJECTCONSTRUCTPARAM_BASE
{ typedef GI_GOBJECT_OBJECTCONSTRUCTPARAM_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GObjectConstructParam>
{ typedef GObject::ObjectConstructParam type; }; 

} // namespace repository

} // namespace gi

#endif
