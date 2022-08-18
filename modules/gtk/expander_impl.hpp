// AUTO-GENERATED

#ifndef _GI_GTK_EXPANDER_IMPL_HPP_
#define _GI_GTK_EXPANDER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_expander_new (const gchar* label);
// ::GtkExpander* gtk_expander_new (const char* label);
Gtk::Expander base::ExpanderBase::new_ (const std::string & label) noexcept
{
  typedef ::GtkExpander* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_new;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::Expander base::ExpanderBase::new_ () noexcept
{
  typedef ::GtkExpander* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_new;
  auto label_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_expander_new_with_mnemonic (const gchar* label);
// ::GtkExpander* gtk_expander_new_with_mnemonic (const char* label);
Gtk::Expander base::ExpanderBase::new_with_mnemonic (const std::string & label) noexcept
{
  typedef ::GtkExpander* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_new_with_mnemonic;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::Expander base::ExpanderBase::new_with_mnemonic () noexcept
{
  typedef ::GtkExpander* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_new_with_mnemonic;
  auto label_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_expander_get_expanded (GtkExpander* expander);
// gboolean gtk_expander_get_expanded (::GtkExpander* expander);
bool base::ExpanderBase::get_expanded () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkExpander* expander);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_get_expanded;
  auto _temp_ret = call_wrap_v ((::GtkExpander*) (gobj_()));
  return _temp_ret;
}

// const gchar* gtk_expander_get_label (GtkExpander* expander);
// const char* gtk_expander_get_label (::GtkExpander* expander);
std::string base::ExpanderBase::get_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkExpander* expander);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_get_label;
  auto _temp_ret = call_wrap_v ((::GtkExpander*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_expander_get_label_fill (GtkExpander* expander);
// gboolean gtk_expander_get_label_fill (::GtkExpander* expander);
bool base::ExpanderBase::get_label_fill () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkExpander* expander);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_get_label_fill;
  auto _temp_ret = call_wrap_v ((::GtkExpander*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* gtk_expander_get_label_widget (GtkExpander* expander);
// ::GtkWidget* gtk_expander_get_label_widget (::GtkExpander* expander);
Gtk::Widget base::ExpanderBase::get_label_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkExpander* expander);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_get_label_widget;
  auto _temp_ret = call_wrap_v ((::GtkExpander*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_expander_get_resize_toplevel (GtkExpander* expander);
// gboolean gtk_expander_get_resize_toplevel (::GtkExpander* expander);
bool base::ExpanderBase::get_resize_toplevel () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkExpander* expander);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_get_resize_toplevel;
  auto _temp_ret = call_wrap_v ((::GtkExpander*) (gobj_()));
  return _temp_ret;
}

// gint gtk_expander_get_spacing (GtkExpander* expander);
// gint gtk_expander_get_spacing (::GtkExpander* expander);
// IGNORE; deprecated

// gboolean gtk_expander_get_use_markup (GtkExpander* expander);
// gboolean gtk_expander_get_use_markup (::GtkExpander* expander);
bool base::ExpanderBase::get_use_markup () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkExpander* expander);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_get_use_markup;
  auto _temp_ret = call_wrap_v ((::GtkExpander*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_expander_get_use_underline (GtkExpander* expander);
// gboolean gtk_expander_get_use_underline (::GtkExpander* expander);
bool base::ExpanderBase::get_use_underline () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkExpander* expander);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_get_use_underline;
  auto _temp_ret = call_wrap_v ((::GtkExpander*) (gobj_()));
  return _temp_ret;
}

// void gtk_expander_set_expanded (GtkExpander* expander, gboolean expanded);
// void gtk_expander_set_expanded (::GtkExpander* expander, gboolean expanded);
void base::ExpanderBase::set_expanded (gboolean expanded) noexcept
{
  typedef void (*call_wrap_t) (::GtkExpander* expander, gboolean expanded);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_set_expanded;
  auto expanded_to_c = expanded;
  call_wrap_v ((::GtkExpander*) (gobj_()), (gboolean) (expanded_to_c));
}

// void gtk_expander_set_label (GtkExpander* expander, const gchar* label);
// void gtk_expander_set_label (::GtkExpander* expander, const char* label);
void base::ExpanderBase::set_label (const std::string & label) noexcept
{
  typedef void (*call_wrap_t) (::GtkExpander* expander, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_set_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkExpander*) (gobj_()), (const char*) (label_to_c));
}
void base::ExpanderBase::set_label () noexcept
{
  typedef void (*call_wrap_t) (::GtkExpander* expander, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_set_label;
  auto label_to_c = nullptr;
  call_wrap_v ((::GtkExpander*) (gobj_()), (const char*) (label_to_c));
}

// void gtk_expander_set_label_fill (GtkExpander* expander, gboolean label_fill);
// void gtk_expander_set_label_fill (::GtkExpander* expander, gboolean label_fill);
void base::ExpanderBase::set_label_fill (gboolean label_fill) noexcept
{
  typedef void (*call_wrap_t) (::GtkExpander* expander, gboolean label_fill);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_set_label_fill;
  auto label_fill_to_c = label_fill;
  call_wrap_v ((::GtkExpander*) (gobj_()), (gboolean) (label_fill_to_c));
}

// void gtk_expander_set_label_widget (GtkExpander* expander, GtkWidget* label_widget);
// void gtk_expander_set_label_widget (::GtkExpander* expander, ::GtkWidget* label_widget);
void base::ExpanderBase::set_label_widget (Gtk::Widget label_widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkExpander* expander, ::GtkWidget* label_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_set_label_widget;
  auto label_widget_to_c = gi::unwrap (label_widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkExpander*) (gobj_()), (::GtkWidget*) (label_widget_to_c));
}
void base::ExpanderBase::set_label_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkExpander* expander, ::GtkWidget* label_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_set_label_widget;
  auto label_widget_to_c = nullptr;
  call_wrap_v ((::GtkExpander*) (gobj_()), (::GtkWidget*) (label_widget_to_c));
}

// void gtk_expander_set_resize_toplevel (GtkExpander* expander, gboolean resize_toplevel);
// void gtk_expander_set_resize_toplevel (::GtkExpander* expander, gboolean resize_toplevel);
void base::ExpanderBase::set_resize_toplevel (gboolean resize_toplevel) noexcept
{
  typedef void (*call_wrap_t) (::GtkExpander* expander, gboolean resize_toplevel);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_set_resize_toplevel;
  auto resize_toplevel_to_c = resize_toplevel;
  call_wrap_v ((::GtkExpander*) (gobj_()), (gboolean) (resize_toplevel_to_c));
}

// void gtk_expander_set_spacing (GtkExpander* expander, gint spacing);
// void gtk_expander_set_spacing (::GtkExpander* expander, gint spacing);
// IGNORE; deprecated

// void gtk_expander_set_use_markup (GtkExpander* expander, gboolean use_markup);
// void gtk_expander_set_use_markup (::GtkExpander* expander, gboolean use_markup);
void base::ExpanderBase::set_use_markup (gboolean use_markup) noexcept
{
  typedef void (*call_wrap_t) (::GtkExpander* expander, gboolean use_markup);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_set_use_markup;
  auto use_markup_to_c = use_markup;
  call_wrap_v ((::GtkExpander*) (gobj_()), (gboolean) (use_markup_to_c));
}

// void gtk_expander_set_use_underline (GtkExpander* expander, gboolean use_underline);
// void gtk_expander_set_use_underline (::GtkExpander* expander, gboolean use_underline);
void base::ExpanderBase::set_use_underline (gboolean use_underline) noexcept
{
  typedef void (*call_wrap_t) (::GtkExpander* expander, gboolean use_underline);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_expander_set_use_underline;
  auto use_underline_to_c = use_underline;
  call_wrap_v ((::GtkExpander*) (gobj_()), (gboolean) (use_underline_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/expander_extra_def_impl.hpp>)
#include <gtk/expander_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/expander_extra_impl.hpp>)
#include <gtk/expander_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ExpanderClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkExpanderClass *methods = (::GtkExpanderClass *) class_struct;
  (void) methods;

  methods->activate = (decltype (methods->activate)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::activate_>;
}

// void Expander::activate (GtkExpander* expander);
// void Expander::activate (::GtkExpander* expander);
void ExpanderClass::activate_ () noexcept
{
  if (!get_struct_()->activate) return ;
  typedef void (*call_wrap_t) (::GtkExpander* expander);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  call_wrap_v ((::GtkExpander*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
