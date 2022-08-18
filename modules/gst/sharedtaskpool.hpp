// AUTO-GENERATED

#ifndef _GI_GST_SHAREDTASKPOOL_HPP_
#define _GI_GST_SHAREDTASKPOOL_HPP_

#include "taskpool.hpp"

namespace gi {

namespace repository {

namespace Gst {


class SharedTaskPool;

namespace base {


#define GI_GST_SHAREDTASKPOOL_BASE base::SharedTaskPoolBase
class SharedTaskPoolBase : public Gst::TaskPool
{
typedef Gst::TaskPool super_type;
public:
typedef ::GstSharedTaskPool BaseObjectType;

SharedTaskPoolBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_shared_task_pool_get_type(); } 

// GstTaskPool* gst_shared_task_pool_new ();
// ::GstSharedTaskPool* gst_shared_task_pool_new ();
static GI_INLINE_DECL Gst::SharedTaskPool new_ () noexcept;

// guint gst_shared_task_pool_get_max_threads (GstSharedTaskPool* pool);
// guint gst_shared_task_pool_get_max_threads (::GstSharedTaskPool* pool);
GI_INLINE_DECL guint get_max_threads () noexcept;

// void gst_shared_task_pool_set_max_threads (GstSharedTaskPool* pool, guint max_threads);
// void gst_shared_task_pool_set_max_threads (::GstSharedTaskPool* pool, guint max_threads);
GI_INLINE_DECL void set_max_threads (guint max_threads) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/sharedtaskpool_extra_def.hpp>)
#include <gst/sharedtaskpool_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/sharedtaskpool_extra.hpp>)
#include <gst/sharedtaskpool_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class SharedTaskPool : public GI_GST_SHAREDTASKPOOL_BASE
{ typedef GI_GST_SHAREDTASKPOOL_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstSharedTaskPool>
{ typedef Gst::SharedTaskPool type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class SharedTaskPoolClassDef
{
typedef SharedTaskPoolClassDef self;
public:
typedef Gst::SharedTaskPool instance_type;
typedef ::GstSharedTaskPoolClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SharedTaskPoolClass: public detail::ClassTemplate<Gst::impl::internal::SharedTaskPoolClassDef, Gst::impl::internal::TaskPoolClass>
{
typedef SharedTaskPoolClass self;
typedef detail::ClassTemplate<Gst::impl::internal::SharedTaskPoolClassDef, Gst::impl::internal::TaskPoolClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using SharedTaskPoolImpl = detail::ObjectImpl<SharedTaskPool, internal::SharedTaskPoolClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
