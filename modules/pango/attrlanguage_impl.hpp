// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRLANGUAGE_IMPL_HPP_
#define _GI_PANGO_ATTRLANGUAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static ::PangoLanguage* _field_value_get (const ::PangoAttrLanguage* obj) { return (::PangoLanguage*) obj->value; }
// ::PangoLanguage* AttrLanguage::value (const ::PangoAttrLanguage* obj);
// ::PangoLanguage* AttrLanguage::value (const ::PangoAttrLanguage* obj);
Pango::Language base::AttrLanguageBase::value_ () const noexcept
{
  typedef ::PangoLanguage* (*call_wrap_t) (const ::PangoAttrLanguage* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAttrLanguage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoAttribute* pango_attr_language_new (PangoLanguage* language);
// ::PangoAttribute* pango_attr_language_new (::PangoLanguage* language);
Pango::Attribute base::AttrLanguageBase::new_ (Pango::Language language) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_language_new;
  auto language_to_c = gi::unwrap (language, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoLanguage*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrlanguage_extra_def_impl.hpp>)
#include <pango/attrlanguage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrlanguage_extra_impl.hpp>)
#include <pango/attrlanguage_extra_impl.hpp>
#endif
#endif

#endif
