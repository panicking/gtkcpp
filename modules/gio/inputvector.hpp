// AUTO-GENERATED

#ifndef _GI_GIO_INPUTVECTOR_HPP_
#define _GI_GIO_INPUTVECTOR_HPP_


namespace gi {

namespace repository {

namespace Gio {


class InputVector;

namespace base {


#define GI_GIO_INPUTVECTOR_BASE base::InputVectorBase
class InputVectorBase : public gi::detail::CBoxedWrapper<InputVectorBase, ::GInputVector>
{
typedef gi::detail::CBoxedWrapper<InputVectorBase, ::GInputVector> super_type;
public:

InputVectorBase (std::nullptr_t = nullptr) : super_type() {}

// gsize InputVector::size (const ::GInputVector* obj);
// gsize InputVector::size (const ::GInputVector* obj);
GI_INLINE_DECL gsize size_ () const noexcept;

//  InputVector::size (::GInputVector* obj, gsize _value);
// void InputVector::size (::GInputVector* obj, gsize _value);
GI_INLINE_DECL void size_ (gsize _value) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/inputvector_extra_def.hpp>)
#include <gio/inputvector_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/inputvector_extra.hpp>)
#include <gio/inputvector_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class InputVector : public GI_GIO_INPUTVECTOR_BASE
{ typedef GI_GIO_INPUTVECTOR_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GInputVector>
{ typedef Gio::InputVector type; }; 

} // namespace repository

} // namespace gi

#endif
