// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRIBUTE_IMPL_HPP_
#define _GI_PANGO_ATTRIBUTE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static const ::PangoAttrClass* _field_klass_get (const ::PangoAttribute* obj) { return (const ::PangoAttrClass*) obj->klass; }
// const ::PangoAttrClass* Attribute::klass (const ::PangoAttribute* obj);
// const ::PangoAttrClass* Attribute::klass (const ::PangoAttribute* obj);
Pango::AttrClass base::AttributeBase::klass_ () const noexcept
{
  typedef const ::PangoAttrClass* (*call_wrap_t) (const ::PangoAttribute* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_klass_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static guint _field_start_index_get (const ::PangoAttribute* obj) { return (guint) obj->start_index; }
// guint Attribute::start_index (const ::PangoAttribute* obj);
// guint Attribute::start_index (const ::PangoAttribute* obj);
guint base::AttributeBase::start_index_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::PangoAttribute* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_index_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAttribute*) (gobj_()));
  return _temp_ret;
}

static void _field_start_index_set (::PangoAttribute* obj, guint _value) { obj->start_index = (decltype(obj->start_index)) _value; }
//  Attribute::start_index (::PangoAttribute* obj, guint _value);
// void Attribute::start_index (::PangoAttribute* obj, guint _value);
void base::AttributeBase::start_index_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttribute* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_index_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoAttribute*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_end_index_get (const ::PangoAttribute* obj) { return (guint) obj->end_index; }
// guint Attribute::end_index (const ::PangoAttribute* obj);
// guint Attribute::end_index (const ::PangoAttribute* obj);
guint base::AttributeBase::end_index_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::PangoAttribute* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_index_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAttribute*) (gobj_()));
  return _temp_ret;
}

static void _field_end_index_set (::PangoAttribute* obj, guint _value) { obj->end_index = (decltype(obj->end_index)) _value; }
//  Attribute::end_index (::PangoAttribute* obj, guint _value);
// void Attribute::end_index (::PangoAttribute* obj, guint _value);
void base::AttributeBase::end_index_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttribute* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_index_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoAttribute*) (gobj_()), (guint) (_value_to_c));
}

// PangoAttrColor* pango_attribute_as_color (PangoAttribute* attr);
// ::PangoAttrColor* pango_attribute_as_color (::PangoAttribute* attr);
Pango::AttrColor base::AttributeBase::as_color () noexcept
{
  typedef ::PangoAttrColor* (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attribute_as_color;
  auto _temp_ret = call_wrap_v ((::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoAttrFloat* pango_attribute_as_float (PangoAttribute* attr);
// ::PangoAttrFloat* pango_attribute_as_float (::PangoAttribute* attr);
Pango::AttrFloat base::AttributeBase::as_float () noexcept
{
  typedef ::PangoAttrFloat* (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attribute_as_float;
  auto _temp_ret = call_wrap_v ((::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoAttrFontDesc* pango_attribute_as_font_desc (PangoAttribute* attr);
// ::PangoAttrFontDesc* pango_attribute_as_font_desc (::PangoAttribute* attr);
Pango::AttrFontDesc base::AttributeBase::as_font_desc () noexcept
{
  typedef ::PangoAttrFontDesc* (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attribute_as_font_desc;
  auto _temp_ret = call_wrap_v ((::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoAttrFontFeatures* pango_attribute_as_font_features (PangoAttribute* attr);
// ::PangoAttrFontFeatures* pango_attribute_as_font_features (::PangoAttribute* attr);
Pango::AttrFontFeatures base::AttributeBase::as_font_features () noexcept
{
  typedef ::PangoAttrFontFeatures* (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attribute_as_font_features;
  auto _temp_ret = call_wrap_v ((::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoAttrInt* pango_attribute_as_int (PangoAttribute* attr);
// ::PangoAttrInt* pango_attribute_as_int (::PangoAttribute* attr);
Pango::AttrInt base::AttributeBase::as_int () noexcept
{
  typedef ::PangoAttrInt* (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attribute_as_int;
  auto _temp_ret = call_wrap_v ((::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoAttrLanguage* pango_attribute_as_language (PangoAttribute* attr);
// ::PangoAttrLanguage* pango_attribute_as_language (::PangoAttribute* attr);
Pango::AttrLanguage base::AttributeBase::as_language () noexcept
{
  typedef ::PangoAttrLanguage* (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attribute_as_language;
  auto _temp_ret = call_wrap_v ((::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoAttrShape* pango_attribute_as_shape (PangoAttribute* attr);
// ::PangoAttrShape* pango_attribute_as_shape (::PangoAttribute* attr);
Pango::AttrShape base::AttributeBase::as_shape () noexcept
{
  typedef ::PangoAttrShape* (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attribute_as_shape;
  auto _temp_ret = call_wrap_v ((::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoAttrSize* pango_attribute_as_size (PangoAttribute* attr);
// ::PangoAttrSize* pango_attribute_as_size (::PangoAttribute* attr);
Pango::AttrSize base::AttributeBase::as_size () noexcept
{
  typedef ::PangoAttrSize* (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attribute_as_size;
  auto _temp_ret = call_wrap_v ((::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoAttrString* pango_attribute_as_string (PangoAttribute* attr);
// ::PangoAttrString* pango_attribute_as_string (::PangoAttribute* attr);
Pango::AttrString base::AttributeBase::as_string () noexcept
{
  typedef ::PangoAttrString* (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attribute_as_string;
  auto _temp_ret = call_wrap_v ((::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoAttribute* pango_attribute_copy (const PangoAttribute* attr);
// ::PangoAttribute* pango_attribute_copy (const ::PangoAttribute* attr);
Pango::Attribute base::AttributeBase::copy () const noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (const ::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attribute_copy;
  auto _temp_ret = call_wrap_v ((const ::PangoAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void pango_attribute_destroy (PangoAttribute* attr);
// void pango_attribute_destroy (::PangoAttribute* attr);
void base::AttributeBase::destroy () noexcept
{
  typedef void (*call_wrap_t) (::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attribute_destroy;
  call_wrap_v ((::PangoAttribute*) (gobj_()));
}

// gboolean pango_attribute_equal (const PangoAttribute* attr1, const PangoAttribute* attr2);
// gboolean pango_attribute_equal (const ::PangoAttribute* attr1, const ::PangoAttribute* attr2);
bool base::AttributeBase::equal (const Pango::Attribute & attr2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::PangoAttribute* attr1, const ::PangoAttribute* attr2);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attribute_equal;
  auto attr2_to_c = gi::unwrap (attr2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::PangoAttribute*) (gobj_()), (const ::PangoAttribute*) (attr2_to_c));
  return _temp_ret;
}

// void pango_attribute_init (PangoAttribute* attr, const PangoAttrClass* klass);
// void pango_attribute_init (::PangoAttribute* attr, const ::PangoAttrClass* klass);
void base::AttributeBase::init (const Pango::AttrClass & klass) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttribute* attr, const ::PangoAttrClass* klass);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attribute_init;
  auto klass_to_c = gi::unwrap (klass, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoAttribute*) (gobj_()), (const ::PangoAttrClass*) (klass_to_c));
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attribute_extra_def_impl.hpp>)
#include <pango/attribute_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attribute_extra_impl.hpp>)
#include <pango/attribute_extra_impl.hpp>
#endif
#endif

#endif
