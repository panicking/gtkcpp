// AUTO-GENERATED

#ifndef _GI_WEBKIT2_COLORCHOOSERREQUEST_HPP_
#define _GI_WEBKIT2_COLORCHOOSERREQUEST_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class ColorChooserRequest;

namespace base {


#define GI_WEBKIT2_COLORCHOOSERREQUEST_BASE base::ColorChooserRequestBase
class ColorChooserRequestBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitColorChooserRequest BaseObjectType;

ColorChooserRequestBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_color_chooser_request_get_type(); } 

// void webkit_color_chooser_request_cancel (WebKitColorChooserRequest* request);
// void webkit_color_chooser_request_cancel (::WebKitColorChooserRequest* request);
GI_INLINE_DECL void cancel () noexcept;

// void webkit_color_chooser_request_finish (WebKitColorChooserRequest* request);
// void webkit_color_chooser_request_finish (::WebKitColorChooserRequest* request);
GI_INLINE_DECL void finish () noexcept;

// void webkit_color_chooser_request_get_element_rectangle (WebKitColorChooserRequest* request, GdkRectangle* rect);
// void webkit_color_chooser_request_get_element_rectangle (::WebKitColorChooserRequest* request, ::GdkRectangle* rect);
GI_INLINE_DECL void get_element_rectangle (Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_element_rectangle () noexcept;

// void webkit_color_chooser_request_get_rgba (WebKitColorChooserRequest* request, GdkRGBA* rgba);
// void webkit_color_chooser_request_get_rgba (::WebKitColorChooserRequest* request, ::GdkRGBA* rgba);
GI_INLINE_DECL void get_rgba (Gdk::RGBA & rgba) noexcept;
GI_INLINE_DECL Gdk::RGBA get_rgba () noexcept;

// void webkit_color_chooser_request_set_rgba (WebKitColorChooserRequest* request, const GdkRGBA* rgba);
// void webkit_color_chooser_request_set_rgba (::WebKitColorChooserRequest* request, const ::GdkRGBA* rgba);
GI_INLINE_DECL void set_rgba (const Gdk::RGBA & rgba) noexcept;

gi::property_proxy<Gdk::RGBA, base::ColorChooserRequestBase> property_rgba()
{ return gi::property_proxy<Gdk::RGBA, base::ColorChooserRequestBase> (*this, "rgba"); }
const gi::property_proxy<Gdk::RGBA, base::ColorChooserRequestBase> property_rgba() const
{ return gi::property_proxy<Gdk::RGBA, base::ColorChooserRequestBase> (*this, "rgba"); }

// signal finished
gi::signal_proxy<void(WebKit2::ColorChooserRequest)> signal_finished()
{ return gi::signal_proxy<void(WebKit2::ColorChooserRequest)> (*this, "finished"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/colorchooserrequest_extra_def.hpp>)
#include <webkit2/colorchooserrequest_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/colorchooserrequest_extra.hpp>)
#include <webkit2/colorchooserrequest_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class ColorChooserRequest : public GI_WEBKIT2_COLORCHOOSERREQUEST_BASE
{ typedef GI_WEBKIT2_COLORCHOOSERREQUEST_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitColorChooserRequest>
{ typedef WebKit2::ColorChooserRequest type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class ColorChooserRequestClassDef
{
typedef ColorChooserRequestClassDef self;
public:
typedef WebKit2::ColorChooserRequest instance_type;
typedef ::WebKitColorChooserRequestClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ColorChooserRequestClass: public detail::ClassTemplate<WebKit2::impl::internal::ColorChooserRequestClassDef, GObject::impl::internal::ObjectClass>
{
typedef ColorChooserRequestClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::ColorChooserRequestClassDef, GObject::impl::internal::ObjectClass> super;

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

using ColorChooserRequestImpl = detail::ObjectImpl<ColorChooserRequest, internal::ColorChooserRequestClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
