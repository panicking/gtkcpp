// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_SEGMENT_PROPERTIES_T_HPP_
#define _GI_HARFBUZZ_SEGMENT_PROPERTIES_T_HPP_


namespace gi {

namespace repository {

namespace HarfBuzz {


class segment_properties_t;

namespace base {


#define GI_HARFBUZZ_SEGMENT_PROPERTIES_T_BASE base::segment_properties_tBase
class segment_properties_tBase : public gi::detail::GBoxedWrapper<segment_properties_tBase, ::hb_segment_properties_t>
{
typedef gi::detail::GBoxedWrapper<segment_properties_tBase, ::hb_segment_properties_t> super_type;
public:

segment_properties_tBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return hb_gobject_segment_properties_get_type(); } 

// ::hb_direction_t segment_properties_t::direction (const ::hb_segment_properties_t* obj);
// ::hb_direction_t segment_properties_t::direction (const ::hb_segment_properties_t* obj);
GI_INLINE_DECL HarfBuzz::direction_t direction_ () const noexcept;

//  segment_properties_t::direction (::hb_segment_properties_t* obj, ::hb_direction_t _value);
// void segment_properties_t::direction (::hb_segment_properties_t* obj, ::hb_direction_t _value);
GI_INLINE_DECL void direction_ (HarfBuzz::direction_t _value) noexcept;

// ::hb_script_t segment_properties_t::script (const ::hb_segment_properties_t* obj);
// ::hb_script_t segment_properties_t::script (const ::hb_segment_properties_t* obj);
GI_INLINE_DECL HarfBuzz::script_t script_ () const noexcept;

//  segment_properties_t::script (::hb_segment_properties_t* obj, ::hb_script_t _value);
// void segment_properties_t::script (::hb_segment_properties_t* obj, ::hb_script_t _value);
GI_INLINE_DECL void script_ (HarfBuzz::script_t _value) noexcept;

}; // class

} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/segment_properties_t_extra_def.hpp>)
#include <harfbuzz/segment_properties_t_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/segment_properties_t_extra.hpp>)
#include <harfbuzz/segment_properties_t_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace HarfBuzz {

class segment_properties_t : public GI_HARFBUZZ_SEGMENT_PROPERTIES_T_BASE
{ typedef GI_HARFBUZZ_SEGMENT_PROPERTIES_T_BASE super_type; using super_type::super_type; };

} // namespace HarfBuzz

template<> struct declare_cpptype_of<::hb_segment_properties_t>
{ typedef HarfBuzz::segment_properties_t type; }; 

} // namespace repository

} // namespace gi

#endif
