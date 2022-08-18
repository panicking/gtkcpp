// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEINFO_HPP_
#define _GI_GOBJECT_TYPEINFO_HPP_


namespace gi {

namespace repository {

namespace GObject {

class TypeValueTable;

class TypeInfo;

namespace base {


#define GI_GOBJECT_TYPEINFO_BASE base::TypeInfoBase
class TypeInfoBase : public gi::detail::CBoxedWrapper<TypeInfoBase, ::GTypeInfo>
{
typedef gi::detail::CBoxedWrapper<TypeInfoBase, ::GTypeInfo> super_type;
public:

TypeInfoBase (std::nullptr_t = nullptr) : super_type() {}

// guint16 TypeInfo::class_size (const ::GTypeInfo* obj);
// guint16 TypeInfo::class_size (const ::GTypeInfo* obj);
GI_INLINE_DECL guint16 class_size_ () const noexcept;

//  TypeInfo::class_size (::GTypeInfo* obj, guint16 _value);
// void TypeInfo::class_size (::GTypeInfo* obj, guint16 _value);
GI_INLINE_DECL void class_size_ (guint16 _value) noexcept;

// guint16 TypeInfo::instance_size (const ::GTypeInfo* obj);
// guint16 TypeInfo::instance_size (const ::GTypeInfo* obj);
GI_INLINE_DECL guint16 instance_size_ () const noexcept;

//  TypeInfo::instance_size (::GTypeInfo* obj, guint16 _value);
// void TypeInfo::instance_size (::GTypeInfo* obj, guint16 _value);
GI_INLINE_DECL void instance_size_ (guint16 _value) noexcept;

// guint16 TypeInfo::n_preallocs (const ::GTypeInfo* obj);
// guint16 TypeInfo::n_preallocs (const ::GTypeInfo* obj);
GI_INLINE_DECL guint16 n_preallocs_ () const noexcept;

//  TypeInfo::n_preallocs (::GTypeInfo* obj, guint16 _value);
// void TypeInfo::n_preallocs (::GTypeInfo* obj, guint16 _value);
GI_INLINE_DECL void n_preallocs_ (guint16 _value) noexcept;

// const ::GTypeValueTable* TypeInfo::value_table (const ::GTypeInfo* obj);
// const ::GTypeValueTable* TypeInfo::value_table (const ::GTypeInfo* obj);
GI_INLINE_DECL GObject::TypeValueTable value_table_ () const noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typeinfo_extra_def.hpp>)
#include <gobject/typeinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typeinfo_extra.hpp>)
#include <gobject/typeinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class TypeInfo : public GI_GOBJECT_TYPEINFO_BASE
{ typedef GI_GOBJECT_TYPEINFO_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GTypeInfo>
{ typedef GObject::TypeInfo type; }; 

} // namespace repository

} // namespace gi

#endif
