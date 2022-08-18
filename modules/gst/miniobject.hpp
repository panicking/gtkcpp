// AUTO-GENERATED

#ifndef _GI_GST_MINIOBJECT_HPP_
#define _GI_GST_MINIOBJECT_HPP_


namespace gi {

namespace repository {

namespace Gst {


class MiniObject;

namespace base {


#define GI_GST_MINIOBJECT_BASE base::MiniObjectBase
class MiniObjectBase : public gi::detail::GBoxedWrapper<MiniObjectBase, ::GstMiniObject>
{
typedef gi::detail::GBoxedWrapper<MiniObjectBase, ::GstMiniObject> super_type;
public:

MiniObjectBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_mini_object_get_type(); } 

// GType MiniObject::type (const ::GstMiniObject* obj);
// GType MiniObject::type (const ::GstMiniObject* obj);
GI_INLINE_DECL GType type_ () const noexcept;

//  MiniObject::type (::GstMiniObject* obj, GType _value);
// void MiniObject::type (::GstMiniObject* obj, GType _value);
GI_INLINE_DECL void type_ (GType _value) noexcept;

// gint MiniObject::refcount (const ::GstMiniObject* obj);
// gint MiniObject::refcount (const ::GstMiniObject* obj);
GI_INLINE_DECL gint refcount_ () const noexcept;

//  MiniObject::refcount (::GstMiniObject* obj, gint _value);
// void MiniObject::refcount (::GstMiniObject* obj, gint _value);
GI_INLINE_DECL void refcount_ (gint _value) noexcept;

// gint MiniObject::lockstate (const ::GstMiniObject* obj);
// gint MiniObject::lockstate (const ::GstMiniObject* obj);
GI_INLINE_DECL gint lockstate_ () const noexcept;

//  MiniObject::lockstate (::GstMiniObject* obj, gint _value);
// void MiniObject::lockstate (::GstMiniObject* obj, gint _value);
GI_INLINE_DECL void lockstate_ (gint _value) noexcept;

// guint MiniObject::flags (const ::GstMiniObject* obj);
// guint MiniObject::flags (const ::GstMiniObject* obj);
GI_INLINE_DECL guint flags_ () const noexcept;

//  MiniObject::flags (::GstMiniObject* obj, guint _value);
// void MiniObject::flags (::GstMiniObject* obj, guint _value);
GI_INLINE_DECL void flags_ (guint _value) noexcept;

// void gst_mini_object_add_parent (GstMiniObject* object, GstMiniObject* parent);
// void gst_mini_object_add_parent (::GstMiniObject* object, ::GstMiniObject* parent);
GI_INLINE_DECL void add_parent (Gst::MiniObject parent) noexcept;

// GstMiniObject* gst_mini_object_copy (const GstMiniObject* mini_object);
// ::GstMiniObject* gst_mini_object_copy (const ::GstMiniObject* mini_object);
GI_INLINE_DECL Gst::MiniObject copy () const noexcept;

// gpointer gst_mini_object_get_qdata (GstMiniObject* object, GQuark quark);
// void* gst_mini_object_get_qdata (::GstMiniObject* object, ::GQuark quark);
GI_INLINE_DECL gpointer get_qdata (::GQuark quark) noexcept;

// void gst_mini_object_init (GstMiniObject* mini_object, guint flags, GType type, GstMiniObjectCopyFunction copy_func, GstMiniObjectDisposeFunction dispose_func, GstMiniObjectFreeFunction free_func);
// void gst_mini_object_init (::GstMiniObject* mini_object, guint flags, GType type,  copy_func,  dispose_func,  free_func);
// IGNORE; not introspectable, free_func type  not supported, dispose_func type  not supported, copy_func type  not supported

// gboolean gst_mini_object_is_writable (const GstMiniObject* mini_object);
// gboolean gst_mini_object_is_writable (const ::GstMiniObject* mini_object);
GI_INLINE_DECL bool is_writable () const noexcept;

// gboolean gst_mini_object_lock (GstMiniObject* object, GstLockFlags flags);
// gboolean gst_mini_object_lock (::GstMiniObject* object, ::GstLockFlags flags);
GI_INLINE_DECL bool lock (Gst::LockFlags flags) noexcept;

// GstMiniObject* gst_mini_object_make_writable (GstMiniObject* mini_object);
// ::GstMiniObject* gst_mini_object_make_writable (::GstMiniObject* mini_object);
GI_INLINE_DECL Gst::MiniObject make_writable () noexcept;

// GstMiniObject* gst_mini_object_ref (GstMiniObject* mini_object);
// ::GstMiniObject* gst_mini_object_ref (::GstMiniObject* mini_object);
// IGNORE; marked ignore

// void gst_mini_object_remove_parent (GstMiniObject* object, GstMiniObject* parent);
// void gst_mini_object_remove_parent (::GstMiniObject* object, ::GstMiniObject* parent);
GI_INLINE_DECL void remove_parent (Gst::MiniObject parent) noexcept;

// void gst_mini_object_set_qdata (GstMiniObject* object, GQuark quark, gpointer data, GDestroyNotify destroy);
// void gst_mini_object_set_qdata (::GstMiniObject* object, ::GQuark quark, void* data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; callback misses closure info

// gpointer gst_mini_object_steal_qdata (GstMiniObject* object, GQuark quark);
// void* gst_mini_object_steal_qdata (::GstMiniObject* object, ::GQuark quark);
GI_INLINE_DECL gpointer steal_qdata (::GQuark quark) noexcept;

// void gst_mini_object_unlock (GstMiniObject* object, GstLockFlags flags);
// void gst_mini_object_unlock (::GstMiniObject* object, ::GstLockFlags flags);
GI_INLINE_DECL void unlock (Gst::LockFlags flags) noexcept;

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
static GI_INLINE_DECL bool replace (Gst::MiniObject * olddata, Gst::MiniObject newdata) noexcept;
static GI_INLINE_DECL bool replace (Gst::MiniObject * olddata = nullptr) noexcept;

// GstMiniObject* gst_mini_object_steal (GstMiniObject** olddata);
// ::GstMiniObject* gst_mini_object_steal (::GstMiniObject** olddata);
static GI_INLINE_DECL Gst::MiniObject steal (Gst::MiniObject & olddata) noexcept;

// gboolean gst_mini_object_take (GstMiniObject** olddata, GstMiniObject* newdata);
// gboolean gst_mini_object_take (::GstMiniObject** olddata, ::GstMiniObject* newdata);
static GI_INLINE_DECL bool take (Gst::MiniObject & olddata, Gst::MiniObject newdata) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/miniobject_extra_def.hpp>)
#include <gst/miniobject_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/miniobject_extra.hpp>)
#include <gst/miniobject_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class MiniObject : public GI_GST_MINIOBJECT_BASE
{ typedef GI_GST_MINIOBJECT_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstMiniObject>
{ typedef Gst::MiniObject type; }; 

} // namespace repository

} // namespace gi

#endif
