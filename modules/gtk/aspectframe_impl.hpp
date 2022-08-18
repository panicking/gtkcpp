// AUTO-GENERATED

#ifndef _GI_GTK_ASPECTFRAME_IMPL_HPP_
#define _GI_GTK_ASPECTFRAME_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_aspect_frame_new (const gchar* label, gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child);
// ::GtkAspectFrame* gtk_aspect_frame_new (const char* label, gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child);
Gtk::AspectFrame base::AspectFrameBase::new_ (const std::string & label, gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child) noexcept
{
  typedef ::GtkAspectFrame* (*call_wrap_t) (const char* label, gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_aspect_frame_new;
  auto obey_child_to_c = obey_child;
  auto ratio_to_c = ratio;
  auto yalign_to_c = yalign;
  auto xalign_to_c = xalign;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c), (gfloat) (xalign_to_c), (gfloat) (yalign_to_c), (gfloat) (ratio_to_c), (gboolean) (obey_child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::AspectFrame base::AspectFrameBase::new_ (gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child) noexcept
{
  typedef ::GtkAspectFrame* (*call_wrap_t) (const char* label, gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_aspect_frame_new;
  auto obey_child_to_c = obey_child;
  auto ratio_to_c = ratio;
  auto yalign_to_c = yalign;
  auto xalign_to_c = xalign;
  auto label_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c), (gfloat) (xalign_to_c), (gfloat) (yalign_to_c), (gfloat) (ratio_to_c), (gboolean) (obey_child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_aspect_frame_set (GtkAspectFrame* aspect_frame, gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child);
// void gtk_aspect_frame_set (::GtkAspectFrame* aspect_frame, gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child);
void base::AspectFrameBase::set (gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child) noexcept
{
  typedef void (*call_wrap_t) (::GtkAspectFrame* aspect_frame, gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_aspect_frame_set;
  auto obey_child_to_c = obey_child;
  auto ratio_to_c = ratio;
  auto yalign_to_c = yalign;
  auto xalign_to_c = xalign;
  call_wrap_v ((::GtkAspectFrame*) (gobj_()), (gfloat) (xalign_to_c), (gfloat) (yalign_to_c), (gfloat) (ratio_to_c), (gboolean) (obey_child_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/aspectframe_extra_def_impl.hpp>)
#include <gtk/aspectframe_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/aspectframe_extra_impl.hpp>)
#include <gtk/aspectframe_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void AspectFrameClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkAspectFrameClass *methods = (::GtkAspectFrameClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
