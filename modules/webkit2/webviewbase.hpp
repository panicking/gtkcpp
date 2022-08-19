// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WEBVIEWBASE_HPP_
#define _GI_WEBKIT2_WEBVIEWBASE_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class WebViewBase;

namespace base {


#define GI_WEBKIT2_WEBVIEWBASE_BASE base::WebViewBaseBase
class WebViewBaseBase : public Gtk::Container
{
typedef Gtk::Container super_type;
public:
typedef ::WebKitWebViewBase BaseObjectType;

WebViewBaseBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_web_view_base_get_type(); } 

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/webviewbase_extra_def.hpp>)
#include <webkit2/webviewbase_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/webviewbase_extra.hpp>)
#include <webkit2/webviewbase_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class WebViewBase : public GI_WEBKIT2_WEBVIEWBASE_BASE
{ typedef GI_WEBKIT2_WEBVIEWBASE_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitWebViewBase>
{ typedef WebKit2::WebViewBase type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class WebViewBaseClassDef
{
typedef WebViewBaseClassDef self;
public:
typedef WebKit2::WebViewBase instance_type;
typedef ::WebKitWebViewBaseClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class WebViewBaseClass: public detail::ClassTemplate<WebKit2::impl::internal::WebViewBaseClassDef, Gtk::impl::internal::ContainerClass>
{
typedef WebViewBaseClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::WebViewBaseClassDef, Gtk::impl::internal::ContainerClass> super;

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

using WebViewBaseImpl = detail::ObjectImpl<WebViewBase, internal::WebViewBaseClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
