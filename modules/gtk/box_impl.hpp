// AUTO-GENERATED

#ifndef _GI_GTK_BOX_IMPL_HPP_
#define _GI_GTK_BOX_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Orientable BoxBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

BoxBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkWidget* gtk_box_new (GtkOrientation orientation, gint spacing);
// ::GtkBox* gtk_box_new (::GtkOrientation orientation, gint spacing);
Gtk::Box base::BoxBase::new_ (Gtk::Orientation orientation, gint spacing) noexcept
{
  typedef ::GtkBox* (*call_wrap_t) (::GtkOrientation orientation, gint spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_box_new;
  auto spacing_to_c = spacing;
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkOrientation) (orientation_to_c), (gint) (spacing_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkBaselinePosition gtk_box_get_baseline_position (GtkBox* box);
// ::GtkBaselinePosition gtk_box_get_baseline_position (::GtkBox* box);
Gtk::BaselinePosition base::BoxBase::get_baseline_position () noexcept
{
  typedef ::GtkBaselinePosition (*call_wrap_t) (::GtkBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_box_get_baseline_position;
  auto _temp_ret = call_wrap_v ((::GtkBox*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkWidget* gtk_box_get_center_widget (GtkBox* box);
// ::GtkWidget* gtk_box_get_center_widget (::GtkBox* box);
Gtk::Widget base::BoxBase::get_center_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_box_get_center_widget;
  auto _temp_ret = call_wrap_v ((::GtkBox*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_box_get_homogeneous (GtkBox* box);
// gboolean gtk_box_get_homogeneous (::GtkBox* box);
bool base::BoxBase::get_homogeneous () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_box_get_homogeneous;
  auto _temp_ret = call_wrap_v ((::GtkBox*) (gobj_()));
  return _temp_ret;
}

// gint gtk_box_get_spacing (GtkBox* box);
// gint gtk_box_get_spacing (::GtkBox* box);
gint base::BoxBase::get_spacing () noexcept
{
  typedef gint (*call_wrap_t) (::GtkBox* box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_box_get_spacing;
  auto _temp_ret = call_wrap_v ((::GtkBox*) (gobj_()));
  return _temp_ret;
}

// void gtk_box_pack_end (GtkBox* box, GtkWidget* child, gboolean expand, gboolean fill, guint padding);
// void gtk_box_pack_end (::GtkBox* box, ::GtkWidget* child, gboolean expand, gboolean fill, guint padding);
void base::BoxBase::pack_end (Gtk::Widget child, gboolean expand, gboolean fill, guint padding) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, ::GtkWidget* child, gboolean expand, gboolean fill, guint padding);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_box_pack_end;
  auto padding_to_c = padding;
  auto fill_to_c = fill;
  auto expand_to_c = expand;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBox*) (gobj_()), (::GtkWidget*) (child_to_c), (gboolean) (expand_to_c), (gboolean) (fill_to_c), (guint) (padding_to_c));
}

// void gtk_box_pack_start (GtkBox* box, GtkWidget* child, gboolean expand, gboolean fill, guint padding);
// void gtk_box_pack_start (::GtkBox* box, ::GtkWidget* child, gboolean expand, gboolean fill, guint padding);
void base::BoxBase::pack_start (Gtk::Widget child, gboolean expand, gboolean fill, guint padding) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, ::GtkWidget* child, gboolean expand, gboolean fill, guint padding);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_box_pack_start;
  auto padding_to_c = padding;
  auto fill_to_c = fill;
  auto expand_to_c = expand;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBox*) (gobj_()), (::GtkWidget*) (child_to_c), (gboolean) (expand_to_c), (gboolean) (fill_to_c), (guint) (padding_to_c));
}

// void gtk_box_query_child_packing (GtkBox* box, GtkWidget* child, gboolean* expand, gboolean* fill, guint* padding, GtkPackType* pack_type);
// void gtk_box_query_child_packing (::GtkBox* box, ::GtkWidget* child, gboolean* expand, gboolean* fill, guint* padding, ::GtkPackType* pack_type);
void base::BoxBase::query_child_packing (Gtk::Widget child, bool & expand, bool & fill, guint & padding, Gtk::PackType & pack_type) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, ::GtkWidget* child, gboolean* expand, gboolean* fill, guint* padding, ::GtkPackType* pack_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_box_query_child_packing;
  ::GtkPackType pack_type_o {};
  guint padding_o {};
  gboolean fill_o {};
  gboolean expand_o {};
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBox*) (gobj_()), (::GtkWidget*) (child_to_c), (gboolean*) (&expand_o), (gboolean*) (&fill_o), (guint*) (&padding_o), (::GtkPackType*) (&pack_type_o));
  pack_type = gi::wrap (pack_type_o);
  padding = padding_o;
  fill = fill_o;
  expand = expand_o;
}
std::tuple<bool, bool, guint, Gtk::PackType> base::BoxBase::query_child_packing (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, ::GtkWidget* child, gboolean* expand, gboolean* fill, guint* padding, ::GtkPackType* pack_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_box_query_child_packing;
  ::GtkPackType pack_type_o {};
  guint padding_o {};
  gboolean fill_o {};
  gboolean expand_o {};
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBox*) (gobj_()), (::GtkWidget*) (child_to_c), (gboolean*) (&expand_o), (gboolean*) (&fill_o), (guint*) (&padding_o), (::GtkPackType*) (&pack_type_o));
  return std::make_tuple (expand_o, fill_o, padding_o, gi::wrap (pack_type_o));
}

// void gtk_box_reorder_child (GtkBox* box, GtkWidget* child, gint position);
// void gtk_box_reorder_child (::GtkBox* box, ::GtkWidget* child, gint position);
void base::BoxBase::reorder_child (Gtk::Widget child, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, ::GtkWidget* child, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_box_reorder_child;
  auto position_to_c = position;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBox*) (gobj_()), (::GtkWidget*) (child_to_c), (gint) (position_to_c));
}

// void gtk_box_set_baseline_position (GtkBox* box, GtkBaselinePosition position);
// void gtk_box_set_baseline_position (::GtkBox* box, ::GtkBaselinePosition position);
void base::BoxBase::set_baseline_position (Gtk::BaselinePosition position) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, ::GtkBaselinePosition position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_box_set_baseline_position;
  auto position_to_c = gi::unwrap (position);
  call_wrap_v ((::GtkBox*) (gobj_()), (::GtkBaselinePosition) (position_to_c));
}

// void gtk_box_set_center_widget (GtkBox* box, GtkWidget* widget);
// void gtk_box_set_center_widget (::GtkBox* box, ::GtkWidget* widget);
void base::BoxBase::set_center_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_box_set_center_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBox*) (gobj_()), (::GtkWidget*) (widget_to_c));
}
void base::BoxBase::set_center_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_box_set_center_widget;
  auto widget_to_c = nullptr;
  call_wrap_v ((::GtkBox*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void gtk_box_set_child_packing (GtkBox* box, GtkWidget* child, gboolean expand, gboolean fill, guint padding, GtkPackType pack_type);
// void gtk_box_set_child_packing (::GtkBox* box, ::GtkWidget* child, gboolean expand, gboolean fill, guint padding, ::GtkPackType pack_type);
void base::BoxBase::set_child_packing (Gtk::Widget child, gboolean expand, gboolean fill, guint padding, Gtk::PackType pack_type) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, ::GtkWidget* child, gboolean expand, gboolean fill, guint padding, ::GtkPackType pack_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_box_set_child_packing;
  auto pack_type_to_c = gi::unwrap (pack_type);
  auto padding_to_c = padding;
  auto fill_to_c = fill;
  auto expand_to_c = expand;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBox*) (gobj_()), (::GtkWidget*) (child_to_c), (gboolean) (expand_to_c), (gboolean) (fill_to_c), (guint) (padding_to_c), (::GtkPackType) (pack_type_to_c));
}

// void gtk_box_set_homogeneous (GtkBox* box, gboolean homogeneous);
// void gtk_box_set_homogeneous (::GtkBox* box, gboolean homogeneous);
void base::BoxBase::set_homogeneous (gboolean homogeneous) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, gboolean homogeneous);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_box_set_homogeneous;
  auto homogeneous_to_c = homogeneous;
  call_wrap_v ((::GtkBox*) (gobj_()), (gboolean) (homogeneous_to_c));
}

// void gtk_box_set_spacing (GtkBox* box, gint spacing);
// void gtk_box_set_spacing (::GtkBox* box, gint spacing);
void base::BoxBase::set_spacing (gint spacing) noexcept
{
  typedef void (*call_wrap_t) (::GtkBox* box, gint spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_box_set_spacing;
  auto spacing_to_c = spacing;
  call_wrap_v ((::GtkBox*) (gobj_()), (gint) (spacing_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/box_extra_def_impl.hpp>)
#include <gtk/box_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/box_extra_impl.hpp>)
#include <gtk/box_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void BoxClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkBoxClass *methods = (::GtkBoxClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
