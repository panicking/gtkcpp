// AUTO-GENERATED

#ifndef _GI_GST_ITERATOR_IMPL_HPP_
#define _GI_GST_ITERATOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static ::GstIterator* _field_pushed_get (const ::GstIterator* obj) { return (::GstIterator*) obj->pushed; }
// ::GstIterator* Iterator::pushed (const ::GstIterator* obj);
// ::GstIterator* Iterator::pushed (const ::GstIterator* obj);
Gst::Iterator base::IteratorBase::pushed_ () const noexcept
{
  typedef ::GstIterator* (*call_wrap_t) (const ::GstIterator* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_pushed_get;
  auto _temp_ret = call_wrap_v ((const ::GstIterator*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static GType _field_type_get (const ::GstIterator* obj) { return (GType) obj->type; }
// GType Iterator::type (const ::GstIterator* obj);
// GType Iterator::type (const ::GstIterator* obj);
GType base::IteratorBase::type_ () const noexcept
{
  typedef GType (*call_wrap_t) (const ::GstIterator* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GstIterator*) (gobj_()));
  return _temp_ret;
}

static void _field_type_set (::GstIterator* obj, GType _value) { obj->type = (decltype(obj->type)) _value; }
//  Iterator::type (::GstIterator* obj, GType _value);
// void Iterator::type (::GstIterator* obj, GType _value);
void base::IteratorBase::type_ (GType _value) noexcept
{
  typedef void (*call_wrap_t) (::GstIterator* obj, GType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstIterator*) (gobj_()), (GType) (_value_to_c));
}

static guint32 _field_cookie_get (const ::GstIterator* obj) { return (guint32) obj->cookie; }
// guint32 Iterator::cookie (const ::GstIterator* obj);
// guint32 Iterator::cookie (const ::GstIterator* obj);
guint32 base::IteratorBase::cookie_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GstIterator* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_cookie_get;
  auto _temp_ret = call_wrap_v ((const ::GstIterator*) (gobj_()));
  return _temp_ret;
}

static void _field_cookie_set (::GstIterator* obj, guint32 _value) { obj->cookie = (decltype(obj->cookie)) _value; }
//  Iterator::cookie (::GstIterator* obj, guint32 _value);
// void Iterator::cookie (::GstIterator* obj, guint32 _value);
void base::IteratorBase::cookie_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstIterator* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_cookie_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstIterator*) (gobj_()), (guint32) (_value_to_c));
}

static guint _field_size_get (const ::GstIterator* obj) { return (guint) obj->size; }
// guint Iterator::size (const ::GstIterator* obj);
// guint Iterator::size (const ::GstIterator* obj);
guint base::IteratorBase::size_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GstIterator* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_size_get;
  auto _temp_ret = call_wrap_v ((const ::GstIterator*) (gobj_()));
  return _temp_ret;
}

static void _field_size_set (::GstIterator* obj, guint _value) { obj->size = (decltype(obj->size)) _value; }
//  Iterator::size (::GstIterator* obj, guint _value);
// void Iterator::size (::GstIterator* obj, guint _value);
void base::IteratorBase::size_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GstIterator* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_size_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstIterator*) (gobj_()), (guint) (_value_to_c));
}

// GstIterator* gst_iterator_new (guint size, GType type, GMutex* lock, guint32* master_cookie, GstIteratorCopyFunction copy, GstIteratorNextFunction next, GstIteratorItemFunction item, GstIteratorResyncFunction resync, GstIteratorFreeFunction free);
// ::GstIterator* gst_iterator_new (guint size, GType type,  lock, guint32 master_cookie,  copy,  next,  item,  resync,  free);
// IGNORE; not introspectable, free type  not supported, resync type  not supported, item type  not supported, next type  not supported, copy type  not supported, inconsistent in master_cookie pointer depth (1 vs 0), lock type  not supported

// GstIterator* gst_iterator_new_list (GType type, GMutex* lock, guint32* master_cookie, GList** list, GObject* owner, GstIteratorItemFunction item);
// ::GstIterator* gst_iterator_new_list (GType type,  lock, guint32 master_cookie, ::GList* list, ::GObject* owner,  item);
// IGNORE; not introspectable, item type  not supported, inconsistent in list pointer depth (2 vs 1), inconsistent in master_cookie pointer depth (1 vs 0), lock type  not supported

// GstIterator* gst_iterator_new_single (GType type, const GValue* object);
// ::GstIterator* gst_iterator_new_single (GType type, const ::GValue* object);
Gst::Iterator base::IteratorBase::new_single (GType type, const GObject::Value & object) noexcept
{
  typedef ::GstIterator* (*call_wrap_t) (GType type, const ::GValue* object);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_iterator_new_single;
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c), (const ::GValue*) (object_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstIterator* gst_iterator_copy (const GstIterator* it);
// ::GstIterator* gst_iterator_copy (const ::GstIterator* it);
Gst::Iterator base::IteratorBase::copy () const noexcept
{
  typedef ::GstIterator* (*call_wrap_t) (const ::GstIterator* it);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_iterator_copy;
  auto _temp_ret = call_wrap_v ((const ::GstIterator*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstIterator* gst_iterator_filter (GstIterator* it, GCompareFunc func, const GValue* user_data);
// ::GstIterator* gst_iterator_filter (::GstIterator* it,  func, const ::GValue* user_data);
// SKIP; func type  not supported

// gboolean gst_iterator_find_custom (GstIterator* it, GCompareFunc func, GValue* elem, gpointer user_data);
// gboolean gst_iterator_find_custom (::GstIterator* it,  func, ::GValue* elem, void* user_data);
// SKIP; func type  not supported

// GstIteratorResult gst_iterator_fold (GstIterator* it, GstIteratorFoldFunction func, GValue* ret, gpointer user_data);
// ::GstIteratorResult gst_iterator_fold (::GstIterator* it, Gst::IteratorFoldFunction::cfunction_type func, ::GValue* ret, void* user_data);
Gst::IteratorResult base::IteratorBase::fold (Gst::IteratorFoldFunction func, GObject::Value ret) noexcept
{
  typedef ::GstIteratorResult (*call_wrap_t) (::GstIterator* it, Gst::IteratorFoldFunction::cfunction_type func, ::GValue* ret, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_iterator_fold;
  auto ret_to_c = gi::unwrap (ret, gi::transfer_none, gi::direction_in);
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  auto _temp_ret = call_wrap_v ((::GstIterator*) (gobj_()), (Gst::IteratorFoldFunction::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (::GValue*) (ret_to_c), (void*) (func_wrap_));
  return gi::wrap (_temp_ret);
}

// GstIteratorResult gst_iterator_foreach (GstIterator* it, GstIteratorForeachFunction func, gpointer user_data);
// ::GstIteratorResult gst_iterator_foreach (::GstIterator* it, Gst::IteratorForeachFunction::cfunction_type func, void* user_data);
Gst::IteratorResult base::IteratorBase::foreach (Gst::IteratorForeachFunction func) noexcept
{
  typedef ::GstIteratorResult (*call_wrap_t) (::GstIterator* it, Gst::IteratorForeachFunction::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_iterator_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  auto _temp_ret = call_wrap_v ((::GstIterator*) (gobj_()), (Gst::IteratorForeachFunction::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
  return gi::wrap (_temp_ret);
}

// void gst_iterator_free (GstIterator* it);
// void gst_iterator_free (::GstIterator* it);
// IGNORE; marked ignore

// GstIteratorResult gst_iterator_next (GstIterator* it, GValue* elem);
// ::GstIteratorResult gst_iterator_next (::GstIterator* it, ::GValue* elem);
Gst::IteratorResult base::IteratorBase::next (GObject::Value & elem) noexcept
{
  typedef ::GstIteratorResult (*call_wrap_t) (::GstIterator* it, ::GValue* elem);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_iterator_next;
  traits::unset_wrapper<GValue>::type elem_c;
  auto _temp_ret = call_wrap_v ((::GstIterator*) (gobj_()), (::GValue*) ((GValue*) &elem_c));
  elem = gi::wrap ((GValue*) &elem_c, gi::transfer_none, gi::direction_out);
  return gi::wrap (_temp_ret);
}
std::tuple<Gst::IteratorResult, GObject::Value> base::IteratorBase::next () noexcept
{
  typedef ::GstIteratorResult (*call_wrap_t) (::GstIterator* it, ::GValue* elem);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_iterator_next;
  traits::unset_wrapper<GValue>::type elem_c;
  auto _temp_ret = call_wrap_v ((::GstIterator*) (gobj_()), (::GValue*) ((GValue*) &elem_c));
  return std::make_tuple (gi::wrap (_temp_ret), gi::wrap ((GValue*) &elem_c, gi::transfer_none, gi::direction_out));
}

// void gst_iterator_push (GstIterator* it, GstIterator* other);
// void gst_iterator_push (::GstIterator* it, ::GstIterator* other);
void base::IteratorBase::push (Gst::Iterator other) noexcept
{
  typedef void (*call_wrap_t) (::GstIterator* it, ::GstIterator* other);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_iterator_push;
  auto other_to_c = gi::unwrap (other, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstIterator*) (gobj_()), (::GstIterator*) (other_to_c));
}

// void gst_iterator_resync (GstIterator* it);
// void gst_iterator_resync (::GstIterator* it);
void base::IteratorBase::resync () noexcept
{
  typedef void (*call_wrap_t) (::GstIterator* it);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_iterator_resync;
  call_wrap_v ((::GstIterator*) (gobj_()));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/iterator_extra_def_impl.hpp>)
#include <gst/iterator_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/iterator_extra_impl.hpp>)
#include <gst/iterator_extra_impl.hpp>
#endif
#endif

#endif
