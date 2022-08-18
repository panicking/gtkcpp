// AUTO-GENERATED

#ifndef _GI_GTK_ENTRYBUFFER_IMPL_HPP_
#define _GI_GTK_ENTRYBUFFER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkEntryBuffer* gtk_entry_buffer_new (const gchar* initial_chars, gint n_initial_chars);
// ::GtkEntryBuffer* gtk_entry_buffer_new (const char* initial_chars, gint n_initial_chars);
Gtk::EntryBuffer base::EntryBufferBase::new_ (const std::string & initial_chars, gint n_initial_chars) noexcept
{
  typedef ::GtkEntryBuffer* (*call_wrap_t) (const char* initial_chars, gint n_initial_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_buffer_new;
  auto n_initial_chars_to_c = n_initial_chars;
  auto initial_chars_to_c = gi::unwrap (initial_chars, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (initial_chars_to_c), (gint) (n_initial_chars_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gtk::EntryBuffer base::EntryBufferBase::new_ (gint n_initial_chars) noexcept
{
  typedef ::GtkEntryBuffer* (*call_wrap_t) (const char* initial_chars, gint n_initial_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_buffer_new;
  auto n_initial_chars_to_c = n_initial_chars;
  auto initial_chars_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (initial_chars_to_c), (gint) (n_initial_chars_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// guint gtk_entry_buffer_delete_text (GtkEntryBuffer* buffer, guint position, gint n_chars);
// guint gtk_entry_buffer_delete_text (::GtkEntryBuffer* buffer, guint position, gint n_chars);
guint base::EntryBufferBase::delete_text (guint position, gint n_chars) noexcept
{
  typedef guint (*call_wrap_t) (::GtkEntryBuffer* buffer, guint position, gint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_buffer_delete_text;
  auto n_chars_to_c = n_chars;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkEntryBuffer*) (gobj_()), (guint) (position_to_c), (gint) (n_chars_to_c));
  return _temp_ret;
}

// void gtk_entry_buffer_emit_deleted_text (GtkEntryBuffer* buffer, guint position, guint n_chars);
// void gtk_entry_buffer_emit_deleted_text (::GtkEntryBuffer* buffer, guint position, guint n_chars);
void base::EntryBufferBase::emit_deleted_text (guint position, guint n_chars) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryBuffer* buffer, guint position, guint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_buffer_emit_deleted_text;
  auto n_chars_to_c = n_chars;
  auto position_to_c = position;
  call_wrap_v ((::GtkEntryBuffer*) (gobj_()), (guint) (position_to_c), (guint) (n_chars_to_c));
}

// void gtk_entry_buffer_emit_inserted_text (GtkEntryBuffer* buffer, guint position, const gchar* chars, guint n_chars);
// void gtk_entry_buffer_emit_inserted_text (::GtkEntryBuffer* buffer, guint position, const char* chars, guint n_chars);
void base::EntryBufferBase::emit_inserted_text (guint position, const std::string & chars, guint n_chars) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryBuffer* buffer, guint position, const char* chars, guint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_buffer_emit_inserted_text;
  auto n_chars_to_c = n_chars;
  auto chars_to_c = gi::unwrap (chars, gi::transfer_none, gi::direction_in);
  auto position_to_c = position;
  call_wrap_v ((::GtkEntryBuffer*) (gobj_()), (guint) (position_to_c), (const char*) (chars_to_c), (guint) (n_chars_to_c));
}

// gsize gtk_entry_buffer_get_bytes (GtkEntryBuffer* buffer);
// gsize gtk_entry_buffer_get_bytes (::GtkEntryBuffer* buffer);
gsize base::EntryBufferBase::get_bytes () noexcept
{
  typedef gsize (*call_wrap_t) (::GtkEntryBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_buffer_get_bytes;
  auto _temp_ret = call_wrap_v ((::GtkEntryBuffer*) (gobj_()));
  return _temp_ret;
}

// guint gtk_entry_buffer_get_length (GtkEntryBuffer* buffer);
// guint gtk_entry_buffer_get_length (::GtkEntryBuffer* buffer);
guint base::EntryBufferBase::get_length () noexcept
{
  typedef guint (*call_wrap_t) (::GtkEntryBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_buffer_get_length;
  auto _temp_ret = call_wrap_v ((::GtkEntryBuffer*) (gobj_()));
  return _temp_ret;
}

// gint gtk_entry_buffer_get_max_length (GtkEntryBuffer* buffer);
// gint gtk_entry_buffer_get_max_length (::GtkEntryBuffer* buffer);
gint base::EntryBufferBase::get_max_length () noexcept
{
  typedef gint (*call_wrap_t) (::GtkEntryBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_buffer_get_max_length;
  auto _temp_ret = call_wrap_v ((::GtkEntryBuffer*) (gobj_()));
  return _temp_ret;
}

// const gchar* gtk_entry_buffer_get_text (GtkEntryBuffer* buffer);
// const char* gtk_entry_buffer_get_text (::GtkEntryBuffer* buffer);
std::string base::EntryBufferBase::get_text () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkEntryBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_buffer_get_text;
  auto _temp_ret = call_wrap_v ((::GtkEntryBuffer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint gtk_entry_buffer_insert_text (GtkEntryBuffer* buffer, guint position, const gchar* chars, gint n_chars);
// guint gtk_entry_buffer_insert_text (::GtkEntryBuffer* buffer, guint position, const char* chars, gint n_chars);
guint base::EntryBufferBase::insert_text (guint position, const std::string & chars, gint n_chars) noexcept
{
  typedef guint (*call_wrap_t) (::GtkEntryBuffer* buffer, guint position, const char* chars, gint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_buffer_insert_text;
  auto n_chars_to_c = n_chars;
  auto chars_to_c = gi::unwrap (chars, gi::transfer_none, gi::direction_in);
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkEntryBuffer*) (gobj_()), (guint) (position_to_c), (const char*) (chars_to_c), (gint) (n_chars_to_c));
  return _temp_ret;
}

// void gtk_entry_buffer_set_max_length (GtkEntryBuffer* buffer, gint max_length);
// void gtk_entry_buffer_set_max_length (::GtkEntryBuffer* buffer, gint max_length);
void base::EntryBufferBase::set_max_length (gint max_length) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryBuffer* buffer, gint max_length);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_buffer_set_max_length;
  auto max_length_to_c = max_length;
  call_wrap_v ((::GtkEntryBuffer*) (gobj_()), (gint) (max_length_to_c));
}

// void gtk_entry_buffer_set_text (GtkEntryBuffer* buffer, const gchar* chars, gint n_chars);
// void gtk_entry_buffer_set_text (::GtkEntryBuffer* buffer, const char* chars, gint n_chars);
void base::EntryBufferBase::set_text (const std::string & chars, gint n_chars) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntryBuffer* buffer, const char* chars, gint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_buffer_set_text;
  auto n_chars_to_c = n_chars;
  auto chars_to_c = gi::unwrap (chars, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkEntryBuffer*) (gobj_()), (const char*) (chars_to_c), (gint) (n_chars_to_c));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/entrybuffer_extra_def_impl.hpp>)
#include <gtk/entrybuffer_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/entrybuffer_extra_impl.hpp>)
#include <gtk/entrybuffer_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void EntryBufferClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkEntryBufferClass *methods = (::GtkEntryBufferClass *) class_struct;
  (void) methods;

  methods->delete_text = (decltype (methods->delete_text)) detail::method_wrapper<self, guint (*) (guint position, guint n_chars), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::delete_text_>;
  methods->deleted_text = (decltype (methods->deleted_text)) detail::method_wrapper<self, void (*) (guint position, guint n_chars), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::deleted_text_>;
  methods->get_length = (decltype (methods->get_length)) detail::method_wrapper<self, guint (*) (), gi::transfer_none_t>::wrapper<&self::get_length_>;
  methods->insert_text = (decltype (methods->insert_text)) detail::method_wrapper<self, guint (*) (guint position, const std::string & chars, guint n_chars), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::insert_text_>;
  methods->inserted_text = (decltype (methods->inserted_text)) detail::method_wrapper<self, void (*) (guint position, const std::string & chars, guint n_chars), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::inserted_text_>;
}

// guint EntryBuffer::delete_text (GtkEntryBuffer* buffer, guint position, guint n_chars);
// guint EntryBuffer::delete_text (::GtkEntryBuffer* buffer, guint position, guint n_chars);
guint EntryBufferClass::delete_text_ (guint position, guint n_chars) noexcept
{
  if (!get_struct_()->delete_text) return guint{};
  typedef guint (*call_wrap_t) (::GtkEntryBuffer* buffer, guint position, guint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->delete_text;
  auto n_chars_to_c = n_chars;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkEntryBuffer*) (gobj_()), (guint) (position_to_c), (guint) (n_chars_to_c));
  return _temp_ret;
}

// void EntryBuffer::deleted_text (GtkEntryBuffer* buffer, guint position, guint n_chars);
// void EntryBuffer::deleted_text (::GtkEntryBuffer* buffer, guint position, guint n_chars);
void EntryBufferClass::deleted_text_ (guint position, guint n_chars) noexcept
{
  if (!get_struct_()->deleted_text) return ;
  typedef void (*call_wrap_t) (::GtkEntryBuffer* buffer, guint position, guint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->deleted_text;
  auto n_chars_to_c = n_chars;
  auto position_to_c = position;
  call_wrap_v ((::GtkEntryBuffer*) (gobj_()), (guint) (position_to_c), (guint) (n_chars_to_c));
}

// guint EntryBuffer::get_length (GtkEntryBuffer* buffer);
// guint EntryBuffer::get_length (::GtkEntryBuffer* buffer);
guint EntryBufferClass::get_length_ () noexcept
{
  if (!get_struct_()->get_length) return guint{};
  typedef guint (*call_wrap_t) (::GtkEntryBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_length;
  auto _temp_ret = call_wrap_v ((::GtkEntryBuffer*) (gobj_()));
  return _temp_ret;
}

// const gchar* EntryBuffer::get_text (GtkEntryBuffer* buffer, gsize* n_bytes);
// const char* EntryBuffer::get_text (::GtkEntryBuffer* buffer, gsize n_bytes);
// SKIP; invalid callback return transfer none

// guint EntryBuffer::insert_text (GtkEntryBuffer* buffer, guint position, const gchar* chars, guint n_chars);
// guint EntryBuffer::insert_text (::GtkEntryBuffer* buffer, guint position, const char* chars, guint n_chars);
guint EntryBufferClass::insert_text_ (guint position, const std::string & chars, guint n_chars) noexcept
{
  if (!get_struct_()->insert_text) return guint{};
  typedef guint (*call_wrap_t) (::GtkEntryBuffer* buffer, guint position, const char* chars, guint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->insert_text;
  auto n_chars_to_c = n_chars;
  auto chars_to_c = gi::unwrap (chars, gi::transfer_none, gi::direction_in);
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::GtkEntryBuffer*) (gobj_()), (guint) (position_to_c), (const char*) (chars_to_c), (guint) (n_chars_to_c));
  return _temp_ret;
}

// void EntryBuffer::inserted_text (GtkEntryBuffer* buffer, guint position, const gchar* chars, guint n_chars);
// void EntryBuffer::inserted_text (::GtkEntryBuffer* buffer, guint position, const char* chars, guint n_chars);
void EntryBufferClass::inserted_text_ (guint position, const std::string & chars, guint n_chars) noexcept
{
  if (!get_struct_()->inserted_text) return ;
  typedef void (*call_wrap_t) (::GtkEntryBuffer* buffer, guint position, const char* chars, guint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->inserted_text;
  auto n_chars_to_c = n_chars;
  auto chars_to_c = gi::unwrap (chars, gi::transfer_none, gi::direction_in);
  auto position_to_c = position;
  call_wrap_v ((::GtkEntryBuffer*) (gobj_()), (guint) (position_to_c), (const char*) (chars_to_c), (guint) (n_chars_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
