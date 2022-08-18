// AUTO-GENERATED

#ifndef _GI_GTK_TEXTMARK_IMPL_HPP_
#define _GI_GTK_TEXTMARK_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkTextMark* gtk_text_mark_new (const gchar* name, gboolean left_gravity);
// ::GtkTextMark* gtk_text_mark_new (const char* name, gboolean left_gravity);
Gtk::TextMark base::TextMarkBase::new_ (const std::string & name, gboolean left_gravity) noexcept
{
  typedef ::GtkTextMark* (*call_wrap_t) (const char* name, gboolean left_gravity);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_mark_new;
  auto left_gravity_to_c = left_gravity;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (gboolean) (left_gravity_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gtk::TextMark base::TextMarkBase::new_ (gboolean left_gravity) noexcept
{
  typedef ::GtkTextMark* (*call_wrap_t) (const char* name, gboolean left_gravity);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_mark_new;
  auto left_gravity_to_c = left_gravity;
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (gboolean) (left_gravity_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkTextBuffer* gtk_text_mark_get_buffer (GtkTextMark* mark);
// ::GtkTextBuffer* gtk_text_mark_get_buffer (::GtkTextMark* mark);
Gtk::TextBuffer base::TextMarkBase::get_buffer () noexcept
{
  typedef ::GtkTextBuffer* (*call_wrap_t) (::GtkTextMark* mark);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_mark_get_buffer;
  auto _temp_ret = call_wrap_v ((::GtkTextMark*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_text_mark_get_deleted (GtkTextMark* mark);
// gboolean gtk_text_mark_get_deleted (::GtkTextMark* mark);
bool base::TextMarkBase::get_deleted () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextMark* mark);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_mark_get_deleted;
  auto _temp_ret = call_wrap_v ((::GtkTextMark*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_text_mark_get_left_gravity (GtkTextMark* mark);
// gboolean gtk_text_mark_get_left_gravity (::GtkTextMark* mark);
bool base::TextMarkBase::get_left_gravity () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextMark* mark);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_mark_get_left_gravity;
  auto _temp_ret = call_wrap_v ((::GtkTextMark*) (gobj_()));
  return _temp_ret;
}

// const gchar* gtk_text_mark_get_name (GtkTextMark* mark);
// const char* gtk_text_mark_get_name (::GtkTextMark* mark);
std::string base::TextMarkBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkTextMark* mark);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_mark_get_name;
  auto _temp_ret = call_wrap_v ((::GtkTextMark*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_text_mark_get_visible (GtkTextMark* mark);
// gboolean gtk_text_mark_get_visible (::GtkTextMark* mark);
bool base::TextMarkBase::get_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextMark* mark);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_mark_get_visible;
  auto _temp_ret = call_wrap_v ((::GtkTextMark*) (gobj_()));
  return _temp_ret;
}

// void gtk_text_mark_set_visible (GtkTextMark* mark, gboolean setting);
// void gtk_text_mark_set_visible (::GtkTextMark* mark, gboolean setting);
void base::TextMarkBase::set_visible (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextMark* mark, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_mark_set_visible;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkTextMark*) (gobj_()), (gboolean) (setting_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textmark_extra_def_impl.hpp>)
#include <gtk/textmark_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textmark_extra_impl.hpp>)
#include <gtk/textmark_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TextMarkClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkTextMarkClass *methods = (::GtkTextMarkClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
