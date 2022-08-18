// AUTO-GENERATED

#ifndef _GI_GLIB_HOOK_HPP_
#define _GI_GLIB_HOOK_HPP_


namespace gi {

namespace repository {

namespace GLib {

class HookList;

class Hook;

namespace base {


#define GI_GLIB_HOOK_BASE base::HookBase
class HookBase : public gi::detail::CBoxedWrapper<HookBase, ::GHook>
{
typedef gi::detail::CBoxedWrapper<HookBase, ::GHook> super_type;
public:

HookBase (std::nullptr_t = nullptr) : super_type() {}

// ::GHook* Hook::next (const ::GHook* obj);
// ::GHook* Hook::next (const ::GHook* obj);
GI_INLINE_DECL GLib::Hook next_ () const noexcept;

// ::GHook* Hook::prev (const ::GHook* obj);
// ::GHook* Hook::prev (const ::GHook* obj);
GI_INLINE_DECL GLib::Hook prev_ () const noexcept;

// guint Hook::ref_count (const ::GHook* obj);
// guint Hook::ref_count (const ::GHook* obj);
GI_INLINE_DECL guint ref_count_ () const noexcept;

//  Hook::ref_count (::GHook* obj, guint _value);
// void Hook::ref_count (::GHook* obj, guint _value);
GI_INLINE_DECL void ref_count_ (guint _value) noexcept;

// gulong Hook::hook_id (const ::GHook* obj);
// gulong Hook::hook_id (const ::GHook* obj);
GI_INLINE_DECL gulong hook_id_ () const noexcept;

//  Hook::hook_id (::GHook* obj, gulong _value);
// void Hook::hook_id (::GHook* obj, gulong _value);
GI_INLINE_DECL void hook_id_ (gulong _value) noexcept;

// guint Hook::flags (const ::GHook* obj);
// guint Hook::flags (const ::GHook* obj);
GI_INLINE_DECL guint flags_ () const noexcept;

//  Hook::flags (::GHook* obj, guint _value);
// void Hook::flags (::GHook* obj, guint _value);
GI_INLINE_DECL void flags_ (guint _value) noexcept;

// gint g_hook_compare_ids (GHook* new_hook, GHook* sibling);
// gint g_hook_compare_ids (::GHook* new_hook, ::GHook* sibling);
GI_INLINE_DECL gint compare_ids (GLib::Hook sibling) noexcept;

// FAILURE on g_hook_alloc; No such node (<xmlattr>.transfer-ownership)
// gboolean g_hook_destroy (GHookList* hook_list, gulong hook_id);
// gboolean g_hook_destroy (::GHookList* hook_list, gulong hook_id);
static GI_INLINE_DECL bool destroy (GLib::HookList hook_list, gulong hook_id) noexcept;

// void g_hook_destroy_link (GHookList* hook_list, GHook* hook);
// void g_hook_destroy_link (::GHookList* hook_list, ::GHook* hook);
static GI_INLINE_DECL void destroy_link (GLib::HookList hook_list, GLib::Hook hook) noexcept;

// FAILURE on g_hook_find; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_hook_find_data; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_hook_find_func; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_hook_find_func_data; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_hook_first_valid; No such node (<xmlattr>.transfer-ownership)
// void g_hook_free (GHookList* hook_list, GHook* hook);
// void g_hook_free (::GHookList* hook_list, ::GHook* hook);
// IGNORE; marked ignore

// FAILURE on g_hook_get; No such node (<xmlattr>.transfer-ownership)
// void g_hook_insert_before (GHookList* hook_list, GHook* sibling, GHook* hook);
// void g_hook_insert_before (::GHookList* hook_list, ::GHook* sibling, ::GHook* hook);
static GI_INLINE_DECL void insert_before (GLib::HookList hook_list, GLib::Hook sibling, GLib::Hook hook) noexcept;
static GI_INLINE_DECL void insert_before (GLib::HookList hook_list, GLib::Hook hook) noexcept;

// void g_hook_insert_sorted (GHookList* hook_list, GHook* hook, GHookCompareFunc func);
// void g_hook_insert_sorted (::GHookList* hook_list, ::GHook* hook,  func);
// IGNORE; not introspectable, func type  not supported

// FAILURE on g_hook_next_valid; No such node (<xmlattr>.transfer-ownership)
// void g_hook_prepend (GHookList* hook_list, GHook* hook);
// void g_hook_prepend (::GHookList* hook_list, ::GHook* hook);
static GI_INLINE_DECL void prepend (GLib::HookList hook_list, GLib::Hook hook) noexcept;

// FAILURE on g_hook_ref; No such node (<xmlattr>.transfer-ownership)
// void g_hook_unref (GHookList* hook_list, GHook* hook);
// void g_hook_unref (::GHookList* hook_list, ::GHook* hook);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/hook_extra_def.hpp>)
#include <glib/hook_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/hook_extra.hpp>)
#include <glib/hook_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Hook : public GI_GLIB_HOOK_BASE
{ typedef GI_GLIB_HOOK_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GHook>
{ typedef GLib::Hook type; }; 

} // namespace repository

} // namespace gi

#endif
