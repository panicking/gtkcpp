// AUTO-GENERATED

#ifndef _GI_WEBKIT2_USERCONTENTMANAGER_IMPL_HPP_
#define _GI_WEBKIT2_USERCONTENTMANAGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitUserContentManager* webkit_user_content_manager_new ();
// ::WebKitUserContentManager* webkit_user_content_manager_new ();
WebKit2::UserContentManager base::UserContentManagerBase::new_ () noexcept
{
  typedef ::WebKitUserContentManager* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_manager_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_user_content_manager_add_filter (WebKitUserContentManager* manager, WebKitUserContentFilter* filter);
// void webkit_user_content_manager_add_filter (::WebKitUserContentManager* manager, ::WebKitUserContentFilter* filter);
void base::UserContentManagerBase::add_filter (WebKit2::UserContentFilter filter) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentManager* manager, ::WebKitUserContentFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_manager_add_filter;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitUserContentManager*) (gobj_()), (::WebKitUserContentFilter*) (filter_to_c));
}

// void webkit_user_content_manager_add_script (WebKitUserContentManager* manager, WebKitUserScript* script);
// void webkit_user_content_manager_add_script (::WebKitUserContentManager* manager, ::WebKitUserScript* script);
void base::UserContentManagerBase::add_script (WebKit2::UserScript script) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentManager* manager, ::WebKitUserScript* script);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_manager_add_script;
  auto script_to_c = gi::unwrap (script, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitUserContentManager*) (gobj_()), (::WebKitUserScript*) (script_to_c));
}

// void webkit_user_content_manager_add_style_sheet (WebKitUserContentManager* manager, WebKitUserStyleSheet* stylesheet);
// void webkit_user_content_manager_add_style_sheet (::WebKitUserContentManager* manager, ::WebKitUserStyleSheet* stylesheet);
void base::UserContentManagerBase::add_style_sheet (WebKit2::UserStyleSheet stylesheet) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentManager* manager, ::WebKitUserStyleSheet* stylesheet);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_manager_add_style_sheet;
  auto stylesheet_to_c = gi::unwrap (stylesheet, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitUserContentManager*) (gobj_()), (::WebKitUserStyleSheet*) (stylesheet_to_c));
}

// gboolean webkit_user_content_manager_register_script_message_handler (WebKitUserContentManager* manager, const gchar* name);
// gboolean webkit_user_content_manager_register_script_message_handler (::WebKitUserContentManager* manager, const char* name);
bool base::UserContentManagerBase::register_script_message_handler (const std::string & name) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitUserContentManager* manager, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_manager_register_script_message_handler;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitUserContentManager*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// gboolean webkit_user_content_manager_register_script_message_handler_in_world (WebKitUserContentManager* manager, const gchar* name, const gchar* world_name);
// gboolean webkit_user_content_manager_register_script_message_handler_in_world (::WebKitUserContentManager* manager, const char* name, const char* world_name);
bool base::UserContentManagerBase::register_script_message_handler_in_world (const std::string & name, const std::string & world_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitUserContentManager* manager, const char* name, const char* world_name);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_manager_register_script_message_handler_in_world;
  auto world_name_to_c = gi::unwrap (world_name, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitUserContentManager*) (gobj_()), (const char*) (name_to_c), (const char*) (world_name_to_c));
  return _temp_ret;
}

// void webkit_user_content_manager_remove_all_filters (WebKitUserContentManager* manager);
// void webkit_user_content_manager_remove_all_filters (::WebKitUserContentManager* manager);
void base::UserContentManagerBase::remove_all_filters () noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_manager_remove_all_filters;
  call_wrap_v ((::WebKitUserContentManager*) (gobj_()));
}

// void webkit_user_content_manager_remove_all_scripts (WebKitUserContentManager* manager);
// void webkit_user_content_manager_remove_all_scripts (::WebKitUserContentManager* manager);
void base::UserContentManagerBase::remove_all_scripts () noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_manager_remove_all_scripts;
  call_wrap_v ((::WebKitUserContentManager*) (gobj_()));
}

// void webkit_user_content_manager_remove_all_style_sheets (WebKitUserContentManager* manager);
// void webkit_user_content_manager_remove_all_style_sheets (::WebKitUserContentManager* manager);
void base::UserContentManagerBase::remove_all_style_sheets () noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_manager_remove_all_style_sheets;
  call_wrap_v ((::WebKitUserContentManager*) (gobj_()));
}

// void webkit_user_content_manager_remove_filter (WebKitUserContentManager* manager, WebKitUserContentFilter* filter);
// void webkit_user_content_manager_remove_filter (::WebKitUserContentManager* manager, ::WebKitUserContentFilter* filter);
void base::UserContentManagerBase::remove_filter (WebKit2::UserContentFilter filter) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentManager* manager, ::WebKitUserContentFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_manager_remove_filter;
  auto filter_to_c = gi::unwrap (filter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitUserContentManager*) (gobj_()), (::WebKitUserContentFilter*) (filter_to_c));
}

// void webkit_user_content_manager_remove_filter_by_id (WebKitUserContentManager* manager, const char* filter_id);
// void webkit_user_content_manager_remove_filter_by_id (::WebKitUserContentManager* manager, const char* filter_id);
void base::UserContentManagerBase::remove_filter_by_id (const std::string & filter_id) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentManager* manager, const char* filter_id);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_manager_remove_filter_by_id;
  auto filter_id_to_c = gi::unwrap (filter_id, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitUserContentManager*) (gobj_()), (const char*) (filter_id_to_c));
}

// void webkit_user_content_manager_remove_script (WebKitUserContentManager* manager, WebKitUserScript* script);
// void webkit_user_content_manager_remove_script (::WebKitUserContentManager* manager, ::WebKitUserScript* script);
void base::UserContentManagerBase::remove_script (WebKit2::UserScript script) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentManager* manager, ::WebKitUserScript* script);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_manager_remove_script;
  auto script_to_c = gi::unwrap (script, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitUserContentManager*) (gobj_()), (::WebKitUserScript*) (script_to_c));
}

// void webkit_user_content_manager_remove_style_sheet (WebKitUserContentManager* manager, WebKitUserStyleSheet* stylesheet);
// void webkit_user_content_manager_remove_style_sheet (::WebKitUserContentManager* manager, ::WebKitUserStyleSheet* stylesheet);
void base::UserContentManagerBase::remove_style_sheet (WebKit2::UserStyleSheet stylesheet) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentManager* manager, ::WebKitUserStyleSheet* stylesheet);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_manager_remove_style_sheet;
  auto stylesheet_to_c = gi::unwrap (stylesheet, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitUserContentManager*) (gobj_()), (::WebKitUserStyleSheet*) (stylesheet_to_c));
}

// void webkit_user_content_manager_unregister_script_message_handler (WebKitUserContentManager* manager, const gchar* name);
// void webkit_user_content_manager_unregister_script_message_handler (::WebKitUserContentManager* manager, const char* name);
void base::UserContentManagerBase::unregister_script_message_handler (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentManager* manager, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_manager_unregister_script_message_handler;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitUserContentManager*) (gobj_()), (const char*) (name_to_c));
}

// void webkit_user_content_manager_unregister_script_message_handler_in_world (WebKitUserContentManager* manager, const gchar* name, const gchar* world_name);
// void webkit_user_content_manager_unregister_script_message_handler_in_world (::WebKitUserContentManager* manager, const char* name, const char* world_name);
void base::UserContentManagerBase::unregister_script_message_handler_in_world (const std::string & name, const std::string & world_name) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentManager* manager, const char* name, const char* world_name);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_manager_unregister_script_message_handler_in_world;
  auto world_name_to_c = gi::unwrap (world_name, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitUserContentManager*) (gobj_()), (const char*) (name_to_c), (const char*) (world_name_to_c));
}



} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/usercontentmanager_extra_def_impl.hpp>)
#include <webkit2/usercontentmanager_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/usercontentmanager_extra_impl.hpp>)
#include <webkit2/usercontentmanager_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void UserContentManagerClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitUserContentManagerClass *methods = (::WebKitUserContentManagerClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
