// AUTO-GENERATED

#ifndef _GI_GDK_VISUAL_HPP_
#define _GI_GDK_VISUAL_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Screen;

class Visual;

namespace base {


#define GI_GDK_VISUAL_BASE base::VisualBase
class VisualBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkVisual BaseObjectType;

VisualBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_visual_get_type(); } 

// GdkVisual* gdk_visual_get_best ();
// ::GdkVisual* gdk_visual_get_best ();
// IGNORE; deprecated

// gint gdk_visual_get_best_depth ();
// gint gdk_visual_get_best_depth ();
// IGNORE; deprecated

// GdkVisualType gdk_visual_get_best_type ();
// ::GdkVisualType gdk_visual_get_best_type ();
// IGNORE; deprecated

// GdkVisual* gdk_visual_get_best_with_both (gint depth, GdkVisualType visual_type);
// ::GdkVisual* gdk_visual_get_best_with_both (gint depth, ::GdkVisualType visual_type);
// IGNORE; deprecated

// GdkVisual* gdk_visual_get_best_with_depth (gint depth);
// ::GdkVisual* gdk_visual_get_best_with_depth (gint depth);
// IGNORE; deprecated

// GdkVisual* gdk_visual_get_best_with_type (GdkVisualType visual_type);
// ::GdkVisual* gdk_visual_get_best_with_type (::GdkVisualType visual_type);
// IGNORE; deprecated

// GdkVisual* gdk_visual_get_system ();
// ::GdkVisual* gdk_visual_get_system ();
// IGNORE; deprecated

// gint gdk_visual_get_bits_per_rgb (GdkVisual* visual);
// gint gdk_visual_get_bits_per_rgb (::GdkVisual* visual);
// IGNORE; deprecated

// void gdk_visual_get_blue_pixel_details (GdkVisual* visual, guint32* mask, gint* shift, gint* precision);
// void gdk_visual_get_blue_pixel_details (::GdkVisual* visual, guint32* mask, gint* shift, gint* precision);
GI_INLINE_DECL void get_blue_pixel_details (guint32 * mask = nullptr, gint * shift = nullptr, gint * precision = nullptr) noexcept;
GI_INLINE_DECL std::tuple<guint32, gint, gint> get_blue_pixel_details () noexcept;

// GdkByteOrder gdk_visual_get_byte_order (GdkVisual* visual);
// ::GdkByteOrder gdk_visual_get_byte_order (::GdkVisual* visual);
// IGNORE; deprecated

// gint gdk_visual_get_colormap_size (GdkVisual* visual);
// gint gdk_visual_get_colormap_size (::GdkVisual* visual);
// IGNORE; deprecated

// gint gdk_visual_get_depth (GdkVisual* visual);
// gint gdk_visual_get_depth (::GdkVisual* visual);
GI_INLINE_DECL gint get_depth () noexcept;

// void gdk_visual_get_green_pixel_details (GdkVisual* visual, guint32* mask, gint* shift, gint* precision);
// void gdk_visual_get_green_pixel_details (::GdkVisual* visual, guint32* mask, gint* shift, gint* precision);
GI_INLINE_DECL void get_green_pixel_details (guint32 * mask = nullptr, gint * shift = nullptr, gint * precision = nullptr) noexcept;
GI_INLINE_DECL std::tuple<guint32, gint, gint> get_green_pixel_details () noexcept;

// void gdk_visual_get_red_pixel_details (GdkVisual* visual, guint32* mask, gint* shift, gint* precision);
// void gdk_visual_get_red_pixel_details (::GdkVisual* visual, guint32* mask, gint* shift, gint* precision);
GI_INLINE_DECL void get_red_pixel_details (guint32 * mask = nullptr, gint * shift = nullptr, gint * precision = nullptr) noexcept;
GI_INLINE_DECL std::tuple<guint32, gint, gint> get_red_pixel_details () noexcept;

// GdkScreen* gdk_visual_get_screen (GdkVisual* visual);
// ::GdkScreen* gdk_visual_get_screen (::GdkVisual* visual);
GI_INLINE_DECL Gdk::Screen get_screen () noexcept;

// GdkVisualType gdk_visual_get_visual_type (GdkVisual* visual);
// ::GdkVisualType gdk_visual_get_visual_type (::GdkVisual* visual);
GI_INLINE_DECL Gdk::VisualType get_visual_type () noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/visual_extra_def.hpp>)
#include <gdk/visual_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/visual_extra.hpp>)
#include <gdk/visual_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Visual : public GI_GDK_VISUAL_BASE
{ typedef GI_GDK_VISUAL_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkVisual>
{ typedef Gdk::Visual type; }; 

} // namespace repository

} // namespace gi

#endif
