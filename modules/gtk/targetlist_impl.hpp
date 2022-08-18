// AUTO-GENERATED

#ifndef _GI_GTK_TARGETLIST_IMPL_HPP_
#define _GI_GTK_TARGETLIST_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkTargetList* gtk_target_list_new (const GtkTargetEntry* targets, guint ntargets);
// ::GtkTargetList* gtk_target_list_new (const ::GtkTargetEntry** targets, guint ntargets);
// SKIP; inconsistent in targets pointer depth (1 vs 2)

// void gtk_target_list_add (GtkTargetList* list, GdkAtom target, guint flags, guint info);
// void gtk_target_list_add (::GtkTargetList* list,  target, guint flags, guint info);
// SKIP; target type  not supported

// void gtk_target_list_add_image_targets (GtkTargetList* list, guint info, gboolean writable);
// void gtk_target_list_add_image_targets (::GtkTargetList* list, guint info, gboolean writable);
void base::TargetListBase::add_image_targets (guint info, gboolean writable) noexcept
{
  typedef void (*call_wrap_t) (::GtkTargetList* list, guint info, gboolean writable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_target_list_add_image_targets;
  auto writable_to_c = writable;
  auto info_to_c = info;
  call_wrap_v ((::GtkTargetList*) (gobj_()), (guint) (info_to_c), (gboolean) (writable_to_c));
}

// void gtk_target_list_add_rich_text_targets (GtkTargetList* list, guint info, gboolean deserializable, GtkTextBuffer* buffer);
// void gtk_target_list_add_rich_text_targets (::GtkTargetList* list, guint info, gboolean deserializable, ::GtkTextBuffer* buffer);
void base::TargetListBase::add_rich_text_targets (guint info, gboolean deserializable, Gtk::TextBuffer buffer) noexcept
{
  typedef void (*call_wrap_t) (::GtkTargetList* list, guint info, gboolean deserializable, ::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_target_list_add_rich_text_targets;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto deserializable_to_c = deserializable;
  auto info_to_c = info;
  call_wrap_v ((::GtkTargetList*) (gobj_()), (guint) (info_to_c), (gboolean) (deserializable_to_c), (::GtkTextBuffer*) (buffer_to_c));
}

// void gtk_target_list_add_table (GtkTargetList* list, const GtkTargetEntry* targets, guint ntargets);
// void gtk_target_list_add_table (::GtkTargetList* list, const ::GtkTargetEntry** targets, guint ntargets);
// SKIP; inconsistent in targets pointer depth (1 vs 2)

// void gtk_target_list_add_text_targets (GtkTargetList* list, guint info);
// void gtk_target_list_add_text_targets (::GtkTargetList* list, guint info);
void base::TargetListBase::add_text_targets (guint info) noexcept
{
  typedef void (*call_wrap_t) (::GtkTargetList* list, guint info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_target_list_add_text_targets;
  auto info_to_c = info;
  call_wrap_v ((::GtkTargetList*) (gobj_()), (guint) (info_to_c));
}

// void gtk_target_list_add_uri_targets (GtkTargetList* list, guint info);
// void gtk_target_list_add_uri_targets (::GtkTargetList* list, guint info);
void base::TargetListBase::add_uri_targets (guint info) noexcept
{
  typedef void (*call_wrap_t) (::GtkTargetList* list, guint info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_target_list_add_uri_targets;
  auto info_to_c = info;
  call_wrap_v ((::GtkTargetList*) (gobj_()), (guint) (info_to_c));
}

// gboolean gtk_target_list_find (GtkTargetList* list, GdkAtom target, guint* info);
// gboolean gtk_target_list_find (::GtkTargetList* list,  target, guint* info);
// SKIP; target type  not supported

// GtkTargetList* gtk_target_list_ref (GtkTargetList* list);
// ::GtkTargetList* gtk_target_list_ref (::GtkTargetList* list);
// IGNORE; marked ignore

// void gtk_target_list_remove (GtkTargetList* list, GdkAtom target);
// void gtk_target_list_remove (::GtkTargetList* list,  target);
// SKIP; target type  not supported

// void gtk_target_list_unref (GtkTargetList* list);
// void gtk_target_list_unref (::GtkTargetList* list);
// IGNORE; marked ignore


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/targetlist_extra_def_impl.hpp>)
#include <gtk/targetlist_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/targetlist_extra_impl.hpp>)
#include <gtk/targetlist_extra_impl.hpp>
#endif
#endif

#endif
