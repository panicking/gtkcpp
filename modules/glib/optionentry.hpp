// AUTO-GENERATED

#ifndef _GI_GLIB_OPTIONENTRY_HPP_
#define _GI_GLIB_OPTIONENTRY_HPP_


namespace gi {

namespace repository {

namespace GLib {


class OptionEntry;

namespace base {


#define GI_GLIB_OPTIONENTRY_BASE base::OptionEntryBase
class OptionEntryBase : public gi::detail::CBoxedWrapper<OptionEntryBase, ::GOptionEntry>
{
typedef gi::detail::CBoxedWrapper<OptionEntryBase, ::GOptionEntry> super_type;
public:

OptionEntryBase (std::nullptr_t = nullptr) : super_type() {}

// const char* OptionEntry::long_name (const ::GOptionEntry* obj);
// const char* OptionEntry::long_name (const ::GOptionEntry* obj);
GI_INLINE_DECL std::string long_name_ () const noexcept;

// gchar OptionEntry::short_name (const ::GOptionEntry* obj);
// gchar OptionEntry::short_name (const ::GOptionEntry* obj);
GI_INLINE_DECL gchar short_name_ () const noexcept;

//  OptionEntry::short_name (::GOptionEntry* obj, gchar _value);
// void OptionEntry::short_name (::GOptionEntry* obj, gchar _value);
GI_INLINE_DECL void short_name_ (gchar _value) noexcept;

// gint OptionEntry::flags (const ::GOptionEntry* obj);
// gint OptionEntry::flags (const ::GOptionEntry* obj);
GI_INLINE_DECL gint flags_ () const noexcept;

//  OptionEntry::flags (::GOptionEntry* obj, gint _value);
// void OptionEntry::flags (::GOptionEntry* obj, gint _value);
GI_INLINE_DECL void flags_ (gint _value) noexcept;

// ::GOptionArg OptionEntry::arg (const ::GOptionEntry* obj);
// ::GOptionArg OptionEntry::arg (const ::GOptionEntry* obj);
GI_INLINE_DECL GLib::OptionArg arg_ () const noexcept;

//  OptionEntry::arg (::GOptionEntry* obj, ::GOptionArg _value);
// void OptionEntry::arg (::GOptionEntry* obj, ::GOptionArg _value);
GI_INLINE_DECL void arg_ (GLib::OptionArg _value) noexcept;

// const char* OptionEntry::description (const ::GOptionEntry* obj);
// const char* OptionEntry::description (const ::GOptionEntry* obj);
GI_INLINE_DECL std::string description_ () const noexcept;

// const char* OptionEntry::arg_description (const ::GOptionEntry* obj);
// const char* OptionEntry::arg_description (const ::GOptionEntry* obj);
GI_INLINE_DECL std::string arg_description_ () const noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/optionentry_extra_def.hpp>)
#include <glib/optionentry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/optionentry_extra.hpp>)
#include <glib/optionentry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class OptionEntry : public GI_GLIB_OPTIONENTRY_BASE
{ typedef GI_GLIB_OPTIONENTRY_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GOptionEntry>
{ typedef GLib::OptionEntry type; }; 

} // namespace repository

} // namespace gi

#endif
