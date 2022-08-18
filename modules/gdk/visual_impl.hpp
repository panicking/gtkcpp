// AUTO-GENERATED

#ifndef _GI_GDK_VISUAL_IMPL_HPP_
#define _GI_GDK_VISUAL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

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
void base::VisualBase::get_blue_pixel_details (guint32 * mask, gint * shift, gint * precision) noexcept
{
  typedef void (*call_wrap_t) (::GdkVisual* visual, guint32* mask, gint* shift, gint* precision);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_visual_get_blue_pixel_details;
  gint precision_o {};
  gint shift_o {};
  guint32 mask_o {};
  call_wrap_v ((::GdkVisual*) (gobj_()), (guint32*) (mask ? &mask_o : nullptr), (gint*) (shift ? &shift_o : nullptr), (gint*) (precision ? &precision_o : nullptr));
  if (precision) *precision = precision_o;
  if (shift) *shift = shift_o;
  if (mask) *mask = mask_o;
}
std::tuple<guint32, gint, gint> base::VisualBase::get_blue_pixel_details () noexcept
{
  typedef void (*call_wrap_t) (::GdkVisual* visual, guint32* mask, gint* shift, gint* precision);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_visual_get_blue_pixel_details;
  gint precision_o {};
  gint shift_o {};
  guint32 mask_o {};
  call_wrap_v ((::GdkVisual*) (gobj_()), (guint32*) (&mask_o), (gint*) (&shift_o), (gint*) (&precision_o));
  return std::make_tuple (mask_o, shift_o, precision_o);
}

// GdkByteOrder gdk_visual_get_byte_order (GdkVisual* visual);
// ::GdkByteOrder gdk_visual_get_byte_order (::GdkVisual* visual);
// IGNORE; deprecated

// gint gdk_visual_get_colormap_size (GdkVisual* visual);
// gint gdk_visual_get_colormap_size (::GdkVisual* visual);
// IGNORE; deprecated

// gint gdk_visual_get_depth (GdkVisual* visual);
// gint gdk_visual_get_depth (::GdkVisual* visual);
gint base::VisualBase::get_depth () noexcept
{
  typedef gint (*call_wrap_t) (::GdkVisual* visual);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_visual_get_depth;
  auto _temp_ret = call_wrap_v ((::GdkVisual*) (gobj_()));
  return _temp_ret;
}

// void gdk_visual_get_green_pixel_details (GdkVisual* visual, guint32* mask, gint* shift, gint* precision);
// void gdk_visual_get_green_pixel_details (::GdkVisual* visual, guint32* mask, gint* shift, gint* precision);
void base::VisualBase::get_green_pixel_details (guint32 * mask, gint * shift, gint * precision) noexcept
{
  typedef void (*call_wrap_t) (::GdkVisual* visual, guint32* mask, gint* shift, gint* precision);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_visual_get_green_pixel_details;
  gint precision_o {};
  gint shift_o {};
  guint32 mask_o {};
  call_wrap_v ((::GdkVisual*) (gobj_()), (guint32*) (mask ? &mask_o : nullptr), (gint*) (shift ? &shift_o : nullptr), (gint*) (precision ? &precision_o : nullptr));
  if (precision) *precision = precision_o;
  if (shift) *shift = shift_o;
  if (mask) *mask = mask_o;
}
std::tuple<guint32, gint, gint> base::VisualBase::get_green_pixel_details () noexcept
{
  typedef void (*call_wrap_t) (::GdkVisual* visual, guint32* mask, gint* shift, gint* precision);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_visual_get_green_pixel_details;
  gint precision_o {};
  gint shift_o {};
  guint32 mask_o {};
  call_wrap_v ((::GdkVisual*) (gobj_()), (guint32*) (&mask_o), (gint*) (&shift_o), (gint*) (&precision_o));
  return std::make_tuple (mask_o, shift_o, precision_o);
}

// void gdk_visual_get_red_pixel_details (GdkVisual* visual, guint32* mask, gint* shift, gint* precision);
// void gdk_visual_get_red_pixel_details (::GdkVisual* visual, guint32* mask, gint* shift, gint* precision);
void base::VisualBase::get_red_pixel_details (guint32 * mask, gint * shift, gint * precision) noexcept
{
  typedef void (*call_wrap_t) (::GdkVisual* visual, guint32* mask, gint* shift, gint* precision);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_visual_get_red_pixel_details;
  gint precision_o {};
  gint shift_o {};
  guint32 mask_o {};
  call_wrap_v ((::GdkVisual*) (gobj_()), (guint32*) (mask ? &mask_o : nullptr), (gint*) (shift ? &shift_o : nullptr), (gint*) (precision ? &precision_o : nullptr));
  if (precision) *precision = precision_o;
  if (shift) *shift = shift_o;
  if (mask) *mask = mask_o;
}
std::tuple<guint32, gint, gint> base::VisualBase::get_red_pixel_details () noexcept
{
  typedef void (*call_wrap_t) (::GdkVisual* visual, guint32* mask, gint* shift, gint* precision);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_visual_get_red_pixel_details;
  gint precision_o {};
  gint shift_o {};
  guint32 mask_o {};
  call_wrap_v ((::GdkVisual*) (gobj_()), (guint32*) (&mask_o), (gint*) (&shift_o), (gint*) (&precision_o));
  return std::make_tuple (mask_o, shift_o, precision_o);
}

// GdkScreen* gdk_visual_get_screen (GdkVisual* visual);
// ::GdkScreen* gdk_visual_get_screen (::GdkVisual* visual);
Gdk::Screen base::VisualBase::get_screen () noexcept
{
  typedef ::GdkScreen* (*call_wrap_t) (::GdkVisual* visual);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_visual_get_screen;
  auto _temp_ret = call_wrap_v ((::GdkVisual*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkVisualType gdk_visual_get_visual_type (GdkVisual* visual);
// ::GdkVisualType gdk_visual_get_visual_type (::GdkVisual* visual);
Gdk::VisualType base::VisualBase::get_visual_type () noexcept
{
  typedef ::GdkVisualType (*call_wrap_t) (::GdkVisual* visual);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_visual_get_visual_type;
  auto _temp_ret = call_wrap_v ((::GdkVisual*) (gobj_()));
  return gi::wrap (_temp_ret);
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/visual_extra_def_impl.hpp>)
#include <gdk/visual_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/visual_extra_impl.hpp>)
#include <gdk/visual_extra_impl.hpp>
#endif
#endif

#endif
