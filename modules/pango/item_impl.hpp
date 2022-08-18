// AUTO-GENERATED

#ifndef _GI_PANGO_ITEM_IMPL_HPP_
#define _GI_PANGO_ITEM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static gint _field_offset_get (const ::PangoItem* obj) { return (gint) obj->offset; }
// gint Item::offset (const ::PangoItem* obj);
// gint Item::offset (const ::PangoItem* obj);
gint base::ItemBase::offset_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::PangoItem* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_offset_get;
  auto _temp_ret = call_wrap_v ((const ::PangoItem*) (gobj_()));
  return _temp_ret;
}

static void _field_offset_set (::PangoItem* obj, gint _value) { obj->offset = (decltype(obj->offset)) _value; }
//  Item::offset (::PangoItem* obj, gint _value);
// void Item::offset (::PangoItem* obj, gint _value);
void base::ItemBase::offset_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoItem* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_offset_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoItem*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_length_get (const ::PangoItem* obj) { return (gint) obj->length; }
// gint Item::length (const ::PangoItem* obj);
// gint Item::length (const ::PangoItem* obj);
gint base::ItemBase::length_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::PangoItem* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_length_get;
  auto _temp_ret = call_wrap_v ((const ::PangoItem*) (gobj_()));
  return _temp_ret;
}

static void _field_length_set (::PangoItem* obj, gint _value) { obj->length = (decltype(obj->length)) _value; }
//  Item::length (::PangoItem* obj, gint _value);
// void Item::length (::PangoItem* obj, gint _value);
void base::ItemBase::length_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoItem* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_length_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoItem*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_num_chars_get (const ::PangoItem* obj) { return (gint) obj->num_chars; }
// gint Item::num_chars (const ::PangoItem* obj);
// gint Item::num_chars (const ::PangoItem* obj);
gint base::ItemBase::num_chars_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::PangoItem* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_num_chars_get;
  auto _temp_ret = call_wrap_v ((const ::PangoItem*) (gobj_()));
  return _temp_ret;
}

static void _field_num_chars_set (::PangoItem* obj, gint _value) { obj->num_chars = (decltype(obj->num_chars)) _value; }
//  Item::num_chars (::PangoItem* obj, gint _value);
// void Item::num_chars (::PangoItem* obj, gint _value);
void base::ItemBase::num_chars_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoItem* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_num_chars_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoItem*) (gobj_()), (gint) (_value_to_c));
}

// PangoItem* pango_item_new ();
// ::PangoItem* pango_item_new ();
Pango::Item base::ItemBase::new_ () noexcept
{
  typedef ::PangoItem* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) pango_item_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void pango_item_apply_attrs (PangoItem* item, PangoAttrIterator* iter);
// void pango_item_apply_attrs (::PangoItem* item, ::PangoAttrIterator* iter);
void base::ItemBase::apply_attrs (Pango::AttrIterator iter) noexcept
{
  typedef void (*call_wrap_t) (::PangoItem* item, ::PangoAttrIterator* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_item_apply_attrs;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoItem*) (gobj_()), (::PangoAttrIterator*) (iter_to_c));
}

// PangoItem* pango_item_copy (PangoItem* item);
// ::PangoItem* pango_item_copy (::PangoItem* item);
Pango::Item base::ItemBase::copy () noexcept
{
  typedef ::PangoItem* (*call_wrap_t) (::PangoItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_item_copy;
  auto _temp_ret = call_wrap_v ((::PangoItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void pango_item_free (PangoItem* item);
// void pango_item_free (::PangoItem* item);
// IGNORE; marked ignore

// PangoItem* pango_item_split (PangoItem* orig, int split_index, int split_offset);
// ::PangoItem* pango_item_split (::PangoItem* orig, gint split_index, gint split_offset);
Pango::Item base::ItemBase::split (gint split_index, gint split_offset) noexcept
{
  typedef ::PangoItem* (*call_wrap_t) (::PangoItem* orig, gint split_index, gint split_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_item_split;
  auto split_offset_to_c = split_offset;
  auto split_index_to_c = split_index;
  auto _temp_ret = call_wrap_v ((::PangoItem*) (gobj_()), (gint) (split_index_to_c), (gint) (split_offset_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/item_extra_def_impl.hpp>)
#include <pango/item_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/item_extra_impl.hpp>)
#include <pango/item_extra_impl.hpp>
#endif
#endif

#endif
