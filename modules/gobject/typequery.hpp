// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEQUERY_HPP_
#define _GI_GOBJECT_TYPEQUERY_HPP_


namespace gi {

namespace repository {

namespace GObject {


class TypeQuery;

namespace base {


#define GI_GOBJECT_TYPEQUERY_BASE base::TypeQueryBase
class TypeQueryBase : public gi::detail::CBoxedWrapper<TypeQueryBase, ::GTypeQuery>
{
typedef gi::detail::CBoxedWrapper<TypeQueryBase, ::GTypeQuery> super_type;
public:

TypeQueryBase (std::nullptr_t = nullptr) : super_type() {}

// GType TypeQuery::type (const ::GTypeQuery* obj);
// GType TypeQuery::type (const ::GTypeQuery* obj);
GI_INLINE_DECL GType type_ () const noexcept;

//  TypeQuery::type (::GTypeQuery* obj, GType _value);
// void TypeQuery::type (::GTypeQuery* obj, GType _value);
GI_INLINE_DECL void type_ (GType _value) noexcept;

// const char* TypeQuery::type_name (const ::GTypeQuery* obj);
// const char* TypeQuery::type_name (const ::GTypeQuery* obj);
GI_INLINE_DECL std::string type_name_ () const noexcept;

// guint TypeQuery::class_size (const ::GTypeQuery* obj);
// guint TypeQuery::class_size (const ::GTypeQuery* obj);
GI_INLINE_DECL guint class_size_ () const noexcept;

//  TypeQuery::class_size (::GTypeQuery* obj, guint _value);
// void TypeQuery::class_size (::GTypeQuery* obj, guint _value);
GI_INLINE_DECL void class_size_ (guint _value) noexcept;

// guint TypeQuery::instance_size (const ::GTypeQuery* obj);
// guint TypeQuery::instance_size (const ::GTypeQuery* obj);
GI_INLINE_DECL guint instance_size_ () const noexcept;

//  TypeQuery::instance_size (::GTypeQuery* obj, guint _value);
// void TypeQuery::instance_size (::GTypeQuery* obj, guint _value);
GI_INLINE_DECL void instance_size_ (guint _value) noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typequery_extra_def.hpp>)
#include <gobject/typequery_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typequery_extra.hpp>)
#include <gobject/typequery_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class TypeQuery : public GI_GOBJECT_TYPEQUERY_BASE
{ typedef GI_GOBJECT_TYPEQUERY_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GTypeQuery>
{ typedef GObject::TypeQuery type; }; 

} // namespace repository

} // namespace gi

#endif
