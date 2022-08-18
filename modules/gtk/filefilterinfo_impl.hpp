// AUTO-GENERATED

#ifndef _GI_GTK_FILEFILTERINFO_IMPL_HPP_
#define _GI_GTK_FILEFILTERINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static ::GtkFileFilterFlags _field_contains_get (const ::GtkFileFilterInfo* obj) { return (::GtkFileFilterFlags) obj->contains; }
// ::GtkFileFilterFlags FileFilterInfo::contains (const ::GtkFileFilterInfo* obj);
// ::GtkFileFilterFlags FileFilterInfo::contains (const ::GtkFileFilterInfo* obj);
Gtk::FileFilterFlags base::FileFilterInfoBase::contains_ () const noexcept
{
  typedef ::GtkFileFilterFlags (*call_wrap_t) (const ::GtkFileFilterInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_contains_get;
  auto _temp_ret = call_wrap_v ((const ::GtkFileFilterInfo*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_contains_set (::GtkFileFilterInfo* obj, ::GtkFileFilterFlags _value) { obj->contains = (decltype(obj->contains)) _value; }
//  FileFilterInfo::contains (::GtkFileFilterInfo* obj, ::GtkFileFilterFlags _value);
// void FileFilterInfo::contains (::GtkFileFilterInfo* obj, ::GtkFileFilterFlags _value);
void base::FileFilterInfoBase::contains_ (Gtk::FileFilterFlags _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileFilterInfo* obj, ::GtkFileFilterFlags _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_contains_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GtkFileFilterInfo*) (gobj_()), (::GtkFileFilterFlags) (_value_to_c));
}

static const char* _field_filename_get (const ::GtkFileFilterInfo* obj) { return (const char*) obj->filename; }
// const char* FileFilterInfo::filename (const ::GtkFileFilterInfo* obj);
// const char* FileFilterInfo::filename (const ::GtkFileFilterInfo* obj);
std::string base::FileFilterInfoBase::filename_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GtkFileFilterInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_filename_get;
  auto _temp_ret = call_wrap_v ((const ::GtkFileFilterInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_uri_get (const ::GtkFileFilterInfo* obj) { return (const char*) obj->uri; }
// const char* FileFilterInfo::uri (const ::GtkFileFilterInfo* obj);
// const char* FileFilterInfo::uri (const ::GtkFileFilterInfo* obj);
std::string base::FileFilterInfoBase::uri_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GtkFileFilterInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_uri_get;
  auto _temp_ret = call_wrap_v ((const ::GtkFileFilterInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_display_name_get (const ::GtkFileFilterInfo* obj) { return (const char*) obj->display_name; }
// const char* FileFilterInfo::display_name (const ::GtkFileFilterInfo* obj);
// const char* FileFilterInfo::display_name (const ::GtkFileFilterInfo* obj);
std::string base::FileFilterInfoBase::display_name_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GtkFileFilterInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_display_name_get;
  auto _temp_ret = call_wrap_v ((const ::GtkFileFilterInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_mime_type_get (const ::GtkFileFilterInfo* obj) { return (const char*) obj->mime_type; }
// const char* FileFilterInfo::mime_type (const ::GtkFileFilterInfo* obj);
// const char* FileFilterInfo::mime_type (const ::GtkFileFilterInfo* obj);
std::string base::FileFilterInfoBase::mime_type_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GtkFileFilterInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_mime_type_get;
  auto _temp_ret = call_wrap_v ((const ::GtkFileFilterInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filefilterinfo_extra_def_impl.hpp>)
#include <gtk/filefilterinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filefilterinfo_extra_impl.hpp>)
#include <gtk/filefilterinfo_extra_impl.hpp>
#endif
#endif

#endif
