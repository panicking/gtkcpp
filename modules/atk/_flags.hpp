// AUTO-GENERATED

#ifndef _GI_ATK__FLAGS_HPP_
#define _GI_ATK__FLAGS_HPP_

namespace gi {

namespace repository {

namespace Atk {

enum class HyperlinkStateFlags {
  INLINE_ = ATK_HYPERLINK_IS_INLINE,
};

} // namespace Atk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Atk::HyperlinkStateFlags>
{ typedef AtkHyperlinkStateFlags type; }; 
template<> struct declare_cpptype_of<AtkHyperlinkStateFlags>
{ typedef Atk::HyperlinkStateFlags type; }; 

template<> struct declare_gtype_of<Atk::HyperlinkStateFlags>
{ static GType get_type() { return atk_hyperlink_state_flags_get_type(); } };


} // namespace repository

} // namespace gi


#endif
