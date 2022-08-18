// AUTO-GENERATED

#ifndef _GI_GOBJECT_WEAKREF_HPP_
#define _GI_GOBJECT_WEAKREF_HPP_


namespace gi {

namespace repository {

namespace GObject {

class Object;

class WeakRef;

namespace base {


#define GI_GOBJECT_WEAKREF_BASE base::WeakRefBase
class WeakRefBase : public gi::detail::CBoxedWrapper<WeakRefBase, ::GWeakRef>
{
typedef gi::detail::CBoxedWrapper<WeakRefBase, ::GWeakRef> super_type;
public:

WeakRefBase (std::nullptr_t = nullptr) : super_type() {}

// void g_weak_ref_clear (GWeakRef* weak_ref);
// void g_weak_ref_clear (::GWeakRef** weak_ref);
// IGNORE; not introspectable, inconsistent inout weak_ref pointer depth (1 vs 2)

// gpointer g_weak_ref_get (GWeakRef* weak_ref);
// ::GObject* g_weak_ref_get (::GWeakRef** weak_ref);
// IGNORE; not introspectable, inconsistent inout weak_ref pointer depth (1 vs 2)

// void g_weak_ref_init (GWeakRef* weak_ref, gpointer object);
// void g_weak_ref_init (::GWeakRef** weak_ref, ::GObject* object);
// IGNORE; not introspectable, inconsistent inout weak_ref pointer depth (1 vs 2)

// void g_weak_ref_set (GWeakRef* weak_ref, gpointer object);
// void g_weak_ref_set (::GWeakRef* weak_ref, ::GObject* object);
GI_INLINE_DECL void set (GObject::Object object) noexcept;
GI_INLINE_DECL void set () noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/weakref_extra_def.hpp>)
#include <gobject/weakref_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/weakref_extra.hpp>)
#include <gobject/weakref_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class WeakRef : public GI_GOBJECT_WEAKREF_BASE
{ typedef GI_GOBJECT_WEAKREF_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GWeakRef>
{ typedef GObject::WeakRef type; }; 

} // namespace repository

} // namespace gi

#endif
