// AUTO-GENERATED

#ifndef _GI_GST_CLOCKENTRY_HPP_
#define _GI_GST_CLOCKENTRY_HPP_


namespace gi {

namespace repository {

namespace Gst {


class ClockEntry;

namespace base {


#define GI_GST_CLOCKENTRY_BASE base::ClockEntryBase
class ClockEntryBase : public gi::detail::CBoxedWrapper<ClockEntryBase, ::GstClockEntry>
{
typedef gi::detail::CBoxedWrapper<ClockEntryBase, ::GstClockEntry> super_type;
public:

ClockEntryBase (std::nullptr_t = nullptr) : super_type() {}

// gint ClockEntry::refcount (const ::GstClockEntry* obj);
// gint ClockEntry::refcount (const ::GstClockEntry* obj);
GI_INLINE_DECL gint refcount_ () const noexcept;

//  ClockEntry::refcount (::GstClockEntry* obj, gint _value);
// void ClockEntry::refcount (::GstClockEntry* obj, gint _value);
GI_INLINE_DECL void refcount_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/clockentry_extra_def.hpp>)
#include <gst/clockentry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/clockentry_extra.hpp>)
#include <gst/clockentry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class ClockEntry : public GI_GST_CLOCKENTRY_BASE
{ typedef GI_GST_CLOCKENTRY_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstClockEntry>
{ typedef Gst::ClockEntry type; }; 

} // namespace repository

} // namespace gi

#endif
