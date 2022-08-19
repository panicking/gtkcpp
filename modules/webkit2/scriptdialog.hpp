// AUTO-GENERATED

#ifndef _GI_WEBKIT2_SCRIPTDIALOG_HPP_
#define _GI_WEBKIT2_SCRIPTDIALOG_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class ScriptDialog;

namespace base {


#define GI_WEBKIT2_SCRIPTDIALOG_BASE base::ScriptDialogBase
class ScriptDialogBase : public gi::detail::GBoxedWrapper<ScriptDialogBase, ::WebKitScriptDialog>
{
typedef gi::detail::GBoxedWrapper<ScriptDialogBase, ::WebKitScriptDialog> super_type;
public:

ScriptDialogBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return webkit_script_dialog_get_type(); } 

// void webkit_script_dialog_close (WebKitScriptDialog* dialog);
// void webkit_script_dialog_close (::WebKitScriptDialog* dialog);
GI_INLINE_DECL void close () noexcept;

// void webkit_script_dialog_confirm_set_confirmed (WebKitScriptDialog* dialog, gboolean confirmed);
// void webkit_script_dialog_confirm_set_confirmed (::WebKitScriptDialog* dialog, gboolean confirmed);
GI_INLINE_DECL void confirm_set_confirmed (gboolean confirmed) noexcept;

// WebKitScriptDialogType webkit_script_dialog_get_dialog_type (WebKitScriptDialog* dialog);
// ::WebKitScriptDialogType webkit_script_dialog_get_dialog_type (::WebKitScriptDialog* dialog);
GI_INLINE_DECL WebKit2::ScriptDialogType get_dialog_type () noexcept;

// const gchar* webkit_script_dialog_get_message (WebKitScriptDialog* dialog);
// const char* webkit_script_dialog_get_message (::WebKitScriptDialog* dialog);
GI_INLINE_DECL std::string get_message () noexcept;

// const gchar* webkit_script_dialog_prompt_get_default_text (WebKitScriptDialog* dialog);
// const char* webkit_script_dialog_prompt_get_default_text (::WebKitScriptDialog* dialog);
GI_INLINE_DECL std::string prompt_get_default_text () noexcept;

// void webkit_script_dialog_prompt_set_text (WebKitScriptDialog* dialog, const gchar* text);
// void webkit_script_dialog_prompt_set_text (::WebKitScriptDialog* dialog, const char* text);
GI_INLINE_DECL void prompt_set_text (const std::string & text) noexcept;

// WebKitScriptDialog* webkit_script_dialog_ref (WebKitScriptDialog* dialog);
// ::WebKitScriptDialog* webkit_script_dialog_ref (::WebKitScriptDialog* dialog);
// IGNORE; marked ignore

// void webkit_script_dialog_unref (WebKitScriptDialog* dialog);
// void webkit_script_dialog_unref (::WebKitScriptDialog* dialog);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/scriptdialog_extra_def.hpp>)
#include <webkit2/scriptdialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/scriptdialog_extra.hpp>)
#include <webkit2/scriptdialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class ScriptDialog : public GI_WEBKIT2_SCRIPTDIALOG_BASE
{ typedef GI_WEBKIT2_SCRIPTDIALOG_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitScriptDialog>
{ typedef WebKit2::ScriptDialog type; }; 

} // namespace repository

} // namespace gi

#endif
