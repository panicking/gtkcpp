// AUTO-GENERATED

#ifndef _GI_GTK_TARGETENTRY_IMPL_HPP_
#define _GI_GTK_TARGETENTRY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static char* _field_target_get (const ::GtkTargetEntry* obj) { return (char*) obj->target; }
// char* TargetEntry::target (const ::GtkTargetEntry* obj);
// char* TargetEntry::target (const ::GtkTargetEntry* obj);
std::string base::TargetEntryBase::target_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GtkTargetEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_target_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTargetEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static guint _field_flags_get (const ::GtkTargetEntry* obj) { return (guint) obj->flags; }
// guint TargetEntry::flags (const ::GtkTargetEntry* obj);
// guint TargetEntry::flags (const ::GtkTargetEntry* obj);
guint base::TargetEntryBase::flags_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkTargetEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTargetEntry*) (gobj_()));
  return _temp_ret;
}

static void _field_flags_set (::GtkTargetEntry* obj, guint _value) { obj->flags = (decltype(obj->flags)) _value; }
//  TargetEntry::flags (::GtkTargetEntry* obj, guint _value);
// void TargetEntry::flags (::GtkTargetEntry* obj, guint _value);
void base::TargetEntryBase::flags_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTargetEntry* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTargetEntry*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_info_get (const ::GtkTargetEntry* obj) { return (guint) obj->info; }
// guint TargetEntry::info (const ::GtkTargetEntry* obj);
// guint TargetEntry::info (const ::GtkTargetEntry* obj);
guint base::TargetEntryBase::info_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkTargetEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_info_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTargetEntry*) (gobj_()));
  return _temp_ret;
}

static void _field_info_set (::GtkTargetEntry* obj, guint _value) { obj->info = (decltype(obj->info)) _value; }
//  TargetEntry::info (::GtkTargetEntry* obj, guint _value);
// void TargetEntry::info (::GtkTargetEntry* obj, guint _value);
void base::TargetEntryBase::info_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTargetEntry* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_info_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTargetEntry*) (gobj_()), (guint) (_value_to_c));
}

// GtkTargetEntry* gtk_target_entry_new (const gchar* target, guint flags, guint info);
// ::GtkTargetEntry* gtk_target_entry_new (const char* target, guint flags, guint info);
Gtk::TargetEntry base::TargetEntryBase::new_ (const std::string & target, guint flags, guint info) noexcept
{
  typedef ::GtkTargetEntry* (*call_wrap_t) (const char* target, guint flags, guint info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_target_entry_new;
  auto info_to_c = info;
  auto flags_to_c = flags;
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (target_to_c), (guint) (flags_to_c), (guint) (info_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkTargetEntry* gtk_target_entry_copy (GtkTargetEntry* data);
// ::GtkTargetEntry* gtk_target_entry_copy (::GtkTargetEntry* data);
Gtk::TargetEntry base::TargetEntryBase::copy () noexcept
{
  typedef ::GtkTargetEntry* (*call_wrap_t) (::GtkTargetEntry* data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_target_entry_copy;
  auto _temp_ret = call_wrap_v ((::GtkTargetEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_target_entry_free (GtkTargetEntry* data);
// void gtk_target_entry_free (::GtkTargetEntry* data);
// IGNORE; marked ignore


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/targetentry_extra_def_impl.hpp>)
#include <gtk/targetentry_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/targetentry_extra_impl.hpp>)
#include <gtk/targetentry_extra_impl.hpp>
#endif
#endif

#endif
