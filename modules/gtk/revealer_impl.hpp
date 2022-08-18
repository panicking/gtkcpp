// AUTO-GENERATED

#ifndef _GI_GTK_REVEALER_IMPL_HPP_
#define _GI_GTK_REVEALER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_revealer_new ();
// ::GtkRevealer* gtk_revealer_new ();
Gtk::Revealer base::RevealerBase::new_ () noexcept
{
  typedef ::GtkRevealer* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_revealer_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_revealer_get_child_revealed (GtkRevealer* revealer);
// gboolean gtk_revealer_get_child_revealed (::GtkRevealer* revealer);
bool base::RevealerBase::get_child_revealed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRevealer* revealer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_revealer_get_child_revealed;
  auto _temp_ret = call_wrap_v ((::GtkRevealer*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_revealer_get_reveal_child (GtkRevealer* revealer);
// gboolean gtk_revealer_get_reveal_child (::GtkRevealer* revealer);
bool base::RevealerBase::get_reveal_child () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRevealer* revealer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_revealer_get_reveal_child;
  auto _temp_ret = call_wrap_v ((::GtkRevealer*) (gobj_()));
  return _temp_ret;
}

// guint gtk_revealer_get_transition_duration (GtkRevealer* revealer);
// guint gtk_revealer_get_transition_duration (::GtkRevealer* revealer);
guint base::RevealerBase::get_transition_duration () noexcept
{
  typedef guint (*call_wrap_t) (::GtkRevealer* revealer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_revealer_get_transition_duration;
  auto _temp_ret = call_wrap_v ((::GtkRevealer*) (gobj_()));
  return _temp_ret;
}

// GtkRevealerTransitionType gtk_revealer_get_transition_type (GtkRevealer* revealer);
// ::GtkRevealerTransitionType gtk_revealer_get_transition_type (::GtkRevealer* revealer);
Gtk::RevealerTransitionType base::RevealerBase::get_transition_type () noexcept
{
  typedef ::GtkRevealerTransitionType (*call_wrap_t) (::GtkRevealer* revealer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_revealer_get_transition_type;
  auto _temp_ret = call_wrap_v ((::GtkRevealer*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_revealer_set_reveal_child (GtkRevealer* revealer, gboolean reveal_child);
// void gtk_revealer_set_reveal_child (::GtkRevealer* revealer, gboolean reveal_child);
void base::RevealerBase::set_reveal_child (gboolean reveal_child) noexcept
{
  typedef void (*call_wrap_t) (::GtkRevealer* revealer, gboolean reveal_child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_revealer_set_reveal_child;
  auto reveal_child_to_c = reveal_child;
  call_wrap_v ((::GtkRevealer*) (gobj_()), (gboolean) (reveal_child_to_c));
}

// void gtk_revealer_set_transition_duration (GtkRevealer* revealer, guint duration);
// void gtk_revealer_set_transition_duration (::GtkRevealer* revealer, guint duration);
void base::RevealerBase::set_transition_duration (guint duration) noexcept
{
  typedef void (*call_wrap_t) (::GtkRevealer* revealer, guint duration);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_revealer_set_transition_duration;
  auto duration_to_c = duration;
  call_wrap_v ((::GtkRevealer*) (gobj_()), (guint) (duration_to_c));
}

// void gtk_revealer_set_transition_type (GtkRevealer* revealer, GtkRevealerTransitionType transition);
// void gtk_revealer_set_transition_type (::GtkRevealer* revealer, ::GtkRevealerTransitionType transition);
void base::RevealerBase::set_transition_type (Gtk::RevealerTransitionType transition) noexcept
{
  typedef void (*call_wrap_t) (::GtkRevealer* revealer, ::GtkRevealerTransitionType transition);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_revealer_set_transition_type;
  auto transition_to_c = gi::unwrap (transition);
  call_wrap_v ((::GtkRevealer*) (gobj_()), (::GtkRevealerTransitionType) (transition_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/revealer_extra_def_impl.hpp>)
#include <gtk/revealer_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/revealer_extra_impl.hpp>)
#include <gtk/revealer_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void RevealerClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkRevealerClass *methods = (::GtkRevealerClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
