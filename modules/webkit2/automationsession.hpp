// AUTO-GENERATED

#ifndef _GI_WEBKIT2_AUTOMATIONSESSION_HPP_
#define _GI_WEBKIT2_AUTOMATIONSESSION_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class ApplicationInfo;
class WebView;

class AutomationSession;

namespace base {


#define GI_WEBKIT2_AUTOMATIONSESSION_BASE base::AutomationSessionBase
class AutomationSessionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitAutomationSession BaseObjectType;

AutomationSessionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_automation_session_get_type(); } 

// WebKitApplicationInfo* webkit_automation_session_get_application_info (WebKitAutomationSession* session);
// ::WebKitApplicationInfo* webkit_automation_session_get_application_info (::WebKitAutomationSession* session);
GI_INLINE_DECL WebKit2::ApplicationInfo get_application_info () noexcept;

// const char* webkit_automation_session_get_id (WebKitAutomationSession* session);
// const char* webkit_automation_session_get_id (::WebKitAutomationSession* session);
GI_INLINE_DECL std::string get_id () noexcept;

// void webkit_automation_session_set_application_info (WebKitAutomationSession* session, WebKitApplicationInfo* info);
// void webkit_automation_session_set_application_info (::WebKitAutomationSession* session, ::WebKitApplicationInfo* info);
GI_INLINE_DECL void set_application_info (WebKit2::ApplicationInfo info) noexcept;

gi::property_proxy<std::string, base::AutomationSessionBase> property_id()
{ return gi::property_proxy<std::string, base::AutomationSessionBase> (*this, "id"); }
const gi::property_proxy<std::string, base::AutomationSessionBase> property_id() const
{ return gi::property_proxy<std::string, base::AutomationSessionBase> (*this, "id"); }

// signal create-web-view
gi::signal_proxy<WebKit2::WebView(WebKit2::AutomationSession)> signal_create_web_view()
{ return gi::signal_proxy<WebKit2::WebView(WebKit2::AutomationSession)> (*this, "create-web-view"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/automationsession_extra_def.hpp>)
#include <webkit2/automationsession_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/automationsession_extra.hpp>)
#include <webkit2/automationsession_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class AutomationSession : public GI_WEBKIT2_AUTOMATIONSESSION_BASE
{ typedef GI_WEBKIT2_AUTOMATIONSESSION_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitAutomationSession>
{ typedef WebKit2::AutomationSession type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class AutomationSessionClassDef
{
typedef AutomationSessionClassDef self;
public:
typedef WebKit2::AutomationSession instance_type;
typedef ::WebKitAutomationSessionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class AutomationSessionClass: public detail::ClassTemplate<WebKit2::impl::internal::AutomationSessionClassDef, GObject::impl::internal::ObjectClass>
{
typedef AutomationSessionClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::AutomationSessionClassDef, GObject::impl::internal::ObjectClass> super;

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

using AutomationSessionImpl = detail::ObjectImpl<AutomationSession, internal::AutomationSessionClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
