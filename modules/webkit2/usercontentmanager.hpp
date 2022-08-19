// AUTO-GENERATED

#ifndef _GI_WEBKIT2_USERCONTENTMANAGER_HPP_
#define _GI_WEBKIT2_USERCONTENTMANAGER_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class JavascriptResult;
class UserContentFilter;
class UserScript;
class UserStyleSheet;

class UserContentManager;

namespace base {


#define GI_WEBKIT2_USERCONTENTMANAGER_BASE base::UserContentManagerBase
class UserContentManagerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitUserContentManager BaseObjectType;

UserContentManagerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_user_content_manager_get_type(); } 

// WebKitUserContentManager* webkit_user_content_manager_new ();
// ::WebKitUserContentManager* webkit_user_content_manager_new ();
static GI_INLINE_DECL WebKit2::UserContentManager new_ () noexcept;

// void webkit_user_content_manager_add_filter (WebKitUserContentManager* manager, WebKitUserContentFilter* filter);
// void webkit_user_content_manager_add_filter (::WebKitUserContentManager* manager, ::WebKitUserContentFilter* filter);
GI_INLINE_DECL void add_filter (WebKit2::UserContentFilter filter) noexcept;

// void webkit_user_content_manager_add_script (WebKitUserContentManager* manager, WebKitUserScript* script);
// void webkit_user_content_manager_add_script (::WebKitUserContentManager* manager, ::WebKitUserScript* script);
GI_INLINE_DECL void add_script (WebKit2::UserScript script) noexcept;

// void webkit_user_content_manager_add_style_sheet (WebKitUserContentManager* manager, WebKitUserStyleSheet* stylesheet);
// void webkit_user_content_manager_add_style_sheet (::WebKitUserContentManager* manager, ::WebKitUserStyleSheet* stylesheet);
GI_INLINE_DECL void add_style_sheet (WebKit2::UserStyleSheet stylesheet) noexcept;

// gboolean webkit_user_content_manager_register_script_message_handler (WebKitUserContentManager* manager, const gchar* name);
// gboolean webkit_user_content_manager_register_script_message_handler (::WebKitUserContentManager* manager, const char* name);
GI_INLINE_DECL bool register_script_message_handler (const std::string & name) noexcept;

// gboolean webkit_user_content_manager_register_script_message_handler_in_world (WebKitUserContentManager* manager, const gchar* name, const gchar* world_name);
// gboolean webkit_user_content_manager_register_script_message_handler_in_world (::WebKitUserContentManager* manager, const char* name, const char* world_name);
GI_INLINE_DECL bool register_script_message_handler_in_world (const std::string & name, const std::string & world_name) noexcept;

// void webkit_user_content_manager_remove_all_filters (WebKitUserContentManager* manager);
// void webkit_user_content_manager_remove_all_filters (::WebKitUserContentManager* manager);
GI_INLINE_DECL void remove_all_filters () noexcept;

// void webkit_user_content_manager_remove_all_scripts (WebKitUserContentManager* manager);
// void webkit_user_content_manager_remove_all_scripts (::WebKitUserContentManager* manager);
GI_INLINE_DECL void remove_all_scripts () noexcept;

// void webkit_user_content_manager_remove_all_style_sheets (WebKitUserContentManager* manager);
// void webkit_user_content_manager_remove_all_style_sheets (::WebKitUserContentManager* manager);
GI_INLINE_DECL void remove_all_style_sheets () noexcept;

// void webkit_user_content_manager_remove_filter (WebKitUserContentManager* manager, WebKitUserContentFilter* filter);
// void webkit_user_content_manager_remove_filter (::WebKitUserContentManager* manager, ::WebKitUserContentFilter* filter);
GI_INLINE_DECL void remove_filter (WebKit2::UserContentFilter filter) noexcept;

// void webkit_user_content_manager_remove_filter_by_id (WebKitUserContentManager* manager, const char* filter_id);
// void webkit_user_content_manager_remove_filter_by_id (::WebKitUserContentManager* manager, const char* filter_id);
GI_INLINE_DECL void remove_filter_by_id (const std::string & filter_id) noexcept;

// void webkit_user_content_manager_remove_script (WebKitUserContentManager* manager, WebKitUserScript* script);
// void webkit_user_content_manager_remove_script (::WebKitUserContentManager* manager, ::WebKitUserScript* script);
GI_INLINE_DECL void remove_script (WebKit2::UserScript script) noexcept;

// void webkit_user_content_manager_remove_style_sheet (WebKitUserContentManager* manager, WebKitUserStyleSheet* stylesheet);
// void webkit_user_content_manager_remove_style_sheet (::WebKitUserContentManager* manager, ::WebKitUserStyleSheet* stylesheet);
GI_INLINE_DECL void remove_style_sheet (WebKit2::UserStyleSheet stylesheet) noexcept;

// void webkit_user_content_manager_unregister_script_message_handler (WebKitUserContentManager* manager, const gchar* name);
// void webkit_user_content_manager_unregister_script_message_handler (::WebKitUserContentManager* manager, const char* name);
GI_INLINE_DECL void unregister_script_message_handler (const std::string & name) noexcept;

// void webkit_user_content_manager_unregister_script_message_handler_in_world (WebKitUserContentManager* manager, const gchar* name, const gchar* world_name);
// void webkit_user_content_manager_unregister_script_message_handler_in_world (::WebKitUserContentManager* manager, const char* name, const char* world_name);
GI_INLINE_DECL void unregister_script_message_handler_in_world (const std::string & name, const std::string & world_name) noexcept;

// signal script-message-received
gi::signal_proxy<void(WebKit2::UserContentManager, WebKit2::JavascriptResult js_result)> signal_script_message_received()
{ return gi::signal_proxy<void(WebKit2::UserContentManager, WebKit2::JavascriptResult js_result)> (*this, "script-message-received"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/usercontentmanager_extra_def.hpp>)
#include <webkit2/usercontentmanager_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/usercontentmanager_extra.hpp>)
#include <webkit2/usercontentmanager_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class UserContentManager : public GI_WEBKIT2_USERCONTENTMANAGER_BASE
{ typedef GI_WEBKIT2_USERCONTENTMANAGER_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitUserContentManager>
{ typedef WebKit2::UserContentManager type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class UserContentManagerClassDef
{
typedef UserContentManagerClassDef self;
public:
typedef WebKit2::UserContentManager instance_type;
typedef ::WebKitUserContentManagerClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class UserContentManagerClass: public detail::ClassTemplate<WebKit2::impl::internal::UserContentManagerClassDef, GObject::impl::internal::ObjectClass>
{
typedef UserContentManagerClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::UserContentManagerClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using UserContentManagerImpl = detail::ObjectImpl<UserContentManager, internal::UserContentManagerClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
