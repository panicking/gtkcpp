// AUTO-GENERATED

#ifndef _GI_PANGO_ANALYSIS_IMPL_HPP_
#define _GI_PANGO_ANALYSIS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static ::PangoFont* _field_font_get (const ::PangoAnalysis* obj) { return (::PangoFont*) obj->font; }
// ::PangoFont* Analysis::font (const ::PangoAnalysis* obj);
// ::PangoFont* Analysis::font (const ::PangoAnalysis* obj);
Pango::Font base::AnalysisBase::font_ () const noexcept
{
  typedef ::PangoFont* (*call_wrap_t) (const ::PangoAnalysis* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_font_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAnalysis*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static guint8 _field_level_get (const ::PangoAnalysis* obj) { return (guint8) obj->level; }
// guint8 Analysis::level (const ::PangoAnalysis* obj);
// guint8 Analysis::level (const ::PangoAnalysis* obj);
guint8 base::AnalysisBase::level_ () const noexcept
{
  typedef guint8 (*call_wrap_t) (const ::PangoAnalysis* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_level_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAnalysis*) (gobj_()));
  return _temp_ret;
}

static void _field_level_set (::PangoAnalysis* obj, guint8 _value) { obj->level = (decltype(obj->level)) _value; }
//  Analysis::level (::PangoAnalysis* obj, guint8 _value);
// void Analysis::level (::PangoAnalysis* obj, guint8 _value);
void base::AnalysisBase::level_ (guint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoAnalysis* obj, guint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_level_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoAnalysis*) (gobj_()), (guint8) (_value_to_c));
}

static guint8 _field_gravity_get (const ::PangoAnalysis* obj) { return (guint8) obj->gravity; }
// guint8 Analysis::gravity (const ::PangoAnalysis* obj);
// guint8 Analysis::gravity (const ::PangoAnalysis* obj);
guint8 base::AnalysisBase::gravity_ () const noexcept
{
  typedef guint8 (*call_wrap_t) (const ::PangoAnalysis* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_gravity_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAnalysis*) (gobj_()));
  return _temp_ret;
}

static void _field_gravity_set (::PangoAnalysis* obj, guint8 _value) { obj->gravity = (decltype(obj->gravity)) _value; }
//  Analysis::gravity (::PangoAnalysis* obj, guint8 _value);
// void Analysis::gravity (::PangoAnalysis* obj, guint8 _value);
void base::AnalysisBase::gravity_ (guint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoAnalysis* obj, guint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_gravity_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoAnalysis*) (gobj_()), (guint8) (_value_to_c));
}

static guint8 _field_flags_get (const ::PangoAnalysis* obj) { return (guint8) obj->flags; }
// guint8 Analysis::flags (const ::PangoAnalysis* obj);
// guint8 Analysis::flags (const ::PangoAnalysis* obj);
guint8 base::AnalysisBase::flags_ () const noexcept
{
  typedef guint8 (*call_wrap_t) (const ::PangoAnalysis* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAnalysis*) (gobj_()));
  return _temp_ret;
}

static void _field_flags_set (::PangoAnalysis* obj, guint8 _value) { obj->flags = (decltype(obj->flags)) _value; }
//  Analysis::flags (::PangoAnalysis* obj, guint8 _value);
// void Analysis::flags (::PangoAnalysis* obj, guint8 _value);
void base::AnalysisBase::flags_ (guint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoAnalysis* obj, guint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoAnalysis*) (gobj_()), (guint8) (_value_to_c));
}

static guint8 _field_script_get (const ::PangoAnalysis* obj) { return (guint8) obj->script; }
// guint8 Analysis::script (const ::PangoAnalysis* obj);
// guint8 Analysis::script (const ::PangoAnalysis* obj);
guint8 base::AnalysisBase::script_ () const noexcept
{
  typedef guint8 (*call_wrap_t) (const ::PangoAnalysis* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_script_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAnalysis*) (gobj_()));
  return _temp_ret;
}

static void _field_script_set (::PangoAnalysis* obj, guint8 _value) { obj->script = (decltype(obj->script)) _value; }
//  Analysis::script (::PangoAnalysis* obj, guint8 _value);
// void Analysis::script (::PangoAnalysis* obj, guint8 _value);
void base::AnalysisBase::script_ (guint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoAnalysis* obj, guint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_script_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoAnalysis*) (gobj_()), (guint8) (_value_to_c));
}

static ::PangoLanguage* _field_language_get (const ::PangoAnalysis* obj) { return (::PangoLanguage*) obj->language; }
// ::PangoLanguage* Analysis::language (const ::PangoAnalysis* obj);
// ::PangoLanguage* Analysis::language (const ::PangoAnalysis* obj);
Pango::Language base::AnalysisBase::language_ () const noexcept
{
  typedef ::PangoLanguage* (*call_wrap_t) (const ::PangoAnalysis* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_language_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAnalysis*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/analysis_extra_def_impl.hpp>)
#include <pango/analysis_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/analysis_extra_impl.hpp>)
#include <pango/analysis_extra_impl.hpp>
#endif
#endif

#endif
