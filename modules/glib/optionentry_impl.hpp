// AUTO-GENERATED

#ifndef _GI_GLIB_OPTIONENTRY_IMPL_HPP_
#define _GI_GLIB_OPTIONENTRY_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

static const char* _field_long_name_get (const ::GOptionEntry* obj) { return (const char*) obj->long_name; }
// const char* OptionEntry::long_name (const ::GOptionEntry* obj);
// const char* OptionEntry::long_name (const ::GOptionEntry* obj);
std::string base::OptionEntryBase::long_name_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GOptionEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_long_name_get;
  auto _temp_ret = call_wrap_v ((const ::GOptionEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gchar _field_short_name_get (const ::GOptionEntry* obj) { return (gchar) obj->short_name; }
// gchar OptionEntry::short_name (const ::GOptionEntry* obj);
// gchar OptionEntry::short_name (const ::GOptionEntry* obj);
gchar base::OptionEntryBase::short_name_ () const noexcept
{
  typedef gchar (*call_wrap_t) (const ::GOptionEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_short_name_get;
  auto _temp_ret = call_wrap_v ((const ::GOptionEntry*) (gobj_()));
  return _temp_ret;
}

static void _field_short_name_set (::GOptionEntry* obj, gchar _value) { obj->short_name = (decltype(obj->short_name)) _value; }
//  OptionEntry::short_name (::GOptionEntry* obj, gchar _value);
// void OptionEntry::short_name (::GOptionEntry* obj, gchar _value);
void base::OptionEntryBase::short_name_ (gchar _value) noexcept
{
  typedef void (*call_wrap_t) (::GOptionEntry* obj, gchar _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_short_name_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GOptionEntry*) (gobj_()), (gchar) (_value_to_c));
}

static gint _field_flags_get (const ::GOptionEntry* obj) { return (gint) obj->flags; }
// gint OptionEntry::flags (const ::GOptionEntry* obj);
// gint OptionEntry::flags (const ::GOptionEntry* obj);
gint base::OptionEntryBase::flags_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GOptionEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_get;
  auto _temp_ret = call_wrap_v ((const ::GOptionEntry*) (gobj_()));
  return _temp_ret;
}

static void _field_flags_set (::GOptionEntry* obj, gint _value) { obj->flags = (decltype(obj->flags)) _value; }
//  OptionEntry::flags (::GOptionEntry* obj, gint _value);
// void OptionEntry::flags (::GOptionEntry* obj, gint _value);
void base::OptionEntryBase::flags_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GOptionEntry* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GOptionEntry*) (gobj_()), (gint) (_value_to_c));
}

static ::GOptionArg _field_arg_get (const ::GOptionEntry* obj) { return (::GOptionArg) obj->arg; }
// ::GOptionArg OptionEntry::arg (const ::GOptionEntry* obj);
// ::GOptionArg OptionEntry::arg (const ::GOptionEntry* obj);
GLib::OptionArg base::OptionEntryBase::arg_ () const noexcept
{
  typedef ::GOptionArg (*call_wrap_t) (const ::GOptionEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_arg_get;
  auto _temp_ret = call_wrap_v ((const ::GOptionEntry*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_arg_set (::GOptionEntry* obj, ::GOptionArg _value) { obj->arg = (decltype(obj->arg)) _value; }
//  OptionEntry::arg (::GOptionEntry* obj, ::GOptionArg _value);
// void OptionEntry::arg (::GOptionEntry* obj, ::GOptionArg _value);
void base::OptionEntryBase::arg_ (GLib::OptionArg _value) noexcept
{
  typedef void (*call_wrap_t) (::GOptionEntry* obj, ::GOptionArg _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_arg_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GOptionEntry*) (gobj_()), (::GOptionArg) (_value_to_c));
}

static const char* _field_description_get (const ::GOptionEntry* obj) { return (const char*) obj->description; }
// const char* OptionEntry::description (const ::GOptionEntry* obj);
// const char* OptionEntry::description (const ::GOptionEntry* obj);
std::string base::OptionEntryBase::description_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GOptionEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_description_get;
  auto _temp_ret = call_wrap_v ((const ::GOptionEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_arg_description_get (const ::GOptionEntry* obj) { return (const char*) obj->arg_description; }
// const char* OptionEntry::arg_description (const ::GOptionEntry* obj);
// const char* OptionEntry::arg_description (const ::GOptionEntry* obj);
std::string base::OptionEntryBase::arg_description_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GOptionEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_arg_description_get;
  auto _temp_ret = call_wrap_v ((const ::GOptionEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/optionentry_extra_def_impl.hpp>)
#include <glib/optionentry_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/optionentry_extra_impl.hpp>)
#include <glib/optionentry_extra_impl.hpp>
#endif
#endif

#endif
