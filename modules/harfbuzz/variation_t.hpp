// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_VARIATION_T_HPP_
#define _GI_HARFBUZZ_VARIATION_T_HPP_


namespace gi {

namespace repository {

namespace HarfBuzz {


class variation_t;

namespace base {


#define GI_HARFBUZZ_VARIATION_T_BASE base::variation_tBase
class variation_tBase : public gi::detail::CBoxedWrapper<variation_tBase, ::hb_variation_t>
{
typedef gi::detail::CBoxedWrapper<variation_tBase, ::hb_variation_t> super_type;
public:

variation_tBase (std::nullptr_t = nullptr) : super_type() {}

// ::hb_tag_t variation_t::tag (const ::hb_variation_t* obj);
// ::hb_tag_t variation_t::tag (const ::hb_variation_t* obj);
GI_INLINE_DECL HarfBuzz::tag_t tag_ () const noexcept;

//  variation_t::tag (::hb_variation_t* obj, ::hb_tag_t _value);
// void variation_t::tag (::hb_variation_t* obj, ::hb_tag_t _value);
GI_INLINE_DECL void tag_ (::hb_tag_t _value) noexcept;

// gfloat variation_t::value (const ::hb_variation_t* obj);
// gfloat variation_t::value (const ::hb_variation_t* obj);
GI_INLINE_DECL gfloat value_ () const noexcept;

//  variation_t::value (::hb_variation_t* obj, gfloat _value);
// void variation_t::value (::hb_variation_t* obj, gfloat _value);
GI_INLINE_DECL void value_ (gfloat _value) noexcept;

// void hb_variation_to_string (hb_variation_t* variation, char* buf, unsigned int size);
// void hb_variation_to_string (::hb_variation_t* variation, char* buf, guint size);
GI_INLINE_DECL void _string (const std::string & buf, guint size) noexcept;

}; // class

} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/variation_t_extra_def.hpp>)
#include <harfbuzz/variation_t_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/variation_t_extra.hpp>)
#include <harfbuzz/variation_t_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace HarfBuzz {

class variation_t : public GI_HARFBUZZ_VARIATION_T_BASE
{ typedef GI_HARFBUZZ_VARIATION_T_BASE super_type; using super_type::super_type; };

} // namespace HarfBuzz

template<> struct declare_cpptype_of<::hb_variation_t>
{ typedef HarfBuzz::variation_t type; }; 

} // namespace repository

} // namespace gi

#endif
