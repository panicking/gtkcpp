// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRSIZE_IMPL_HPP_
#define _GI_PANGO_ATTRSIZE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static gint _field_size_get (const ::PangoAttrSize* obj) { return (gint) obj->size; }
// gint AttrSize::size (const ::PangoAttrSize* obj);
// gint AttrSize::size (const ::PangoAttrSize* obj);
gint base::AttrSizeBase::size_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::PangoAttrSize* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_size_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAttrSize*) (gobj_()));
  return _temp_ret;
}

static void _field_size_set (::PangoAttrSize* obj, gint _value) { obj->size = (decltype(obj->size)) _value; }
//  AttrSize::size (::PangoAttrSize* obj, gint _value);
// void AttrSize::size (::PangoAttrSize* obj, gint _value);
void base::AttrSizeBase::size_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrSize* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_size_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoAttrSize*) (gobj_()), (gint) (_value_to_c));
}

static guint _field_absolute_get (const ::PangoAttrSize* obj) { return (guint) obj->absolute; }
// guint AttrSize::absolute (const ::PangoAttrSize* obj);
// guint AttrSize::absolute (const ::PangoAttrSize* obj);
guint base::AttrSizeBase::absolute_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::PangoAttrSize* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_absolute_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAttrSize*) (gobj_()));
  return _temp_ret;
}

static void _field_absolute_set (::PangoAttrSize* obj, guint _value) { obj->absolute = (decltype(obj->absolute)) _value; }
//  AttrSize::absolute (::PangoAttrSize* obj, guint _value);
// void AttrSize::absolute (::PangoAttrSize* obj, guint _value);
void base::AttrSizeBase::absolute_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrSize* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_absolute_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoAttrSize*) (gobj_()), (guint) (_value_to_c));
}

// PangoAttribute* pango_attr_size_new (int size);
// ::PangoAttribute* pango_attr_size_new (gint size);
Pango::Attribute base::AttrSizeBase::new_ (gint size) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gint size);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_size_new;
  auto size_to_c = size;
  auto _temp_ret = call_wrap_v ((gint) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_size_new_absolute (int size);
// ::PangoAttribute* pango_attr_size_new_absolute (gint size);
Pango::Attribute base::AttrSizeBase::new_absolute (gint size) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gint size);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_size_new_absolute;
  auto size_to_c = size;
  auto _temp_ret = call_wrap_v ((gint) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrsize_extra_def_impl.hpp>)
#include <pango/attrsize_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrsize_extra_impl.hpp>)
#include <pango/attrsize_extra_impl.hpp>
#endif
#endif

#endif
