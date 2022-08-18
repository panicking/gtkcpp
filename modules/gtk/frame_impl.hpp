// AUTO-GENERATED

#ifndef _GI_GTK_FRAME_IMPL_HPP_
#define _GI_GTK_FRAME_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_frame_new (const gchar* label);
// ::GtkFrame* gtk_frame_new (const char* label);
Gtk::Frame base::FrameBase::new_ (const std::string & label) noexcept
{
  typedef ::GtkFrame* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_frame_new;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::Frame base::FrameBase::new_ () noexcept
{
  typedef ::GtkFrame* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_frame_new;
  auto label_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_frame_get_label (GtkFrame* frame);
// const char* gtk_frame_get_label (::GtkFrame* frame);
std::string base::FrameBase::get_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkFrame* frame);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_frame_get_label;
  auto _temp_ret = call_wrap_v ((::GtkFrame*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_frame_get_label_align (GtkFrame* frame, gfloat* xalign, gfloat* yalign);
// void gtk_frame_get_label_align (::GtkFrame* frame, gfloat* xalign, gfloat* yalign);
void base::FrameBase::get_label_align (gfloat * xalign, gfloat * yalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkFrame* frame, gfloat* xalign, gfloat* yalign);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_frame_get_label_align;
  gfloat yalign_o {};
  gfloat xalign_o {};
  call_wrap_v ((::GtkFrame*) (gobj_()), (gfloat*) (xalign ? &xalign_o : nullptr), (gfloat*) (yalign ? &yalign_o : nullptr));
  if (yalign) *yalign = yalign_o;
  if (xalign) *xalign = xalign_o;
}
std::tuple<gfloat, gfloat> base::FrameBase::get_label_align () noexcept
{
  typedef void (*call_wrap_t) (::GtkFrame* frame, gfloat* xalign, gfloat* yalign);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_frame_get_label_align;
  gfloat yalign_o {};
  gfloat xalign_o {};
  call_wrap_v ((::GtkFrame*) (gobj_()), (gfloat*) (&xalign_o), (gfloat*) (&yalign_o));
  return std::make_tuple (xalign_o, yalign_o);
}

// GtkWidget* gtk_frame_get_label_widget (GtkFrame* frame);
// ::GtkWidget* gtk_frame_get_label_widget (::GtkFrame* frame);
Gtk::Widget base::FrameBase::get_label_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkFrame* frame);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_frame_get_label_widget;
  auto _temp_ret = call_wrap_v ((::GtkFrame*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkShadowType gtk_frame_get_shadow_type (GtkFrame* frame);
// ::GtkShadowType gtk_frame_get_shadow_type (::GtkFrame* frame);
Gtk::ShadowType base::FrameBase::get_shadow_type () noexcept
{
  typedef ::GtkShadowType (*call_wrap_t) (::GtkFrame* frame);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_frame_get_shadow_type;
  auto _temp_ret = call_wrap_v ((::GtkFrame*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_frame_set_label (GtkFrame* frame, const gchar* label);
// void gtk_frame_set_label (::GtkFrame* frame, const char* label);
void base::FrameBase::set_label (const std::string & label) noexcept
{
  typedef void (*call_wrap_t) (::GtkFrame* frame, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_frame_set_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFrame*) (gobj_()), (const char*) (label_to_c));
}
void base::FrameBase::set_label () noexcept
{
  typedef void (*call_wrap_t) (::GtkFrame* frame, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_frame_set_label;
  auto label_to_c = nullptr;
  call_wrap_v ((::GtkFrame*) (gobj_()), (const char*) (label_to_c));
}

// void gtk_frame_set_label_align (GtkFrame* frame, gfloat xalign, gfloat yalign);
// void gtk_frame_set_label_align (::GtkFrame* frame, gfloat xalign, gfloat yalign);
void base::FrameBase::set_label_align (gfloat xalign, gfloat yalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkFrame* frame, gfloat xalign, gfloat yalign);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_frame_set_label_align;
  auto yalign_to_c = yalign;
  auto xalign_to_c = xalign;
  call_wrap_v ((::GtkFrame*) (gobj_()), (gfloat) (xalign_to_c), (gfloat) (yalign_to_c));
}

// void gtk_frame_set_label_widget (GtkFrame* frame, GtkWidget* label_widget);
// void gtk_frame_set_label_widget (::GtkFrame* frame, ::GtkWidget* label_widget);
void base::FrameBase::set_label_widget (Gtk::Widget label_widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkFrame* frame, ::GtkWidget* label_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_frame_set_label_widget;
  auto label_widget_to_c = gi::unwrap (label_widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFrame*) (gobj_()), (::GtkWidget*) (label_widget_to_c));
}
void base::FrameBase::set_label_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkFrame* frame, ::GtkWidget* label_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_frame_set_label_widget;
  auto label_widget_to_c = nullptr;
  call_wrap_v ((::GtkFrame*) (gobj_()), (::GtkWidget*) (label_widget_to_c));
}

// void gtk_frame_set_shadow_type (GtkFrame* frame, GtkShadowType type);
// void gtk_frame_set_shadow_type (::GtkFrame* frame, ::GtkShadowType type);
void base::FrameBase::set_shadow_type (Gtk::ShadowType type) noexcept
{
  typedef void (*call_wrap_t) (::GtkFrame* frame, ::GtkShadowType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_frame_set_shadow_type;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GtkFrame*) (gobj_()), (::GtkShadowType) (type_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/frame_extra_def_impl.hpp>)
#include <gtk/frame_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/frame_extra_impl.hpp>)
#include <gtk/frame_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FrameClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkFrameClass *methods = (::GtkFrameClass *) class_struct;
  (void) methods;

  methods->compute_child_allocation = (decltype (methods->compute_child_allocation)) detail::method_wrapper<self, void (*) (Gtk::Allocation allocation), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::compute_child_allocation_>;
}

// void Frame::compute_child_allocation (GtkFrame* frame, GtkAllocation* allocation);
// void Frame::compute_child_allocation (::GtkFrame* frame, ::GtkAllocation* allocation);
void FrameClass::compute_child_allocation_ (Gtk::Allocation allocation) noexcept
{
  if (!get_struct_()->compute_child_allocation) return ;
  typedef void (*call_wrap_t) (::GtkFrame* frame, ::GtkAllocation* allocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->compute_child_allocation;
  auto allocation_to_c = gi::unwrap (allocation, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFrame*) (gobj_()), (::GtkAllocation*) (allocation_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
