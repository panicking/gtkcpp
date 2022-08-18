// AUTO-GENERATED

#ifndef _GI_GST_TASKPOOL_HPP_
#define _GI_GST_TASKPOOL_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {


class TaskPool;

namespace base {


#define GI_GST_TASKPOOL_BASE base::TaskPoolBase
class TaskPoolBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstTaskPool BaseObjectType;

TaskPoolBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_task_pool_get_type(); } 

// GstTaskPool* gst_task_pool_new ();
// ::GstTaskPool* gst_task_pool_new ();
static GI_INLINE_DECL Gst::TaskPool new_ () noexcept;

// void gst_task_pool_cleanup (GstTaskPool* pool);
// void gst_task_pool_cleanup (::GstTaskPool* pool);
GI_INLINE_DECL void cleanup () noexcept;

// void gst_task_pool_dispose_handle (GstTaskPool* pool, gpointer id);
// void gst_task_pool_dispose_handle (::GstTaskPool* pool, void* id);
GI_INLINE_DECL void dispose_handle (void* id) noexcept;

// void gst_task_pool_join (GstTaskPool* pool, gpointer id);
// void gst_task_pool_join (::GstTaskPool* pool, void* id);
GI_INLINE_DECL void join (void* id) noexcept;

// void gst_task_pool_prepare (GstTaskPool* pool, GError ** error);
// void gst_task_pool_prepare (::GstTaskPool* pool, GError ** error);
GI_INLINE_DECL void prepare ();
GI_INLINE_DECL void prepare (GLib::Error * _error) noexcept;

// gpointer gst_task_pool_push (GstTaskPool* pool, GstTaskPoolFunction func, gpointer user_data, GError ** error);
// void* gst_task_pool_push (::GstTaskPool* pool,  func, void* user_data, GError ** error);
// SKIP; func type  not supported

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/taskpool_extra_def.hpp>)
#include <gst/taskpool_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/taskpool_extra.hpp>)
#include <gst/taskpool_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class TaskPool : public GI_GST_TASKPOOL_BASE
{ typedef GI_GST_TASKPOOL_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstTaskPool>
{ typedef Gst::TaskPool type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class TaskPoolClassDef
{
typedef TaskPoolClassDef self;
public:
typedef Gst::TaskPool instance_type;
typedef ::GstTaskPoolClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void TaskPool::cleanup (GstTaskPool* pool);
// void TaskPool::cleanup (::GstTaskPool* pool);
virtual void cleanup_ () noexcept = 0;

// void TaskPool::dispose_handle (GstTaskPool* pool, gpointer id);
// void TaskPool::dispose_handle (::GstTaskPool* pool, void* id);
virtual void dispose_handle_ (void* id) noexcept = 0;

// void TaskPool::join (GstTaskPool* pool, gpointer id);
// void TaskPool::join (::GstTaskPool* pool, void* id);
virtual void join_ (void* id) noexcept = 0;

// void TaskPool::prepare (GstTaskPool* pool, GError ** error);
// void TaskPool::prepare (::GstTaskPool* pool, GError ** error);
// SKIP; callee GError not supported

// gpointer TaskPool::push (GstTaskPool* pool, GstTaskPoolFunction func, gpointer user_data, GError ** error);
// void* TaskPool::push (::GstTaskPool* pool,  func, void* user_data, GError ** error);
// SKIP; callee GError not supported


};

GI_CLASS_IMPL_BEGIN


class TaskPoolClass: public detail::ClassTemplate<Gst::impl::internal::TaskPoolClassDef, Gst::impl::internal::ObjectClass>
{
typedef TaskPoolClass self;
typedef detail::ClassTemplate<Gst::impl::internal::TaskPoolClassDef, Gst::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void TaskPool::cleanup (GstTaskPool* pool);
// void TaskPool::cleanup (::GstTaskPool* pool);
GI_INLINE_DECL void cleanup_ () noexcept override;

// void TaskPool::dispose_handle (GstTaskPool* pool, gpointer id);
// void TaskPool::dispose_handle (::GstTaskPool* pool, void* id);
GI_INLINE_DECL void dispose_handle_ (void* id) noexcept override;

// void TaskPool::join (GstTaskPool* pool, gpointer id);
// void TaskPool::join (::GstTaskPool* pool, void* id);
GI_INLINE_DECL void join_ (void* id) noexcept override;

// void TaskPool::prepare (GstTaskPool* pool, GError ** error);
// void TaskPool::prepare (::GstTaskPool* pool, GError ** error);
// SKIP; callee GError not supported

// gpointer TaskPool::push (GstTaskPool* pool, GstTaskPoolFunction func, gpointer user_data, GError ** error);
// void* TaskPool::push (::GstTaskPool* pool,  func, void* user_data, GError ** error);
// SKIP; callee GError not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using TaskPoolImpl = detail::ObjectImpl<TaskPool, internal::TaskPoolClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
