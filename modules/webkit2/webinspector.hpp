// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WEBINSPECTOR_HPP_
#define _GI_WEBKIT2_WEBINSPECTOR_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class WebViewBase;

class WebInspector;

namespace base {


#define GI_WEBKIT2_WEBINSPECTOR_BASE base::WebInspectorBase
class WebInspectorBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitWebInspector BaseObjectType;

WebInspectorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_web_inspector_get_type(); } 

// void webkit_web_inspector_attach (WebKitWebInspector* inspector);
// void webkit_web_inspector_attach (::WebKitWebInspector* inspector);
GI_INLINE_DECL void attach () noexcept;

// void webkit_web_inspector_close (WebKitWebInspector* inspector);
// void webkit_web_inspector_close (::WebKitWebInspector* inspector);
GI_INLINE_DECL void close () noexcept;

// void webkit_web_inspector_detach (WebKitWebInspector* inspector);
// void webkit_web_inspector_detach (::WebKitWebInspector* inspector);
GI_INLINE_DECL void detach () noexcept;

// guint webkit_web_inspector_get_attached_height (WebKitWebInspector* inspector);
// guint webkit_web_inspector_get_attached_height (::WebKitWebInspector* inspector);
GI_INLINE_DECL guint get_attached_height () noexcept;

// gboolean webkit_web_inspector_get_can_attach (WebKitWebInspector* inspector);
// gboolean webkit_web_inspector_get_can_attach (::WebKitWebInspector* inspector);
GI_INLINE_DECL bool get_can_attach () noexcept;

// const char* webkit_web_inspector_get_inspected_uri (WebKitWebInspector* inspector);
// const char* webkit_web_inspector_get_inspected_uri (::WebKitWebInspector* inspector);
GI_INLINE_DECL std::string get_inspected_uri () noexcept;

// WebKitWebViewBase* webkit_web_inspector_get_web_view (WebKitWebInspector* inspector);
// ::WebKitWebViewBase* webkit_web_inspector_get_web_view (::WebKitWebInspector* inspector);
GI_INLINE_DECL WebKit2::WebViewBase get_web_view () noexcept;

// gboolean webkit_web_inspector_is_attached (WebKitWebInspector* inspector);
// gboolean webkit_web_inspector_is_attached (::WebKitWebInspector* inspector);
GI_INLINE_DECL bool is_attached () noexcept;

// void webkit_web_inspector_show (WebKitWebInspector* inspector);
// void webkit_web_inspector_show (::WebKitWebInspector* inspector);
GI_INLINE_DECL void show () noexcept;

gi::property_proxy<guint, base::WebInspectorBase> property_attached_height()
{ return gi::property_proxy<guint, base::WebInspectorBase> (*this, "attached-height"); }
const gi::property_proxy<guint, base::WebInspectorBase> property_attached_height() const
{ return gi::property_proxy<guint, base::WebInspectorBase> (*this, "attached-height"); }

gi::property_proxy<bool, base::WebInspectorBase> property_can_attach()
{ return gi::property_proxy<bool, base::WebInspectorBase> (*this, "can-attach"); }
const gi::property_proxy<bool, base::WebInspectorBase> property_can_attach() const
{ return gi::property_proxy<bool, base::WebInspectorBase> (*this, "can-attach"); }

gi::property_proxy<std::string, base::WebInspectorBase> property_inspected_uri()
{ return gi::property_proxy<std::string, base::WebInspectorBase> (*this, "inspected-uri"); }
const gi::property_proxy<std::string, base::WebInspectorBase> property_inspected_uri() const
{ return gi::property_proxy<std::string, base::WebInspectorBase> (*this, "inspected-uri"); }

// signal attach
gi::signal_proxy<bool(WebKit2::WebInspector)> signal_attach()
{ return gi::signal_proxy<bool(WebKit2::WebInspector)> (*this, "attach"); }

// signal bring-to-front
gi::signal_proxy<bool(WebKit2::WebInspector)> signal_bring_to_front()
{ return gi::signal_proxy<bool(WebKit2::WebInspector)> (*this, "bring-to-front"); }

// signal closed
gi::signal_proxy<void(WebKit2::WebInspector)> signal_closed()
{ return gi::signal_proxy<void(WebKit2::WebInspector)> (*this, "closed"); }

// signal detach
gi::signal_proxy<bool(WebKit2::WebInspector)> signal_detach()
{ return gi::signal_proxy<bool(WebKit2::WebInspector)> (*this, "detach"); }

// signal open-window
gi::signal_proxy<bool(WebKit2::WebInspector)> signal_open_window()
{ return gi::signal_proxy<bool(WebKit2::WebInspector)> (*this, "open-window"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/webinspector_extra_def.hpp>)
#include <webkit2/webinspector_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/webinspector_extra.hpp>)
#include <webkit2/webinspector_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class WebInspector : public GI_WEBKIT2_WEBINSPECTOR_BASE
{ typedef GI_WEBKIT2_WEBINSPECTOR_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitWebInspector>
{ typedef WebKit2::WebInspector type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class WebInspectorClassDef
{
typedef WebInspectorClassDef self;
public:
typedef WebKit2::WebInspector instance_type;
typedef ::WebKitWebInspectorClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class WebInspectorClass: public detail::ClassTemplate<WebKit2::impl::internal::WebInspectorClassDef, GObject::impl::internal::ObjectClass>
{
typedef WebInspectorClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::WebInspectorClassDef, GObject::impl::internal::ObjectClass> super;

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

using WebInspectorImpl = detail::ObjectImpl<WebInspector, internal::WebInspectorClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
