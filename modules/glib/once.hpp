// AUTO-GENERATED

#ifndef _GI_GLIB_ONCE_HPP_
#define _GI_GLIB_ONCE_HPP_


namespace gi {

namespace repository {

namespace GLib {


class Once;

namespace base {


#define GI_GLIB_ONCE_BASE base::OnceBase
class OnceBase : public gi::detail::CBoxedWrapper<OnceBase, ::GOnce>
{
typedef gi::detail::CBoxedWrapper<OnceBase, ::GOnce> super_type;
public:

OnceBase (std::nullptr_t = nullptr) : super_type() {}

// gpointer g_once_impl (GOnce* once, GThreadFunc func, gpointer arg);
// void* g_once_impl (::GOnce* once,  func, void* arg);
// IGNORE; not introspectable, func type  not supported

// gboolean g_once_init_enter (void* location);
// gboolean g_once_init_enter (void* location);
static GI_INLINE_DECL bool init_enter (void* location) noexcept;

// void g_once_init_leave (void* location, gsize result);
// void g_once_init_leave (void* location, gsize result);
static GI_INLINE_DECL void init_leave (void* location, gsize result) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/once_extra_def.hpp>)
#include <glib/once_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/once_extra.hpp>)
#include <glib/once_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Once : public GI_GLIB_ONCE_BASE
{ typedef GI_GLIB_ONCE_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GOnce>
{ typedef GLib::Once type; }; 

} // namespace repository

} // namespace gi

#endif
