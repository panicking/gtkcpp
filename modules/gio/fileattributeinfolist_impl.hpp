// AUTO-GENERATED

#ifndef _GI_GIO_FILEATTRIBUTEINFOLIST_IMPL_HPP_
#define _GI_GIO_FILEATTRIBUTEINFOLIST_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

static ::GFileAttributeInfo* _field_infos_get (const ::GFileAttributeInfoList* obj) { return (::GFileAttributeInfo*) obj->infos; }
// ::GFileAttributeInfo* FileAttributeInfoList::infos (const ::GFileAttributeInfoList* obj);
// ::GFileAttributeInfo* FileAttributeInfoList::infos (const ::GFileAttributeInfoList* obj);
Gio::FileAttributeInfo base::FileAttributeInfoListBase::infos_ () const noexcept
{
  typedef ::GFileAttributeInfo* (*call_wrap_t) (const ::GFileAttributeInfoList* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_infos_get;
  auto _temp_ret = call_wrap_v ((const ::GFileAttributeInfoList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint _field_n_infos_get (const ::GFileAttributeInfoList* obj) { return (gint) obj->n_infos; }
// gint FileAttributeInfoList::n_infos (const ::GFileAttributeInfoList* obj);
// gint FileAttributeInfoList::n_infos (const ::GFileAttributeInfoList* obj);
gint base::FileAttributeInfoListBase::n_infos_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GFileAttributeInfoList* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_infos_get;
  auto _temp_ret = call_wrap_v ((const ::GFileAttributeInfoList*) (gobj_()));
  return _temp_ret;
}

static void _field_n_infos_set (::GFileAttributeInfoList* obj, gint _value) { obj->n_infos = (decltype(obj->n_infos)) _value; }
//  FileAttributeInfoList::n_infos (::GFileAttributeInfoList* obj, gint _value);
// void FileAttributeInfoList::n_infos (::GFileAttributeInfoList* obj, gint _value);
void base::FileAttributeInfoListBase::n_infos_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GFileAttributeInfoList* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_infos_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GFileAttributeInfoList*) (gobj_()), (gint) (_value_to_c));
}

// GFileAttributeInfoList* g_file_attribute_info_list_new ();
// ::GFileAttributeInfoList* g_file_attribute_info_list_new ();
Gio::FileAttributeInfoList base::FileAttributeInfoListBase::new_ () noexcept
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_attribute_info_list_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_attribute_info_list_add (GFileAttributeInfoList* list, const char* name, GFileAttributeType type, GFileAttributeInfoFlags flags);
// void g_file_attribute_info_list_add (::GFileAttributeInfoList* list, const char* name, ::GFileAttributeType type, ::GFileAttributeInfoFlags flags);
void base::FileAttributeInfoListBase::add (const std::string & name, Gio::FileAttributeType type, Gio::FileAttributeInfoFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GFileAttributeInfoList* list, const char* name, ::GFileAttributeType type, ::GFileAttributeInfoFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_attribute_info_list_add;
  auto flags_to_c = gi::unwrap (flags);
  auto type_to_c = gi::unwrap (type);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFileAttributeInfoList*) (gobj_()), (const char*) (name_to_c), (::GFileAttributeType) (type_to_c), (::GFileAttributeInfoFlags) (flags_to_c));
}

// GFileAttributeInfoList* g_file_attribute_info_list_dup (GFileAttributeInfoList* list);
// ::GFileAttributeInfoList* g_file_attribute_info_list_dup (::GFileAttributeInfoList* list);
Gio::FileAttributeInfoList base::FileAttributeInfoListBase::dup () noexcept
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFileAttributeInfoList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_attribute_info_list_dup;
  auto _temp_ret = call_wrap_v ((::GFileAttributeInfoList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const GFileAttributeInfo* g_file_attribute_info_list_lookup (GFileAttributeInfoList* list, const char* name);
// const ::GFileAttributeInfo* g_file_attribute_info_list_lookup (::GFileAttributeInfoList* list, const char* name);
Gio::FileAttributeInfo base::FileAttributeInfoListBase::lookup (const std::string & name) noexcept
{
  typedef const ::GFileAttributeInfo* (*call_wrap_t) (::GFileAttributeInfoList* list, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_attribute_info_list_lookup;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFileAttributeInfoList*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GFileAttributeInfoList* g_file_attribute_info_list_ref (GFileAttributeInfoList* list);
// ::GFileAttributeInfoList* g_file_attribute_info_list_ref (::GFileAttributeInfoList* list);
// IGNORE; marked ignore

// void g_file_attribute_info_list_unref (GFileAttributeInfoList* list);
// void g_file_attribute_info_list_unref (::GFileAttributeInfoList* list);
// IGNORE; marked ignore


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileattributeinfolist_extra_def_impl.hpp>)
#include <gio/fileattributeinfolist_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileattributeinfolist_extra_impl.hpp>)
#include <gio/fileattributeinfolist_extra_impl.hpp>
#endif
#endif

#endif
