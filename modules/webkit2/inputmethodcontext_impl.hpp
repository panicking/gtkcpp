// AUTO-GENERATED

#ifndef _GI_WEBKIT2_INPUTMETHODCONTEXT_IMPL_HPP_
#define _GI_WEBKIT2_INPUTMETHODCONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// gboolean webkit_input_method_context_filter_key_event (WebKitInputMethodContext* context, GdkEventKey* key_event);
// gboolean webkit_input_method_context_filter_key_event (::WebKitInputMethodContext* context, ::GdkEventKey* key_event);
bool base::InputMethodContextBase::filter_key_event (Gdk::EventKey key_event) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitInputMethodContext* context, ::GdkEventKey* key_event);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_input_method_context_filter_key_event;
  auto key_event_to_c = gi::unwrap (key_event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitInputMethodContext*) (gobj_()), (::GdkEventKey*) (key_event_to_c));
  return _temp_ret;
}

// WebKitInputHints webkit_input_method_context_get_input_hints (WebKitInputMethodContext* context);
// ::WebKitInputHints webkit_input_method_context_get_input_hints (::WebKitInputMethodContext* context);
WebKit2::InputHints base::InputMethodContextBase::get_input_hints () noexcept
{
  typedef ::WebKitInputHints (*call_wrap_t) (::WebKitInputMethodContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_input_method_context_get_input_hints;
  auto _temp_ret = call_wrap_v ((::WebKitInputMethodContext*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// WebKitInputPurpose webkit_input_method_context_get_input_purpose (WebKitInputMethodContext* context);
// ::WebKitInputPurpose webkit_input_method_context_get_input_purpose (::WebKitInputMethodContext* context);
WebKit2::InputPurpose base::InputMethodContextBase::get_input_purpose () noexcept
{
  typedef ::WebKitInputPurpose (*call_wrap_t) (::WebKitInputMethodContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_input_method_context_get_input_purpose;
  auto _temp_ret = call_wrap_v ((::WebKitInputMethodContext*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void webkit_input_method_context_get_preedit (WebKitInputMethodContext* context, char** text, GList** underlines, guint* cursor_offset);
// void webkit_input_method_context_get_preedit (::WebKitInputMethodContext* context, char** text, ::GList** underlines, guint* cursor_offset);
void base::InputMethodContextBase::get_preedit (std::string & text, std::vector<WebKit2::InputMethodUnderline> & underlines, guint & cursor_offset) noexcept
{
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context, char** text, ::GList** underlines, guint* cursor_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_input_method_context_get_preedit;
  guint cursor_offset_o {};
  ::GList* underlines_o {};
  char* text_o {};
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()), (char**) (&text_o), (::GList**) (&underlines_o), (guint*) (&cursor_offset_o));
  cursor_offset = cursor_offset_o;
  underlines = gi::detail::wrap_list<WebKit2::InputMethodUnderline> (underlines_o, gi::transfer_full);
  text = gi::wrap (text_o, gi::transfer_full, gi::direction_out);
}
std::tuple<std::string, std::vector<WebKit2::InputMethodUnderline>, guint> base::InputMethodContextBase::get_preedit () noexcept
{
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context, char** text, ::GList** underlines, guint* cursor_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_input_method_context_get_preedit;
  guint cursor_offset_o {};
  ::GList* underlines_o {};
  char* text_o {};
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()), (char**) (&text_o), (::GList**) (&underlines_o), (guint*) (&cursor_offset_o));
  return std::make_tuple (gi::wrap (text_o, gi::transfer_full, gi::direction_out), gi::detail::wrap_list<WebKit2::InputMethodUnderline> (underlines_o, gi::transfer_full), cursor_offset_o);
}

// void webkit_input_method_context_notify_cursor_area (WebKitInputMethodContext* context, int x, int y, int width, int height);
// void webkit_input_method_context_notify_cursor_area (::WebKitInputMethodContext* context, gint x, gint y, gint width, gint height);
void base::InputMethodContextBase::notify_cursor_area (gint x, gint y, gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context, gint x, gint y, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_input_method_context_notify_cursor_area;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (gint) (width_to_c), (gint) (height_to_c));
}

// void webkit_input_method_context_notify_focus_in (WebKitInputMethodContext* context);
// void webkit_input_method_context_notify_focus_in (::WebKitInputMethodContext* context);
void base::InputMethodContextBase::notify_focus_in () noexcept
{
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_input_method_context_notify_focus_in;
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()));
}

// void webkit_input_method_context_notify_focus_out (WebKitInputMethodContext* context);
// void webkit_input_method_context_notify_focus_out (::WebKitInputMethodContext* context);
void base::InputMethodContextBase::notify_focus_out () noexcept
{
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_input_method_context_notify_focus_out;
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()));
}

// void webkit_input_method_context_notify_surrounding (WebKitInputMethodContext* context, const gchar* text, int length, guint cursor_index, guint selection_index);
// void webkit_input_method_context_notify_surrounding (::WebKitInputMethodContext* context, const char* text, gint length, guint cursor_index, guint selection_index);
void base::InputMethodContextBase::notify_surrounding (const std::string & text, gint length, guint cursor_index, guint selection_index) noexcept
{
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context, const char* text, gint length, guint cursor_index, guint selection_index);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_input_method_context_notify_surrounding;
  auto selection_index_to_c = selection_index;
  auto cursor_index_to_c = cursor_index;
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()), (const char*) (text_to_c), (gint) (length_to_c), (guint) (cursor_index_to_c), (guint) (selection_index_to_c));
}

// void webkit_input_method_context_reset (WebKitInputMethodContext* context);
// void webkit_input_method_context_reset (::WebKitInputMethodContext* context);
void base::InputMethodContextBase::reset () noexcept
{
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_input_method_context_reset;
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()));
}

// void webkit_input_method_context_set_enable_preedit (WebKitInputMethodContext* context, gboolean enabled);
// void webkit_input_method_context_set_enable_preedit (::WebKitInputMethodContext* context, gboolean enabled);
void base::InputMethodContextBase::set_enable_preedit (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_input_method_context_set_enable_preedit;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_input_method_context_set_input_hints (WebKitInputMethodContext* context, WebKitInputHints hints);
// void webkit_input_method_context_set_input_hints (::WebKitInputMethodContext* context, ::WebKitInputHints hints);
void base::InputMethodContextBase::set_input_hints (WebKit2::InputHints hints) noexcept
{
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context, ::WebKitInputHints hints);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_input_method_context_set_input_hints;
  auto hints_to_c = gi::unwrap (hints);
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()), (::WebKitInputHints) (hints_to_c));
}

// void webkit_input_method_context_set_input_purpose (WebKitInputMethodContext* context, WebKitInputPurpose purpose);
// void webkit_input_method_context_set_input_purpose (::WebKitInputMethodContext* context, ::WebKitInputPurpose purpose);
void base::InputMethodContextBase::set_input_purpose (WebKit2::InputPurpose purpose) noexcept
{
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context, ::WebKitInputPurpose purpose);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_input_method_context_set_input_purpose;
  auto purpose_to_c = gi::unwrap (purpose);
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()), (::WebKitInputPurpose) (purpose_to_c));
}







} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/inputmethodcontext_extra_def_impl.hpp>)
#include <webkit2/inputmethodcontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/inputmethodcontext_extra_impl.hpp>)
#include <webkit2/inputmethodcontext_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void InputMethodContextClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitInputMethodContextClass *methods = (::WebKitInputMethodContextClass *) class_struct;
  (void) methods;

  methods->committed = (decltype (methods->committed)) detail::method_wrapper<self, void (*) (const std::string & text), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::committed_>;
  methods->delete_surrounding = (decltype (methods->delete_surrounding)) detail::method_wrapper<self, void (*) (gint offset, guint n_chars), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::delete_surrounding_>;
  methods->filter_key_event = (decltype (methods->filter_key_event)) detail::method_wrapper<self, bool (*) (Gdk::EventKey key_event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::filter_key_event_>;
  methods->notify_cursor_area = (decltype (methods->notify_cursor_area)) detail::method_wrapper<self, void (*) (gint x, gint y, gint width, gint height), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::notify_cursor_area_>;
  methods->notify_focus_in = (decltype (methods->notify_focus_in)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::notify_focus_in_>;
  methods->notify_focus_out = (decltype (methods->notify_focus_out)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::notify_focus_out_>;
  methods->notify_surrounding = (decltype (methods->notify_surrounding)) detail::method_wrapper<self, void (*) (const std::string & text, guint length, guint cursor_index, guint selection_index), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::notify_surrounding_>;
  methods->preedit_changed = (decltype (methods->preedit_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::preedit_changed_>;
  methods->preedit_finished = (decltype (methods->preedit_finished)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::preedit_finished_>;
  methods->preedit_started = (decltype (methods->preedit_started)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::preedit_started_>;
  methods->reset = (decltype (methods->reset)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::reset_>;
  methods->set_enable_preedit = (decltype (methods->set_enable_preedit)) detail::method_wrapper<self, void (*) (gboolean enabled), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_enable_preedit_>;
}

// void InputMethodContext::committed (WebKitInputMethodContext* context, const char* text);
// void InputMethodContext::committed (::WebKitInputMethodContext* context, const char* text);
void InputMethodContextClass::committed_ (const std::string & text) noexcept
{
  if (!get_struct_()->committed) return ;
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->committed;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()), (const char*) (text_to_c));
}

// void InputMethodContext::delete_surrounding (WebKitInputMethodContext* context, int offset, guint n_chars);
// void InputMethodContext::delete_surrounding (::WebKitInputMethodContext* context, gint offset, guint n_chars);
void InputMethodContextClass::delete_surrounding_ (gint offset, guint n_chars) noexcept
{
  if (!get_struct_()->delete_surrounding) return ;
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context, gint offset, guint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->delete_surrounding;
  auto n_chars_to_c = n_chars;
  auto offset_to_c = offset;
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()), (gint) (offset_to_c), (guint) (n_chars_to_c));
}

// gboolean InputMethodContext::filter_key_event (WebKitInputMethodContext* context, GdkEventKey* key_event);
// gboolean InputMethodContext::filter_key_event (::WebKitInputMethodContext* context, ::GdkEventKey* key_event);
bool InputMethodContextClass::filter_key_event_ (Gdk::EventKey key_event) noexcept
{
  if (!get_struct_()->filter_key_event) return bool{};
  typedef gboolean (*call_wrap_t) (::WebKitInputMethodContext* context, ::GdkEventKey* key_event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->filter_key_event;
  auto key_event_to_c = gi::unwrap (key_event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitInputMethodContext*) (gobj_()), (::GdkEventKey*) (key_event_to_c));
  return _temp_ret;
}

// void InputMethodContext::get_preedit (WebKitInputMethodContext* context, gchar** text, GList** underlines, guint* cursor_offset);
// void InputMethodContext::get_preedit (::WebKitInputMethodContext* context, char** text, ::GList** underlines, guint* cursor_offset);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// void InputMethodContext::notify_cursor_area (WebKitInputMethodContext* context, int x, int y, int width, int height);
// void InputMethodContext::notify_cursor_area (::WebKitInputMethodContext* context, gint x, gint y, gint width, gint height);
void InputMethodContextClass::notify_cursor_area_ (gint x, gint y, gint width, gint height) noexcept
{
  if (!get_struct_()->notify_cursor_area) return ;
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context, gint x, gint y, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->notify_cursor_area;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (gint) (width_to_c), (gint) (height_to_c));
}

// void InputMethodContext::notify_focus_in (WebKitInputMethodContext* context);
// void InputMethodContext::notify_focus_in (::WebKitInputMethodContext* context);
void InputMethodContextClass::notify_focus_in_ () noexcept
{
  if (!get_struct_()->notify_focus_in) return ;
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->notify_focus_in;
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()));
}

// void InputMethodContext::notify_focus_out (WebKitInputMethodContext* context);
// void InputMethodContext::notify_focus_out (::WebKitInputMethodContext* context);
void InputMethodContextClass::notify_focus_out_ () noexcept
{
  if (!get_struct_()->notify_focus_out) return ;
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->notify_focus_out;
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()));
}

// void InputMethodContext::notify_surrounding (WebKitInputMethodContext* context, const gchar* text, guint length, guint cursor_index, guint selection_index);
// void InputMethodContext::notify_surrounding (::WebKitInputMethodContext* context, const char* text, guint length, guint cursor_index, guint selection_index);
void InputMethodContextClass::notify_surrounding_ (const std::string & text, guint length, guint cursor_index, guint selection_index) noexcept
{
  if (!get_struct_()->notify_surrounding) return ;
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context, const char* text, guint length, guint cursor_index, guint selection_index);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->notify_surrounding;
  auto selection_index_to_c = selection_index;
  auto cursor_index_to_c = cursor_index;
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()), (const char*) (text_to_c), (guint) (length_to_c), (guint) (cursor_index_to_c), (guint) (selection_index_to_c));
}

// void InputMethodContext::preedit_changed (WebKitInputMethodContext* context);
// void InputMethodContext::preedit_changed (::WebKitInputMethodContext* context);
void InputMethodContextClass::preedit_changed_ () noexcept
{
  if (!get_struct_()->preedit_changed) return ;
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->preedit_changed;
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()));
}

// void InputMethodContext::preedit_finished (WebKitInputMethodContext* context);
// void InputMethodContext::preedit_finished (::WebKitInputMethodContext* context);
void InputMethodContextClass::preedit_finished_ () noexcept
{
  if (!get_struct_()->preedit_finished) return ;
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->preedit_finished;
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()));
}

// void InputMethodContext::preedit_started (WebKitInputMethodContext* context);
// void InputMethodContext::preedit_started (::WebKitInputMethodContext* context);
void InputMethodContextClass::preedit_started_ () noexcept
{
  if (!get_struct_()->preedit_started) return ;
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->preedit_started;
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()));
}

// void InputMethodContext::reset (WebKitInputMethodContext* context);
// void InputMethodContext::reset (::WebKitInputMethodContext* context);
void InputMethodContextClass::reset_ () noexcept
{
  if (!get_struct_()->reset) return ;
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->reset;
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()));
}

// void InputMethodContext::set_enable_preedit (WebKitInputMethodContext* context, gboolean enabled);
// void InputMethodContext::set_enable_preedit (::WebKitInputMethodContext* context, gboolean enabled);
void InputMethodContextClass::set_enable_preedit_ (gboolean enabled) noexcept
{
  if (!get_struct_()->set_enable_preedit) return ;
  typedef void (*call_wrap_t) (::WebKitInputMethodContext* context, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_enable_preedit;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitInputMethodContext*) (gobj_()), (gboolean) (enabled_to_c));
}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
