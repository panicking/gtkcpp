// AUTO-GENERATED

#ifndef _GI_GTK_ASSISTANT_IMPL_HPP_
#define _GI_GTK_ASSISTANT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_assistant_new ();
// ::GtkAssistant* gtk_assistant_new ();
Gtk::Assistant base::AssistantBase::new_ () noexcept
{
  typedef ::GtkAssistant* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_assistant_add_action_widget (GtkAssistant* assistant, GtkWidget* child);
// void gtk_assistant_add_action_widget (::GtkAssistant* assistant, ::GtkWidget* child);
void base::AssistantBase::add_action_widget (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_add_action_widget;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// gint gtk_assistant_append_page (GtkAssistant* assistant, GtkWidget* page);
// gint gtk_assistant_append_page (::GtkAssistant* assistant, ::GtkWidget* page);
gint base::AssistantBase::append_page (Gtk::Widget page) noexcept
{
  typedef gint (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_append_page;
  auto page_to_c = gi::unwrap (page, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c));
  return _temp_ret;
}

// void gtk_assistant_commit (GtkAssistant* assistant);
// void gtk_assistant_commit (::GtkAssistant* assistant);
void base::AssistantBase::commit () noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_commit;
  call_wrap_v ((::GtkAssistant*) (gobj_()));
}

// gint gtk_assistant_get_current_page (GtkAssistant* assistant);
// gint gtk_assistant_get_current_page (::GtkAssistant* assistant);
gint base::AssistantBase::get_current_page () noexcept
{
  typedef gint (*call_wrap_t) (::GtkAssistant* assistant);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_get_current_page;
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()));
  return _temp_ret;
}

// gint gtk_assistant_get_n_pages (GtkAssistant* assistant);
// gint gtk_assistant_get_n_pages (::GtkAssistant* assistant);
gint base::AssistantBase::get_n_pages () noexcept
{
  typedef gint (*call_wrap_t) (::GtkAssistant* assistant);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_get_n_pages;
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* gtk_assistant_get_nth_page (GtkAssistant* assistant, gint page_num);
// ::GtkWidget* gtk_assistant_get_nth_page (::GtkAssistant* assistant, gint page_num);
Gtk::Widget base::AssistantBase::get_nth_page (gint page_num) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkAssistant* assistant, gint page_num);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_get_nth_page;
  auto page_num_to_c = page_num;
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()), (gint) (page_num_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_assistant_get_page_complete (GtkAssistant* assistant, GtkWidget* page);
// gboolean gtk_assistant_get_page_complete (::GtkAssistant* assistant, ::GtkWidget* page);
bool base::AssistantBase::get_page_complete (Gtk::Widget page) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_get_page_complete;
  auto page_to_c = gi::unwrap (page, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c));
  return _temp_ret;
}

// gboolean gtk_assistant_get_page_has_padding (GtkAssistant* assistant, GtkWidget* page);
// gboolean gtk_assistant_get_page_has_padding (::GtkAssistant* assistant, ::GtkWidget* page);
bool base::AssistantBase::get_page_has_padding (Gtk::Widget page) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_get_page_has_padding;
  auto page_to_c = gi::unwrap (page, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c));
  return _temp_ret;
}

// GdkPixbuf* gtk_assistant_get_page_header_image (GtkAssistant* assistant, GtkWidget* page);
// ::GdkPixbuf* gtk_assistant_get_page_header_image (::GtkAssistant* assistant, ::GtkWidget* page);
// IGNORE; deprecated

// GdkPixbuf* gtk_assistant_get_page_side_image (GtkAssistant* assistant, GtkWidget* page);
// ::GdkPixbuf* gtk_assistant_get_page_side_image (::GtkAssistant* assistant, ::GtkWidget* page);
// IGNORE; deprecated

// const gchar* gtk_assistant_get_page_title (GtkAssistant* assistant, GtkWidget* page);
// const char* gtk_assistant_get_page_title (::GtkAssistant* assistant, ::GtkWidget* page);
std::string base::AssistantBase::get_page_title (Gtk::Widget page) noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_get_page_title;
  auto page_to_c = gi::unwrap (page, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkAssistantPageType gtk_assistant_get_page_type (GtkAssistant* assistant, GtkWidget* page);
// ::GtkAssistantPageType gtk_assistant_get_page_type (::GtkAssistant* assistant, ::GtkWidget* page);
Gtk::AssistantPageType base::AssistantBase::get_page_type (Gtk::Widget page) noexcept
{
  typedef ::GtkAssistantPageType (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_get_page_type;
  auto page_to_c = gi::unwrap (page, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c));
  return gi::wrap (_temp_ret);
}

// gint gtk_assistant_insert_page (GtkAssistant* assistant, GtkWidget* page, gint position);
// gint gtk_assistant_insert_page (::GtkAssistant* assistant, ::GtkWidget* page, gint position);
gint base::AssistantBase::insert_page (Gtk::Widget page, gint position) noexcept
{
  typedef gint (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_insert_page;
  auto position_to_c = position;
  auto page_to_c = gi::unwrap (page, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c), (gint) (position_to_c));
  return _temp_ret;
}

// void gtk_assistant_next_page (GtkAssistant* assistant);
// void gtk_assistant_next_page (::GtkAssistant* assistant);
void base::AssistantBase::next_page () noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_next_page;
  call_wrap_v ((::GtkAssistant*) (gobj_()));
}

// gint gtk_assistant_prepend_page (GtkAssistant* assistant, GtkWidget* page);
// gint gtk_assistant_prepend_page (::GtkAssistant* assistant, ::GtkWidget* page);
gint base::AssistantBase::prepend_page (Gtk::Widget page) noexcept
{
  typedef gint (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_prepend_page;
  auto page_to_c = gi::unwrap (page, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c));
  return _temp_ret;
}

// void gtk_assistant_previous_page (GtkAssistant* assistant);
// void gtk_assistant_previous_page (::GtkAssistant* assistant);
void base::AssistantBase::previous_page () noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_previous_page;
  call_wrap_v ((::GtkAssistant*) (gobj_()));
}

// void gtk_assistant_remove_action_widget (GtkAssistant* assistant, GtkWidget* child);
// void gtk_assistant_remove_action_widget (::GtkAssistant* assistant, ::GtkWidget* child);
void base::AssistantBase::remove_action_widget (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_remove_action_widget;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_assistant_remove_page (GtkAssistant* assistant, gint page_num);
// void gtk_assistant_remove_page (::GtkAssistant* assistant, gint page_num);
void base::AssistantBase::remove_page (gint page_num) noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant, gint page_num);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_remove_page;
  auto page_num_to_c = page_num;
  call_wrap_v ((::GtkAssistant*) (gobj_()), (gint) (page_num_to_c));
}

// void gtk_assistant_set_current_page (GtkAssistant* assistant, gint page_num);
// void gtk_assistant_set_current_page (::GtkAssistant* assistant, gint page_num);
void base::AssistantBase::set_current_page (gint page_num) noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant, gint page_num);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_set_current_page;
  auto page_num_to_c = page_num;
  call_wrap_v ((::GtkAssistant*) (gobj_()), (gint) (page_num_to_c));
}

// void gtk_assistant_set_forward_page_func (GtkAssistant* assistant, GtkAssistantPageFunc page_func, gpointer data, GDestroyNotify destroy);
// void gtk_assistant_set_forward_page_func (::GtkAssistant* assistant, Gtk::AssistantPageFunc::cfunction_type page_func, void* data, GLib::DestroyNotify::cfunction_type destroy);
void base::AssistantBase::set_forward_page_func (Gtk::AssistantPageFunc page_func) noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant, Gtk::AssistantPageFunc::cfunction_type page_func, void* data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_set_forward_page_func;
  auto page_func_wrap_ = page_func ? unwrap (std::move (page_func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkAssistant*) (gobj_()), (Gtk::AssistantPageFunc::cfunction_type) (page_func_wrap_ ? &page_func_wrap_->wrapper : nullptr), (void*) (page_func_wrap_), (GLib::DestroyNotify::cfunction_type) (page_func_wrap_ ? &page_func_wrap_->destroy : nullptr));
}

// void gtk_assistant_set_page_complete (GtkAssistant* assistant, GtkWidget* page, gboolean complete);
// void gtk_assistant_set_page_complete (::GtkAssistant* assistant, ::GtkWidget* page, gboolean complete);
void base::AssistantBase::set_page_complete (Gtk::Widget page, gboolean complete) noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page, gboolean complete);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_set_page_complete;
  auto complete_to_c = complete;
  auto page_to_c = gi::unwrap (page, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c), (gboolean) (complete_to_c));
}

// void gtk_assistant_set_page_has_padding (GtkAssistant* assistant, GtkWidget* page, gboolean has_padding);
// void gtk_assistant_set_page_has_padding (::GtkAssistant* assistant, ::GtkWidget* page, gboolean has_padding);
void base::AssistantBase::set_page_has_padding (Gtk::Widget page, gboolean has_padding) noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page, gboolean has_padding);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_set_page_has_padding;
  auto has_padding_to_c = has_padding;
  auto page_to_c = gi::unwrap (page, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c), (gboolean) (has_padding_to_c));
}

// void gtk_assistant_set_page_header_image (GtkAssistant* assistant, GtkWidget* page, GdkPixbuf* pixbuf);
// void gtk_assistant_set_page_header_image (::GtkAssistant* assistant, ::GtkWidget* page, ::GdkPixbuf* pixbuf);
// IGNORE; deprecated

// void gtk_assistant_set_page_side_image (GtkAssistant* assistant, GtkWidget* page, GdkPixbuf* pixbuf);
// void gtk_assistant_set_page_side_image (::GtkAssistant* assistant, ::GtkWidget* page, ::GdkPixbuf* pixbuf);
// IGNORE; deprecated

// void gtk_assistant_set_page_title (GtkAssistant* assistant, GtkWidget* page, const gchar* title);
// void gtk_assistant_set_page_title (::GtkAssistant* assistant, ::GtkWidget* page, const char* title);
void base::AssistantBase::set_page_title (Gtk::Widget page, const std::string & title) noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_set_page_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none, gi::direction_in);
  auto page_to_c = gi::unwrap (page, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c), (const char*) (title_to_c));
}

// void gtk_assistant_set_page_type (GtkAssistant* assistant, GtkWidget* page, GtkAssistantPageType type);
// void gtk_assistant_set_page_type (::GtkAssistant* assistant, ::GtkWidget* page, ::GtkAssistantPageType type);
void base::AssistantBase::set_page_type (Gtk::Widget page, Gtk::AssistantPageType type) noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page, ::GtkAssistantPageType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_set_page_type;
  auto type_to_c = gi::unwrap (type);
  auto page_to_c = gi::unwrap (page, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c), (::GtkAssistantPageType) (type_to_c));
}

// void gtk_assistant_update_buttons_state (GtkAssistant* assistant);
// void gtk_assistant_update_buttons_state (::GtkAssistant* assistant);
void base::AssistantBase::update_buttons_state () noexcept
{
  typedef void (*call_wrap_t) (::GtkAssistant* assistant);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_assistant_update_buttons_state;
  call_wrap_v ((::GtkAssistant*) (gobj_()));
}







} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/assistant_extra_def_impl.hpp>)
#include <gtk/assistant_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/assistant_extra_impl.hpp>)
#include <gtk/assistant_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void AssistantClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkAssistantClass *methods = (::GtkAssistantClass *) class_struct;
  (void) methods;

  methods->apply = (decltype (methods->apply)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::apply_>;
  methods->cancel = (decltype (methods->cancel)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::cancel_>;
  methods->close = (decltype (methods->close)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::close_>;
  methods->prepare = (decltype (methods->prepare)) detail::method_wrapper<self, void (*) (Gtk::Widget page), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::prepare_>;
}

// void Assistant::apply (GtkAssistant* assistant);
// void Assistant::apply (::GtkAssistant* assistant);
void AssistantClass::apply_ () noexcept
{
  if (!get_struct_()->apply) return ;
  typedef void (*call_wrap_t) (::GtkAssistant* assistant);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->apply;
  call_wrap_v ((::GtkAssistant*) (gobj_()));
}

// void Assistant::cancel (GtkAssistant* assistant);
// void Assistant::cancel (::GtkAssistant* assistant);
void AssistantClass::cancel_ () noexcept
{
  if (!get_struct_()->cancel) return ;
  typedef void (*call_wrap_t) (::GtkAssistant* assistant);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->cancel;
  call_wrap_v ((::GtkAssistant*) (gobj_()));
}

// void Assistant::close (GtkAssistant* assistant);
// void Assistant::close (::GtkAssistant* assistant);
void AssistantClass::close_ () noexcept
{
  if (!get_struct_()->close) return ;
  typedef void (*call_wrap_t) (::GtkAssistant* assistant);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->close;
  call_wrap_v ((::GtkAssistant*) (gobj_()));
}

// void Assistant::prepare (GtkAssistant* assistant, GtkWidget* page);
// void Assistant::prepare (::GtkAssistant* assistant, ::GtkWidget* page);
void AssistantClass::prepare_ (Gtk::Widget page) noexcept
{
  if (!get_struct_()->prepare) return ;
  typedef void (*call_wrap_t) (::GtkAssistant* assistant, ::GtkWidget* page);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->prepare;
  auto page_to_c = gi::unwrap (page, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAssistant*) (gobj_()), (::GtkWidget*) (page_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
