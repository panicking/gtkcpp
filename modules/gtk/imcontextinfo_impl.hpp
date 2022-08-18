// AUTO-GENERATED

#ifndef _GI_GTK_IMCONTEXTINFO_IMPL_HPP_
#define _GI_GTK_IMCONTEXTINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static const char* _field_context_id_get (const ::GtkIMContextInfo* obj) { return (const char*) obj->context_id; }
// const char* IMContextInfo::context_id (const ::GtkIMContextInfo* obj);
// const char* IMContextInfo::context_id (const ::GtkIMContextInfo* obj);
std::string base::IMContextInfoBase::context_id_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GtkIMContextInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_context_id_get;
  auto _temp_ret = call_wrap_v ((const ::GtkIMContextInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_context_name_get (const ::GtkIMContextInfo* obj) { return (const char*) obj->context_name; }
// const char* IMContextInfo::context_name (const ::GtkIMContextInfo* obj);
// const char* IMContextInfo::context_name (const ::GtkIMContextInfo* obj);
std::string base::IMContextInfoBase::context_name_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GtkIMContextInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_context_name_get;
  auto _temp_ret = call_wrap_v ((const ::GtkIMContextInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_domain_get (const ::GtkIMContextInfo* obj) { return (const char*) obj->domain; }
// const char* IMContextInfo::domain (const ::GtkIMContextInfo* obj);
// const char* IMContextInfo::domain (const ::GtkIMContextInfo* obj);
std::string base::IMContextInfoBase::domain_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GtkIMContextInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_domain_get;
  auto _temp_ret = call_wrap_v ((const ::GtkIMContextInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_domain_dirname_get (const ::GtkIMContextInfo* obj) { return (const char*) obj->domain_dirname; }
// const char* IMContextInfo::domain_dirname (const ::GtkIMContextInfo* obj);
// const char* IMContextInfo::domain_dirname (const ::GtkIMContextInfo* obj);
std::string base::IMContextInfoBase::domain_dirname_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GtkIMContextInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_domain_dirname_get;
  auto _temp_ret = call_wrap_v ((const ::GtkIMContextInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_default_locales_get (const ::GtkIMContextInfo* obj) { return (const char*) obj->default_locales; }
// const char* IMContextInfo::default_locales (const ::GtkIMContextInfo* obj);
// const char* IMContextInfo::default_locales (const ::GtkIMContextInfo* obj);
std::string base::IMContextInfoBase::default_locales_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GtkIMContextInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_default_locales_get;
  auto _temp_ret = call_wrap_v ((const ::GtkIMContextInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/imcontextinfo_extra_def_impl.hpp>)
#include <gtk/imcontextinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/imcontextinfo_extra_impl.hpp>)
#include <gtk/imcontextinfo_extra_impl.hpp>
#endif
#endif

#endif
