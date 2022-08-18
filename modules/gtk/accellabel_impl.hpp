// AUTO-GENERATED

#ifndef _GI_GTK_ACCELLABEL_IMPL_HPP_
#define _GI_GTK_ACCELLABEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_accel_label_new (const gchar* string);
// ::GtkAccelLabel* gtk_accel_label_new (const char* string);
Gtk::AccelLabel base::AccelLabelBase::new_ (const std::string & string) noexcept
{
  typedef ::GtkAccelLabel* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_label_new;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_accel_label_get_accel (GtkAccelLabel* accel_label, guint* accelerator_key, GdkModifierType* accelerator_mods);
// void gtk_accel_label_get_accel (::GtkAccelLabel* accel_label, guint* accelerator_key, ::GdkModifierType* accelerator_mods);
void base::AccelLabelBase::get_accel (guint & accelerator_key, Gdk::ModifierType & accelerator_mods) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccelLabel* accel_label, guint* accelerator_key, ::GdkModifierType* accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_label_get_accel;
  ::GdkModifierType accelerator_mods_o {};
  guint accelerator_key_o {};
  call_wrap_v ((::GtkAccelLabel*) (gobj_()), (guint*) (&accelerator_key_o), (::GdkModifierType*) (&accelerator_mods_o));
  accelerator_mods = gi::wrap (accelerator_mods_o);
  accelerator_key = accelerator_key_o;
}
std::tuple<guint, Gdk::ModifierType> base::AccelLabelBase::get_accel () noexcept
{
  typedef void (*call_wrap_t) (::GtkAccelLabel* accel_label, guint* accelerator_key, ::GdkModifierType* accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_label_get_accel;
  ::GdkModifierType accelerator_mods_o {};
  guint accelerator_key_o {};
  call_wrap_v ((::GtkAccelLabel*) (gobj_()), (guint*) (&accelerator_key_o), (::GdkModifierType*) (&accelerator_mods_o));
  return std::make_tuple (accelerator_key_o, gi::wrap (accelerator_mods_o));
}

// GtkWidget* gtk_accel_label_get_accel_widget (GtkAccelLabel* accel_label);
// ::GtkWidget* gtk_accel_label_get_accel_widget (::GtkAccelLabel* accel_label);
Gtk::Widget base::AccelLabelBase::get_accel_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkAccelLabel* accel_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_label_get_accel_widget;
  auto _temp_ret = call_wrap_v ((::GtkAccelLabel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint gtk_accel_label_get_accel_width (GtkAccelLabel* accel_label);
// guint gtk_accel_label_get_accel_width (::GtkAccelLabel* accel_label);
guint base::AccelLabelBase::get_accel_width () noexcept
{
  typedef guint (*call_wrap_t) (::GtkAccelLabel* accel_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_label_get_accel_width;
  auto _temp_ret = call_wrap_v ((::GtkAccelLabel*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_accel_label_refetch (GtkAccelLabel* accel_label);
// gboolean gtk_accel_label_refetch (::GtkAccelLabel* accel_label);
bool base::AccelLabelBase::refetch () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAccelLabel* accel_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_label_refetch;
  auto _temp_ret = call_wrap_v ((::GtkAccelLabel*) (gobj_()));
  return _temp_ret;
}

// void gtk_accel_label_set_accel (GtkAccelLabel* accel_label, guint accelerator_key, GdkModifierType accelerator_mods);
// void gtk_accel_label_set_accel (::GtkAccelLabel* accel_label, guint accelerator_key, ::GdkModifierType accelerator_mods);
void base::AccelLabelBase::set_accel (guint accelerator_key, Gdk::ModifierType accelerator_mods) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccelLabel* accel_label, guint accelerator_key, ::GdkModifierType accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_label_set_accel;
  auto accelerator_mods_to_c = gi::unwrap (accelerator_mods);
  auto accelerator_key_to_c = accelerator_key;
  call_wrap_v ((::GtkAccelLabel*) (gobj_()), (guint) (accelerator_key_to_c), (::GdkModifierType) (accelerator_mods_to_c));
}

// void gtk_accel_label_set_accel_closure (GtkAccelLabel* accel_label, GClosure* accel_closure);
// void gtk_accel_label_set_accel_closure (::GtkAccelLabel* accel_label, ::GClosure* accel_closure);
void base::AccelLabelBase::set_accel_closure (GObject::Closure accel_closure) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccelLabel* accel_label, ::GClosure* accel_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_label_set_accel_closure;
  auto accel_closure_to_c = gi::unwrap (accel_closure, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAccelLabel*) (gobj_()), (::GClosure*) (accel_closure_to_c));
}
void base::AccelLabelBase::set_accel_closure () noexcept
{
  typedef void (*call_wrap_t) (::GtkAccelLabel* accel_label, ::GClosure* accel_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_label_set_accel_closure;
  auto accel_closure_to_c = nullptr;
  call_wrap_v ((::GtkAccelLabel*) (gobj_()), (::GClosure*) (accel_closure_to_c));
}

// void gtk_accel_label_set_accel_widget (GtkAccelLabel* accel_label, GtkWidget* accel_widget);
// void gtk_accel_label_set_accel_widget (::GtkAccelLabel* accel_label, ::GtkWidget* accel_widget);
void base::AccelLabelBase::set_accel_widget (Gtk::Widget accel_widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccelLabel* accel_label, ::GtkWidget* accel_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_label_set_accel_widget;
  auto accel_widget_to_c = gi::unwrap (accel_widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAccelLabel*) (gobj_()), (::GtkWidget*) (accel_widget_to_c));
}
void base::AccelLabelBase::set_accel_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkAccelLabel* accel_label, ::GtkWidget* accel_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_label_set_accel_widget;
  auto accel_widget_to_c = nullptr;
  call_wrap_v ((::GtkAccelLabel*) (gobj_()), (::GtkWidget*) (accel_widget_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accellabel_extra_def_impl.hpp>)
#include <gtk/accellabel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accellabel_extra_impl.hpp>)
#include <gtk/accellabel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void AccelLabelClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkAccelLabelClass *methods = (::GtkAccelLabelClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
