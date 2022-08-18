// AUTO-GENERATED

#ifndef _GI_GTK_CLIPBOARD_IMPL_HPP_
#define _GI_GTK_CLIPBOARD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkClipboard* gtk_clipboard_get (GdkAtom selection);
// ::GtkClipboard* gtk_clipboard_get ( selection);
// SKIP; selection type  not supported

// GtkClipboard* gtk_clipboard_get_default (GdkDisplay* display);
// ::GtkClipboard* gtk_clipboard_get_default (::GdkDisplay* display);
Gtk::Clipboard base::ClipboardBase::get_default (Gdk::Display display) noexcept
{
  typedef ::GtkClipboard* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_clipboard_get_default;
  auto display_to_c = gi::unwrap (display, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (display_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkClipboard* gtk_clipboard_get_for_display (GdkDisplay* display, GdkAtom selection);
// ::GtkClipboard* gtk_clipboard_get_for_display (::GdkDisplay* display,  selection);
// SKIP; selection type  not supported

// void gtk_clipboard_clear (GtkClipboard* clipboard);
// void gtk_clipboard_clear (::GtkClipboard* clipboard);
void base::ClipboardBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::GtkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_clipboard_clear;
  call_wrap_v ((::GtkClipboard*) (gobj_()));
}

// GdkDisplay* gtk_clipboard_get_display (GtkClipboard* clipboard);
// ::GdkDisplay* gtk_clipboard_get_display (::GtkClipboard* clipboard);
Gdk::Display base::ClipboardBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GtkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_clipboard_get_display;
  auto _temp_ret = call_wrap_v ((::GtkClipboard*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GObject* gtk_clipboard_get_owner (GtkClipboard* clipboard);
// ::GObject* gtk_clipboard_get_owner (::GtkClipboard* clipboard);
GObject::Object base::ClipboardBase::get_owner () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GtkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_clipboard_get_owner;
  auto _temp_ret = call_wrap_v ((::GtkClipboard*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// FAILURE on gtk_clipboard_get_selection; No such node (<xmlattr>.transfer-ownership)
// void gtk_clipboard_request_contents (GtkClipboard* clipboard, GdkAtom target, GtkClipboardReceivedFunc callback, gpointer user_data);
// void gtk_clipboard_request_contents (::GtkClipboard* clipboard,  target, Gtk::ClipboardReceivedFunc::cfunction_type callback, void* user_data);
// SKIP; target type  not supported

// void gtk_clipboard_request_image (GtkClipboard* clipboard, GtkClipboardImageReceivedFunc callback, gpointer user_data);
// void gtk_clipboard_request_image (::GtkClipboard* clipboard, Gtk::ClipboardImageReceivedFunc::cfunction_type callback, void* user_data);
void base::ClipboardBase::request_image (Gtk::ClipboardImageReceivedFunc callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkClipboard* clipboard, Gtk::ClipboardImageReceivedFunc::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_clipboard_request_image;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  call_wrap_v ((::GtkClipboard*) (gobj_()), (Gtk::ClipboardImageReceivedFunc::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void gtk_clipboard_request_rich_text (GtkClipboard* clipboard, GtkTextBuffer* buffer, GtkClipboardRichTextReceivedFunc callback, gpointer user_data);
// void gtk_clipboard_request_rich_text (::GtkClipboard* clipboard, ::GtkTextBuffer* buffer,  callback, void* user_data);
// SKIP; callback type  not supported

// void gtk_clipboard_request_targets (GtkClipboard* clipboard, GtkClipboardTargetsReceivedFunc callback, gpointer user_data);
// void gtk_clipboard_request_targets (::GtkClipboard* clipboard,  callback, void* user_data);
// SKIP; callback type  not supported

// void gtk_clipboard_request_text (GtkClipboard* clipboard, GtkClipboardTextReceivedFunc callback, gpointer user_data);
// void gtk_clipboard_request_text (::GtkClipboard* clipboard, Gtk::ClipboardTextReceivedFunc::cfunction_type callback, void* user_data);
void base::ClipboardBase::request_text (Gtk::ClipboardTextReceivedFunc callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkClipboard* clipboard, Gtk::ClipboardTextReceivedFunc::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_clipboard_request_text;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  call_wrap_v ((::GtkClipboard*) (gobj_()), (Gtk::ClipboardTextReceivedFunc::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void gtk_clipboard_request_uris (GtkClipboard* clipboard, GtkClipboardURIReceivedFunc callback, gpointer user_data);
// void gtk_clipboard_request_uris (::GtkClipboard* clipboard,  callback, void* user_data);
// SKIP; callback type  not supported

// void gtk_clipboard_set_can_store (GtkClipboard* clipboard, const GtkTargetEntry* targets, gint n_targets);
// void gtk_clipboard_set_can_store (::GtkClipboard* clipboard, const ::GtkTargetEntry** targets, gint n_targets);
// SKIP; inconsistent in targets pointer depth (1 vs 2)

// void gtk_clipboard_set_image (GtkClipboard* clipboard, GdkPixbuf* pixbuf);
// void gtk_clipboard_set_image (::GtkClipboard* clipboard, ::GdkPixbuf* pixbuf);
void base::ClipboardBase::set_image (GdkPixbuf::Pixbuf pixbuf) noexcept
{
  typedef void (*call_wrap_t) (::GtkClipboard* clipboard, ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_clipboard_set_image;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkClipboard*) (gobj_()), (::GdkPixbuf*) (pixbuf_to_c));
}

// void gtk_clipboard_set_text (GtkClipboard* clipboard, const gchar* text, gint len);
// void gtk_clipboard_set_text (::GtkClipboard* clipboard, const char* text, gint len);
void base::ClipboardBase::set_text (const std::string & text, gint len) noexcept
{
  typedef void (*call_wrap_t) (::GtkClipboard* clipboard, const char* text, gint len);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_clipboard_set_text;
  auto len_to_c = len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkClipboard*) (gobj_()), (const char*) (text_to_c), (gint) (len_to_c));
}

// gboolean gtk_clipboard_set_with_data (GtkClipboard* clipboard, const GtkTargetEntry* targets, guint n_targets, GtkClipboardGetFunc get_func, GtkClipboardClearFunc clear_func, gpointer user_data);
// gboolean gtk_clipboard_set_with_data (::GtkClipboard* clipboard, const ::GtkTargetEntry** targets, guint n_targets,  get_func,  clear_func, void* user_data);
// IGNORE; not introspectable, clear_func type  not supported, get_func type  not supported, inconsistent in targets pointer depth (1 vs 2)

// gboolean gtk_clipboard_set_with_owner (GtkClipboard* clipboard, const GtkTargetEntry* targets, guint n_targets, GtkClipboardGetFunc get_func, GtkClipboardClearFunc clear_func, GObject* owner);
// gboolean gtk_clipboard_set_with_owner (::GtkClipboard* clipboard, const ::GtkTargetEntry** targets, guint n_targets,  get_func,  clear_func, ::GObject* owner);
// IGNORE; not introspectable, clear_func type  not supported, get_func type  not supported, inconsistent in targets pointer depth (1 vs 2)

// void gtk_clipboard_store (GtkClipboard* clipboard);
// void gtk_clipboard_store (::GtkClipboard* clipboard);
void base::ClipboardBase::store () noexcept
{
  typedef void (*call_wrap_t) (::GtkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_clipboard_store;
  call_wrap_v ((::GtkClipboard*) (gobj_()));
}

// GtkSelectionData* gtk_clipboard_wait_for_contents (GtkClipboard* clipboard, GdkAtom target);
// ::GtkSelectionData* gtk_clipboard_wait_for_contents (::GtkClipboard* clipboard,  target);
// SKIP; target type  not supported

// GdkPixbuf* gtk_clipboard_wait_for_image (GtkClipboard* clipboard);
// ::GdkPixbuf* gtk_clipboard_wait_for_image (::GtkClipboard* clipboard);
GdkPixbuf::Pixbuf base::ClipboardBase::wait_for_image () noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_clipboard_wait_for_image;
  auto _temp_ret = call_wrap_v ((::GtkClipboard*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// guint8* gtk_clipboard_wait_for_rich_text (GtkClipboard* clipboard, GtkTextBuffer* buffer, GdkAtom* format, gsize* length);
// guint8* gtk_clipboard_wait_for_rich_text (::GtkClipboard* clipboard, ::GtkTextBuffer* buffer,  format, gsize* length);
// SKIP; format type  not supported

// gboolean gtk_clipboard_wait_for_targets (GtkClipboard* clipboard, gint* n_targets);
// gboolean gtk_clipboard_wait_for_targets (::GtkClipboard* clipboard, gint* n_targets);
// SKIP; container element not supported

// gchar* gtk_clipboard_wait_for_text (GtkClipboard* clipboard);
// char* gtk_clipboard_wait_for_text (::GtkClipboard* clipboard);
std::string base::ClipboardBase::wait_for_text () noexcept
{
  typedef char* (*call_wrap_t) (::GtkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_clipboard_wait_for_text;
  auto _temp_ret = call_wrap_v ((::GtkClipboard*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar** gtk_clipboard_wait_for_uris (GtkClipboard* clipboard);
// char** gtk_clipboard_wait_for_uris (::GtkClipboard* clipboard);
std::vector<std::string> base::ClipboardBase::wait_for_uris () noexcept
{
  typedef char** (*call_wrap_t) (::GtkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_clipboard_wait_for_uris;
  auto _temp_ret = call_wrap_v ((::GtkClipboard*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gboolean gtk_clipboard_wait_is_image_available (GtkClipboard* clipboard);
// gboolean gtk_clipboard_wait_is_image_available (::GtkClipboard* clipboard);
bool base::ClipboardBase::wait_is_image_available () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_clipboard_wait_is_image_available;
  auto _temp_ret = call_wrap_v ((::GtkClipboard*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_clipboard_wait_is_rich_text_available (GtkClipboard* clipboard, GtkTextBuffer* buffer);
// gboolean gtk_clipboard_wait_is_rich_text_available (::GtkClipboard* clipboard, ::GtkTextBuffer* buffer);
bool base::ClipboardBase::wait_is_rich_text_available (Gtk::TextBuffer buffer) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkClipboard* clipboard, ::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_clipboard_wait_is_rich_text_available;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkClipboard*) (gobj_()), (::GtkTextBuffer*) (buffer_to_c));
  return _temp_ret;
}

// gboolean gtk_clipboard_wait_is_target_available (GtkClipboard* clipboard, GdkAtom target);
// gboolean gtk_clipboard_wait_is_target_available (::GtkClipboard* clipboard,  target);
// SKIP; target type  not supported

// gboolean gtk_clipboard_wait_is_text_available (GtkClipboard* clipboard);
// gboolean gtk_clipboard_wait_is_text_available (::GtkClipboard* clipboard);
bool base::ClipboardBase::wait_is_text_available () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_clipboard_wait_is_text_available;
  auto _temp_ret = call_wrap_v ((::GtkClipboard*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_clipboard_wait_is_uris_available (GtkClipboard* clipboard);
// gboolean gtk_clipboard_wait_is_uris_available (::GtkClipboard* clipboard);
bool base::ClipboardBase::wait_is_uris_available () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkClipboard* clipboard);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_clipboard_wait_is_uris_available;
  auto _temp_ret = call_wrap_v ((::GtkClipboard*) (gobj_()));
  return _temp_ret;
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/clipboard_extra_def_impl.hpp>)
#include <gtk/clipboard_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/clipboard_extra_impl.hpp>)
#include <gtk/clipboard_extra_impl.hpp>
#endif
#endif

#endif
