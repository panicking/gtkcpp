// AUTO-GENERATED

#ifndef _GI_GTK_LINKBUTTON_IMPL_HPP_
#define _GI_GTK_LINKBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_link_button_new (const gchar* uri);
// ::GtkLinkButton* gtk_link_button_new (const char* uri);
Gtk::LinkButton base::LinkButtonBase::new_ (const std::string & uri) noexcept
{
  typedef ::GtkLinkButton* (*call_wrap_t) (const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_link_button_new;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_link_button_new_with_label (const gchar* uri, const gchar* label);
// ::GtkLinkButton* gtk_link_button_new_with_label (const char* uri, const char* label);
Gtk::LinkButton base::LinkButtonBase::new_with_label (const std::string & uri, const std::string & label) noexcept
{
  typedef ::GtkLinkButton* (*call_wrap_t) (const char* uri, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_link_button_new_with_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::LinkButton base::LinkButtonBase::new_with_label (const std::string & uri) noexcept
{
  typedef ::GtkLinkButton* (*call_wrap_t) (const char* uri, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_link_button_new_with_label;
  auto label_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_link_button_get_uri (GtkLinkButton* link_button);
// const char* gtk_link_button_get_uri (::GtkLinkButton* link_button);
std::string base::LinkButtonBase::get_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkLinkButton* link_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_link_button_get_uri;
  auto _temp_ret = call_wrap_v ((::GtkLinkButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_link_button_get_visited (GtkLinkButton* link_button);
// gboolean gtk_link_button_get_visited (::GtkLinkButton* link_button);
bool base::LinkButtonBase::get_visited () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLinkButton* link_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_link_button_get_visited;
  auto _temp_ret = call_wrap_v ((::GtkLinkButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_link_button_set_uri (GtkLinkButton* link_button, const gchar* uri);
// void gtk_link_button_set_uri (::GtkLinkButton* link_button, const char* uri);
void base::LinkButtonBase::set_uri (const std::string & uri) noexcept
{
  typedef void (*call_wrap_t) (::GtkLinkButton* link_button, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_link_button_set_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkLinkButton*) (gobj_()), (const char*) (uri_to_c));
}

// void gtk_link_button_set_visited (GtkLinkButton* link_button, gboolean visited);
// void gtk_link_button_set_visited (::GtkLinkButton* link_button, gboolean visited);
void base::LinkButtonBase::set_visited (gboolean visited) noexcept
{
  typedef void (*call_wrap_t) (::GtkLinkButton* link_button, gboolean visited);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_link_button_set_visited;
  auto visited_to_c = visited;
  call_wrap_v ((::GtkLinkButton*) (gobj_()), (gboolean) (visited_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/linkbutton_extra_def_impl.hpp>)
#include <gtk/linkbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/linkbutton_extra_impl.hpp>)
#include <gtk/linkbutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void LinkButtonClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkLinkButtonClass *methods = (::GtkLinkButtonClass *) class_struct;
  (void) methods;

  methods->activate_link = (decltype (methods->activate_link)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::activate_link_>;
}

// gboolean LinkButton::activate_link (GtkLinkButton* button);
// gboolean LinkButton::activate_link (::GtkLinkButton* button);
bool LinkButtonClass::activate_link_ () noexcept
{
  if (!get_struct_()->activate_link) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkLinkButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate_link;
  auto _temp_ret = call_wrap_v ((::GtkLinkButton*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
