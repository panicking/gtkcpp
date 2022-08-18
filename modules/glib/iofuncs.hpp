// AUTO-GENERATED

#ifndef _GI_GLIB_IOFUNCS_HPP_
#define _GI_GLIB_IOFUNCS_HPP_


namespace gi {

namespace repository {

namespace GLib {


class IOFuncs;

namespace base {


#define GI_GLIB_IOFUNCS_BASE base::IOFuncsBase
class IOFuncsBase : public gi::detail::CBoxedWrapper<IOFuncsBase, ::GIOFuncs>
{
typedef gi::detail::CBoxedWrapper<IOFuncsBase, ::GIOFuncs> super_type;
public:

IOFuncsBase (std::nullptr_t = nullptr) : super_type() {}

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/iofuncs_extra_def.hpp>)
#include <glib/iofuncs_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/iofuncs_extra.hpp>)
#include <glib/iofuncs_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class IOFuncs : public GI_GLIB_IOFUNCS_BASE
{ typedef GI_GLIB_IOFUNCS_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GIOFuncs>
{ typedef GLib::IOFuncs type; }; 

} // namespace repository

} // namespace gi

#endif
