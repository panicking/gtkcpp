// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRSIZE_HPP_
#define _GI_PANGO_ATTRSIZE_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Attribute;

class AttrSize;

namespace base {


#define GI_PANGO_ATTRSIZE_BASE base::AttrSizeBase
class AttrSizeBase : public gi::detail::CBoxedWrapper<AttrSizeBase, ::PangoAttrSize>
{
typedef gi::detail::CBoxedWrapper<AttrSizeBase, ::PangoAttrSize> super_type;
public:

AttrSizeBase (std::nullptr_t = nullptr) : super_type() {}

// gint AttrSize::size (const ::PangoAttrSize* obj);
// gint AttrSize::size (const ::PangoAttrSize* obj);
GI_INLINE_DECL gint size_ () const noexcept;

//  AttrSize::size (::PangoAttrSize* obj, gint _value);
// void AttrSize::size (::PangoAttrSize* obj, gint _value);
GI_INLINE_DECL void size_ (gint _value) noexcept;

// guint AttrSize::absolute (const ::PangoAttrSize* obj);
// guint AttrSize::absolute (const ::PangoAttrSize* obj);
GI_INLINE_DECL guint absolute_ () const noexcept;

//  AttrSize::absolute (::PangoAttrSize* obj, guint _value);
// void AttrSize::absolute (::PangoAttrSize* obj, guint _value);
GI_INLINE_DECL void absolute_ (guint _value) noexcept;

// PangoAttribute* pango_attr_size_new (int size);
// ::PangoAttribute* pango_attr_size_new (gint size);
static GI_INLINE_DECL Pango::Attribute new_ (gint size) noexcept;

// PangoAttribute* pango_attr_size_new_absolute (int size);
// ::PangoAttribute* pango_attr_size_new_absolute (gint size);
static GI_INLINE_DECL Pango::Attribute new_absolute (gint size) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrsize_extra_def.hpp>)
#include <pango/attrsize_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrsize_extra.hpp>)
#include <pango/attrsize_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrSize : public GI_PANGO_ATTRSIZE_BASE
{ typedef GI_PANGO_ATTRSIZE_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrSize>
{ typedef Pango::AttrSize type; }; 

} // namespace repository

} // namespace gi

#endif
