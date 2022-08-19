// AUTO-GENERATED

#ifndef _GI_WEBKIT2_AUTOMATIONSESSION_IMPL_HPP_
#define _GI_WEBKIT2_AUTOMATIONSESSION_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitApplicationInfo* webkit_automation_session_get_application_info (WebKitAutomationSession* session);
// ::WebKitApplicationInfo* webkit_automation_session_get_application_info (::WebKitAutomationSession* session);
WebKit2::ApplicationInfo base::AutomationSessionBase::get_application_info () noexcept
{
  typedef ::WebKitApplicationInfo* (*call_wrap_t) (::WebKitAutomationSession* session);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_automation_session_get_application_info;
  auto _temp_ret = call_wrap_v ((::WebKitAutomationSession*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* webkit_automation_session_get_id (WebKitAutomationSession* session);
// const char* webkit_automation_session_get_id (::WebKitAutomationSession* session);
std::string base::AutomationSessionBase::get_id () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitAutomationSession* session);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_automation_session_get_id;
  auto _temp_ret = call_wrap_v ((::WebKitAutomationSession*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void webkit_automation_session_set_application_info (WebKitAutomationSession* session, WebKitApplicationInfo* info);
// void webkit_automation_session_set_application_info (::WebKitAutomationSession* session, ::WebKitApplicationInfo* info);
void base::AutomationSessionBase::set_application_info (WebKit2::ApplicationInfo info) noexcept
{
  typedef void (*call_wrap_t) (::WebKitAutomationSession* session, ::WebKitApplicationInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_automation_session_set_application_info;
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitAutomationSession*) (gobj_()), (::WebKitApplicationInfo*) (info_to_c));
}



} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/automationsession_extra_def_impl.hpp>)
#include <webkit2/automationsession_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/automationsession_extra_impl.hpp>)
#include <webkit2/automationsession_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void AutomationSessionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitAutomationSessionClass *methods = (::WebKitAutomationSessionClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
