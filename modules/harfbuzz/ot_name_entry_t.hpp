// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_OT_NAME_ENTRY_T_HPP_
#define _GI_HARFBUZZ_OT_NAME_ENTRY_T_HPP_


namespace gi {

namespace repository {

namespace HarfBuzz {


class ot_name_entry_t;

namespace base {


#define GI_HARFBUZZ_OT_NAME_ENTRY_T_BASE base::ot_name_entry_tBase
class ot_name_entry_tBase : public gi::detail::CBoxedWrapper<ot_name_entry_tBase, ::hb_ot_name_entry_t>
{
typedef gi::detail::CBoxedWrapper<ot_name_entry_tBase, ::hb_ot_name_entry_t> super_type;
public:

ot_name_entry_tBase (std::nullptr_t = nullptr) : super_type() {}

// ::hb_ot_name_id_t ot_name_entry_t::name_id (const ::hb_ot_name_entry_t* obj);
// ::hb_ot_name_id_t ot_name_entry_t::name_id (const ::hb_ot_name_entry_t* obj);
GI_INLINE_DECL HarfBuzz::ot_name_id_t name_id_ () const noexcept;

//  ot_name_entry_t::name_id (::hb_ot_name_entry_t* obj, ::hb_ot_name_id_t _value);
// void ot_name_entry_t::name_id (::hb_ot_name_entry_t* obj, ::hb_ot_name_id_t _value);
GI_INLINE_DECL void name_id_ (::hb_ot_name_id_t _value) noexcept;

}; // class

} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/ot_name_entry_t_extra_def.hpp>)
#include <harfbuzz/ot_name_entry_t_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/ot_name_entry_t_extra.hpp>)
#include <harfbuzz/ot_name_entry_t_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace HarfBuzz {

class ot_name_entry_t : public GI_HARFBUZZ_OT_NAME_ENTRY_T_BASE
{ typedef GI_HARFBUZZ_OT_NAME_ENTRY_T_BASE super_type; using super_type::super_type; };

} // namespace HarfBuzz

template<> struct declare_cpptype_of<::hb_ot_name_entry_t>
{ typedef HarfBuzz::ot_name_entry_t type; }; 

} // namespace repository

} // namespace gi

#endif
