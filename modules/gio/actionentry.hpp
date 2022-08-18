// AUTO-GENERATED

#ifndef _GI_GIO_ACTIONENTRY_HPP_
#define _GI_GIO_ACTIONENTRY_HPP_


namespace gi {

namespace repository {

namespace Gio {


class ActionEntry;

namespace base {


#define GI_GIO_ACTIONENTRY_BASE base::ActionEntryBase
class ActionEntryBase : public gi::detail::CBoxedWrapper<ActionEntryBase, ::GActionEntry>
{
typedef gi::detail::CBoxedWrapper<ActionEntryBase, ::GActionEntry> super_type;
public:

ActionEntryBase (std::nullptr_t = nullptr) : super_type() {}

// const char* ActionEntry::name (const ::GActionEntry* obj);
// const char* ActionEntry::name (const ::GActionEntry* obj);
GI_INLINE_DECL std::string name_ () const noexcept;

// const char* ActionEntry::parameter_type (const ::GActionEntry* obj);
// const char* ActionEntry::parameter_type (const ::GActionEntry* obj);
GI_INLINE_DECL std::string parameter_type_ () const noexcept;

// const char* ActionEntry::state (const ::GActionEntry* obj);
// const char* ActionEntry::state (const ::GActionEntry* obj);
GI_INLINE_DECL std::string state_ () const noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/actionentry_extra_def.hpp>)
#include <gio/actionentry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/actionentry_extra.hpp>)
#include <gio/actionentry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class ActionEntry : public GI_GIO_ACTIONENTRY_BASE
{ typedef GI_GIO_ACTIONENTRY_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GActionEntry>
{ typedef Gio::ActionEntry type; }; 

} // namespace repository

} // namespace gi

#endif
