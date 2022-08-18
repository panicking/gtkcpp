// AUTO-GENERATED

#ifndef _GI_GOBJECT_SIGNALINVOCATIONHINT_HPP_
#define _GI_GOBJECT_SIGNALINVOCATIONHINT_HPP_


namespace gi {

namespace repository {

namespace GObject {


class SignalInvocationHint;

namespace base {


#define GI_GOBJECT_SIGNALINVOCATIONHINT_BASE base::SignalInvocationHintBase
class SignalInvocationHintBase : public gi::detail::CBoxedWrapper<SignalInvocationHintBase, ::GSignalInvocationHint>
{
typedef gi::detail::CBoxedWrapper<SignalInvocationHintBase, ::GSignalInvocationHint> super_type;
public:

SignalInvocationHintBase (std::nullptr_t = nullptr) : super_type() {}

// guint SignalInvocationHint::signal_id (const ::GSignalInvocationHint* obj);
// guint SignalInvocationHint::signal_id (const ::GSignalInvocationHint* obj);
GI_INLINE_DECL guint signal_id_ () const noexcept;

//  SignalInvocationHint::signal_id (::GSignalInvocationHint* obj, guint _value);
// void SignalInvocationHint::signal_id (::GSignalInvocationHint* obj, guint _value);
GI_INLINE_DECL void signal_id_ (guint _value) noexcept;

// ::GQuark SignalInvocationHint::detail (const ::GSignalInvocationHint* obj);
// ::GQuark SignalInvocationHint::detail (const ::GSignalInvocationHint* obj);
GI_INLINE_DECL GLib::Quark detail_ () const noexcept;

//  SignalInvocationHint::detail (::GSignalInvocationHint* obj, ::GQuark _value);
// void SignalInvocationHint::detail (::GSignalInvocationHint* obj, ::GQuark _value);
GI_INLINE_DECL void detail_ (::GQuark _value) noexcept;

// ::GSignalFlags SignalInvocationHint::run_type (const ::GSignalInvocationHint* obj);
// ::GSignalFlags SignalInvocationHint::run_type (const ::GSignalInvocationHint* obj);
GI_INLINE_DECL GObject::SignalFlags run_type_ () const noexcept;

//  SignalInvocationHint::run_type (::GSignalInvocationHint* obj, ::GSignalFlags _value);
// void SignalInvocationHint::run_type (::GSignalInvocationHint* obj, ::GSignalFlags _value);
GI_INLINE_DECL void run_type_ (GObject::SignalFlags _value) noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/signalinvocationhint_extra_def.hpp>)
#include <gobject/signalinvocationhint_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/signalinvocationhint_extra.hpp>)
#include <gobject/signalinvocationhint_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class SignalInvocationHint : public GI_GOBJECT_SIGNALINVOCATIONHINT_BASE
{ typedef GI_GOBJECT_SIGNALINVOCATIONHINT_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GSignalInvocationHint>
{ typedef GObject::SignalInvocationHint type; }; 

} // namespace repository

} // namespace gi

#endif
