// AUTO-GENERATED

#ifndef _GI_GIO_INPUTMESSAGE_HPP_
#define _GI_GIO_INPUTMESSAGE_HPP_


namespace gi {

namespace repository {

namespace Gio {


class InputMessage;

namespace base {


#define GI_GIO_INPUTMESSAGE_BASE base::InputMessageBase
class InputMessageBase : public gi::detail::CBoxedWrapper<InputMessageBase, ::GInputMessage>
{
typedef gi::detail::CBoxedWrapper<InputMessageBase, ::GInputMessage> super_type;
public:

InputMessageBase (std::nullptr_t = nullptr) : super_type() {}

// guint InputMessage::num_vectors (const ::GInputMessage* obj);
// guint InputMessage::num_vectors (const ::GInputMessage* obj);
GI_INLINE_DECL guint num_vectors_ () const noexcept;

//  InputMessage::num_vectors (::GInputMessage* obj, guint _value);
// void InputMessage::num_vectors (::GInputMessage* obj, guint _value);
GI_INLINE_DECL void num_vectors_ (guint _value) noexcept;

// gsize InputMessage::bytes_received (const ::GInputMessage* obj);
// gsize InputMessage::bytes_received (const ::GInputMessage* obj);
GI_INLINE_DECL gsize bytes_received_ () const noexcept;

//  InputMessage::bytes_received (::GInputMessage* obj, gsize _value);
// void InputMessage::bytes_received (::GInputMessage* obj, gsize _value);
GI_INLINE_DECL void bytes_received_ (gsize _value) noexcept;

// gint InputMessage::flags (const ::GInputMessage* obj);
// gint InputMessage::flags (const ::GInputMessage* obj);
GI_INLINE_DECL gint flags_ () const noexcept;

//  InputMessage::flags (::GInputMessage* obj, gint _value);
// void InputMessage::flags (::GInputMessage* obj, gint _value);
GI_INLINE_DECL void flags_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/inputmessage_extra_def.hpp>)
#include <gio/inputmessage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/inputmessage_extra.hpp>)
#include <gio/inputmessage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class InputMessage : public GI_GIO_INPUTMESSAGE_BASE
{ typedef GI_GIO_INPUTMESSAGE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GInputMessage>
{ typedef Gio::InputMessage type; }; 

} // namespace repository

} // namespace gi

#endif
