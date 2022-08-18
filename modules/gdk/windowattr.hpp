// AUTO-GENERATED

#ifndef _GI_GDK_WINDOWATTR_HPP_
#define _GI_GDK_WINDOWATTR_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Cursor;
class Visual;

class WindowAttr;

namespace base {


#define GI_GDK_WINDOWATTR_BASE base::WindowAttrBase
class WindowAttrBase : public gi::detail::CBoxedWrapper<WindowAttrBase, ::GdkWindowAttr>
{
typedef gi::detail::CBoxedWrapper<WindowAttrBase, ::GdkWindowAttr> super_type;
public:

WindowAttrBase (std::nullptr_t = nullptr) : super_type() {}

// char* WindowAttr::title (const ::GdkWindowAttr* obj);
// char* WindowAttr::title (const ::GdkWindowAttr* obj);
GI_INLINE_DECL std::string title_ () const noexcept;

// gint WindowAttr::event_mask (const ::GdkWindowAttr* obj);
// gint WindowAttr::event_mask (const ::GdkWindowAttr* obj);
GI_INLINE_DECL gint event_mask_ () const noexcept;

//  WindowAttr::event_mask (::GdkWindowAttr* obj, gint _value);
// void WindowAttr::event_mask (::GdkWindowAttr* obj, gint _value);
GI_INLINE_DECL void event_mask_ (gint _value) noexcept;

// gint WindowAttr::x (const ::GdkWindowAttr* obj);
// gint WindowAttr::x (const ::GdkWindowAttr* obj);
GI_INLINE_DECL gint x_ () const noexcept;

//  WindowAttr::x (::GdkWindowAttr* obj, gint _value);
// void WindowAttr::x (::GdkWindowAttr* obj, gint _value);
GI_INLINE_DECL void x_ (gint _value) noexcept;

// gint WindowAttr::y (const ::GdkWindowAttr* obj);
// gint WindowAttr::y (const ::GdkWindowAttr* obj);
GI_INLINE_DECL gint y_ () const noexcept;

//  WindowAttr::y (::GdkWindowAttr* obj, gint _value);
// void WindowAttr::y (::GdkWindowAttr* obj, gint _value);
GI_INLINE_DECL void y_ (gint _value) noexcept;

// gint WindowAttr::width (const ::GdkWindowAttr* obj);
// gint WindowAttr::width (const ::GdkWindowAttr* obj);
GI_INLINE_DECL gint width_ () const noexcept;

//  WindowAttr::width (::GdkWindowAttr* obj, gint _value);
// void WindowAttr::width (::GdkWindowAttr* obj, gint _value);
GI_INLINE_DECL void width_ (gint _value) noexcept;

// gint WindowAttr::height (const ::GdkWindowAttr* obj);
// gint WindowAttr::height (const ::GdkWindowAttr* obj);
GI_INLINE_DECL gint height_ () const noexcept;

//  WindowAttr::height (::GdkWindowAttr* obj, gint _value);
// void WindowAttr::height (::GdkWindowAttr* obj, gint _value);
GI_INLINE_DECL void height_ (gint _value) noexcept;

// ::GdkWindowWindowClass WindowAttr::wclass (const ::GdkWindowAttr* obj);
// ::GdkWindowWindowClass WindowAttr::wclass (const ::GdkWindowAttr* obj);
GI_INLINE_DECL Gdk::WindowWindowClass wclass_ () const noexcept;

//  WindowAttr::wclass (::GdkWindowAttr* obj, ::GdkWindowWindowClass _value);
// void WindowAttr::wclass (::GdkWindowAttr* obj, ::GdkWindowWindowClass _value);
GI_INLINE_DECL void wclass_ (Gdk::WindowWindowClass _value) noexcept;

// ::GdkVisual* WindowAttr::visual (const ::GdkWindowAttr* obj);
// ::GdkVisual* WindowAttr::visual (const ::GdkWindowAttr* obj);
GI_INLINE_DECL Gdk::Visual visual_ () const noexcept;

// ::GdkWindowType WindowAttr::window_type (const ::GdkWindowAttr* obj);
// ::GdkWindowType WindowAttr::window_type (const ::GdkWindowAttr* obj);
GI_INLINE_DECL Gdk::WindowType window_type_ () const noexcept;

//  WindowAttr::window_type (::GdkWindowAttr* obj, ::GdkWindowType _value);
// void WindowAttr::window_type (::GdkWindowAttr* obj, ::GdkWindowType _value);
GI_INLINE_DECL void window_type_ (Gdk::WindowType _value) noexcept;

// ::GdkCursor* WindowAttr::cursor (const ::GdkWindowAttr* obj);
// ::GdkCursor* WindowAttr::cursor (const ::GdkWindowAttr* obj);
GI_INLINE_DECL Gdk::Cursor cursor_ () const noexcept;

// char* WindowAttr::wmclass_name (const ::GdkWindowAttr* obj);
// char* WindowAttr::wmclass_name (const ::GdkWindowAttr* obj);
GI_INLINE_DECL std::string wmclass_name_ () const noexcept;

// char* WindowAttr::wmclass_class (const ::GdkWindowAttr* obj);
// char* WindowAttr::wmclass_class (const ::GdkWindowAttr* obj);
GI_INLINE_DECL std::string wmclass_class_ () const noexcept;

// gboolean WindowAttr::override_redirect (const ::GdkWindowAttr* obj);
// gboolean WindowAttr::override_redirect (const ::GdkWindowAttr* obj);
GI_INLINE_DECL bool override_redirect_ () const noexcept;

//  WindowAttr::override_redirect (::GdkWindowAttr* obj, gboolean _value);
// void WindowAttr::override_redirect (::GdkWindowAttr* obj, gboolean _value);
GI_INLINE_DECL void override_redirect_ (gboolean _value) noexcept;

// ::GdkWindowTypeHint WindowAttr::type_hint (const ::GdkWindowAttr* obj);
// ::GdkWindowTypeHint WindowAttr::type_hint (const ::GdkWindowAttr* obj);
GI_INLINE_DECL Gdk::WindowTypeHint type_hint_ () const noexcept;

//  WindowAttr::type_hint (::GdkWindowAttr* obj, ::GdkWindowTypeHint _value);
// void WindowAttr::type_hint (::GdkWindowAttr* obj, ::GdkWindowTypeHint _value);
GI_INLINE_DECL void type_hint_ (Gdk::WindowTypeHint _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/windowattr_extra_def.hpp>)
#include <gdk/windowattr_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/windowattr_extra.hpp>)
#include <gdk/windowattr_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class WindowAttr : public GI_GDK_WINDOWATTR_BASE
{ typedef GI_GDK_WINDOWATTR_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkWindowAttr>
{ typedef Gdk::WindowAttr type; }; 

} // namespace repository

} // namespace gi

#endif
