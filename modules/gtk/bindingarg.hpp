// AUTO-GENERATED

#ifndef _GI_GTK_BINDINGARG_HPP_
#define _GI_GTK_BINDINGARG_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class BindingArg;

namespace base {


#define GI_GTK_BINDINGARG_BASE base::BindingArgBase
class BindingArgBase : public gi::detail::CBoxedWrapper<BindingArgBase, ::GtkBindingArg>
{
typedef gi::detail::CBoxedWrapper<BindingArgBase, ::GtkBindingArg> super_type;
public:

BindingArgBase (std::nullptr_t = nullptr) : super_type() {}

// GType BindingArg::arg_type (const ::GtkBindingArg* obj);
// GType BindingArg::arg_type (const ::GtkBindingArg* obj);
GI_INLINE_DECL GType arg_type_ () const noexcept;

//  BindingArg::arg_type (::GtkBindingArg* obj, GType _value);
// void BindingArg::arg_type (::GtkBindingArg* obj, GType _value);
GI_INLINE_DECL void arg_type_ (GType _value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/bindingarg_extra_def.hpp>)
#include <gtk/bindingarg_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/bindingarg_extra.hpp>)
#include <gtk/bindingarg_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class BindingArg : public GI_GTK_BINDINGARG_BASE
{ typedef GI_GTK_BINDINGARG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBindingArg>
{ typedef Gtk::BindingArg type; }; 

} // namespace repository

} // namespace gi

#endif
