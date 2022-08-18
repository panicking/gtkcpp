// AUTO-GENERATED

#ifndef _GI_GTK_TEXTTAG_IMPL_HPP_
#define _GI_GTK_TEXTTAG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkTextTag* gtk_text_tag_new (const gchar* name);
// ::GtkTextTag* gtk_text_tag_new (const char* name);
Gtk::TextTag base::TextTagBase::new_ (const std::string & name) noexcept
{
  typedef ::GtkTextTag* (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_tag_new;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gtk::TextTag base::TextTagBase::new_ () noexcept
{
  typedef ::GtkTextTag* (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_tag_new;
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_text_tag_changed (GtkTextTag* tag, gboolean size_changed);
// void gtk_text_tag_changed (::GtkTextTag* tag, gboolean size_changed);
void base::TextTagBase::changed (gboolean size_changed) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextTag* tag, gboolean size_changed);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_tag_changed;
  auto size_changed_to_c = size_changed;
  call_wrap_v ((::GtkTextTag*) (gobj_()), (gboolean) (size_changed_to_c));
}

// gboolean gtk_text_tag_event (GtkTextTag* tag, GObject* event_object, GdkEvent* event, const GtkTextIter* iter);
// gboolean gtk_text_tag_event (::GtkTextTag* tag, ::GObject* event_object,  event, const ::GtkTextIter* iter);
// SKIP; event type  not supported

// gint gtk_text_tag_get_priority (GtkTextTag* tag);
// gint gtk_text_tag_get_priority (::GtkTextTag* tag);
gint base::TextTagBase::get_priority () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTextTag* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_tag_get_priority;
  auto _temp_ret = call_wrap_v ((::GtkTextTag*) (gobj_()));
  return _temp_ret;
}

// void gtk_text_tag_set_priority (GtkTextTag* tag, gint priority);
// void gtk_text_tag_set_priority (::GtkTextTag* tag, gint priority);
void base::TextTagBase::set_priority (gint priority) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextTag* tag, gint priority);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_tag_set_priority;
  auto priority_to_c = priority;
  call_wrap_v ((::GtkTextTag*) (gobj_()), (gint) (priority_to_c));
}

// SKIP; event type  not supported


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/texttag_extra_def_impl.hpp>)
#include <gtk/texttag_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/texttag_extra_impl.hpp>)
#include <gtk/texttag_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TextTagClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkTextTagClass *methods = (::GtkTextTagClass *) class_struct;
  (void) methods;

}

// gboolean TextTag::event (GtkTextTag* tag, GObject* event_object, GdkEvent* event, const GtkTextIter* iter);
// gboolean TextTag::event (::GtkTextTag* tag, ::GObject* event_object,  event, const ::GtkTextIter* iter);
// SKIP; event type  not supported

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
