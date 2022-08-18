// AUTO-GENERATED

#ifndef _GI_GLIB_URIPARAMSITER_HPP_
#define _GI_GLIB_URIPARAMSITER_HPP_


namespace gi {

namespace repository {

namespace GLib {


class UriParamsIter;

namespace base {


#define GI_GLIB_URIPARAMSITER_BASE base::UriParamsIterBase
class UriParamsIterBase : public gi::detail::CBoxedWrapper<UriParamsIterBase, ::GUriParamsIter>
{
typedef gi::detail::CBoxedWrapper<UriParamsIterBase, ::GUriParamsIter> super_type;
public:

UriParamsIterBase (std::nullptr_t = nullptr) : super_type() {}

// void g_uri_params_iter_init (GUriParamsIter* iter, const gchar* params, gssize length, const gchar* separators, GUriParamsFlags flags);
// void g_uri_params_iter_init (::GUriParamsIter* iter, const char* params, gssize length, const char* separators, ::GUriParamsFlags flags);
GI_INLINE_DECL void init (const std::string & params, gssize length, const std::string & separators, GLib::UriParamsFlags flags) noexcept;

// gboolean g_uri_params_iter_next (GUriParamsIter* iter, gchar** attribute, gchar** value, GError ** error);
// gboolean g_uri_params_iter_next (::GUriParamsIter* iter, char** attribute, char** value, GError ** error);
GI_INLINE_DECL bool next (std::string * attribute = nullptr, std::string * value = nullptr);
GI_INLINE_DECL bool next (std::string * attribute, std::string * value, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string, std::string> next ();
GI_INLINE_DECL std::tuple<bool, std::string, std::string> next (GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/uriparamsiter_extra_def.hpp>)
#include <glib/uriparamsiter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/uriparamsiter_extra.hpp>)
#include <glib/uriparamsiter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class UriParamsIter : public GI_GLIB_URIPARAMSITER_BASE
{ typedef GI_GLIB_URIPARAMSITER_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GUriParamsIter>
{ typedef GLib::UriParamsIter type; }; 

} // namespace repository

} // namespace gi

#endif
