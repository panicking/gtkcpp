// AUTO-GENERATED

#ifndef _GI_GTK_STATUSBAR_IMPL_HPP_
#define _GI_GTK_STATUSBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_statusbar_new ();
// ::GtkStatusbar* gtk_statusbar_new ();
Gtk::Statusbar base::StatusbarBase::new_ () noexcept
{
  typedef ::GtkStatusbar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_statusbar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint gtk_statusbar_get_context_id (GtkStatusbar* statusbar, const gchar* context_description);
// guint gtk_statusbar_get_context_id (::GtkStatusbar* statusbar, const char* context_description);
guint base::StatusbarBase::get_context_id (const std::string & context_description) noexcept
{
  typedef guint (*call_wrap_t) (::GtkStatusbar* statusbar, const char* context_description);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_statusbar_get_context_id;
  auto context_description_to_c = gi::unwrap (context_description, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkStatusbar*) (gobj_()), (const char*) (context_description_to_c));
  return _temp_ret;
}

// GtkWidget* gtk_statusbar_get_message_area (GtkStatusbar* statusbar);
// ::GtkBox* gtk_statusbar_get_message_area (::GtkStatusbar* statusbar);
Gtk::Box base::StatusbarBase::get_message_area () noexcept
{
  typedef ::GtkBox* (*call_wrap_t) (::GtkStatusbar* statusbar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_statusbar_get_message_area;
  auto _temp_ret = call_wrap_v ((::GtkStatusbar*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_statusbar_pop (GtkStatusbar* statusbar, guint context_id);
// void gtk_statusbar_pop (::GtkStatusbar* statusbar, guint context_id);
void base::StatusbarBase::pop (guint context_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkStatusbar* statusbar, guint context_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_statusbar_pop;
  auto context_id_to_c = context_id;
  call_wrap_v ((::GtkStatusbar*) (gobj_()), (guint) (context_id_to_c));
}

// guint gtk_statusbar_push (GtkStatusbar* statusbar, guint context_id, const gchar* text);
// guint gtk_statusbar_push (::GtkStatusbar* statusbar, guint context_id, const char* text);
guint base::StatusbarBase::push (guint context_id, const std::string & text) noexcept
{
  typedef guint (*call_wrap_t) (::GtkStatusbar* statusbar, guint context_id, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_statusbar_push;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto context_id_to_c = context_id;
  auto _temp_ret = call_wrap_v ((::GtkStatusbar*) (gobj_()), (guint) (context_id_to_c), (const char*) (text_to_c));
  return _temp_ret;
}

// void gtk_statusbar_remove (GtkStatusbar* statusbar, guint context_id, guint message_id);
// void gtk_statusbar_remove (::GtkStatusbar* statusbar, guint context_id, guint message_id);
void base::StatusbarBase::remove (guint context_id, guint message_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkStatusbar* statusbar, guint context_id, guint message_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_statusbar_remove;
  auto message_id_to_c = message_id;
  auto context_id_to_c = context_id;
  call_wrap_v ((::GtkStatusbar*) (gobj_()), (guint) (context_id_to_c), (guint) (message_id_to_c));
}

// void gtk_statusbar_remove_all (GtkStatusbar* statusbar, guint context_id);
// void gtk_statusbar_remove_all (::GtkStatusbar* statusbar, guint context_id);
void base::StatusbarBase::remove_all (guint context_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkStatusbar* statusbar, guint context_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_statusbar_remove_all;
  auto context_id_to_c = context_id;
  call_wrap_v ((::GtkStatusbar*) (gobj_()), (guint) (context_id_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/statusbar_extra_def_impl.hpp>)
#include <gtk/statusbar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/statusbar_extra_impl.hpp>)
#include <gtk/statusbar_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void StatusbarClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkStatusbarClass *methods = (::GtkStatusbarClass *) class_struct;
  (void) methods;

  methods->text_popped = (decltype (methods->text_popped)) detail::method_wrapper<self, void (*) (guint context_id, const std::string & text), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::text_popped_>;
  methods->text_pushed = (decltype (methods->text_pushed)) detail::method_wrapper<self, void (*) (guint context_id, const std::string & text), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::text_pushed_>;
}

// void Statusbar::text_popped (GtkStatusbar* statusbar, guint context_id, const gchar* text);
// void Statusbar::text_popped (::GtkStatusbar* statusbar, guint context_id, const char* text);
void StatusbarClass::text_popped_ (guint context_id, const std::string & text) noexcept
{
  if (!get_struct_()->text_popped) return ;
  typedef void (*call_wrap_t) (::GtkStatusbar* statusbar, guint context_id, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->text_popped;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto context_id_to_c = context_id;
  call_wrap_v ((::GtkStatusbar*) (gobj_()), (guint) (context_id_to_c), (const char*) (text_to_c));
}

// void Statusbar::text_pushed (GtkStatusbar* statusbar, guint context_id, const gchar* text);
// void Statusbar::text_pushed (::GtkStatusbar* statusbar, guint context_id, const char* text);
void StatusbarClass::text_pushed_ (guint context_id, const std::string & text) noexcept
{
  if (!get_struct_()->text_pushed) return ;
  typedef void (*call_wrap_t) (::GtkStatusbar* statusbar, guint context_id, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->text_pushed;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto context_id_to_c = context_id;
  call_wrap_v ((::GtkStatusbar*) (gobj_()), (guint) (context_id_to_c), (const char*) (text_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
