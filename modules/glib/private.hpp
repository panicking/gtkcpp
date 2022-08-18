// AUTO-GENERATED

#ifndef _GI_GLIB_PRIVATE_HPP_
#define _GI_GLIB_PRIVATE_HPP_


namespace gi {

namespace repository {

namespace GLib {


class Private;

namespace base {


#define GI_GLIB_PRIVATE_BASE base::PrivateBase
class PrivateBase : public gi::detail::CBoxedWrapper<PrivateBase, ::GPrivate>
{
typedef gi::detail::CBoxedWrapper<PrivateBase, ::GPrivate> super_type;
public:

PrivateBase (std::nullptr_t = nullptr) : super_type() {}

// gpointer g_private_get (GPrivate* key);
// void* g_private_get (::GPrivate* key);
GI_INLINE_DECL gpointer get () noexcept;

// void g_private_replace (GPrivate* key, gpointer value);
// void g_private_replace (::GPrivate* key, void* value);
GI_INLINE_DECL void replace (void* value) noexcept;

// void g_private_set (GPrivate* key, gpointer value);
// void g_private_set (::GPrivate* key, void* value);
GI_INLINE_DECL void set (void* value) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/private_extra_def.hpp>)
#include <glib/private_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/private_extra.hpp>)
#include <glib/private_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Private : public GI_GLIB_PRIVATE_BASE
{ typedef GI_GLIB_PRIVATE_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GPrivate>
{ typedef GLib::Private type; }; 

} // namespace repository

} // namespace gi

#endif
