// AUTO-GENERATED

#ifndef _GI_GTK_TARGETPAIR_HPP_
#define _GI_GTK_TARGETPAIR_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class TargetPair;

namespace base {


#define GI_GTK_TARGETPAIR_BASE base::TargetPairBase
class TargetPairBase : public gi::detail::CBoxedWrapper<TargetPairBase, ::GtkTargetPair>
{
typedef gi::detail::CBoxedWrapper<TargetPairBase, ::GtkTargetPair> super_type;
public:

TargetPairBase (std::nullptr_t = nullptr) : super_type() {}

// guint TargetPair::flags (const ::GtkTargetPair* obj);
// guint TargetPair::flags (const ::GtkTargetPair* obj);
GI_INLINE_DECL guint flags_ () const noexcept;

//  TargetPair::flags (::GtkTargetPair* obj, guint _value);
// void TargetPair::flags (::GtkTargetPair* obj, guint _value);
GI_INLINE_DECL void flags_ (guint _value) noexcept;

// guint TargetPair::info (const ::GtkTargetPair* obj);
// guint TargetPair::info (const ::GtkTargetPair* obj);
GI_INLINE_DECL guint info_ () const noexcept;

//  TargetPair::info (::GtkTargetPair* obj, guint _value);
// void TargetPair::info (::GtkTargetPair* obj, guint _value);
GI_INLINE_DECL void info_ (guint _value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/targetpair_extra_def.hpp>)
#include <gtk/targetpair_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/targetpair_extra.hpp>)
#include <gtk/targetpair_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TargetPair : public GI_GTK_TARGETPAIR_BASE
{ typedef GI_GTK_TARGETPAIR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTargetPair>
{ typedef Gtk::TargetPair type; }; 

} // namespace repository

} // namespace gi

#endif
