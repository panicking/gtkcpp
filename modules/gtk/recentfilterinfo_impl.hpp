// AUTO-GENERATED

#ifndef _GI_GTK_RECENTFILTERINFO_IMPL_HPP_
#define _GI_GTK_RECENTFILTERINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static ::GtkRecentFilterFlags _field_contains_get (const ::GtkRecentFilterInfo* obj) { return (::GtkRecentFilterFlags) obj->contains; }
// ::GtkRecentFilterFlags RecentFilterInfo::contains (const ::GtkRecentFilterInfo* obj);
// ::GtkRecentFilterFlags RecentFilterInfo::contains (const ::GtkRecentFilterInfo* obj);
Gtk::RecentFilterFlags base::RecentFilterInfoBase::contains_ () const noexcept
{
  typedef ::GtkRecentFilterFlags (*call_wrap_t) (const ::GtkRecentFilterInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_contains_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRecentFilterInfo*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_contains_set (::GtkRecentFilterInfo* obj, ::GtkRecentFilterFlags _value) { obj->contains = (decltype(obj->contains)) _value; }
//  RecentFilterInfo::contains (::GtkRecentFilterInfo* obj, ::GtkRecentFilterFlags _value);
// void RecentFilterInfo::contains (::GtkRecentFilterInfo* obj, ::GtkRecentFilterFlags _value);
void base::RecentFilterInfoBase::contains_ (Gtk::RecentFilterFlags _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentFilterInfo* obj, ::GtkRecentFilterFlags _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_contains_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GtkRecentFilterInfo*) (gobj_()), (::GtkRecentFilterFlags) (_value_to_c));
}

static const char* _field_uri_get (const ::GtkRecentFilterInfo* obj) { return (const char*) obj->uri; }
// const char* RecentFilterInfo::uri (const ::GtkRecentFilterInfo* obj);
// const char* RecentFilterInfo::uri (const ::GtkRecentFilterInfo* obj);
std::string base::RecentFilterInfoBase::uri_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GtkRecentFilterInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_uri_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRecentFilterInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_display_name_get (const ::GtkRecentFilterInfo* obj) { return (const char*) obj->display_name; }
// const char* RecentFilterInfo::display_name (const ::GtkRecentFilterInfo* obj);
// const char* RecentFilterInfo::display_name (const ::GtkRecentFilterInfo* obj);
std::string base::RecentFilterInfoBase::display_name_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GtkRecentFilterInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_display_name_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRecentFilterInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_mime_type_get (const ::GtkRecentFilterInfo* obj) { return (const char*) obj->mime_type; }
// const char* RecentFilterInfo::mime_type (const ::GtkRecentFilterInfo* obj);
// const char* RecentFilterInfo::mime_type (const ::GtkRecentFilterInfo* obj);
std::string base::RecentFilterInfoBase::mime_type_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GtkRecentFilterInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_mime_type_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRecentFilterInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint _field_age_get (const ::GtkRecentFilterInfo* obj) { return (gint) obj->age; }
// gint RecentFilterInfo::age (const ::GtkRecentFilterInfo* obj);
// gint RecentFilterInfo::age (const ::GtkRecentFilterInfo* obj);
gint base::RecentFilterInfoBase::age_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkRecentFilterInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_age_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRecentFilterInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_age_set (::GtkRecentFilterInfo* obj, gint _value) { obj->age = (decltype(obj->age)) _value; }
//  RecentFilterInfo::age (::GtkRecentFilterInfo* obj, gint _value);
// void RecentFilterInfo::age (::GtkRecentFilterInfo* obj, gint _value);
void base::RecentFilterInfoBase::age_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentFilterInfo* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_age_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkRecentFilterInfo*) (gobj_()), (gint) (_value_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentfilterinfo_extra_def_impl.hpp>)
#include <gtk/recentfilterinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentfilterinfo_extra_impl.hpp>)
#include <gtk/recentfilterinfo_extra_impl.hpp>
#endif
#endif

#endif
