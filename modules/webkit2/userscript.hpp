// AUTO-GENERATED

#ifndef _GI_WEBKIT2_USERSCRIPT_HPP_
#define _GI_WEBKIT2_USERSCRIPT_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class UserScript;

namespace base {


#define GI_WEBKIT2_USERSCRIPT_BASE base::UserScriptBase
class UserScriptBase : public gi::detail::GBoxedWrapper<UserScriptBase, ::WebKitUserScript>
{
typedef gi::detail::GBoxedWrapper<UserScriptBase, ::WebKitUserScript> super_type;
public:

UserScriptBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return webkit_user_script_get_type(); } 

// WebKitUserScript* webkit_user_script_new (const gchar* source, WebKitUserContentInjectedFrames injected_frames, WebKitUserScriptInjectionTime injection_time, const gchar* const* allow_list, const gchar* const* block_list);
// ::WebKitUserScript* webkit_user_script_new (const char* source, ::WebKitUserContentInjectedFrames injected_frames, ::WebKitUserScriptInjectionTime injection_time, const char** allow_list, const char** block_list);
static GI_INLINE_DECL WebKit2::UserScript new_ (const std::string & source, WebKit2::UserContentInjectedFrames injected_frames, WebKit2::UserScriptInjectionTime injection_time, const std::vector<std::string> & allow_list, const std::vector<std::string> & block_list) noexcept;

// WebKitUserScript* webkit_user_script_new_for_world (const gchar* source, WebKitUserContentInjectedFrames injected_frames, WebKitUserScriptInjectionTime injection_time, const gchar* world_name, const gchar* const* allow_list, const gchar* const* block_list);
// ::WebKitUserScript* webkit_user_script_new_for_world (const char* source, ::WebKitUserContentInjectedFrames injected_frames, ::WebKitUserScriptInjectionTime injection_time, const char* world_name, const char** allow_list, const char** block_list);
static GI_INLINE_DECL WebKit2::UserScript new_for_world (const std::string & source, WebKit2::UserContentInjectedFrames injected_frames, WebKit2::UserScriptInjectionTime injection_time, const std::string & world_name, const std::vector<std::string> & allow_list, const std::vector<std::string> & block_list) noexcept;

// WebKitUserScript* webkit_user_script_ref (WebKitUserScript* user_script);
// ::WebKitUserScript* webkit_user_script_ref (::WebKitUserScript* user_script);
// IGNORE; marked ignore

// void webkit_user_script_unref (WebKitUserScript* user_script);
// void webkit_user_script_unref (::WebKitUserScript* user_script);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/userscript_extra_def.hpp>)
#include <webkit2/userscript_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/userscript_extra.hpp>)
#include <webkit2/userscript_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class UserScript : public GI_WEBKIT2_USERSCRIPT_BASE
{ typedef GI_WEBKIT2_USERSCRIPT_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitUserScript>
{ typedef WebKit2::UserScript type; }; 

} // namespace repository

} // namespace gi

#endif
