// AUTO-GENERATED

#ifndef _GI_GST_MINIOBJECT_IMPL_HPP_
#define _GI_GST_MINIOBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static GType _field_type_get (const ::GstMiniObject* obj) { return (GType) obj->type; }
// GType MiniObject::type (const ::GstMiniObject* obj);
// GType MiniObject::type (const ::GstMiniObject* obj);
GType base::MiniObjectBase::type_ () const noexcept
{
  typedef GType (*call_wrap_t) (const ::GstMiniObject* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GstMiniObject*) (gobj_()));
  return _temp_ret;
}

static void _field_type_set (::GstMiniObject* obj, GType _value) { obj->type = (decltype(obj->type)) _value; }
//  MiniObject::type (::GstMiniObject* obj, GType _value);
// void MiniObject::type (::GstMiniObject* obj, GType _value);
void base::MiniObjectBase::type_ (GType _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMiniObject* obj, GType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstMiniObject*) (gobj_()), (GType) (_value_to_c));
}

static gint _field_refcount_get (const ::GstMiniObject* obj) { return (gint) obj->refcount; }
// gint MiniObject::refcount (const ::GstMiniObject* obj);
// gint MiniObject::refcount (const ::GstMiniObject* obj);
gint base::MiniObjectBase::refcount_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstMiniObject* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_refcount_get;
  auto _temp_ret = call_wrap_v ((const ::GstMiniObject*) (gobj_()));
  return _temp_ret;
}

static void _field_refcount_set (::GstMiniObject* obj, gint _value) { obj->refcount = (decltype(obj->refcount)) _value; }
//  MiniObject::refcount (::GstMiniObject* obj, gint _value);
// void MiniObject::refcount (::GstMiniObject* obj, gint _value);
void base::MiniObjectBase::refcount_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMiniObject* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_refcount_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstMiniObject*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_lockstate_get (const ::GstMiniObject* obj) { return (gint) obj->lockstate; }
// gint MiniObject::lockstate (const ::GstMiniObject* obj);
// gint MiniObject::lockstate (const ::GstMiniObject* obj);
gint base::MiniObjectBase::lockstate_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstMiniObject* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_lockstate_get;
  auto _temp_ret = call_wrap_v ((const ::GstMiniObject*) (gobj_()));
  return _temp_ret;
}

static void _field_lockstate_set (::GstMiniObject* obj, gint _value) { obj->lockstate = (decltype(obj->lockstate)) _value; }
//  MiniObject::lockstate (::GstMiniObject* obj, gint _value);
// void MiniObject::lockstate (::GstMiniObject* obj, gint _value);
void base::MiniObjectBase::lockstate_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMiniObject* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_lockstate_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstMiniObject*) (gobj_()), (gint) (_value_to_c));
}

static guint _field_flags_get (const ::GstMiniObject* obj) { return (guint) obj->flags; }
// guint MiniObject::flags (const ::GstMiniObject* obj);
// guint MiniObject::flags (const ::GstMiniObject* obj);
guint base::MiniObjectBase::flags_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GstMiniObject* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_get;
  auto _temp_ret = call_wrap_v ((const ::GstMiniObject*) (gobj_()));
  return _temp_ret;
}

static void _field_flags_set (::GstMiniObject* obj, guint _value) { obj->flags = (decltype(obj->flags)) _value; }
//  MiniObject::flags (::GstMiniObject* obj, guint _value);
// void MiniObject::flags (::GstMiniObject* obj, guint _value);
void base::MiniObjectBase::flags_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMiniObject* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstMiniObject*) (gobj_()), (guint) (_value_to_c));
}

// void gst_mini_object_add_parent (GstMiniObject* object, GstMiniObject* parent);
// void gst_mini_object_add_parent (::GstMiniObject* object, ::GstMiniObject* parent);
void base::MiniObjectBase::add_parent (Gst::MiniObject parent) noexcept
{
  typedef void (*call_wrap_t) (::GstMiniObject* object, ::GstMiniObject* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_mini_object_add_parent;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstMiniObject*) (gobj_()), (::GstMiniObject*) (parent_to_c));
}

// GstMiniObject* gst_mini_object_copy (const GstMiniObject* mini_object);
// ::GstMiniObject* gst_mini_object_copy (const ::GstMiniObject* mini_object);
Gst::MiniObject base::MiniObjectBase::copy () const noexcept
{
  typedef ::GstMiniObject* (*call_wrap_t) (const ::GstMiniObject* mini_object);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_mini_object_copy;
  auto _temp_ret = call_wrap_v ((const ::GstMiniObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gpointer gst_mini_object_get_qdata (GstMiniObject* object, GQuark quark);
// void* gst_mini_object_get_qdata (::GstMiniObject* object, ::GQuark quark);
gpointer base::MiniObjectBase::get_qdata (::GQuark quark) noexcept
{
  typedef void* (*call_wrap_t) (::GstMiniObject* object, ::GQuark quark);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_mini_object_get_qdata;
  auto quark_to_c = quark;
  auto _temp_ret = call_wrap_v ((::GstMiniObject*) (gobj_()), (::GQuark) (quark_to_c));
  return _temp_ret;
}

// void gst_mini_object_init (GstMiniObject* mini_object, guint flags, GType type, GstMiniObjectCopyFunction copy_func, GstMiniObjectDisposeFunction dispose_func, GstMiniObjectFreeFunction free_func);
// void gst_mini_object_init (::GstMiniObject* mini_object, guint flags, GType type,  copy_func,  dispose_func,  free_func);
// IGNORE; not introspectable, free_func type  not supported, dispose_func type  not supported, copy_func type  not supported

// gboolean gst_mini_object_is_writable (const GstMiniObject* mini_object);
// gboolean gst_mini_object_is_writable (const ::GstMiniObject* mini_object);
bool base::MiniObjectBase::is_writable () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstMiniObject* mini_object);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_mini_object_is_writable;
  auto _temp_ret = call_wrap_v ((const ::GstMiniObject*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_mini_object_lock (GstMiniObject* object, GstLockFlags flags);
// gboolean gst_mini_object_lock (::GstMiniObject* object, ::GstLockFlags flags);
bool base::MiniObjectBase::lock (Gst::LockFlags flags) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstMiniObject* object, ::GstLockFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_mini_object_lock;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GstMiniObject*) (gobj_()), (::GstLockFlags) (flags_to_c));
  return _temp_ret;
}

// GstMiniObject* gst_mini_object_make_writable (GstMiniObject* mini_object);
// ::GstMiniObject* gst_mini_object_make_writable (::GstMiniObject* mini_object);
Gst::MiniObject base::MiniObjectBase::make_writable () noexcept
{
  typedef ::GstMiniObject* (*call_wrap_t) (::GstMiniObject* mini_object);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_mini_object_make_writable;
  auto _temp_ret = call_wrap_v ((::GstMiniObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMiniObject* gst_mini_object_ref (GstMiniObject* mini_object);
// ::GstMiniObject* gst_mini_object_ref (::GstMiniObject* mini_object);
// IGNORE; marked ignore

// void gst_mini_object_remove_parent (GstMiniObject* object, GstMiniObject* parent);
// void gst_mini_object_remove_parent (::GstMiniObject* object, ::GstMiniObject* parent);
void base::MiniObjectBase::remove_parent (Gst::MiniObject parent) noexcept
{
  typedef void (*call_wrap_t) (::GstMiniObject* object, ::GstMiniObject* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_mini_object_remove_parent;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstMiniObject*) (gobj_()), (::GstMiniObject*) (parent_to_c));
}

// void gst_mini_object_set_qdata (GstMiniObject* object, GQuark quark, gpointer data, GDestroyNotify destroy);
// void gst_mini_object_set_qdata (::GstMiniObject* object, ::GQuark quark, void* data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; callback misses closure info

// gpointer gst_mini_object_steal_qdata (GstMiniObject* object, GQuark quark);
// void* gst_mini_object_steal_qdata (::GstMiniObject* object, ::GQuark quark);
gpointer base::MiniObjectBase::steal_qdata (::GQuark quark) noexcept
{
  typedef void* (*call_wrap_t) (::GstMiniObject* object, ::GQuark quark);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_mini_object_steal_qdata;
  auto quark_to_c = quark;
  auto _temp_ret = call_wrap_v ((::GstMiniObject*) (gobj_()), (::GQuark) (quark_to_c));
  return _temp_ret;
}

// void gst_mini_object_unlock (GstMiniObject* object, GstLockFlags flags);
// void gst_mini_object_unlock (::GstMiniObject* object, ::GstLockFlags flags);
void base::MiniObjectBase::unlock (Gst::LockFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GstMiniObject* object, ::GstLockFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_mini_object_unlock;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GstMiniObject*) (gobj_()), (::GstLockFlags) (flags_to_c));
}

// void gst_mini_object_unref (GstMiniObject* mini_object);
// void gst_mini_object_unref (::GstMiniObject* mini_object);
// IGNORE; marked ignore

// void gst_mini_object_weak_ref (GstMiniObject* object, GstMiniObjectNotify notify, gpointer data);
// void gst_mini_object_weak_ref (::GstMiniObject* object,  notify, void* data);
// IGNORE; marked ignore

// void gst_mini_object_weak_unref (GstMiniObject* object, GstMiniObjectNotify notify, gpointer data);
// void gst_mini_object_weak_unref (::GstMiniObject* object,  notify, void* data);
// IGNORE; marked ignore

// gboolean gst_mini_object_replace (GstMiniObject** olddata, GstMiniObject* newdata);
// gboolean gst_mini_object_replace (::GstMiniObject** olddata, ::GstMiniObject* newdata);
bool base::MiniObjectBase::replace (Gst::MiniObject * olddata, Gst::MiniObject newdata) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstMiniObject** olddata, ::GstMiniObject* newdata);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_mini_object_replace;
  auto newdata_to_c = gi::unwrap (newdata, gi::transfer_none, gi::direction_in);
  auto olddata_to_c = gi::unwrap (*olddata, gi::transfer_full, gi::direction_in);
  ::GstMiniObject* olddata_o = olddata_to_c;
  auto _temp_ret = call_wrap_v ((::GstMiniObject**) (olddata ? &olddata_o : nullptr), (::GstMiniObject*) (newdata_to_c));
  if (olddata) *olddata = gi::wrap (olddata_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::MiniObjectBase::replace (Gst::MiniObject * olddata) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstMiniObject** olddata, ::GstMiniObject* newdata);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_mini_object_replace;
  auto newdata_to_c = nullptr;
  auto olddata_to_c = nullptr;
  ::GstMiniObject* olddata_o = olddata_to_c;
  auto _temp_ret = call_wrap_v ((::GstMiniObject**) (olddata ? &olddata_o : nullptr), (::GstMiniObject*) (newdata_to_c));
  if (olddata) *olddata = gi::wrap (olddata_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GstMiniObject* gst_mini_object_steal (GstMiniObject** olddata);
// ::GstMiniObject* gst_mini_object_steal (::GstMiniObject** olddata);
Gst::MiniObject base::MiniObjectBase::steal (Gst::MiniObject & olddata) noexcept
{
  typedef ::GstMiniObject* (*call_wrap_t) (::GstMiniObject** olddata);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_mini_object_steal;
  auto olddata_to_c = gi::unwrap (olddata, gi::transfer_full, gi::direction_in);
  ::GstMiniObject* olddata_o = olddata_to_c;
  auto _temp_ret = call_wrap_v ((::GstMiniObject**) (&olddata_o));
  olddata = gi::wrap (olddata_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_mini_object_take (GstMiniObject** olddata, GstMiniObject* newdata);
// gboolean gst_mini_object_take (::GstMiniObject** olddata, ::GstMiniObject* newdata);
bool base::MiniObjectBase::take (Gst::MiniObject & olddata, Gst::MiniObject newdata) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstMiniObject** olddata, ::GstMiniObject* newdata);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_mini_object_take;
  auto newdata_to_c = gi::unwrap (newdata, gi::transfer_none, gi::direction_in);
  auto olddata_to_c = gi::unwrap (olddata, gi::transfer_full, gi::direction_in);
  ::GstMiniObject* olddata_o = olddata_to_c;
  auto _temp_ret = call_wrap_v ((::GstMiniObject**) (&olddata_o), (::GstMiniObject*) (newdata_to_c));
  olddata = gi::wrap (olddata_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/miniobject_extra_def_impl.hpp>)
#include <gst/miniobject_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/miniobject_extra_impl.hpp>)
#include <gst/miniobject_extra_impl.hpp>
#endif
#endif

#endif
