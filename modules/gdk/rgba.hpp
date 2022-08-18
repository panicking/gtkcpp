// AUTO-GENERATED

#ifndef _GI_GDK_RGBA_HPP_
#define _GI_GDK_RGBA_HPP_


namespace gi {

namespace repository {

namespace Gdk {


class RGBA;

namespace base {


#define GI_GDK_RGBA_BASE base::RGBABase
class RGBABase : public gi::detail::GBoxedWrapper<RGBABase, ::GdkRGBA>
{
typedef gi::detail::GBoxedWrapper<RGBABase, ::GdkRGBA> super_type;
public:

RGBABase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gdk_rgba_get_type(); } 

// gdouble RGBA::red (const ::GdkRGBA* obj);
// gdouble RGBA::red (const ::GdkRGBA* obj);
GI_INLINE_DECL gdouble red_ () const noexcept;

//  RGBA::red (::GdkRGBA* obj, gdouble _value);
// void RGBA::red (::GdkRGBA* obj, gdouble _value);
GI_INLINE_DECL void red_ (gdouble _value) noexcept;

// gdouble RGBA::green (const ::GdkRGBA* obj);
// gdouble RGBA::green (const ::GdkRGBA* obj);
GI_INLINE_DECL gdouble green_ () const noexcept;

//  RGBA::green (::GdkRGBA* obj, gdouble _value);
// void RGBA::green (::GdkRGBA* obj, gdouble _value);
GI_INLINE_DECL void green_ (gdouble _value) noexcept;

// gdouble RGBA::blue (const ::GdkRGBA* obj);
// gdouble RGBA::blue (const ::GdkRGBA* obj);
GI_INLINE_DECL gdouble blue_ () const noexcept;

//  RGBA::blue (::GdkRGBA* obj, gdouble _value);
// void RGBA::blue (::GdkRGBA* obj, gdouble _value);
GI_INLINE_DECL void blue_ (gdouble _value) noexcept;

// gdouble RGBA::alpha (const ::GdkRGBA* obj);
// gdouble RGBA::alpha (const ::GdkRGBA* obj);
GI_INLINE_DECL gdouble alpha_ () const noexcept;

//  RGBA::alpha (::GdkRGBA* obj, gdouble _value);
// void RGBA::alpha (::GdkRGBA* obj, gdouble _value);
GI_INLINE_DECL void alpha_ (gdouble _value) noexcept;

// GdkRGBA* gdk_rgba_copy (const GdkRGBA* rgba);
// ::GdkRGBA* gdk_rgba_copy (const ::GdkRGBA* rgba);
GI_INLINE_DECL Gdk::RGBA copy () const noexcept;

// gboolean gdk_rgba_equal (gconstpointer p1, gconstpointer p2);
// gboolean gdk_rgba_equal (const ::GdkRGBA* p1, const ::GdkRGBA* p2);
GI_INLINE_DECL bool equal (const Gdk::RGBA & p2) const noexcept;

// void gdk_rgba_free (GdkRGBA* rgba);
// void gdk_rgba_free (::GdkRGBA* rgba);
// IGNORE; marked ignore

// guint gdk_rgba_hash (gconstpointer p);
// guint gdk_rgba_hash (const ::GdkRGBA* p);
GI_INLINE_DECL guint hash () const noexcept;

// gboolean gdk_rgba_parse (GdkRGBA* rgba, const gchar* spec);
// gboolean gdk_rgba_parse (::GdkRGBA* rgba, const char* spec);
GI_INLINE_DECL bool parse (const std::string & spec) noexcept;

// gchar* gdk_rgba_to_string (const GdkRGBA* rgba);
// char* gdk_rgba_to_string (const ::GdkRGBA* rgba);
GI_INLINE_DECL std::string to_string () const noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/rgba_extra_def.hpp>)
#include <gdk/rgba_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/rgba_extra.hpp>)
#include <gdk/rgba_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class RGBA : public GI_GDK_RGBA_BASE
{ typedef GI_GDK_RGBA_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkRGBA>
{ typedef Gdk::RGBA type; }; 

} // namespace repository

} // namespace gi

#endif
