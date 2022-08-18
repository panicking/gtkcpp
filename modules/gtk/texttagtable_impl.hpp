// AUTO-GENERATED

#ifndef _GI_GTK_TEXTTAGTABLE_IMPL_HPP_
#define _GI_GTK_TEXTTAGTABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable TextTagTableBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TextTagTableBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// GtkTextTagTable* gtk_text_tag_table_new ();
// ::GtkTextTagTable* gtk_text_tag_table_new ();
Gtk::TextTagTable base::TextTagTableBase::new_ () noexcept
{
  typedef ::GtkTextTagTable* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_tag_table_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_text_tag_table_add (GtkTextTagTable* table, GtkTextTag* tag);
// gboolean gtk_text_tag_table_add (::GtkTextTagTable* table, ::GtkTextTag* tag);
bool base::TextTagTableBase::add (Gtk::TextTag tag) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextTagTable* table, ::GtkTextTag* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_tag_table_add;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTextTagTable*) (gobj_()), (::GtkTextTag*) (tag_to_c));
  return _temp_ret;
}

// void gtk_text_tag_table_foreach (GtkTextTagTable* table, GtkTextTagTableForeach func, gpointer data);
// void gtk_text_tag_table_foreach (::GtkTextTagTable* table, Gtk::TextTagTableForeach::cfunction_type func, void* data);
void base::TextTagTableBase::foreach (Gtk::TextTagTableForeach func) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextTagTable* table, Gtk::TextTagTableForeach::cfunction_type func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_tag_table_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::GtkTextTagTable*) (gobj_()), (Gtk::TextTagTableForeach::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// gint gtk_text_tag_table_get_size (GtkTextTagTable* table);
// gint gtk_text_tag_table_get_size (::GtkTextTagTable* table);
gint base::TextTagTableBase::get_size () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTextTagTable* table);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_tag_table_get_size;
  auto _temp_ret = call_wrap_v ((::GtkTextTagTable*) (gobj_()));
  return _temp_ret;
}

// GtkTextTag* gtk_text_tag_table_lookup (GtkTextTagTable* table, const gchar* name);
// ::GtkTextTag* gtk_text_tag_table_lookup (::GtkTextTagTable* table, const char* name);
Gtk::TextTag base::TextTagTableBase::lookup (const std::string & name) noexcept
{
  typedef ::GtkTextTag* (*call_wrap_t) (::GtkTextTagTable* table, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_tag_table_lookup;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTextTagTable*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_text_tag_table_remove (GtkTextTagTable* table, GtkTextTag* tag);
// void gtk_text_tag_table_remove (::GtkTextTagTable* table, ::GtkTextTag* tag);
void base::TextTagTableBase::remove (Gtk::TextTag tag) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextTagTable* table, ::GtkTextTag* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_tag_table_remove;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextTagTable*) (gobj_()), (::GtkTextTag*) (tag_to_c));
}





} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/texttagtable_extra_def_impl.hpp>)
#include <gtk/texttagtable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/texttagtable_extra_impl.hpp>)
#include <gtk/texttagtable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TextTagTableClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkTextTagTableClass *methods = (::GtkTextTagTableClass *) class_struct;
  (void) methods;

  methods->tag_added = (decltype (methods->tag_added)) detail::method_wrapper<self, void (*) (Gtk::TextTag tag), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::tag_added_>;
  methods->tag_changed = (decltype (methods->tag_changed)) detail::method_wrapper<self, void (*) (Gtk::TextTag tag, gboolean size_changed), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::tag_changed_>;
  methods->tag_removed = (decltype (methods->tag_removed)) detail::method_wrapper<self, void (*) (Gtk::TextTag tag), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::tag_removed_>;
}

// void TextTagTable::tag_added (GtkTextTagTable* table, GtkTextTag* tag);
// void TextTagTable::tag_added (::GtkTextTagTable* table, ::GtkTextTag* tag);
void TextTagTableClass::tag_added_ (Gtk::TextTag tag) noexcept
{
  if (!get_struct_()->tag_added) return ;
  typedef void (*call_wrap_t) (::GtkTextTagTable* table, ::GtkTextTag* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->tag_added;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextTagTable*) (gobj_()), (::GtkTextTag*) (tag_to_c));
}

// void TextTagTable::tag_changed (GtkTextTagTable* table, GtkTextTag* tag, gboolean size_changed);
// void TextTagTable::tag_changed (::GtkTextTagTable* table, ::GtkTextTag* tag, gboolean size_changed);
void TextTagTableClass::tag_changed_ (Gtk::TextTag tag, gboolean size_changed) noexcept
{
  if (!get_struct_()->tag_changed) return ;
  typedef void (*call_wrap_t) (::GtkTextTagTable* table, ::GtkTextTag* tag, gboolean size_changed);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->tag_changed;
  auto size_changed_to_c = size_changed;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextTagTable*) (gobj_()), (::GtkTextTag*) (tag_to_c), (gboolean) (size_changed_to_c));
}

// void TextTagTable::tag_removed (GtkTextTagTable* table, GtkTextTag* tag);
// void TextTagTable::tag_removed (::GtkTextTagTable* table, ::GtkTextTag* tag);
void TextTagTableClass::tag_removed_ (Gtk::TextTag tag) noexcept
{
  if (!get_struct_()->tag_removed) return ;
  typedef void (*call_wrap_t) (::GtkTextTagTable* table, ::GtkTextTag* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->tag_removed;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTextTagTable*) (gobj_()), (::GtkTextTag*) (tag_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
