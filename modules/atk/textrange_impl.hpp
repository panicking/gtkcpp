// AUTO-GENERATED

#ifndef _GI_ATK_TEXTRANGE_IMPL_HPP_
#define _GI_ATK_TEXTRANGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

static gint _field_start_offset_get (const ::AtkTextRange* obj) { return (gint) obj->start_offset; }
// gint TextRange::start_offset (const ::AtkTextRange* obj);
// gint TextRange::start_offset (const ::AtkTextRange* obj);
gint base::TextRangeBase::start_offset_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::AtkTextRange* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_offset_get;
  auto _temp_ret = call_wrap_v ((const ::AtkTextRange*) (gobj_()));
  return _temp_ret;
}

static void _field_start_offset_set (::AtkTextRange* obj, gint _value) { obj->start_offset = (decltype(obj->start_offset)) _value; }
//  TextRange::start_offset (::AtkTextRange* obj, gint _value);
// void TextRange::start_offset (::AtkTextRange* obj, gint _value);
void base::TextRangeBase::start_offset_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::AtkTextRange* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_offset_set;
  auto _value_to_c = _value;
  call_wrap_v ((::AtkTextRange*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_end_offset_get (const ::AtkTextRange* obj) { return (gint) obj->end_offset; }
// gint TextRange::end_offset (const ::AtkTextRange* obj);
// gint TextRange::end_offset (const ::AtkTextRange* obj);
gint base::TextRangeBase::end_offset_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::AtkTextRange* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_offset_get;
  auto _temp_ret = call_wrap_v ((const ::AtkTextRange*) (gobj_()));
  return _temp_ret;
}

static void _field_end_offset_set (::AtkTextRange* obj, gint _value) { obj->end_offset = (decltype(obj->end_offset)) _value; }
//  TextRange::end_offset (::AtkTextRange* obj, gint _value);
// void TextRange::end_offset (::AtkTextRange* obj, gint _value);
void base::TextRangeBase::end_offset_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::AtkTextRange* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_offset_set;
  auto _value_to_c = _value;
  call_wrap_v ((::AtkTextRange*) (gobj_()), (gint) (_value_to_c));
}

static char* _field_content_get (const ::AtkTextRange* obj) { return (char*) obj->content; }
// char* TextRange::content (const ::AtkTextRange* obj);
// char* TextRange::content (const ::AtkTextRange* obj);
std::string base::TextRangeBase::content_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::AtkTextRange* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_content_get;
  auto _temp_ret = call_wrap_v ((const ::AtkTextRange*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/textrange_extra_def_impl.hpp>)
#include <atk/textrange_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/textrange_extra_impl.hpp>)
#include <atk/textrange_extra_impl.hpp>
#endif
#endif

#endif
