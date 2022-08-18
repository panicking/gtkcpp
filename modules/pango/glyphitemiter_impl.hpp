// AUTO-GENERATED

#ifndef _GI_PANGO_GLYPHITEMITER_IMPL_HPP_
#define _GI_PANGO_GLYPHITEMITER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static ::PangoGlyphItem* _field_glyph_item_get (const ::PangoGlyphItemIter* obj) { return (::PangoGlyphItem*) obj->glyph_item; }
// ::PangoGlyphItem* GlyphItemIter::glyph_item (const ::PangoGlyphItemIter* obj);
// ::PangoGlyphItem* GlyphItemIter::glyph_item (const ::PangoGlyphItemIter* obj);
Pango::GlyphItem base::GlyphItemIterBase::glyph_item_ () const noexcept
{
  typedef ::PangoGlyphItem* (*call_wrap_t) (const ::PangoGlyphItemIter* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_glyph_item_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphItemIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_text_get (const ::PangoGlyphItemIter* obj) { return (const char*) obj->text; }
// const char* GlyphItemIter::text (const ::PangoGlyphItemIter* obj);
// const char* GlyphItemIter::text (const ::PangoGlyphItemIter* obj);
std::string base::GlyphItemIterBase::text_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::PangoGlyphItemIter* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_text_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphItemIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint _field_start_glyph_get (const ::PangoGlyphItemIter* obj) { return (gint) obj->start_glyph; }
// gint GlyphItemIter::start_glyph (const ::PangoGlyphItemIter* obj);
// gint GlyphItemIter::start_glyph (const ::PangoGlyphItemIter* obj);
gint base::GlyphItemIterBase::start_glyph_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::PangoGlyphItemIter* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_glyph_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphItemIter*) (gobj_()));
  return _temp_ret;
}

static void _field_start_glyph_set (::PangoGlyphItemIter* obj, gint _value) { obj->start_glyph = (decltype(obj->start_glyph)) _value; }
//  GlyphItemIter::start_glyph (::PangoGlyphItemIter* obj, gint _value);
// void GlyphItemIter::start_glyph (::PangoGlyphItemIter* obj, gint _value);
void base::GlyphItemIterBase::start_glyph_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphItemIter* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_glyph_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoGlyphItemIter*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_start_index_get (const ::PangoGlyphItemIter* obj) { return (gint) obj->start_index; }
// gint GlyphItemIter::start_index (const ::PangoGlyphItemIter* obj);
// gint GlyphItemIter::start_index (const ::PangoGlyphItemIter* obj);
gint base::GlyphItemIterBase::start_index_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::PangoGlyphItemIter* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_index_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphItemIter*) (gobj_()));
  return _temp_ret;
}

static void _field_start_index_set (::PangoGlyphItemIter* obj, gint _value) { obj->start_index = (decltype(obj->start_index)) _value; }
//  GlyphItemIter::start_index (::PangoGlyphItemIter* obj, gint _value);
// void GlyphItemIter::start_index (::PangoGlyphItemIter* obj, gint _value);
void base::GlyphItemIterBase::start_index_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphItemIter* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_index_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoGlyphItemIter*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_start_char_get (const ::PangoGlyphItemIter* obj) { return (gint) obj->start_char; }
// gint GlyphItemIter::start_char (const ::PangoGlyphItemIter* obj);
// gint GlyphItemIter::start_char (const ::PangoGlyphItemIter* obj);
gint base::GlyphItemIterBase::start_char_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::PangoGlyphItemIter* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_char_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphItemIter*) (gobj_()));
  return _temp_ret;
}

static void _field_start_char_set (::PangoGlyphItemIter* obj, gint _value) { obj->start_char = (decltype(obj->start_char)) _value; }
//  GlyphItemIter::start_char (::PangoGlyphItemIter* obj, gint _value);
// void GlyphItemIter::start_char (::PangoGlyphItemIter* obj, gint _value);
void base::GlyphItemIterBase::start_char_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphItemIter* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_char_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoGlyphItemIter*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_end_glyph_get (const ::PangoGlyphItemIter* obj) { return (gint) obj->end_glyph; }
// gint GlyphItemIter::end_glyph (const ::PangoGlyphItemIter* obj);
// gint GlyphItemIter::end_glyph (const ::PangoGlyphItemIter* obj);
gint base::GlyphItemIterBase::end_glyph_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::PangoGlyphItemIter* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_glyph_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphItemIter*) (gobj_()));
  return _temp_ret;
}

static void _field_end_glyph_set (::PangoGlyphItemIter* obj, gint _value) { obj->end_glyph = (decltype(obj->end_glyph)) _value; }
//  GlyphItemIter::end_glyph (::PangoGlyphItemIter* obj, gint _value);
// void GlyphItemIter::end_glyph (::PangoGlyphItemIter* obj, gint _value);
void base::GlyphItemIterBase::end_glyph_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphItemIter* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_glyph_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoGlyphItemIter*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_end_index_get (const ::PangoGlyphItemIter* obj) { return (gint) obj->end_index; }
// gint GlyphItemIter::end_index (const ::PangoGlyphItemIter* obj);
// gint GlyphItemIter::end_index (const ::PangoGlyphItemIter* obj);
gint base::GlyphItemIterBase::end_index_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::PangoGlyphItemIter* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_index_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphItemIter*) (gobj_()));
  return _temp_ret;
}

static void _field_end_index_set (::PangoGlyphItemIter* obj, gint _value) { obj->end_index = (decltype(obj->end_index)) _value; }
//  GlyphItemIter::end_index (::PangoGlyphItemIter* obj, gint _value);
// void GlyphItemIter::end_index (::PangoGlyphItemIter* obj, gint _value);
void base::GlyphItemIterBase::end_index_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphItemIter* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_index_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoGlyphItemIter*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_end_char_get (const ::PangoGlyphItemIter* obj) { return (gint) obj->end_char; }
// gint GlyphItemIter::end_char (const ::PangoGlyphItemIter* obj);
// gint GlyphItemIter::end_char (const ::PangoGlyphItemIter* obj);
gint base::GlyphItemIterBase::end_char_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::PangoGlyphItemIter* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_char_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphItemIter*) (gobj_()));
  return _temp_ret;
}

static void _field_end_char_set (::PangoGlyphItemIter* obj, gint _value) { obj->end_char = (decltype(obj->end_char)) _value; }
//  GlyphItemIter::end_char (::PangoGlyphItemIter* obj, gint _value);
// void GlyphItemIter::end_char (::PangoGlyphItemIter* obj, gint _value);
void base::GlyphItemIterBase::end_char_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphItemIter* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_char_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoGlyphItemIter*) (gobj_()), (gint) (_value_to_c));
}

// PangoGlyphItemIter* pango_glyph_item_iter_copy (PangoGlyphItemIter* orig);
// ::PangoGlyphItemIter* pango_glyph_item_iter_copy (::PangoGlyphItemIter* orig);
Pango::GlyphItemIter base::GlyphItemIterBase::copy () noexcept
{
  typedef ::PangoGlyphItemIter* (*call_wrap_t) (::PangoGlyphItemIter* orig);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_glyph_item_iter_copy;
  auto _temp_ret = call_wrap_v ((::PangoGlyphItemIter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void pango_glyph_item_iter_free (PangoGlyphItemIter* iter);
// void pango_glyph_item_iter_free (::PangoGlyphItemIter* iter);
// IGNORE; marked ignore

// gboolean pango_glyph_item_iter_init_end (PangoGlyphItemIter* iter, PangoGlyphItem* glyph_item, const char* text);
// gboolean pango_glyph_item_iter_init_end (::PangoGlyphItemIter* iter, ::PangoGlyphItem* glyph_item, const char* text);
bool base::GlyphItemIterBase::init_end (Pango::GlyphItem glyph_item, const std::string & text) noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoGlyphItemIter* iter, ::PangoGlyphItem* glyph_item, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_glyph_item_iter_init_end;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto glyph_item_to_c = gi::unwrap (glyph_item, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoGlyphItemIter*) (gobj_()), (::PangoGlyphItem*) (glyph_item_to_c), (const char*) (text_to_c));
  return _temp_ret;
}

// gboolean pango_glyph_item_iter_init_start (PangoGlyphItemIter* iter, PangoGlyphItem* glyph_item, const char* text);
// gboolean pango_glyph_item_iter_init_start (::PangoGlyphItemIter* iter, ::PangoGlyphItem* glyph_item, const char* text);
bool base::GlyphItemIterBase::init_start (Pango::GlyphItem glyph_item, const std::string & text) noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoGlyphItemIter* iter, ::PangoGlyphItem* glyph_item, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_glyph_item_iter_init_start;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto glyph_item_to_c = gi::unwrap (glyph_item, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoGlyphItemIter*) (gobj_()), (::PangoGlyphItem*) (glyph_item_to_c), (const char*) (text_to_c));
  return _temp_ret;
}

// gboolean pango_glyph_item_iter_next_cluster (PangoGlyphItemIter* iter);
// gboolean pango_glyph_item_iter_next_cluster (::PangoGlyphItemIter* iter);
bool base::GlyphItemIterBase::next_cluster () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoGlyphItemIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_glyph_item_iter_next_cluster;
  auto _temp_ret = call_wrap_v ((::PangoGlyphItemIter*) (gobj_()));
  return _temp_ret;
}

// gboolean pango_glyph_item_iter_prev_cluster (PangoGlyphItemIter* iter);
// gboolean pango_glyph_item_iter_prev_cluster (::PangoGlyphItemIter* iter);
bool base::GlyphItemIterBase::prev_cluster () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoGlyphItemIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_glyph_item_iter_prev_cluster;
  auto _temp_ret = call_wrap_v ((::PangoGlyphItemIter*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/glyphitemiter_extra_def_impl.hpp>)
#include <pango/glyphitemiter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/glyphitemiter_extra_impl.hpp>)
#include <pango/glyphitemiter_extra_impl.hpp>
#endif
#endif

#endif
