// AUTO-GENERATED

#ifndef _GI_GIO_OUTPUTVECTOR_IMPL_HPP_
#define _GI_GIO_OUTPUTVECTOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

static gsize _field_size_get (const ::GOutputVector* obj) { return (gsize) obj->size; }
// gsize OutputVector::size (const ::GOutputVector* obj);
// gsize OutputVector::size (const ::GOutputVector* obj);
gsize base::OutputVectorBase::size_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GOutputVector* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_size_get;
  auto _temp_ret = call_wrap_v ((const ::GOutputVector*) (gobj_()));
  return _temp_ret;
}

static void _field_size_set (::GOutputVector* obj, gsize _value) { obj->size = (decltype(obj->size)) _value; }
//  OutputVector::size (::GOutputVector* obj, gsize _value);
// void OutputVector::size (::GOutputVector* obj, gsize _value);
void base::OutputVectorBase::size_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GOutputVector* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_size_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GOutputVector*) (gobj_()), (gsize) (_value_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/outputvector_extra_def_impl.hpp>)
#include <gio/outputvector_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/outputvector_extra_impl.hpp>)
#include <gio/outputvector_extra_impl.hpp>
#endif
#endif

#endif
