// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_USER_DATA_KEY_T_HPP_
#define _GI_HARFBUZZ_USER_DATA_KEY_T_HPP_


namespace gi {

namespace repository {

namespace HarfBuzz {


class user_data_key_t;

namespace base {


#define GI_HARFBUZZ_USER_DATA_KEY_T_BASE base::user_data_key_tBase
class user_data_key_tBase : public gi::detail::GBoxedWrapper<user_data_key_tBase, ::hb_user_data_key_t>
{
typedef gi::detail::GBoxedWrapper<user_data_key_tBase, ::hb_user_data_key_t> super_type;
public:

user_data_key_tBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return hb_gobject_user_data_key_get_type(); } 

}; // class

} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/user_data_key_t_extra_def.hpp>)
#include <harfbuzz/user_data_key_t_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/user_data_key_t_extra.hpp>)
#include <harfbuzz/user_data_key_t_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace HarfBuzz {

class user_data_key_t : public GI_HARFBUZZ_USER_DATA_KEY_T_BASE
{ typedef GI_HARFBUZZ_USER_DATA_KEY_T_BASE super_type; using super_type::super_type; };

} // namespace HarfBuzz

template<> struct declare_cpptype_of<::hb_user_data_key_t>
{ typedef HarfBuzz::user_data_key_t type; }; 

} // namespace repository

} // namespace gi

#endif
