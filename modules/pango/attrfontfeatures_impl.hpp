// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRFONTFEATURES_IMPL_HPP_
#define _GI_PANGO_ATTRFONTFEATURES_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static char* _field_features_get (const ::PangoAttrFontFeatures* obj) { return (char*) obj->features; }
// char* AttrFontFeatures::features (const ::PangoAttrFontFeatures* obj);
// char* AttrFontFeatures::features (const ::PangoAttrFontFeatures* obj);
std::string base::AttrFontFeaturesBase::features_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::PangoAttrFontFeatures* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_features_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAttrFontFeatures*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoAttribute* pango_attr_font_features_new (const char* features);
// ::PangoAttribute* pango_attr_font_features_new (const char* features);
Pango::Attribute base::AttrFontFeaturesBase::new_ (const std::string & features) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (const char* features);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_font_features_new;
  auto features_to_c = gi::unwrap (features, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (features_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrfontfeatures_extra_def_impl.hpp>)
#include <pango/attrfontfeatures_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrfontfeatures_extra_impl.hpp>)
#include <pango/attrfontfeatures_extra_impl.hpp>
#endif
#endif

#endif
