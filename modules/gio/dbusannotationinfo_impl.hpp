// AUTO-GENERATED

#ifndef _GI_GIO_DBUSANNOTATIONINFO_IMPL_HPP_
#define _GI_GIO_DBUSANNOTATIONINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

static gint _field_ref_count_get (const ::GDBusAnnotationInfo* obj) { return (gint) obj->ref_count; }
// gint DBusAnnotationInfo::ref_count (const ::GDBusAnnotationInfo* obj);
// gint DBusAnnotationInfo::ref_count (const ::GDBusAnnotationInfo* obj);
gint base::DBusAnnotationInfoBase::ref_count_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GDBusAnnotationInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ref_count_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusAnnotationInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_ref_count_set (::GDBusAnnotationInfo* obj, gint _value) { obj->ref_count = (decltype(obj->ref_count)) _value; }
//  DBusAnnotationInfo::ref_count (::GDBusAnnotationInfo* obj, gint _value);
// void DBusAnnotationInfo::ref_count (::GDBusAnnotationInfo* obj, gint _value);
void base::DBusAnnotationInfoBase::ref_count_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusAnnotationInfo* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ref_count_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GDBusAnnotationInfo*) (gobj_()), (gint) (_value_to_c));
}

static char* _field_key_get (const ::GDBusAnnotationInfo* obj) { return (char*) obj->key; }
// char* DBusAnnotationInfo::key (const ::GDBusAnnotationInfo* obj);
// char* DBusAnnotationInfo::key (const ::GDBusAnnotationInfo* obj);
std::string base::DBusAnnotationInfoBase::key_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GDBusAnnotationInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_key_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusAnnotationInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_value_get (const ::GDBusAnnotationInfo* obj) { return (char*) obj->value; }
// char* DBusAnnotationInfo::value (const ::GDBusAnnotationInfo* obj);
// char* DBusAnnotationInfo::value (const ::GDBusAnnotationInfo* obj);
std::string base::DBusAnnotationInfoBase::value_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GDBusAnnotationInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusAnnotationInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GDBusAnnotationInfo* g_dbus_annotation_info_ref (GDBusAnnotationInfo* info);
// ::GDBusAnnotationInfo* g_dbus_annotation_info_ref (::GDBusAnnotationInfo* info);
// IGNORE; marked ignore

// void g_dbus_annotation_info_unref (GDBusAnnotationInfo* info);
// void g_dbus_annotation_info_unref (::GDBusAnnotationInfo* info);
// IGNORE; marked ignore

// const gchar* g_dbus_annotation_info_lookup (GDBusAnnotationInfo** annotations, const gchar* name);
// const char* g_dbus_annotation_info_lookup (::GDBusAnnotationInfo** annotations, const char* name);
std::string base::DBusAnnotationInfoBase::lookup (const std::vector<Gio::DBusAnnotationInfo> & annotations, const std::string & name) noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusAnnotationInfo** annotations, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_annotation_info_lookup;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto annotations_i = detail::make_list_unwrap_range<traits::ctype<Gio::DBusAnnotationInfo>::type> (annotations);
  auto annotations_w = unwrap (annotations_i, gi::transfer_none, direction_in);
  auto annotations_to_c = annotations_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GDBusAnnotationInfo**) (annotations_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusannotationinfo_extra_def_impl.hpp>)
#include <gio/dbusannotationinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusannotationinfo_extra_impl.hpp>)
#include <gio/dbusannotationinfo_extra_impl.hpp>
#endif
#endif

#endif
