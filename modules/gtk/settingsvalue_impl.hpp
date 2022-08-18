// AUTO-GENERATED

#ifndef _GI_GTK_SETTINGSVALUE_IMPL_HPP_
#define _GI_GTK_SETTINGSVALUE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static char* _field_origin_get (const ::GtkSettingsValue* obj) { return (char*) obj->origin; }
// char* SettingsValue::origin (const ::GtkSettingsValue* obj);
// char* SettingsValue::origin (const ::GtkSettingsValue* obj);
std::string base::SettingsValueBase::origin_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GtkSettingsValue* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_origin_get;
  auto _temp_ret = call_wrap_v ((const ::GtkSettingsValue*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/settingsvalue_extra_def_impl.hpp>)
#include <gtk/settingsvalue_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/settingsvalue_extra_impl.hpp>)
#include <gtk/settingsvalue_extra_impl.hpp>
#endif
#endif

#endif
