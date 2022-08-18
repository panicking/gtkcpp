// AUTO-GENERATED

#ifndef _GI_GTK_SEARCHENTRY_IMPL_HPP_
#define _GI_GTK_SEARCHENTRY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_search_entry_new ();
// ::GtkSearchEntry* gtk_search_entry_new ();
Gtk::SearchEntry base::SearchEntryBase::new_ () noexcept
{
  typedef ::GtkSearchEntry* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_search_entry_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_search_entry_handle_event (GtkSearchEntry* entry, GdkEvent* event);
// gboolean gtk_search_entry_handle_event (::GtkSearchEntry* entry,  event);
// SKIP; event type  not supported






} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/searchentry_extra_def_impl.hpp>)
#include <gtk/searchentry_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/searchentry_extra_impl.hpp>)
#include <gtk/searchentry_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SearchEntryClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkSearchEntryClass *methods = (::GtkSearchEntryClass *) class_struct;
  (void) methods;

  methods->next_match = (decltype (methods->next_match)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::next_match_>;
  methods->previous_match = (decltype (methods->previous_match)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::previous_match_>;
  methods->search_changed = (decltype (methods->search_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::search_changed_>;
  methods->stop_search = (decltype (methods->stop_search)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::stop_search_>;
}

// void SearchEntry::next_match (GtkSearchEntry* entry);
// void SearchEntry::next_match (::GtkSearchEntry* entry);
void SearchEntryClass::next_match_ () noexcept
{
  if (!get_struct_()->next_match) return ;
  typedef void (*call_wrap_t) (::GtkSearchEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->next_match;
  call_wrap_v ((::GtkSearchEntry*) (gobj_()));
}

// void SearchEntry::previous_match (GtkSearchEntry* entry);
// void SearchEntry::previous_match (::GtkSearchEntry* entry);
void SearchEntryClass::previous_match_ () noexcept
{
  if (!get_struct_()->previous_match) return ;
  typedef void (*call_wrap_t) (::GtkSearchEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->previous_match;
  call_wrap_v ((::GtkSearchEntry*) (gobj_()));
}

// void SearchEntry::search_changed (GtkSearchEntry* entry);
// void SearchEntry::search_changed (::GtkSearchEntry* entry);
void SearchEntryClass::search_changed_ () noexcept
{
  if (!get_struct_()->search_changed) return ;
  typedef void (*call_wrap_t) (::GtkSearchEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->search_changed;
  call_wrap_v ((::GtkSearchEntry*) (gobj_()));
}

// void SearchEntry::stop_search (GtkSearchEntry* entry);
// void SearchEntry::stop_search (::GtkSearchEntry* entry);
void SearchEntryClass::stop_search_ () noexcept
{
  if (!get_struct_()->stop_search) return ;
  typedef void (*call_wrap_t) (::GtkSearchEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->stop_search;
  call_wrap_v ((::GtkSearchEntry*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
