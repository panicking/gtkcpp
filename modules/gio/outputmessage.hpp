// AUTO-GENERATED

#ifndef _GI_GIO_OUTPUTMESSAGE_HPP_
#define _GI_GIO_OUTPUTMESSAGE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class OutputVector;
class SocketAddress;

class OutputMessage;

namespace base {


#define GI_GIO_OUTPUTMESSAGE_BASE base::OutputMessageBase
class OutputMessageBase : public gi::detail::CBoxedWrapper<OutputMessageBase, ::GOutputMessage>
{
typedef gi::detail::CBoxedWrapper<OutputMessageBase, ::GOutputMessage> super_type;
public:

OutputMessageBase (std::nullptr_t = nullptr) : super_type() {}

// ::GSocketAddress* OutputMessage::address (const ::GOutputMessage* obj);
// ::GSocketAddress* OutputMessage::address (const ::GOutputMessage* obj);
GI_INLINE_DECL Gio::SocketAddress address_ () const noexcept;

// ::GOutputVector* OutputMessage::vectors (const ::GOutputMessage* obj);
// ::GOutputVector* OutputMessage::vectors (const ::GOutputMessage* obj);
GI_INLINE_DECL Gio::OutputVector vectors_ () const noexcept;

// guint OutputMessage::num_vectors (const ::GOutputMessage* obj);
// guint OutputMessage::num_vectors (const ::GOutputMessage* obj);
GI_INLINE_DECL guint num_vectors_ () const noexcept;

//  OutputMessage::num_vectors (::GOutputMessage* obj, guint _value);
// void OutputMessage::num_vectors (::GOutputMessage* obj, guint _value);
GI_INLINE_DECL void num_vectors_ (guint _value) noexcept;

// guint OutputMessage::bytes_sent (const ::GOutputMessage* obj);
// guint OutputMessage::bytes_sent (const ::GOutputMessage* obj);
GI_INLINE_DECL guint bytes_sent_ () const noexcept;

//  OutputMessage::bytes_sent (::GOutputMessage* obj, guint _value);
// void OutputMessage::bytes_sent (::GOutputMessage* obj, guint _value);
GI_INLINE_DECL void bytes_sent_ (guint _value) noexcept;

// guint OutputMessage::num_control_messages (const ::GOutputMessage* obj);
// guint OutputMessage::num_control_messages (const ::GOutputMessage* obj);
GI_INLINE_DECL guint num_control_messages_ () const noexcept;

//  OutputMessage::num_control_messages (::GOutputMessage* obj, guint _value);
// void OutputMessage::num_control_messages (::GOutputMessage* obj, guint _value);
GI_INLINE_DECL void num_control_messages_ (guint _value) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/outputmessage_extra_def.hpp>)
#include <gio/outputmessage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/outputmessage_extra.hpp>)
#include <gio/outputmessage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class OutputMessage : public GI_GIO_OUTPUTMESSAGE_BASE
{ typedef GI_GIO_OUTPUTMESSAGE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GOutputMessage>
{ typedef Gio::OutputMessage type; }; 

} // namespace repository

} // namespace gi

#endif
