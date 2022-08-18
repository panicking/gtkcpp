// AUTO-GENERATED

#ifndef _GI_GIO_INPUTVECTOR_IMPL_HPP_
#define _GI_GIO_INPUTVECTOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

static gsize _field_size_get (const ::GInputVector* obj) { return (gsize) obj->size; }
// gsize InputVector::size (const ::GInputVector* obj);
// gsize InputVector::size (const ::GInputVector* obj);
gsize base::InputVectorBase::size_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GInputVector* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_size_get;
  auto _temp_ret = call_wrap_v ((const ::GInputVector*) (gobj_()));
  return _temp_ret;
}

static void _field_size_set (::GInputVector* obj, gsize _value) { obj->size = (decltype(obj->size)) _value; }
//  InputVector::size (::GInputVector* obj, gsize _value);
// void InputVector::size (::GInputVector* obj, gsize _value);
void base::InputVectorBase::size_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GInputVector* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_size_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GInputVector*) (gobj_()), (gsize) (_value_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/inputvector_extra_def_impl.hpp>)
#include <gio/inputvector_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/inputvector_extra_impl.hpp>)
#include <gio/inputvector_extra_impl.hpp>
#endif
#endif

#endif
