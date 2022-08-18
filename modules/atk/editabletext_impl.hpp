// AUTO-GENERATED

#ifndef _GI_ATK_EDITABLETEXT_IMPL_HPP_
#define _GI_ATK_EDITABLETEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// void atk_editable_text_copy_text (AtkEditableText* text, gint start_pos, gint end_pos);
// void atk_editable_text_copy_text (::AtkEditableText* text, gint start_pos, gint end_pos);
void base::EditableTextBase::copy_text (gint start_pos, gint end_pos) noexcept
{
  typedef void (*call_wrap_t) (::AtkEditableText* text, gint start_pos, gint end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_editable_text_copy_text;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  call_wrap_v ((::AtkEditableText*) (gobj_()), (gint) (start_pos_to_c), (gint) (end_pos_to_c));
}

// void atk_editable_text_cut_text (AtkEditableText* text, gint start_pos, gint end_pos);
// void atk_editable_text_cut_text (::AtkEditableText* text, gint start_pos, gint end_pos);
void base::EditableTextBase::cut_text (gint start_pos, gint end_pos) noexcept
{
  typedef void (*call_wrap_t) (::AtkEditableText* text, gint start_pos, gint end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_editable_text_cut_text;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  call_wrap_v ((::AtkEditableText*) (gobj_()), (gint) (start_pos_to_c), (gint) (end_pos_to_c));
}

// void atk_editable_text_delete_text (AtkEditableText* text, gint start_pos, gint end_pos);
// void atk_editable_text_delete_text (::AtkEditableText* text, gint start_pos, gint end_pos);
void base::EditableTextBase::delete_text (gint start_pos, gint end_pos) noexcept
{
  typedef void (*call_wrap_t) (::AtkEditableText* text, gint start_pos, gint end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_editable_text_delete_text;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  call_wrap_v ((::AtkEditableText*) (gobj_()), (gint) (start_pos_to_c), (gint) (end_pos_to_c));
}

// void atk_editable_text_insert_text (AtkEditableText* text, const gchar* string, gint length, gint* position);
// void atk_editable_text_insert_text (::AtkEditableText* text, const char* string, gint length, gint position);
// SKIP; inconsistent in position pointer depth (1 vs 0)

// void atk_editable_text_paste_text (AtkEditableText* text, gint position);
// void atk_editable_text_paste_text (::AtkEditableText* text, gint position);
void base::EditableTextBase::paste_text (gint position) noexcept
{
  typedef void (*call_wrap_t) (::AtkEditableText* text, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_editable_text_paste_text;
  auto position_to_c = position;
  call_wrap_v ((::AtkEditableText*) (gobj_()), (gint) (position_to_c));
}

// gboolean atk_editable_text_set_run_attributes (AtkEditableText* text, gint start_offset, gint end_offset);
// gboolean atk_editable_text_set_run_attributes (::AtkEditableText* text, gint start_offset, gint end_offset);
// SKIP; inconsistent list element info

// void atk_editable_text_set_text_contents (AtkEditableText* text, const gchar* string);
// void atk_editable_text_set_text_contents (::AtkEditableText* text, const char* string);
void base::EditableTextBase::set_text_contents (const std::string & string) noexcept
{
  typedef void (*call_wrap_t) (::AtkEditableText* text, const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_editable_text_set_text_contents;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkEditableText*) (gobj_()), (const char*) (string_to_c));
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/editabletext_extra_def_impl.hpp>)
#include <atk/editabletext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/editabletext_extra_impl.hpp>)
#include <atk/editabletext_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void EditableTextIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::AtkEditableTextIface *methods = (::AtkEditableTextIface *) interface_struct;
  (void) methods;

  methods->copy_text = (decltype (methods->copy_text)) detail::method_wrapper<self, void (*) (gint start_pos, gint end_pos), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::copy_text_>;
  methods->cut_text = (decltype (methods->cut_text)) detail::method_wrapper<self, void (*) (gint start_pos, gint end_pos), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::cut_text_>;
  methods->delete_text = (decltype (methods->delete_text)) detail::method_wrapper<self, void (*) (gint start_pos, gint end_pos), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::delete_text_>;
  methods->paste_text = (decltype (methods->paste_text)) detail::method_wrapper<self, void (*) (gint position), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::paste_text_>;
  methods->set_text_contents = (decltype (methods->set_text_contents)) detail::method_wrapper<self, void (*) (const std::string & string), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_text_contents_>;
}

// void EditableText::copy_text (AtkEditableText* text, gint start_pos, gint end_pos);
// void EditableText::copy_text (::AtkEditableText* text, gint start_pos, gint end_pos);
void EditableTextIfaceClassImpl::copy_text_ (gint start_pos, gint end_pos) noexcept
{
  if (!get_struct_()->copy_text) return ;
  typedef void (*call_wrap_t) (::AtkEditableText* text, gint start_pos, gint end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->copy_text;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  call_wrap_v ((::AtkEditableText*) (gobj_()), (gint) (start_pos_to_c), (gint) (end_pos_to_c));
}

// void EditableText::cut_text (AtkEditableText* text, gint start_pos, gint end_pos);
// void EditableText::cut_text (::AtkEditableText* text, gint start_pos, gint end_pos);
void EditableTextIfaceClassImpl::cut_text_ (gint start_pos, gint end_pos) noexcept
{
  if (!get_struct_()->cut_text) return ;
  typedef void (*call_wrap_t) (::AtkEditableText* text, gint start_pos, gint end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->cut_text;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  call_wrap_v ((::AtkEditableText*) (gobj_()), (gint) (start_pos_to_c), (gint) (end_pos_to_c));
}

// void EditableText::delete_text (AtkEditableText* text, gint start_pos, gint end_pos);
// void EditableText::delete_text (::AtkEditableText* text, gint start_pos, gint end_pos);
void EditableTextIfaceClassImpl::delete_text_ (gint start_pos, gint end_pos) noexcept
{
  if (!get_struct_()->delete_text) return ;
  typedef void (*call_wrap_t) (::AtkEditableText* text, gint start_pos, gint end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->delete_text;
  auto end_pos_to_c = end_pos;
  auto start_pos_to_c = start_pos;
  call_wrap_v ((::AtkEditableText*) (gobj_()), (gint) (start_pos_to_c), (gint) (end_pos_to_c));
}

// void EditableText::insert_text (AtkEditableText* text, const gchar* string, gint length, gint* position);
// void EditableText::insert_text (::AtkEditableText* text, const char* string, gint length, gint position);
// SKIP; inconsistent in position pointer depth (1 vs 0)

// void EditableText::paste_text (AtkEditableText* text, gint position);
// void EditableText::paste_text (::AtkEditableText* text, gint position);
void EditableTextIfaceClassImpl::paste_text_ (gint position) noexcept
{
  if (!get_struct_()->paste_text) return ;
  typedef void (*call_wrap_t) (::AtkEditableText* text, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->paste_text;
  auto position_to_c = position;
  call_wrap_v ((::AtkEditableText*) (gobj_()), (gint) (position_to_c));
}

// gboolean EditableText::set_run_attributes (AtkEditableText* text, gint start_offset, gint end_offset);
// gboolean EditableText::set_run_attributes (::AtkEditableText* text, gint start_offset, gint end_offset);
// SKIP; inconsistent list element info

// void EditableText::set_text_contents (AtkEditableText* text, const gchar* string);
// void EditableText::set_text_contents (::AtkEditableText* text, const char* string);
void EditableTextIfaceClassImpl::set_text_contents_ (const std::string & string) noexcept
{
  if (!get_struct_()->set_text_contents) return ;
  typedef void (*call_wrap_t) (::AtkEditableText* text, const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_text_contents;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkEditableText*) (gobj_()), (const char*) (string_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
