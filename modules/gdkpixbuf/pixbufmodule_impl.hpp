// AUTO-GENERATED

#ifndef _GI_GDKPIXBUF_PIXBUFMODULE_IMPL_HPP_
#define _GI_GDKPIXBUF_PIXBUFMODULE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GdkPixbuf {

namespace base {

static char* _field_module_name_get (const ::GdkPixbufModule* obj) { return (char*) obj->module_name; }
// char* PixbufModule::module_name (const ::GdkPixbufModule* obj);
// char* PixbufModule::module_name (const ::GdkPixbufModule* obj);
std::string base::PixbufModuleBase::module_name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GdkPixbufModule* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_module_name_get;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbufModule*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_module_path_get (const ::GdkPixbufModule* obj) { return (char*) obj->module_path; }
// char* PixbufModule::module_path (const ::GdkPixbufModule* obj);
// char* PixbufModule::module_path (const ::GdkPixbufModule* obj);
std::string base::PixbufModuleBase::module_path_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GdkPixbufModule* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_module_path_get;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbufModule*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GdkPixbufFormat* _field_info_get (const ::GdkPixbufModule* obj) { return (::GdkPixbufFormat*) obj->info; }
// ::GdkPixbufFormat* PixbufModule::info (const ::GdkPixbufModule* obj);
// ::GdkPixbufFormat* PixbufModule::info (const ::GdkPixbufModule* obj);
GdkPixbuf::PixbufFormat base::PixbufModuleBase::info_ () const noexcept
{
  typedef ::GdkPixbufFormat* (*call_wrap_t) (const ::GdkPixbufModule* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_info_get;
  auto _temp_ret = call_wrap_v ((const ::GdkPixbufModule*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace GdkPixbuf

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufmodule_extra_def_impl.hpp>)
#include <gdkpixbuf/pixbufmodule_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdkpixbuf/pixbufmodule_extra_impl.hpp>)
#include <gdkpixbuf/pixbufmodule_extra_impl.hpp>
#endif
#endif

#endif
