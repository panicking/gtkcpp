// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WINDOWPROPERTIES_HPP_
#define _GI_WEBKIT2_WINDOWPROPERTIES_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class WindowProperties;

namespace base {


#define GI_WEBKIT2_WINDOWPROPERTIES_BASE base::WindowPropertiesBase
class WindowPropertiesBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitWindowProperties BaseObjectType;

WindowPropertiesBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_window_properties_get_type(); } 

// gboolean webkit_window_properties_get_fullscreen (WebKitWindowProperties* window_properties);
// gboolean webkit_window_properties_get_fullscreen (::WebKitWindowProperties* window_properties);
GI_INLINE_DECL bool get_fullscreen () noexcept;

// void webkit_window_properties_get_geometry (WebKitWindowProperties* window_properties, GdkRectangle* geometry);
// void webkit_window_properties_get_geometry (::WebKitWindowProperties* window_properties, ::GdkRectangle* geometry);
GI_INLINE_DECL void get_geometry (Gdk::Rectangle & geometry) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_geometry () noexcept;

// gboolean webkit_window_properties_get_locationbar_visible (WebKitWindowProperties* window_properties);
// gboolean webkit_window_properties_get_locationbar_visible (::WebKitWindowProperties* window_properties);
GI_INLINE_DECL bool get_locationbar_visible () noexcept;

// gboolean webkit_window_properties_get_menubar_visible (WebKitWindowProperties* window_properties);
// gboolean webkit_window_properties_get_menubar_visible (::WebKitWindowProperties* window_properties);
GI_INLINE_DECL bool get_menubar_visible () noexcept;

// gboolean webkit_window_properties_get_resizable (WebKitWindowProperties* window_properties);
// gboolean webkit_window_properties_get_resizable (::WebKitWindowProperties* window_properties);
GI_INLINE_DECL bool get_resizable () noexcept;

// gboolean webkit_window_properties_get_scrollbars_visible (WebKitWindowProperties* window_properties);
// gboolean webkit_window_properties_get_scrollbars_visible (::WebKitWindowProperties* window_properties);
GI_INLINE_DECL bool get_scrollbars_visible () noexcept;

// gboolean webkit_window_properties_get_statusbar_visible (WebKitWindowProperties* window_properties);
// gboolean webkit_window_properties_get_statusbar_visible (::WebKitWindowProperties* window_properties);
GI_INLINE_DECL bool get_statusbar_visible () noexcept;

// gboolean webkit_window_properties_get_toolbar_visible (WebKitWindowProperties* window_properties);
// gboolean webkit_window_properties_get_toolbar_visible (::WebKitWindowProperties* window_properties);
GI_INLINE_DECL bool get_toolbar_visible () noexcept;

gi::property_proxy<bool, base::WindowPropertiesBase> property_fullscreen()
{ return gi::property_proxy<bool, base::WindowPropertiesBase> (*this, "fullscreen"); }
const gi::property_proxy<bool, base::WindowPropertiesBase> property_fullscreen() const
{ return gi::property_proxy<bool, base::WindowPropertiesBase> (*this, "fullscreen"); }

gi::property_proxy<Gdk::Rectangle, base::WindowPropertiesBase> property_geometry()
{ return gi::property_proxy<Gdk::Rectangle, base::WindowPropertiesBase> (*this, "geometry"); }
const gi::property_proxy<Gdk::Rectangle, base::WindowPropertiesBase> property_geometry() const
{ return gi::property_proxy<Gdk::Rectangle, base::WindowPropertiesBase> (*this, "geometry"); }

gi::property_proxy<bool, base::WindowPropertiesBase> property_locationbar_visible()
{ return gi::property_proxy<bool, base::WindowPropertiesBase> (*this, "locationbar-visible"); }
const gi::property_proxy<bool, base::WindowPropertiesBase> property_locationbar_visible() const
{ return gi::property_proxy<bool, base::WindowPropertiesBase> (*this, "locationbar-visible"); }

gi::property_proxy<bool, base::WindowPropertiesBase> property_menubar_visible()
{ return gi::property_proxy<bool, base::WindowPropertiesBase> (*this, "menubar-visible"); }
const gi::property_proxy<bool, base::WindowPropertiesBase> property_menubar_visible() const
{ return gi::property_proxy<bool, base::WindowPropertiesBase> (*this, "menubar-visible"); }

gi::property_proxy<bool, base::WindowPropertiesBase> property_resizable()
{ return gi::property_proxy<bool, base::WindowPropertiesBase> (*this, "resizable"); }
const gi::property_proxy<bool, base::WindowPropertiesBase> property_resizable() const
{ return gi::property_proxy<bool, base::WindowPropertiesBase> (*this, "resizable"); }

gi::property_proxy<bool, base::WindowPropertiesBase> property_scrollbars_visible()
{ return gi::property_proxy<bool, base::WindowPropertiesBase> (*this, "scrollbars-visible"); }
const gi::property_proxy<bool, base::WindowPropertiesBase> property_scrollbars_visible() const
{ return gi::property_proxy<bool, base::WindowPropertiesBase> (*this, "scrollbars-visible"); }

gi::property_proxy<bool, base::WindowPropertiesBase> property_statusbar_visible()
{ return gi::property_proxy<bool, base::WindowPropertiesBase> (*this, "statusbar-visible"); }
const gi::property_proxy<bool, base::WindowPropertiesBase> property_statusbar_visible() const
{ return gi::property_proxy<bool, base::WindowPropertiesBase> (*this, "statusbar-visible"); }

gi::property_proxy<bool, base::WindowPropertiesBase> property_toolbar_visible()
{ return gi::property_proxy<bool, base::WindowPropertiesBase> (*this, "toolbar-visible"); }
const gi::property_proxy<bool, base::WindowPropertiesBase> property_toolbar_visible() const
{ return gi::property_proxy<bool, base::WindowPropertiesBase> (*this, "toolbar-visible"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/windowproperties_extra_def.hpp>)
#include <webkit2/windowproperties_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/windowproperties_extra.hpp>)
#include <webkit2/windowproperties_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class WindowProperties : public GI_WEBKIT2_WINDOWPROPERTIES_BASE
{ typedef GI_WEBKIT2_WINDOWPROPERTIES_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitWindowProperties>
{ typedef WebKit2::WindowProperties type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class WindowPropertiesClassDef
{
typedef WindowPropertiesClassDef self;
public:
typedef WebKit2::WindowProperties instance_type;
typedef ::WebKitWindowPropertiesClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class WindowPropertiesClass: public detail::ClassTemplate<WebKit2::impl::internal::WindowPropertiesClassDef, GObject::impl::internal::ObjectClass>
{
typedef WindowPropertiesClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::WindowPropertiesClassDef, GObject::impl::internal::ObjectClass> super;

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

using WindowPropertiesImpl = detail::ObjectImpl<WindowProperties, internal::WindowPropertiesClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
