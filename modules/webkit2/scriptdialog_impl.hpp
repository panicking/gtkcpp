// AUTO-GENERATED

#ifndef _GI_WEBKIT2_SCRIPTDIALOG_IMPL_HPP_
#define _GI_WEBKIT2_SCRIPTDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// void webkit_script_dialog_close (WebKitScriptDialog* dialog);
// void webkit_script_dialog_close (::WebKitScriptDialog* dialog);
void base::ScriptDialogBase::close () noexcept
{
  typedef void (*call_wrap_t) (::WebKitScriptDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_script_dialog_close;
  call_wrap_v ((::WebKitScriptDialog*) (gobj_()));
}

// void webkit_script_dialog_confirm_set_confirmed (WebKitScriptDialog* dialog, gboolean confirmed);
// void webkit_script_dialog_confirm_set_confirmed (::WebKitScriptDialog* dialog, gboolean confirmed);
void base::ScriptDialogBase::confirm_set_confirmed (gboolean confirmed) noexcept
{
  typedef void (*call_wrap_t) (::WebKitScriptDialog* dialog, gboolean confirmed);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_script_dialog_confirm_set_confirmed;
  auto confirmed_to_c = confirmed;
  call_wrap_v ((::WebKitScriptDialog*) (gobj_()), (gboolean) (confirmed_to_c));
}

// WebKitScriptDialogType webkit_script_dialog_get_dialog_type (WebKitScriptDialog* dialog);
// ::WebKitScriptDialogType webkit_script_dialog_get_dialog_type (::WebKitScriptDialog* dialog);
WebKit2::ScriptDialogType base::ScriptDialogBase::get_dialog_type () noexcept
{
  typedef ::WebKitScriptDialogType (*call_wrap_t) (::WebKitScriptDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_script_dialog_get_dialog_type;
  auto _temp_ret = call_wrap_v ((::WebKitScriptDialog*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const gchar* webkit_script_dialog_get_message (WebKitScriptDialog* dialog);
// const char* webkit_script_dialog_get_message (::WebKitScriptDialog* dialog);
std::string base::ScriptDialogBase::get_message () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitScriptDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_script_dialog_get_message;
  auto _temp_ret = call_wrap_v ((::WebKitScriptDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_script_dialog_prompt_get_default_text (WebKitScriptDialog* dialog);
// const char* webkit_script_dialog_prompt_get_default_text (::WebKitScriptDialog* dialog);
std::string base::ScriptDialogBase::prompt_get_default_text () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitScriptDialog* dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_script_dialog_prompt_get_default_text;
  auto _temp_ret = call_wrap_v ((::WebKitScriptDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void webkit_script_dialog_prompt_set_text (WebKitScriptDialog* dialog, const gchar* text);
// void webkit_script_dialog_prompt_set_text (::WebKitScriptDialog* dialog, const char* text);
void base::ScriptDialogBase::prompt_set_text (const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::WebKitScriptDialog* dialog, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_script_dialog_prompt_set_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitScriptDialog*) (gobj_()), (const char*) (text_to_c));
}

// WebKitScriptDialog* webkit_script_dialog_ref (WebKitScriptDialog* dialog);
// ::WebKitScriptDialog* webkit_script_dialog_ref (::WebKitScriptDialog* dialog);
// IGNORE; marked ignore

// void webkit_script_dialog_unref (WebKitScriptDialog* dialog);
// void webkit_script_dialog_unref (::WebKitScriptDialog* dialog);
// IGNORE; marked ignore


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/scriptdialog_extra_def_impl.hpp>)
#include <webkit2/scriptdialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/scriptdialog_extra_impl.hpp>)
#include <webkit2/scriptdialog_extra_impl.hpp>
#endif
#endif

#endif
