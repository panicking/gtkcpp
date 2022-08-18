// AUTO-GENERATED

#ifndef _GI_GLIB_HOOKLIST_IMPL_HPP_
#define _GI_GLIB_HOOKLIST_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

static gulong _field_seq_id_get (const ::GHookList* obj) { return (gulong) obj->seq_id; }
// gulong HookList::seq_id (const ::GHookList* obj);
// gulong HookList::seq_id (const ::GHookList* obj);
gulong base::HookListBase::seq_id_ () const noexcept
{
  typedef gulong (*call_wrap_t) (const ::GHookList* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_seq_id_get;
  auto _temp_ret = call_wrap_v ((const ::GHookList*) (gobj_()));
  return _temp_ret;
}

static void _field_seq_id_set (::GHookList* obj, gulong _value) { obj->seq_id = (decltype(obj->seq_id)) _value; }
//  HookList::seq_id (::GHookList* obj, gulong _value);
// void HookList::seq_id (::GHookList* obj, gulong _value);
void base::HookListBase::seq_id_ (gulong _value) noexcept
{
  typedef void (*call_wrap_t) (::GHookList* obj, gulong _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_seq_id_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GHookList*) (gobj_()), (gulong) (_value_to_c));
}

static guint _field_hook_size_get (const ::GHookList* obj) { return (guint) obj->hook_size; }
// guint HookList::hook_size (const ::GHookList* obj);
// guint HookList::hook_size (const ::GHookList* obj);
guint base::HookListBase::hook_size_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GHookList* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_hook_size_get;
  auto _temp_ret = call_wrap_v ((const ::GHookList*) (gobj_()));
  return _temp_ret;
}

static void _field_hook_size_set (::GHookList* obj, guint _value) { obj->hook_size = (decltype(obj->hook_size)) _value; }
//  HookList::hook_size (::GHookList* obj, guint _value);
// void HookList::hook_size (::GHookList* obj, guint _value);
void base::HookListBase::hook_size_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GHookList* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_hook_size_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GHookList*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_is_setup_get (const ::GHookList* obj) { return (guint) obj->is_setup; }
// guint HookList::is_setup (const ::GHookList* obj);
// guint HookList::is_setup (const ::GHookList* obj);
guint base::HookListBase::is_setup_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GHookList* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_setup_get;
  auto _temp_ret = call_wrap_v ((const ::GHookList*) (gobj_()));
  return _temp_ret;
}

static void _field_is_setup_set (::GHookList* obj, guint _value) { obj->is_setup = (decltype(obj->is_setup)) _value; }
//  HookList::is_setup (::GHookList* obj, guint _value);
// void HookList::is_setup (::GHookList* obj, guint _value);
void base::HookListBase::is_setup_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GHookList* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_setup_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GHookList*) (gobj_()), (guint) (_value_to_c));
}

static ::GHook* _field_hooks_get (const ::GHookList* obj) { return (::GHook*) obj->hooks; }
// ::GHook* HookList::hooks (const ::GHookList* obj);
// ::GHook* HookList::hooks (const ::GHookList* obj);
GLib::Hook base::HookListBase::hooks_ () const noexcept
{
  typedef ::GHook* (*call_wrap_t) (const ::GHookList* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_hooks_get;
  auto _temp_ret = call_wrap_v ((const ::GHookList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_hook_list_clear (GHookList* hook_list);
// void g_hook_list_clear (::GHookList* hook_list);
void base::HookListBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::GHookList* hook_list);
  call_wrap_t call_wrap_v = (call_wrap_t) g_hook_list_clear;
  call_wrap_v ((::GHookList*) (gobj_()));
}

// void g_hook_list_init (GHookList* hook_list, guint hook_size);
// void g_hook_list_init (::GHookList* hook_list, guint hook_size);
void base::HookListBase::init (guint hook_size) noexcept
{
  typedef void (*call_wrap_t) (::GHookList* hook_list, guint hook_size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_hook_list_init;
  auto hook_size_to_c = hook_size;
  call_wrap_v ((::GHookList*) (gobj_()), (guint) (hook_size_to_c));
}

// void g_hook_list_invoke (GHookList* hook_list, gboolean may_recurse);
// void g_hook_list_invoke (::GHookList* hook_list, gboolean may_recurse);
void base::HookListBase::invoke (gboolean may_recurse) noexcept
{
  typedef void (*call_wrap_t) (::GHookList* hook_list, gboolean may_recurse);
  call_wrap_t call_wrap_v = (call_wrap_t) g_hook_list_invoke;
  auto may_recurse_to_c = may_recurse;
  call_wrap_v ((::GHookList*) (gobj_()), (gboolean) (may_recurse_to_c));
}

// void g_hook_list_invoke_check (GHookList* hook_list, gboolean may_recurse);
// void g_hook_list_invoke_check (::GHookList* hook_list, gboolean may_recurse);
void base::HookListBase::invoke_check (gboolean may_recurse) noexcept
{
  typedef void (*call_wrap_t) (::GHookList* hook_list, gboolean may_recurse);
  call_wrap_t call_wrap_v = (call_wrap_t) g_hook_list_invoke_check;
  auto may_recurse_to_c = may_recurse;
  call_wrap_v ((::GHookList*) (gobj_()), (gboolean) (may_recurse_to_c));
}

// void g_hook_list_marshal (GHookList* hook_list, gboolean may_recurse, GHookMarshaller marshaller, gpointer marshal_data);
// void g_hook_list_marshal (::GHookList* hook_list, gboolean may_recurse,  marshaller, void* marshal_data);
// IGNORE; not introspectable, marshaller type  not supported

// void g_hook_list_marshal_check (GHookList* hook_list, gboolean may_recurse, GHookCheckMarshaller marshaller, gpointer marshal_data);
// void g_hook_list_marshal_check (::GHookList* hook_list, gboolean may_recurse,  marshaller, void* marshal_data);
// IGNORE; not introspectable, marshaller type  not supported


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/hooklist_extra_def_impl.hpp>)
#include <glib/hooklist_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/hooklist_extra_impl.hpp>)
#include <glib/hooklist_extra_impl.hpp>
#endif
#endif

#endif
