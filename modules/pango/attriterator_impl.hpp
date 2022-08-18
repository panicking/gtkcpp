// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRITERATOR_IMPL_HPP_
#define _GI_PANGO_ATTRITERATOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// PangoAttrIterator* pango_attr_iterator_copy (PangoAttrIterator* iterator);
// ::PangoAttrIterator* pango_attr_iterator_copy (::PangoAttrIterator* iterator);
Pango::AttrIterator base::AttrIteratorBase::copy () noexcept
{
  typedef ::PangoAttrIterator* (*call_wrap_t) (::PangoAttrIterator* iterator);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_iterator_copy;
  auto _temp_ret = call_wrap_v ((::PangoAttrIterator*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void pango_attr_iterator_destroy (PangoAttrIterator* iterator);
// void pango_attr_iterator_destroy (::PangoAttrIterator* iterator);
void base::AttrIteratorBase::destroy () noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrIterator* iterator);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_iterator_destroy;
  call_wrap_v ((::PangoAttrIterator*) (gobj_()));
}

// PangoAttribute* pango_attr_iterator_get (PangoAttrIterator* iterator, PangoAttrType type);
// ::PangoAttribute* pango_attr_iterator_get (::PangoAttrIterator* iterator, ::PangoAttrType type);
Pango::Attribute base::AttrIteratorBase::get (Pango::AttrType type) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoAttrIterator* iterator, ::PangoAttrType type);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_iterator_get;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::PangoAttrIterator*) (gobj_()), (::PangoAttrType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GSList* pango_attr_iterator_get_attrs (PangoAttrIterator* iterator);
// ::GSList* pango_attr_iterator_get_attrs (::PangoAttrIterator* iterator);
std::vector<Pango::Attribute> base::AttrIteratorBase::get_attrs () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::PangoAttrIterator* iterator);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_iterator_get_attrs;
  auto _temp_ret = call_wrap_v ((::PangoAttrIterator*) (gobj_()));
  return gi::detail::wrap_list<Pango::Attribute> (_temp_ret, gi::transfer_full);
}

// void pango_attr_iterator_get_font (PangoAttrIterator* iterator, PangoFontDescription* desc, PangoLanguage** language, GSList** extra_attrs);
// void pango_attr_iterator_get_font (::PangoAttrIterator* iterator, ::PangoFontDescription* desc, ::PangoLanguage** language, ::GSList** extra_attrs);
void base::AttrIteratorBase::get_font (Pango::FontDescription desc, Pango::Language * language, std::vector<Pango::Attribute> * extra_attrs) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrIterator* iterator, ::PangoFontDescription* desc, ::PangoLanguage** language, ::GSList** extra_attrs);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_iterator_get_font;
  ::GSList* extra_attrs_o {};
  ::PangoLanguage* language_o {};
  auto desc_to_c = gi::unwrap (desc, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoAttrIterator*) (gobj_()), (::PangoFontDescription*) (desc_to_c), (::PangoLanguage**) (language ? &language_o : nullptr), (::GSList**) (extra_attrs ? &extra_attrs_o : nullptr));
  if (extra_attrs) *extra_attrs = gi::detail::wrap_list<Pango::Attribute> (extra_attrs_o, gi::transfer_full);
  if (language) *language = gi::wrap (language_o, gi::transfer_full, gi::direction_out);
}
std::tuple<Pango::Language, std::vector<Pango::Attribute>> base::AttrIteratorBase::get_font (Pango::FontDescription desc) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrIterator* iterator, ::PangoFontDescription* desc, ::PangoLanguage** language, ::GSList** extra_attrs);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_iterator_get_font;
  ::GSList* extra_attrs_o {};
  ::PangoLanguage* language_o {};
  auto desc_to_c = gi::unwrap (desc, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoAttrIterator*) (gobj_()), (::PangoFontDescription*) (desc_to_c), (::PangoLanguage**) (&language_o), (::GSList**) (&extra_attrs_o));
  return std::make_tuple (gi::wrap (language_o, gi::transfer_full, gi::direction_out), gi::detail::wrap_list<Pango::Attribute> (extra_attrs_o, gi::transfer_full));
}

// gboolean pango_attr_iterator_next (PangoAttrIterator* iterator);
// gboolean pango_attr_iterator_next (::PangoAttrIterator* iterator);
bool base::AttrIteratorBase::next () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoAttrIterator* iterator);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_iterator_next;
  auto _temp_ret = call_wrap_v ((::PangoAttrIterator*) (gobj_()));
  return _temp_ret;
}

// void pango_attr_iterator_range (PangoAttrIterator* iterator, int* start, int* end);
// void pango_attr_iterator_range (::PangoAttrIterator* iterator, gint* start, gint* end);
void base::AttrIteratorBase::range (gint & start, gint & end) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrIterator* iterator, gint* start, gint* end);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_iterator_range;
  gint end_o {};
  gint start_o {};
  call_wrap_v ((::PangoAttrIterator*) (gobj_()), (gint*) (&start_o), (gint*) (&end_o));
  end = end_o;
  start = start_o;
}
std::tuple<gint, gint> base::AttrIteratorBase::range () noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrIterator* iterator, gint* start, gint* end);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_iterator_range;
  gint end_o {};
  gint start_o {};
  call_wrap_v ((::PangoAttrIterator*) (gobj_()), (gint*) (&start_o), (gint*) (&end_o));
  return std::make_tuple (start_o, end_o);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attriterator_extra_def_impl.hpp>)
#include <pango/attriterator_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attriterator_extra_impl.hpp>)
#include <pango/attriterator_extra_impl.hpp>
#endif
#endif

#endif
