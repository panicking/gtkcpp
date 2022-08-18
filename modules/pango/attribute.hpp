// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRIBUTE_HPP_
#define _GI_PANGO_ATTRIBUTE_HPP_


namespace gi {

namespace repository {

namespace Pango {

class AttrClass;
class AttrColor;
class AttrFloat;
class AttrFontDesc;
class AttrFontFeatures;
class AttrInt;
class AttrLanguage;
class AttrShape;
class AttrSize;
class AttrString;

class Attribute;

namespace base {


#define GI_PANGO_ATTRIBUTE_BASE base::AttributeBase
class AttributeBase : public gi::detail::GBoxedWrapper<AttributeBase, ::PangoAttribute>
{
typedef gi::detail::GBoxedWrapper<AttributeBase, ::PangoAttribute> super_type;
public:

AttributeBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_attribute_get_type(); } 

// const ::PangoAttrClass* Attribute::klass (const ::PangoAttribute* obj);
// const ::PangoAttrClass* Attribute::klass (const ::PangoAttribute* obj);
GI_INLINE_DECL Pango::AttrClass klass_ () const noexcept;

// guint Attribute::start_index (const ::PangoAttribute* obj);
// guint Attribute::start_index (const ::PangoAttribute* obj);
GI_INLINE_DECL guint start_index_ () const noexcept;

//  Attribute::start_index (::PangoAttribute* obj, guint _value);
// void Attribute::start_index (::PangoAttribute* obj, guint _value);
GI_INLINE_DECL void start_index_ (guint _value) noexcept;

// guint Attribute::end_index (const ::PangoAttribute* obj);
// guint Attribute::end_index (const ::PangoAttribute* obj);
GI_INLINE_DECL guint end_index_ () const noexcept;

//  Attribute::end_index (::PangoAttribute* obj, guint _value);
// void Attribute::end_index (::PangoAttribute* obj, guint _value);
GI_INLINE_DECL void end_index_ (guint _value) noexcept;

// PangoAttrColor* pango_attribute_as_color (PangoAttribute* attr);
// ::PangoAttrColor* pango_attribute_as_color (::PangoAttribute* attr);
GI_INLINE_DECL Pango::AttrColor as_color () noexcept;

// PangoAttrFloat* pango_attribute_as_float (PangoAttribute* attr);
// ::PangoAttrFloat* pango_attribute_as_float (::PangoAttribute* attr);
GI_INLINE_DECL Pango::AttrFloat as_float () noexcept;

// PangoAttrFontDesc* pango_attribute_as_font_desc (PangoAttribute* attr);
// ::PangoAttrFontDesc* pango_attribute_as_font_desc (::PangoAttribute* attr);
GI_INLINE_DECL Pango::AttrFontDesc as_font_desc () noexcept;

// PangoAttrFontFeatures* pango_attribute_as_font_features (PangoAttribute* attr);
// ::PangoAttrFontFeatures* pango_attribute_as_font_features (::PangoAttribute* attr);
GI_INLINE_DECL Pango::AttrFontFeatures as_font_features () noexcept;

// PangoAttrInt* pango_attribute_as_int (PangoAttribute* attr);
// ::PangoAttrInt* pango_attribute_as_int (::PangoAttribute* attr);
GI_INLINE_DECL Pango::AttrInt as_int () noexcept;

// PangoAttrLanguage* pango_attribute_as_language (PangoAttribute* attr);
// ::PangoAttrLanguage* pango_attribute_as_language (::PangoAttribute* attr);
GI_INLINE_DECL Pango::AttrLanguage as_language () noexcept;

// PangoAttrShape* pango_attribute_as_shape (PangoAttribute* attr);
// ::PangoAttrShape* pango_attribute_as_shape (::PangoAttribute* attr);
GI_INLINE_DECL Pango::AttrShape as_shape () noexcept;

// PangoAttrSize* pango_attribute_as_size (PangoAttribute* attr);
// ::PangoAttrSize* pango_attribute_as_size (::PangoAttribute* attr);
GI_INLINE_DECL Pango::AttrSize as_size () noexcept;

// PangoAttrString* pango_attribute_as_string (PangoAttribute* attr);
// ::PangoAttrString* pango_attribute_as_string (::PangoAttribute* attr);
GI_INLINE_DECL Pango::AttrString as_string () noexcept;

// PangoAttribute* pango_attribute_copy (const PangoAttribute* attr);
// ::PangoAttribute* pango_attribute_copy (const ::PangoAttribute* attr);
GI_INLINE_DECL Pango::Attribute copy () const noexcept;

// void pango_attribute_destroy (PangoAttribute* attr);
// void pango_attribute_destroy (::PangoAttribute* attr);
GI_INLINE_DECL void destroy () noexcept;

// gboolean pango_attribute_equal (const PangoAttribute* attr1, const PangoAttribute* attr2);
// gboolean pango_attribute_equal (const ::PangoAttribute* attr1, const ::PangoAttribute* attr2);
GI_INLINE_DECL bool equal (const Pango::Attribute & attr2) const noexcept;

// void pango_attribute_init (PangoAttribute* attr, const PangoAttrClass* klass);
// void pango_attribute_init (::PangoAttribute* attr, const ::PangoAttrClass* klass);
GI_INLINE_DECL void init (const Pango::AttrClass & klass) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attribute_extra_def.hpp>)
#include <pango/attribute_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attribute_extra.hpp>)
#include <pango/attribute_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Attribute : public GI_PANGO_ATTRIBUTE_BASE
{ typedef GI_PANGO_ATTRIBUTE_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttribute>
{ typedef Pango::Attribute type; }; 

} // namespace repository

} // namespace gi

#endif
