// AUTO-GENERATED

#ifndef _GI_GLIB_LOGFIELD_HPP_
#define _GI_GLIB_LOGFIELD_HPP_


namespace gi {

namespace repository {

namespace GLib {


class LogField;

namespace base {


#define GI_GLIB_LOGFIELD_BASE base::LogFieldBase
class LogFieldBase : public gi::detail::CBoxedWrapper<LogFieldBase, ::GLogField>
{
typedef gi::detail::CBoxedWrapper<LogFieldBase, ::GLogField> super_type;
public:

LogFieldBase (std::nullptr_t = nullptr) : super_type() {}

// const char* LogField::key (const ::GLogField* obj);
// const char* LogField::key (const ::GLogField* obj);
GI_INLINE_DECL std::string key_ () const noexcept;

// gssize LogField::length (const ::GLogField* obj);
// gssize LogField::length (const ::GLogField* obj);
GI_INLINE_DECL gssize length_ () const noexcept;

//  LogField::length (::GLogField* obj, gssize _value);
// void LogField::length (::GLogField* obj, gssize _value);
GI_INLINE_DECL void length_ (gssize _value) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/logfield_extra_def.hpp>)
#include <glib/logfield_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/logfield_extra.hpp>)
#include <glib/logfield_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class LogField : public GI_GLIB_LOGFIELD_BASE
{ typedef GI_GLIB_LOGFIELD_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GLogField>
{ typedef GLib::LogField type; }; 

} // namespace repository

} // namespace gi

#endif
