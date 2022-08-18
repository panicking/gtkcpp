// AUTO-GENERATED

#ifndef _GI_GTK_RECENTDATA_IMPL_HPP_
#define _GI_GTK_RECENTDATA_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static char* _field_display_name_get (const ::GtkRecentData* obj) { return (char*) obj->display_name; }
// char* RecentData::display_name (const ::GtkRecentData* obj);
// char* RecentData::display_name (const ::GtkRecentData* obj);
std::string base::RecentDataBase::display_name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GtkRecentData* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_display_name_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRecentData*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_description_get (const ::GtkRecentData* obj) { return (char*) obj->description; }
// char* RecentData::description (const ::GtkRecentData* obj);
// char* RecentData::description (const ::GtkRecentData* obj);
std::string base::RecentDataBase::description_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GtkRecentData* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_description_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRecentData*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_mime_type_get (const ::GtkRecentData* obj) { return (char*) obj->mime_type; }
// char* RecentData::mime_type (const ::GtkRecentData* obj);
// char* RecentData::mime_type (const ::GtkRecentData* obj);
std::string base::RecentDataBase::mime_type_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GtkRecentData* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_mime_type_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRecentData*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_app_name_get (const ::GtkRecentData* obj) { return (char*) obj->app_name; }
// char* RecentData::app_name (const ::GtkRecentData* obj);
// char* RecentData::app_name (const ::GtkRecentData* obj);
std::string base::RecentDataBase::app_name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GtkRecentData* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_app_name_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRecentData*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_app_exec_get (const ::GtkRecentData* obj) { return (char*) obj->app_exec; }
// char* RecentData::app_exec (const ::GtkRecentData* obj);
// char* RecentData::app_exec (const ::GtkRecentData* obj);
std::string base::RecentDataBase::app_exec_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GtkRecentData* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_app_exec_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRecentData*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gboolean _field_is_private_get (const ::GtkRecentData* obj) { return (gboolean) obj->is_private; }
// gboolean RecentData::is_private (const ::GtkRecentData* obj);
// gboolean RecentData::is_private (const ::GtkRecentData* obj);
bool base::RecentDataBase::is_private_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkRecentData* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_private_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRecentData*) (gobj_()));
  return _temp_ret;
}

static void _field_is_private_set (::GtkRecentData* obj, gboolean _value) { obj->is_private = (decltype(obj->is_private)) _value; }
//  RecentData::is_private (::GtkRecentData* obj, gboolean _value);
// void RecentData::is_private (::GtkRecentData* obj, gboolean _value);
void base::RecentDataBase::is_private_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentData* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_private_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkRecentData*) (gobj_()), (gboolean) (_value_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentdata_extra_def_impl.hpp>)
#include <gtk/recentdata_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentdata_extra_impl.hpp>)
#include <gtk/recentdata_extra_impl.hpp>
#endif
#endif

#endif
