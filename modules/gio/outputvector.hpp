// AUTO-GENERATED

#ifndef _GI_GIO_OUTPUTVECTOR_HPP_
#define _GI_GIO_OUTPUTVECTOR_HPP_


namespace gi {

namespace repository {

namespace Gio {


class OutputVector;

namespace base {


#define GI_GIO_OUTPUTVECTOR_BASE base::OutputVectorBase
class OutputVectorBase : public gi::detail::CBoxedWrapper<OutputVectorBase, ::GOutputVector>
{
typedef gi::detail::CBoxedWrapper<OutputVectorBase, ::GOutputVector> super_type;
public:

OutputVectorBase (std::nullptr_t = nullptr) : super_type() {}

// gsize OutputVector::size (const ::GOutputVector* obj);
// gsize OutputVector::size (const ::GOutputVector* obj);
GI_INLINE_DECL gsize size_ () const noexcept;

//  OutputVector::size (::GOutputVector* obj, gsize _value);
// void OutputVector::size (::GOutputVector* obj, gsize _value);
GI_INLINE_DECL void size_ (gsize _value) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/outputvector_extra_def.hpp>)
#include <gio/outputvector_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/outputvector_extra.hpp>)
#include <gio/outputvector_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class OutputVector : public GI_GIO_OUTPUTVECTOR_BASE
{ typedef GI_GIO_OUTPUTVECTOR_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GOutputVector>
{ typedef Gio::OutputVector type; }; 

} // namespace repository

} // namespace gi

#endif
