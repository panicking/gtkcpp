// AUTO-GENERATED

#ifndef _GI_GTK_EDITABLE_IMPL_HPP_
#define _GI_GTK_EDITABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_editable_copy_clipboard (GtkEditable* editable);
// void gtk_editable_copy_clipboard (::GtkEditable* editable);
void base::EditableBase::copy_clipboard () noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_editable_copy_clipboard;
  call_wrap_v ((::GtkEditable*) (gobj_()));
}

// void gtk_editable_cut_clipboard (GtkEditable* editable);
// void gtk_editable_cut_clipboard (::GtkEditable* editable);
void base::EditableBase::cut_clipboard () noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_editable_cut_clipboard;
  call_wrap_v ((::GtkEditable*) (gobj_()));
}

// void gtk_editable_delete_selection (GtkEditable* editable);
// void gtk_editable_delete_selection (::GtkEditable* editable);
void base::EditableBase::delete_selection () noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_editable_delete_selection;
  call_wrap_v ((::GtkEditable*) (gobj_()));
}

// void gtk_editable_delete_text (GtkEditable* editable, gint start_pos, gint end_pos);
// void gtk_editable_delete_text (::GtkEditable* editable, gint start_pos, gint end_pos);
void base::EditableBase::delete_text (gint start_pos, gint end_pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable, gint start_pos, gint end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_editable_delete_text;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  call_wrap_v ((::GtkEditable*) (gobj_()), (gint) (start_pos_to_c), (gint) (end_pos_to_c));
}

// gchar* gtk_editable_get_chars (GtkEditable* editable, gint start_pos, gint end_pos);
// char* gtk_editable_get_chars (::GtkEditable* editable, gint start_pos, gint end_pos);
std::string base::EditableBase::get_chars (gint start_pos, gint end_pos) noexcept
{
  typedef char* (*call_wrap_t) (::GtkEditable* editable, gint start_pos, gint end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_editable_get_chars;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()), (gint) (start_pos_to_c), (gint) (end_pos_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_editable_get_editable (GtkEditable* editable);
// gboolean gtk_editable_get_editable (::GtkEditable* editable);
bool base::EditableBase::get_editable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_editable_get_editable;
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()));
  return _temp_ret;
}

// gint gtk_editable_get_position (GtkEditable* editable);
// gint gtk_editable_get_position (::GtkEditable* editable);
gint base::EditableBase::get_position () noexcept
{
  typedef gint (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_editable_get_position;
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_editable_get_selection_bounds (GtkEditable* editable, gint* start_pos, gint* end_pos);
// gboolean gtk_editable_get_selection_bounds (::GtkEditable* editable, gint* start_pos, gint* end_pos);
bool base::EditableBase::get_selection_bounds (gint * start_pos, gint * end_pos) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEditable* editable, gint* start_pos, gint* end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_editable_get_selection_bounds;
  gint end_pos_o {};
  gint start_pos_o {};
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()), (gint*) (start_pos ? &start_pos_o : nullptr), (gint*) (end_pos ? &end_pos_o : nullptr));
  if (end_pos) *end_pos = end_pos_o;
  if (start_pos) *start_pos = start_pos_o;
  return _temp_ret;
}
std::tuple<bool, gint, gint> base::EditableBase::get_selection_bounds () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEditable* editable, gint* start_pos, gint* end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_editable_get_selection_bounds;
  gint end_pos_o {};
  gint start_pos_o {};
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()), (gint*) (&start_pos_o), (gint*) (&end_pos_o));
  return std::make_tuple (_temp_ret, start_pos_o, end_pos_o);
}

// void gtk_editable_insert_text (GtkEditable* editable, const gchar* new_text, gint new_text_length, gint* position);
// void gtk_editable_insert_text (::GtkEditable* editable, const char* new_text, gint new_text_length, gint* position);
void base::EditableBase::insert_text (const std::string & new_text, gint new_text_length, gint & position) noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable, const char* new_text, gint new_text_length, gint* position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_editable_insert_text;
  auto position_to_c = position;
  gint position_o = position_to_c;
  auto new_text_length_to_c = new_text_length;
  auto new_text_to_c = gi::unwrap (new_text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkEditable*) (gobj_()), (const char*) (new_text_to_c), (gint) (new_text_length_to_c), (gint*) (&position_o));
  position = position_o;
}

// void gtk_editable_paste_clipboard (GtkEditable* editable);
// void gtk_editable_paste_clipboard (::GtkEditable* editable);
void base::EditableBase::paste_clipboard () noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_editable_paste_clipboard;
  call_wrap_v ((::GtkEditable*) (gobj_()));
}

// void gtk_editable_select_region (GtkEditable* editable, gint start_pos, gint end_pos);
// void gtk_editable_select_region (::GtkEditable* editable, gint start_pos, gint end_pos);
void base::EditableBase::select_region (gint start_pos, gint end_pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable, gint start_pos, gint end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_editable_select_region;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  call_wrap_v ((::GtkEditable*) (gobj_()), (gint) (start_pos_to_c), (gint) (end_pos_to_c));
}

// void gtk_editable_set_editable (GtkEditable* editable, gboolean is_editable);
// void gtk_editable_set_editable (::GtkEditable* editable, gboolean is_editable);
void base::EditableBase::set_editable (gboolean is_editable) noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable, gboolean is_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_editable_set_editable;
  auto is_editable_to_c = is_editable;
  call_wrap_v ((::GtkEditable*) (gobj_()), (gboolean) (is_editable_to_c));
}

// void gtk_editable_set_position (GtkEditable* editable, gint position);
// void gtk_editable_set_position (::GtkEditable* editable, gint position);
void base::EditableBase::set_position (gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkEditable* editable, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_editable_set_position;
  auto position_to_c = position;
  call_wrap_v ((::GtkEditable*) (gobj_()), (gint) (position_to_c));
}



// SKIP; glib:signal out parameter not supported


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/editable_extra_def_impl.hpp>)
#include <gtk/editable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/editable_extra_impl.hpp>)
#include <gtk/editable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void EditableInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GtkEditableInterface *methods = (::GtkEditableInterface *) interface_struct;
  (void) methods;

  methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::changed_>;
  methods->delete_text = (decltype (methods->delete_text)) detail::method_wrapper<self, void (*) (gint start_pos, gint end_pos), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::delete_text_>;
  methods->do_delete_text = (decltype (methods->do_delete_text)) detail::method_wrapper<self, void (*) (gint start_pos, gint end_pos), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::do_delete_text_>;
  methods->get_chars = (decltype (methods->get_chars)) detail::method_wrapper<self, std::string (*) (gint start_pos, gint end_pos), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_chars_>;
  methods->get_position = (decltype (methods->get_position)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_position_>;
  methods->set_position = (decltype (methods->set_position)) detail::method_wrapper<self, void (*) (gint position), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_position_>;
  methods->set_selection_bounds = (decltype (methods->set_selection_bounds)) detail::method_wrapper<self, void (*) (gint start_pos, gint end_pos), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_selection_bounds_>;
}

// void Editable::changed (GtkEditable* editable);
// void Editable::changed (::GtkEditable* editable);
void EditableInterfaceClassImpl::changed_ () noexcept
{
  if (!get_struct_()->changed) return ;
  typedef void (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GtkEditable*) (gobj_()));
}

// void Editable::delete_text (GtkEditable* editable, gint start_pos, gint end_pos);
// void Editable::delete_text (::GtkEditable* editable, gint start_pos, gint end_pos);
void EditableInterfaceClassImpl::delete_text_ (gint start_pos, gint end_pos) noexcept
{
  if (!get_struct_()->delete_text) return ;
  typedef void (*call_wrap_t) (::GtkEditable* editable, gint start_pos, gint end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->delete_text;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  call_wrap_v ((::GtkEditable*) (gobj_()), (gint) (start_pos_to_c), (gint) (end_pos_to_c));
}

// void Editable::do_delete_text (GtkEditable* editable, gint start_pos, gint end_pos);
// void Editable::do_delete_text (::GtkEditable* editable, gint start_pos, gint end_pos);
void EditableInterfaceClassImpl::do_delete_text_ (gint start_pos, gint end_pos) noexcept
{
  if (!get_struct_()->do_delete_text) return ;
  typedef void (*call_wrap_t) (::GtkEditable* editable, gint start_pos, gint end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->do_delete_text;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  call_wrap_v ((::GtkEditable*) (gobj_()), (gint) (start_pos_to_c), (gint) (end_pos_to_c));
}

// void Editable::do_insert_text (GtkEditable* editable, const gchar* new_text, gint new_text_length, gint* position);
// void Editable::do_insert_text (::GtkEditable* editable, const char* new_text, gint new_text_length, gint* position);
// SKIP; virtual-method out parameter not supported

// gchar* Editable::get_chars (GtkEditable* editable, gint start_pos, gint end_pos);
// char* Editable::get_chars (::GtkEditable* editable, gint start_pos, gint end_pos);
std::string EditableInterfaceClassImpl::get_chars_ (gint start_pos, gint end_pos) noexcept
{
  if (!get_struct_()->get_chars) return std::string{};
  typedef char* (*call_wrap_t) (::GtkEditable* editable, gint start_pos, gint end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_chars;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()), (gint) (start_pos_to_c), (gint) (end_pos_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint Editable::get_position (GtkEditable* editable);
// gint Editable::get_position (::GtkEditable* editable);
gint EditableInterfaceClassImpl::get_position_ () noexcept
{
  if (!get_struct_()->get_position) return gint{};
  typedef gint (*call_wrap_t) (::GtkEditable* editable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_position;
  auto _temp_ret = call_wrap_v ((::GtkEditable*) (gobj_()));
  return _temp_ret;
}

// gboolean Editable::get_selection_bounds (GtkEditable* editable, gint* start_pos, gint* end_pos);
// gboolean Editable::get_selection_bounds (::GtkEditable* editable, gint* start_pos, gint* end_pos);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void Editable::insert_text (GtkEditable* editable, const gchar* new_text, gint new_text_length, gint* position);
// void Editable::insert_text (::GtkEditable* editable, const char* new_text, gint new_text_length, gint* position);
// SKIP; virtual-method out parameter not supported

// void Editable::set_position (GtkEditable* editable, gint position);
// void Editable::set_position (::GtkEditable* editable, gint position);
void EditableInterfaceClassImpl::set_position_ (gint position) noexcept
{
  if (!get_struct_()->set_position) return ;
  typedef void (*call_wrap_t) (::GtkEditable* editable, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_position;
  auto position_to_c = position;
  call_wrap_v ((::GtkEditable*) (gobj_()), (gint) (position_to_c));
}

// void Editable::set_selection_bounds (GtkEditable* editable, gint start_pos, gint end_pos);
// void Editable::set_selection_bounds (::GtkEditable* editable, gint start_pos, gint end_pos);
void EditableInterfaceClassImpl::set_selection_bounds_ (gint start_pos, gint end_pos) noexcept
{
  if (!get_struct_()->set_selection_bounds) return ;
  typedef void (*call_wrap_t) (::GtkEditable* editable, gint start_pos, gint end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_selection_bounds;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  call_wrap_v ((::GtkEditable*) (gobj_()), (gint) (start_pos_to_c), (gint) (end_pos_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
