// AUTO-GENERATED

#ifndef _GI_GOBJECT_CLOSURENOTIFYDATA_HPP_
#define _GI_GOBJECT_CLOSURENOTIFYDATA_HPP_


namespace gi {

namespace repository {

namespace GObject {


class ClosureNotifyData;

namespace base {


#define GI_GOBJECT_CLOSURENOTIFYDATA_BASE base::ClosureNotifyDataBase
class ClosureNotifyDataBase : public gi::detail::CBoxedWrapper<ClosureNotifyDataBase, ::GClosureNotifyData>
{
typedef gi::detail::CBoxedWrapper<ClosureNotifyDataBase, ::GClosureNotifyData> super_type;
public:

ClosureNotifyDataBase (std::nullptr_t = nullptr) : super_type() {}

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/closurenotifydata_extra_def.hpp>)
#include <gobject/closurenotifydata_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/closurenotifydata_extra.hpp>)
#include <gobject/closurenotifydata_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class ClosureNotifyData : public GI_GOBJECT_CLOSURENOTIFYDATA_BASE
{ typedef GI_GOBJECT_CLOSURENOTIFYDATA_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GClosureNotifyData>
{ typedef GObject::ClosureNotifyData type; }; 

} // namespace repository

} // namespace gi

#endif
