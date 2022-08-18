// AUTO-GENERATED

#ifndef _GI_GTK_BINDINGSIGNAL_HPP_
#define _GI_GTK_BINDINGSIGNAL_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class BindingSignal;

namespace base {


#define GI_GTK_BINDINGSIGNAL_BASE base::BindingSignalBase
class BindingSignalBase : public gi::detail::CBoxedWrapper<BindingSignalBase, ::GtkBindingSignal>
{
typedef gi::detail::CBoxedWrapper<BindingSignalBase, ::GtkBindingSignal> super_type;
public:

BindingSignalBase (std::nullptr_t = nullptr) : super_type() {}

// ::GtkBindingSignal* BindingSignal::next (const ::GtkBindingSignal* obj);
// ::GtkBindingSignal* BindingSignal::next (const ::GtkBindingSignal* obj);
GI_INLINE_DECL Gtk::BindingSignal next_ () const noexcept;

// char* BindingSignal::signal_name (const ::GtkBindingSignal* obj);
// char* BindingSignal::signal_name (const ::GtkBindingSignal* obj);
GI_INLINE_DECL std::string signal_name_ () const noexcept;

// guint BindingSignal::n_args (const ::GtkBindingSignal* obj);
// guint BindingSignal::n_args (const ::GtkBindingSignal* obj);
GI_INLINE_DECL guint n_args_ () const noexcept;

//  BindingSignal::n_args (::GtkBindingSignal* obj, guint _value);
// void BindingSignal::n_args (::GtkBindingSignal* obj, guint _value);
GI_INLINE_DECL void n_args_ (guint _value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/bindingsignal_extra_def.hpp>)
#include <gtk/bindingsignal_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/bindingsignal_extra.hpp>)
#include <gtk/bindingsignal_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class BindingSignal : public GI_GTK_BINDINGSIGNAL_BASE
{ typedef GI_GTK_BINDINGSIGNAL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBindingSignal>
{ typedef Gtk::BindingSignal type; }; 

} // namespace repository

} // namespace gi

#endif
