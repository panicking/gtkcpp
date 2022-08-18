// AUTO-GENERATED

#ifndef _GI_GIO_FILEATTRIBUTEINFO_IMPL_HPP_
#define _GI_GIO_FILEATTRIBUTEINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

static char* _field_name_get (const ::GFileAttributeInfo* obj) { return (char*) obj->name; }
// char* FileAttributeInfo::name (const ::GFileAttributeInfo* obj);
// char* FileAttributeInfo::name (const ::GFileAttributeInfo* obj);
std::string base::FileAttributeInfoBase::name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GFileAttributeInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_get;
  auto _temp_ret = call_wrap_v ((const ::GFileAttributeInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GFileAttributeType _field_type_get (const ::GFileAttributeInfo* obj) { return (::GFileAttributeType) obj->type; }
// ::GFileAttributeType FileAttributeInfo::type (const ::GFileAttributeInfo* obj);
// ::GFileAttributeType FileAttributeInfo::type (const ::GFileAttributeInfo* obj);
Gio::FileAttributeType base::FileAttributeInfoBase::type_ () const noexcept
{
  typedef ::GFileAttributeType (*call_wrap_t) (const ::GFileAttributeInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GFileAttributeInfo*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GFileAttributeInfo* obj, ::GFileAttributeType _value) { obj->type = (decltype(obj->type)) _value; }
//  FileAttributeInfo::type (::GFileAttributeInfo* obj, ::GFileAttributeType _value);
// void FileAttributeInfo::type (::GFileAttributeInfo* obj, ::GFileAttributeType _value);
void base::FileAttributeInfoBase::type_ (Gio::FileAttributeType _value) noexcept
{
  typedef void (*call_wrap_t) (::GFileAttributeInfo* obj, ::GFileAttributeType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GFileAttributeInfo*) (gobj_()), (::GFileAttributeType) (_value_to_c));
}

static ::GFileAttributeInfoFlags _field_flags_get (const ::GFileAttributeInfo* obj) { return (::GFileAttributeInfoFlags) obj->flags; }
// ::GFileAttributeInfoFlags FileAttributeInfo::flags (const ::GFileAttributeInfo* obj);
// ::GFileAttributeInfoFlags FileAttributeInfo::flags (const ::GFileAttributeInfo* obj);
Gio::FileAttributeInfoFlags base::FileAttributeInfoBase::flags_ () const noexcept
{
  typedef ::GFileAttributeInfoFlags (*call_wrap_t) (const ::GFileAttributeInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_get;
  auto _temp_ret = call_wrap_v ((const ::GFileAttributeInfo*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_flags_set (::GFileAttributeInfo* obj, ::GFileAttributeInfoFlags _value) { obj->flags = (decltype(obj->flags)) _value; }
//  FileAttributeInfo::flags (::GFileAttributeInfo* obj, ::GFileAttributeInfoFlags _value);
// void FileAttributeInfo::flags (::GFileAttributeInfo* obj, ::GFileAttributeInfoFlags _value);
void base::FileAttributeInfoBase::flags_ (Gio::FileAttributeInfoFlags _value) noexcept
{
  typedef void (*call_wrap_t) (::GFileAttributeInfo* obj, ::GFileAttributeInfoFlags _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GFileAttributeInfo*) (gobj_()), (::GFileAttributeInfoFlags) (_value_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileattributeinfo_extra_def_impl.hpp>)
#include <gio/fileattributeinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileattributeinfo_extra_impl.hpp>)
#include <gio/fileattributeinfo_extra_impl.hpp>
#endif
#endif

#endif
