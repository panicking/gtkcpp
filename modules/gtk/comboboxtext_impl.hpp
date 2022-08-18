// AUTO-GENERATED

#ifndef _GI_GTK_COMBOBOXTEXT_IMPL_HPP_
#define _GI_GTK_COMBOBOXTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_combo_box_text_new ();
// ::GtkComboBoxText* gtk_combo_box_text_new ();
Gtk::ComboBoxText base::ComboBoxTextBase::new_ () noexcept
{
  typedef ::GtkComboBoxText* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_text_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_combo_box_text_new_with_entry ();
// ::GtkComboBoxText* gtk_combo_box_text_new_with_entry ();
Gtk::ComboBoxText base::ComboBoxTextBase::new_with_entry () noexcept
{
  typedef ::GtkComboBoxText* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_text_new_with_entry;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_combo_box_text_append (GtkComboBoxText* combo_box, const gchar* id, const gchar* text);
// void gtk_combo_box_text_append (::GtkComboBoxText* combo_box, const char* id, const char* text);
void base::ComboBoxTextBase::append (const std::string & id, const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBoxText* combo_box, const char* id, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_text_append;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto id_to_c = gi::unwrap (id, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkComboBoxText*) (gobj_()), (const char*) (id_to_c), (const char*) (text_to_c));
}
void base::ComboBoxTextBase::append (const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBoxText* combo_box, const char* id, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_text_append;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto id_to_c = nullptr;
  call_wrap_v ((::GtkComboBoxText*) (gobj_()), (const char*) (id_to_c), (const char*) (text_to_c));
}

// void gtk_combo_box_text_append_text (GtkComboBoxText* combo_box, const gchar* text);
// void gtk_combo_box_text_append_text (::GtkComboBoxText* combo_box, const char* text);
void base::ComboBoxTextBase::append_text (const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBoxText* combo_box, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_text_append_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkComboBoxText*) (gobj_()), (const char*) (text_to_c));
}

// gchar* gtk_combo_box_text_get_active_text (GtkComboBoxText* combo_box);
// char* gtk_combo_box_text_get_active_text (::GtkComboBoxText* combo_box);
std::string base::ComboBoxTextBase::get_active_text () noexcept
{
  typedef char* (*call_wrap_t) (::GtkComboBoxText* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_text_get_active_text;
  auto _temp_ret = call_wrap_v ((::GtkComboBoxText*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_combo_box_text_insert (GtkComboBoxText* combo_box, gint position, const gchar* id, const gchar* text);
// void gtk_combo_box_text_insert (::GtkComboBoxText* combo_box, gint position, const char* id, const char* text);
void base::ComboBoxTextBase::insert (gint position, const std::string & id, const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBoxText* combo_box, gint position, const char* id, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_text_insert;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto id_to_c = gi::unwrap (id, gi::transfer_none, gi::direction_in);
  auto position_to_c = position;
  call_wrap_v ((::GtkComboBoxText*) (gobj_()), (gint) (position_to_c), (const char*) (id_to_c), (const char*) (text_to_c));
}
void base::ComboBoxTextBase::insert (gint position, const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBoxText* combo_box, gint position, const char* id, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_text_insert;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto id_to_c = nullptr;
  auto position_to_c = position;
  call_wrap_v ((::GtkComboBoxText*) (gobj_()), (gint) (position_to_c), (const char*) (id_to_c), (const char*) (text_to_c));
}

// void gtk_combo_box_text_insert_text (GtkComboBoxText* combo_box, gint position, const gchar* text);
// void gtk_combo_box_text_insert_text (::GtkComboBoxText* combo_box, gint position, const char* text);
void base::ComboBoxTextBase::insert_text (gint position, const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBoxText* combo_box, gint position, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_text_insert_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto position_to_c = position;
  call_wrap_v ((::GtkComboBoxText*) (gobj_()), (gint) (position_to_c), (const char*) (text_to_c));
}

// void gtk_combo_box_text_prepend (GtkComboBoxText* combo_box, const gchar* id, const gchar* text);
// void gtk_combo_box_text_prepend (::GtkComboBoxText* combo_box, const char* id, const char* text);
void base::ComboBoxTextBase::prepend (const std::string & id, const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBoxText* combo_box, const char* id, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_text_prepend;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto id_to_c = gi::unwrap (id, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkComboBoxText*) (gobj_()), (const char*) (id_to_c), (const char*) (text_to_c));
}
void base::ComboBoxTextBase::prepend (const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBoxText* combo_box, const char* id, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_text_prepend;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto id_to_c = nullptr;
  call_wrap_v ((::GtkComboBoxText*) (gobj_()), (const char*) (id_to_c), (const char*) (text_to_c));
}

// void gtk_combo_box_text_prepend_text (GtkComboBoxText* combo_box, const gchar* text);
// void gtk_combo_box_text_prepend_text (::GtkComboBoxText* combo_box, const char* text);
void base::ComboBoxTextBase::prepend_text (const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBoxText* combo_box, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_text_prepend_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkComboBoxText*) (gobj_()), (const char*) (text_to_c));
}

// void gtk_combo_box_text_remove (GtkComboBoxText* combo_box, gint position);
// void gtk_combo_box_text_remove (::GtkComboBoxText* combo_box, gint position);
void base::ComboBoxTextBase::remove (gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBoxText* combo_box, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_text_remove;
  auto position_to_c = position;
  call_wrap_v ((::GtkComboBoxText*) (gobj_()), (gint) (position_to_c));
}

// void gtk_combo_box_text_remove_all (GtkComboBoxText* combo_box);
// void gtk_combo_box_text_remove_all (::GtkComboBoxText* combo_box);
void base::ComboBoxTextBase::remove_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkComboBoxText* combo_box);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_combo_box_text_remove_all;
  call_wrap_v ((::GtkComboBoxText*) (gobj_()));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/comboboxtext_extra_def_impl.hpp>)
#include <gtk/comboboxtext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/comboboxtext_extra_impl.hpp>)
#include <gtk/comboboxtext_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ComboBoxTextClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkComboBoxTextClass *methods = (::GtkComboBoxTextClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
