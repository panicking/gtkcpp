// AUTO-GENERATED

#ifndef _GI_GST_ITERATOR_HPP_
#define _GI_GST_ITERATOR_HPP_


namespace gi {

namespace repository {

namespace Gst {


class Iterator;

namespace base {


#define GI_GST_ITERATOR_BASE base::IteratorBase
class IteratorBase : public gi::detail::GBoxedWrapper<IteratorBase, ::GstIterator>
{
typedef gi::detail::GBoxedWrapper<IteratorBase, ::GstIterator> super_type;
public:

IteratorBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_iterator_get_type(); } 

// ::GstIterator* Iterator::pushed (const ::GstIterator* obj);
// ::GstIterator* Iterator::pushed (const ::GstIterator* obj);
GI_INLINE_DECL Gst::Iterator pushed_ () const noexcept;

// GType Iterator::type (const ::GstIterator* obj);
// GType Iterator::type (const ::GstIterator* obj);
GI_INLINE_DECL GType type_ () const noexcept;

//  Iterator::type (::GstIterator* obj, GType _value);
// void Iterator::type (::GstIterator* obj, GType _value);
GI_INLINE_DECL void type_ (GType _value) noexcept;

// guint32 Iterator::cookie (const ::GstIterator* obj);
// guint32 Iterator::cookie (const ::GstIterator* obj);
GI_INLINE_DECL guint32 cookie_ () const noexcept;

//  Iterator::cookie (::GstIterator* obj, guint32 _value);
// void Iterator::cookie (::GstIterator* obj, guint32 _value);
GI_INLINE_DECL void cookie_ (guint32 _value) noexcept;

// guint Iterator::size (const ::GstIterator* obj);
// guint Iterator::size (const ::GstIterator* obj);
GI_INLINE_DECL guint size_ () const noexcept;

//  Iterator::size (::GstIterator* obj, guint _value);
// void Iterator::size (::GstIterator* obj, guint _value);
GI_INLINE_DECL void size_ (guint _value) noexcept;

// GstIterator* gst_iterator_new (guint size, GType type, GMutex* lock, guint32* master_cookie, GstIteratorCopyFunction copy, GstIteratorNextFunction next, GstIteratorItemFunction item, GstIteratorResyncFunction resync, GstIteratorFreeFunction free);
// ::GstIterator* gst_iterator_new (guint size, GType type,  lock, guint32 master_cookie,  copy,  next,  item,  resync,  free);
// IGNORE; not introspectable, free type  not supported, resync type  not supported, item type  not supported, next type  not supported, copy type  not supported, inconsistent in master_cookie pointer depth (1 vs 0), lock type  not supported

// GstIterator* gst_iterator_new_list (GType type, GMutex* lock, guint32* master_cookie, GList** list, GObject* owner, GstIteratorItemFunction item);
// ::GstIterator* gst_iterator_new_list (GType type,  lock, guint32 master_cookie, ::GList* list, ::GObject* owner,  item);
// IGNORE; not introspectable, item type  not supported, inconsistent in list pointer depth (2 vs 1), inconsistent in master_cookie pointer depth (1 vs 0), lock type  not supported

// GstIterator* gst_iterator_new_single (GType type, const GValue* object);
// ::GstIterator* gst_iterator_new_single (GType type, const ::GValue* object);
static GI_INLINE_DECL Gst::Iterator new_single (GType type, const GObject::Value & object) noexcept;

// GstIterator* gst_iterator_copy (const GstIterator* it);
// ::GstIterator* gst_iterator_copy (const ::GstIterator* it);
GI_INLINE_DECL Gst::Iterator copy () const noexcept;

// GstIterator* gst_iterator_filter (GstIterator* it, GCompareFunc func, const GValue* user_data);
// ::GstIterator* gst_iterator_filter (::GstIterator* it,  func, const ::GValue* user_data);
// SKIP; func type  not supported

// gboolean gst_iterator_find_custom (GstIterator* it, GCompareFunc func, GValue* elem, gpointer user_data);
// gboolean gst_iterator_find_custom (::GstIterator* it,  func, ::GValue* elem, void* user_data);
// SKIP; func type  not supported

// GstIteratorResult gst_iterator_fold (GstIterator* it, GstIteratorFoldFunction func, GValue* ret, gpointer user_data);
// ::GstIteratorResult gst_iterator_fold (::GstIterator* it, Gst::IteratorFoldFunction::cfunction_type func, ::GValue* ret, void* user_data);
GI_INLINE_DECL Gst::IteratorResult fold (Gst::IteratorFoldFunction func, GObject::Value ret) noexcept;

// GstIteratorResult gst_iterator_foreach (GstIterator* it, GstIteratorForeachFunction func, gpointer user_data);
// ::GstIteratorResult gst_iterator_foreach (::GstIterator* it, Gst::IteratorForeachFunction::cfunction_type func, void* user_data);
GI_INLINE_DECL Gst::IteratorResult foreach (Gst::IteratorForeachFunction func) noexcept;

// void gst_iterator_free (GstIterator* it);
// void gst_iterator_free (::GstIterator* it);
// IGNORE; marked ignore

// GstIteratorResult gst_iterator_next (GstIterator* it, GValue* elem);
// ::GstIteratorResult gst_iterator_next (::GstIterator* it, ::GValue* elem);
GI_INLINE_DECL Gst::IteratorResult next (GObject::Value & elem) noexcept;
GI_INLINE_DECL std::tuple<Gst::IteratorResult, GObject::Value> next () noexcept;

// void gst_iterator_push (GstIterator* it, GstIterator* other);
// void gst_iterator_push (::GstIterator* it, ::GstIterator* other);
GI_INLINE_DECL void push (Gst::Iterator other) noexcept;

// void gst_iterator_resync (GstIterator* it);
// void gst_iterator_resync (::GstIterator* it);
GI_INLINE_DECL void resync () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/iterator_extra_def.hpp>)
#include <gst/iterator_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/iterator_extra.hpp>)
#include <gst/iterator_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Iterator : public GI_GST_ITERATOR_BASE
{ typedef GI_GST_ITERATOR_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstIterator>
{ typedef Gst::Iterator type; }; 

} // namespace repository

} // namespace gi

#endif
