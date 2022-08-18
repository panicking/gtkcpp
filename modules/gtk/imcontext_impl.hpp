// AUTO-GENERATED

#ifndef _GI_GTK_IMCONTEXT_IMPL_HPP_
#define _GI_GTK_IMCONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// gboolean gtk_im_context_delete_surrounding (GtkIMContext* context, gint offset, gint n_chars);
// gboolean gtk_im_context_delete_surrounding (::GtkIMContext* context, gint offset, gint n_chars);
bool base::IMContextBase::delete_surrounding (gint offset, gint n_chars) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIMContext* context, gint offset, gint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_im_context_delete_surrounding;
  auto n_chars_to_c = n_chars;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GtkIMContext*) (gobj_()), (gint) (offset_to_c), (gint) (n_chars_to_c));
  return _temp_ret;
}

// gboolean gtk_im_context_filter_keypress (GtkIMContext* context, GdkEventKey* event);
// gboolean gtk_im_context_filter_keypress (::GtkIMContext* context, ::GdkEventKey* event);
bool base::IMContextBase::filter_keypress (Gdk::EventKey event) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIMContext* context, ::GdkEventKey* event);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_im_context_filter_keypress;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkIMContext*) (gobj_()), (::GdkEventKey*) (event_to_c));
  return _temp_ret;
}

// void gtk_im_context_focus_in (GtkIMContext* context);
// void gtk_im_context_focus_in (::GtkIMContext* context);
void base::IMContextBase::focus_in () noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_im_context_focus_in;
  call_wrap_v ((::GtkIMContext*) (gobj_()));
}

// void gtk_im_context_focus_out (GtkIMContext* context);
// void gtk_im_context_focus_out (::GtkIMContext* context);
void base::IMContextBase::focus_out () noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_im_context_focus_out;
  call_wrap_v ((::GtkIMContext*) (gobj_()));
}

// void gtk_im_context_get_preedit_string (GtkIMContext* context, gchar** str, PangoAttrList** attrs, gint* cursor_pos);
// void gtk_im_context_get_preedit_string (::GtkIMContext* context, char** str, ::PangoAttrList** attrs, gint* cursor_pos);
void base::IMContextBase::get_preedit_string (std::string & str, Pango::AttrList & attrs, gint & cursor_pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context, char** str, ::PangoAttrList** attrs, gint* cursor_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_im_context_get_preedit_string;
  gint cursor_pos_o {};
  ::PangoAttrList* attrs_o {};
  char* str_o {};
  call_wrap_v ((::GtkIMContext*) (gobj_()), (char**) (&str_o), (::PangoAttrList**) (&attrs_o), (gint*) (&cursor_pos_o));
  cursor_pos = cursor_pos_o;
  attrs = gi::wrap (attrs_o, gi::transfer_full, gi::direction_out);
  str = gi::wrap (str_o, gi::transfer_full, gi::direction_out);
}
std::tuple<std::string, Pango::AttrList, gint> base::IMContextBase::get_preedit_string () noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context, char** str, ::PangoAttrList** attrs, gint* cursor_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_im_context_get_preedit_string;
  gint cursor_pos_o {};
  ::PangoAttrList* attrs_o {};
  char* str_o {};
  call_wrap_v ((::GtkIMContext*) (gobj_()), (char**) (&str_o), (::PangoAttrList**) (&attrs_o), (gint*) (&cursor_pos_o));
  return std::make_tuple (gi::wrap (str_o, gi::transfer_full, gi::direction_out), gi::wrap (attrs_o, gi::transfer_full, gi::direction_out), cursor_pos_o);
}

// gboolean gtk_im_context_get_surrounding (GtkIMContext* context, gchar** text, gint* cursor_index);
// gboolean gtk_im_context_get_surrounding (::GtkIMContext* context, char** text, gint* cursor_index);
bool base::IMContextBase::get_surrounding (std::string & text, gint & cursor_index) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIMContext* context, char** text, gint* cursor_index);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_im_context_get_surrounding;
  gint cursor_index_o {};
  char* text_o {};
  auto _temp_ret = call_wrap_v ((::GtkIMContext*) (gobj_()), (char**) (&text_o), (gint*) (&cursor_index_o));
  cursor_index = cursor_index_o;
  text = gi::wrap (text_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string, gint> base::IMContextBase::get_surrounding () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIMContext* context, char** text, gint* cursor_index);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_im_context_get_surrounding;
  gint cursor_index_o {};
  char* text_o {};
  auto _temp_ret = call_wrap_v ((::GtkIMContext*) (gobj_()), (char**) (&text_o), (gint*) (&cursor_index_o));
  return std::make_tuple (_temp_ret, gi::wrap (text_o, gi::transfer_full, gi::direction_out), cursor_index_o);
}

// void gtk_im_context_reset (GtkIMContext* context);
// void gtk_im_context_reset (::GtkIMContext* context);
void base::IMContextBase::reset () noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_im_context_reset;
  call_wrap_v ((::GtkIMContext*) (gobj_()));
}

// void gtk_im_context_set_client_window (GtkIMContext* context, GdkWindow* window);
// void gtk_im_context_set_client_window (::GtkIMContext* context, ::GdkWindow* window);
void base::IMContextBase::set_client_window (Gdk::Window window) noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context, ::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_im_context_set_client_window;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIMContext*) (gobj_()), (::GdkWindow*) (window_to_c));
}
void base::IMContextBase::set_client_window () noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context, ::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_im_context_set_client_window;
  auto window_to_c = nullptr;
  call_wrap_v ((::GtkIMContext*) (gobj_()), (::GdkWindow*) (window_to_c));
}

// void gtk_im_context_set_cursor_location (GtkIMContext* context, const GdkRectangle* area);
// void gtk_im_context_set_cursor_location (::GtkIMContext* context, const ::GdkRectangle* area);
void base::IMContextBase::set_cursor_location (const Gdk::Rectangle & area) noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context, const ::GdkRectangle* area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_im_context_set_cursor_location;
  auto area_to_c = gi::unwrap (area, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIMContext*) (gobj_()), (const ::GdkRectangle*) (area_to_c));
}

// void gtk_im_context_set_surrounding (GtkIMContext* context, const gchar* text, gint len, gint cursor_index);
// void gtk_im_context_set_surrounding (::GtkIMContext* context, const char* text, gint len, gint cursor_index);
void base::IMContextBase::set_surrounding (const std::string & text, gint len, gint cursor_index) noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context, const char* text, gint len, gint cursor_index);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_im_context_set_surrounding;
  auto cursor_index_to_c = cursor_index;
  auto len_to_c = len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIMContext*) (gobj_()), (const char*) (text_to_c), (gint) (len_to_c), (gint) (cursor_index_to_c));
}

// void gtk_im_context_set_use_preedit (GtkIMContext* context, gboolean use_preedit);
// void gtk_im_context_set_use_preedit (::GtkIMContext* context, gboolean use_preedit);
void base::IMContextBase::set_use_preedit (gboolean use_preedit) noexcept
{
  typedef void (*call_wrap_t) (::GtkIMContext* context, gboolean use_preedit);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_im_context_set_use_preedit;
  auto use_preedit_to_c = use_preedit;
  call_wrap_v ((::GtkIMContext*) (gobj_()), (gboolean) (use_preedit_to_c));
}








} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/imcontext_extra_def_impl.hpp>)
#include <gtk/imcontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/imcontext_extra_impl.hpp>)
#include <gtk/imcontext_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void IMContextClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkIMContextClass *methods = (::GtkIMContextClass *) class_struct;
  (void) methods;

  methods->commit = (decltype (methods->commit)) detail::method_wrapper<self, void (*) (const std::string & str), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::commit_>;
  methods->delete_surrounding = (decltype (methods->delete_surrounding)) detail::method_wrapper<self, bool (*) (gint offset, gint n_chars), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::delete_surrounding_>;
  methods->filter_keypress = (decltype (methods->filter_keypress)) detail::method_wrapper<self, bool (*) (Gdk::EventKey event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::filter_keypress_>;
  methods->focus_in = (decltype (methods->focus_in)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::focus_in_>;
  methods->focus_out = (decltype (methods->focus_out)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::focus_out_>;
  methods->preedit_changed = (decltype (methods->preedit_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::preedit_changed_>;
  methods->preedit_end = (decltype (methods->preedit_end)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::preedit_end_>;
  methods->preedit_start = (decltype (methods->preedit_start)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::preedit_start_>;
  methods->reset = (decltype (methods->reset)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::reset_>;
  methods->retrieve_surrounding = (decltype (methods->retrieve_surrounding)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::retrieve_surrounding_>;
  methods->set_client_window = (decltype (methods->set_client_window)) detail::method_wrapper<self, void (*) (Gdk::Window window), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_client_window_>;
  methods->set_cursor_location = (decltype (methods->set_cursor_location)) detail::method_wrapper<self, void (*) (Gdk::Rectangle area), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_cursor_location_>;
  methods->set_surrounding = (decltype (methods->set_surrounding)) detail::method_wrapper<self, void (*) (const std::string & text, gint len, gint cursor_index), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_surrounding_>;
  methods->set_use_preedit = (decltype (methods->set_use_preedit)) detail::method_wrapper<self, void (*) (gboolean use_preedit), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_use_preedit_>;
}

// void IMContext::commit (GtkIMContext* context, const gchar* str);
// void IMContext::commit (::GtkIMContext* context, const char* str);
void IMContextClass::commit_ (const std::string & str) noexcept
{
  if (!get_struct_()->commit) return ;
  typedef void (*call_wrap_t) (::GtkIMContext* context, const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->commit;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIMContext*) (gobj_()), (const char*) (str_to_c));
}

// gboolean IMContext::delete_surrounding (GtkIMContext* context, gint offset, gint n_chars);
// gboolean IMContext::delete_surrounding (::GtkIMContext* context, gint offset, gint n_chars);
bool IMContextClass::delete_surrounding_ (gint offset, gint n_chars) noexcept
{
  if (!get_struct_()->delete_surrounding) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkIMContext* context, gint offset, gint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->delete_surrounding;
  auto n_chars_to_c = n_chars;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GtkIMContext*) (gobj_()), (gint) (offset_to_c), (gint) (n_chars_to_c));
  return _temp_ret;
}

// gboolean IMContext::filter_keypress (GtkIMContext* context, GdkEventKey* event);
// gboolean IMContext::filter_keypress (::GtkIMContext* context, ::GdkEventKey* event);
bool IMContextClass::filter_keypress_ (Gdk::EventKey event) noexcept
{
  if (!get_struct_()->filter_keypress) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkIMContext* context, ::GdkEventKey* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->filter_keypress;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkIMContext*) (gobj_()), (::GdkEventKey*) (event_to_c));
  return _temp_ret;
}

// void IMContext::focus_in (GtkIMContext* context);
// void IMContext::focus_in (::GtkIMContext* context);
void IMContextClass::focus_in_ () noexcept
{
  if (!get_struct_()->focus_in) return ;
  typedef void (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->focus_in;
  call_wrap_v ((::GtkIMContext*) (gobj_()));
}

// void IMContext::focus_out (GtkIMContext* context);
// void IMContext::focus_out (::GtkIMContext* context);
void IMContextClass::focus_out_ () noexcept
{
  if (!get_struct_()->focus_out) return ;
  typedef void (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->focus_out;
  call_wrap_v ((::GtkIMContext*) (gobj_()));
}

// void IMContext::get_preedit_string (GtkIMContext* context, gchar** str, PangoAttrList** attrs, gint* cursor_pos);
// void IMContext::get_preedit_string (::GtkIMContext* context, char** str, ::PangoAttrList** attrs, gint* cursor_pos);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean IMContext::get_surrounding (GtkIMContext* context, gchar** text, gint* cursor_index);
// gboolean IMContext::get_surrounding (::GtkIMContext* context, char** text, gint* cursor_index);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void IMContext::preedit_changed (GtkIMContext* context);
// void IMContext::preedit_changed (::GtkIMContext* context);
void IMContextClass::preedit_changed_ () noexcept
{
  if (!get_struct_()->preedit_changed) return ;
  typedef void (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->preedit_changed;
  call_wrap_v ((::GtkIMContext*) (gobj_()));
}

// void IMContext::preedit_end (GtkIMContext* context);
// void IMContext::preedit_end (::GtkIMContext* context);
void IMContextClass::preedit_end_ () noexcept
{
  if (!get_struct_()->preedit_end) return ;
  typedef void (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->preedit_end;
  call_wrap_v ((::GtkIMContext*) (gobj_()));
}

// void IMContext::preedit_start (GtkIMContext* context);
// void IMContext::preedit_start (::GtkIMContext* context);
void IMContextClass::preedit_start_ () noexcept
{
  if (!get_struct_()->preedit_start) return ;
  typedef void (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->preedit_start;
  call_wrap_v ((::GtkIMContext*) (gobj_()));
}

// void IMContext::reset (GtkIMContext* context);
// void IMContext::reset (::GtkIMContext* context);
void IMContextClass::reset_ () noexcept
{
  if (!get_struct_()->reset) return ;
  typedef void (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->reset;
  call_wrap_v ((::GtkIMContext*) (gobj_()));
}

// gboolean IMContext::retrieve_surrounding (GtkIMContext* context);
// gboolean IMContext::retrieve_surrounding (::GtkIMContext* context);
bool IMContextClass::retrieve_surrounding_ () noexcept
{
  if (!get_struct_()->retrieve_surrounding) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkIMContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->retrieve_surrounding;
  auto _temp_ret = call_wrap_v ((::GtkIMContext*) (gobj_()));
  return _temp_ret;
}

// void IMContext::set_client_window (GtkIMContext* context, GdkWindow* window);
// void IMContext::set_client_window (::GtkIMContext* context, ::GdkWindow* window);
void IMContextClass::set_client_window_ (Gdk::Window window) noexcept
{
  if (!get_struct_()->set_client_window) return ;
  typedef void (*call_wrap_t) (::GtkIMContext* context, ::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_client_window;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIMContext*) (gobj_()), (::GdkWindow*) (window_to_c));
}

// void IMContext::set_cursor_location (GtkIMContext* context, GdkRectangle* area);
// void IMContext::set_cursor_location (::GtkIMContext* context, ::GdkRectangle* area);
void IMContextClass::set_cursor_location_ (Gdk::Rectangle area) noexcept
{
  if (!get_struct_()->set_cursor_location) return ;
  typedef void (*call_wrap_t) (::GtkIMContext* context, ::GdkRectangle* area);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_cursor_location;
  auto area_to_c = gi::unwrap (area, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIMContext*) (gobj_()), (::GdkRectangle*) (area_to_c));
}

// void IMContext::set_surrounding (GtkIMContext* context, const gchar* text, gint len, gint cursor_index);
// void IMContext::set_surrounding (::GtkIMContext* context, const char* text, gint len, gint cursor_index);
void IMContextClass::set_surrounding_ (const std::string & text, gint len, gint cursor_index) noexcept
{
  if (!get_struct_()->set_surrounding) return ;
  typedef void (*call_wrap_t) (::GtkIMContext* context, const char* text, gint len, gint cursor_index);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_surrounding;
  auto cursor_index_to_c = cursor_index;
  auto len_to_c = len;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIMContext*) (gobj_()), (const char*) (text_to_c), (gint) (len_to_c), (gint) (cursor_index_to_c));
}

// void IMContext::set_use_preedit (GtkIMContext* context, gboolean use_preedit);
// void IMContext::set_use_preedit (::GtkIMContext* context, gboolean use_preedit);
void IMContextClass::set_use_preedit_ (gboolean use_preedit) noexcept
{
  if (!get_struct_()->set_use_preedit) return ;
  typedef void (*call_wrap_t) (::GtkIMContext* context, gboolean use_preedit);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_use_preedit;
  auto use_preedit_to_c = use_preedit;
  call_wrap_v ((::GtkIMContext*) (gobj_()), (gboolean) (use_preedit_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
