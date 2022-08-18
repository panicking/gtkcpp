// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRITERATOR_HPP_
#define _GI_PANGO_ATTRITERATOR_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Attribute;
class FontDescription;
class Language;

class AttrIterator;

namespace base {


#define GI_PANGO_ATTRITERATOR_BASE base::AttrIteratorBase
class AttrIteratorBase : public gi::detail::GBoxedWrapper<AttrIteratorBase, ::PangoAttrIterator>
{
typedef gi::detail::GBoxedWrapper<AttrIteratorBase, ::PangoAttrIterator> super_type;
public:

AttrIteratorBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_attr_iterator_get_type(); } 

// PangoAttrIterator* pango_attr_iterator_copy (PangoAttrIterator* iterator);
// ::PangoAttrIterator* pango_attr_iterator_copy (::PangoAttrIterator* iterator);
GI_INLINE_DECL Pango::AttrIterator copy () noexcept;

// void pango_attr_iterator_destroy (PangoAttrIterator* iterator);
// void pango_attr_iterator_destroy (::PangoAttrIterator* iterator);
GI_INLINE_DECL void destroy () noexcept;

// PangoAttribute* pango_attr_iterator_get (PangoAttrIterator* iterator, PangoAttrType type);
// ::PangoAttribute* pango_attr_iterator_get (::PangoAttrIterator* iterator, ::PangoAttrType type);
GI_INLINE_DECL Pango::Attribute get (Pango::AttrType type) noexcept;

// GSList* pango_attr_iterator_get_attrs (PangoAttrIterator* iterator);
// ::GSList* pango_attr_iterator_get_attrs (::PangoAttrIterator* iterator);
GI_INLINE_DECL std::vector<Pango::Attribute> get_attrs () noexcept;

// void pango_attr_iterator_get_font (PangoAttrIterator* iterator, PangoFontDescription* desc, PangoLanguage** language, GSList** extra_attrs);
// void pango_attr_iterator_get_font (::PangoAttrIterator* iterator, ::PangoFontDescription* desc, ::PangoLanguage** language, ::GSList** extra_attrs);
GI_INLINE_DECL void get_font (Pango::FontDescription desc, Pango::Language * language = nullptr, std::vector<Pango::Attribute> * extra_attrs = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Pango::Language, std::vector<Pango::Attribute>> get_font (Pango::FontDescription desc) noexcept;

// gboolean pango_attr_iterator_next (PangoAttrIterator* iterator);
// gboolean pango_attr_iterator_next (::PangoAttrIterator* iterator);
GI_INLINE_DECL bool next () noexcept;

// void pango_attr_iterator_range (PangoAttrIterator* iterator, int* start, int* end);
// void pango_attr_iterator_range (::PangoAttrIterator* iterator, gint* start, gint* end);
GI_INLINE_DECL void range (gint & start, gint & end) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> range () noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attriterator_extra_def.hpp>)
#include <pango/attriterator_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attriterator_extra.hpp>)
#include <pango/attriterator_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrIterator : public GI_PANGO_ATTRITERATOR_BASE
{ typedef GI_PANGO_ATTRITERATOR_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrIterator>
{ typedef Pango::AttrIterator type; }; 

} // namespace repository

} // namespace gi

#endif
