// AUTO-GENERATED

#ifndef _GI_GOBJECT_CLOSURE_HPP_
#define _GI_GOBJECT_CLOSURE_HPP_


namespace gi {

namespace repository {

namespace GObject {

class Object;
class Value;

class Closure;

namespace base {


#define GI_GOBJECT_CLOSURE_BASE base::ClosureBase
class ClosureBase : public gi::detail::GBoxedWrapper<ClosureBase, ::GClosure>
{
typedef gi::detail::GBoxedWrapper<ClosureBase, ::GClosure> super_type;
public:

ClosureBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_closure_get_type(); } 

// guint Closure::in_marshal (const ::GClosure* obj);
// guint Closure::in_marshal (const ::GClosure* obj);
GI_INLINE_DECL guint in_marshal_ () const noexcept;

//  Closure::in_marshal (::GClosure* obj, guint _value);
// void Closure::in_marshal (::GClosure* obj, guint _value);
GI_INLINE_DECL void in_marshal_ (guint _value) noexcept;

// guint Closure::is_invalid (const ::GClosure* obj);
// guint Closure::is_invalid (const ::GClosure* obj);
GI_INLINE_DECL guint is_invalid_ () const noexcept;

//  Closure::is_invalid (::GClosure* obj, guint _value);
// void Closure::is_invalid (::GClosure* obj, guint _value);
GI_INLINE_DECL void is_invalid_ (guint _value) noexcept;

// GClosure* g_closure_new_object (guint sizeof_closure, GObject* object);
// ::GClosure* g_closure_new_object (guint sizeof_closure, ::GObject* object);
static GI_INLINE_DECL GObject::Closure new_object (guint sizeof_closure, GObject::Object object) noexcept;

// GClosure* g_closure_new_simple (guint sizeof_closure, gpointer data);
// ::GClosure* g_closure_new_simple (guint sizeof_closure, void* data);
static GI_INLINE_DECL GObject::Closure new_simple (guint sizeof_closure, void* data) noexcept;

// void g_closure_add_finalize_notifier (GClosure* closure, gpointer notify_data, GClosureNotify notify_func);
// void g_closure_add_finalize_notifier (::GClosure* closure, void* notify_data,  notify_func);
// IGNORE; not introspectable, notify_func type  not supported

// void g_closure_add_invalidate_notifier (GClosure* closure, gpointer notify_data, GClosureNotify notify_func);
// void g_closure_add_invalidate_notifier (::GClosure* closure, void* notify_data,  notify_func);
// IGNORE; not introspectable, notify_func type  not supported

// void g_closure_add_marshal_guards (GClosure* closure, gpointer pre_marshal_data, GClosureNotify pre_marshal_notify, gpointer post_marshal_data, GClosureNotify post_marshal_notify);
// void g_closure_add_marshal_guards (::GClosure* closure, void* pre_marshal_data,  pre_marshal_notify, void* post_marshal_data,  post_marshal_notify);
// IGNORE; not introspectable, post_marshal_notify type  not supported, pre_marshal_notify type  not supported

// void g_closure_invalidate (GClosure* closure);
// void g_closure_invalidate (::GClosure* closure);
GI_INLINE_DECL void invalidate () noexcept;

// void g_closure_invoke (GClosure* closure, GValue* return_value, guint n_param_values, const GValue* param_values, gpointer invocation_hint);
// void g_closure_invoke (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue** param_values, void* invocation_hint);
// SKIP; inconsistent in param_values pointer depth (1 vs 2)

// GClosure* g_closure_ref (GClosure* closure);
// ::GClosure* g_closure_ref (::GClosure* closure);
// IGNORE; marked ignore

// void g_closure_remove_finalize_notifier (GClosure* closure, gpointer notify_data, GClosureNotify notify_func);
// void g_closure_remove_finalize_notifier (::GClosure* closure, void* notify_data,  notify_func);
// IGNORE; not introspectable, notify_func type  not supported

// void g_closure_remove_invalidate_notifier (GClosure* closure, gpointer notify_data, GClosureNotify notify_func);
// void g_closure_remove_invalidate_notifier (::GClosure* closure, void* notify_data,  notify_func);
// IGNORE; not introspectable, notify_func type  not supported

// void g_closure_set_marshal (GClosure* closure, GClosureMarshal marshal);
// void g_closure_set_marshal (::GClosure* closure,  marshal);
// IGNORE; not introspectable, marshal type  not supported

// void g_closure_set_meta_marshal (GClosure* closure, gpointer marshal_data, GClosureMarshal meta_marshal);
// void g_closure_set_meta_marshal (::GClosure* closure, void* marshal_data,  meta_marshal);
// IGNORE; not introspectable, meta_marshal type  not supported

// void g_closure_sink (GClosure* closure);
// void g_closure_sink (::GClosure* closure);
GI_INLINE_DECL void sink () noexcept;

// void g_closure_unref (GClosure* closure);
// void g_closure_unref (::GClosure* closure);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/closure_extra_def.hpp>)
#include <gobject/closure_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/closure_extra.hpp>)
#include <gobject/closure_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class Closure : public GI_GOBJECT_CLOSURE_BASE
{ typedef GI_GOBJECT_CLOSURE_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GClosure>
{ typedef GObject::Closure type; }; 

} // namespace repository

} // namespace gi

#endif
