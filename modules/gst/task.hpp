// AUTO-GENERATED

#ifndef _GI_GST_TASK_HPP_
#define _GI_GST_TASK_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {

class TaskPool;

class Task;

namespace base {


#define GI_GST_TASK_BASE base::TaskBase
class TaskBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstTask BaseObjectType;

TaskBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_task_get_type(); } 

// GstTask* gst_task_new (GstTaskFunction func, gpointer user_data, GDestroyNotify notify);
// ::GstTask* gst_task_new (Gst::TaskFunction::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
static GI_INLINE_DECL Gst::Task new_ (Gst::TaskFunction func) noexcept;

// void gst_task_cleanup_all ();
// void gst_task_cleanup_all ();
static GI_INLINE_DECL void cleanup_all () noexcept;

// GstTaskPool* gst_task_get_pool (GstTask* task);
// ::GstTaskPool* gst_task_get_pool (::GstTask* task);
GI_INLINE_DECL Gst::TaskPool get_pool () noexcept;

// GstTaskState gst_task_get_state (GstTask* task);
// ::GstTaskState gst_task_get_state (::GstTask* task);
GI_INLINE_DECL Gst::TaskState get_state () noexcept;

// gboolean gst_task_join (GstTask* task);
// gboolean gst_task_join (::GstTask* task);
GI_INLINE_DECL bool join () noexcept;

// gboolean gst_task_pause (GstTask* task);
// gboolean gst_task_pause (::GstTask* task);
GI_INLINE_DECL bool pause () noexcept;

// gboolean gst_task_resume (GstTask* task);
// gboolean gst_task_resume (::GstTask* task);
GI_INLINE_DECL bool resume () noexcept;

// void gst_task_set_enter_callback (GstTask* task, GstTaskThreadFunc enter_func, gpointer user_data, GDestroyNotify notify);
// void gst_task_set_enter_callback (::GstTask* task, Gst::TaskThreadFunc::cfunction_type enter_func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
GI_INLINE_DECL void set_enter_callback (Gst::TaskThreadFunc enter_func) noexcept;

// void gst_task_set_leave_callback (GstTask* task, GstTaskThreadFunc leave_func, gpointer user_data, GDestroyNotify notify);
// void gst_task_set_leave_callback (::GstTask* task, Gst::TaskThreadFunc::cfunction_type leave_func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
GI_INLINE_DECL void set_leave_callback (Gst::TaskThreadFunc leave_func) noexcept;

// void gst_task_set_lock (GstTask* task, GRecMutex* mutex);
// void gst_task_set_lock (::GstTask* task, ::GRecMutex* mutex);
GI_INLINE_DECL void set_lock (GLib::RecMutex mutex) noexcept;

// void gst_task_set_pool (GstTask* task, GstTaskPool* pool);
// void gst_task_set_pool (::GstTask* task, ::GstTaskPool* pool);
GI_INLINE_DECL void set_pool (Gst::TaskPool pool) noexcept;

// gboolean gst_task_set_state (GstTask* task, GstTaskState state);
// gboolean gst_task_set_state (::GstTask* task, ::GstTaskState state);
GI_INLINE_DECL bool set_state (Gst::TaskState state) noexcept;

// gboolean gst_task_start (GstTask* task);
// gboolean gst_task_start (::GstTask* task);
GI_INLINE_DECL bool start () noexcept;

// gboolean gst_task_stop (GstTask* task);
// gboolean gst_task_stop (::GstTask* task);
GI_INLINE_DECL bool stop () noexcept;

// ::GstTaskState Task::state (const ::GstTask* obj);
// ::GstTaskState Task::state (const ::GstTask* obj);
GI_INLINE_DECL Gst::TaskState state_ () const noexcept;

//  Task::state (::GstTask* obj, ::GstTaskState _value);
// void Task::state (::GstTask* obj, ::GstTaskState _value);
GI_INLINE_DECL void state_ (Gst::TaskState _value) noexcept;

// ::GRecMutex* Task::lock (const ::GstTask* obj);
// ::GRecMutex* Task::lock (const ::GstTask* obj);
GI_INLINE_DECL GLib::RecMutex lock_ () const noexcept;

// gboolean Task::running (const ::GstTask* obj);
// gboolean Task::running (const ::GstTask* obj);
GI_INLINE_DECL bool running_ () const noexcept;

//  Task::running (::GstTask* obj, gboolean _value);
// void Task::running (::GstTask* obj, gboolean _value);
GI_INLINE_DECL void running_ (gboolean _value) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/task_extra_def.hpp>)
#include <gst/task_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/task_extra.hpp>)
#include <gst/task_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Task : public GI_GST_TASK_BASE
{ typedef GI_GST_TASK_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstTask>
{ typedef Gst::Task type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class TaskClassDef
{
typedef TaskClassDef self;
public:
typedef Gst::Task instance_type;
typedef ::GstTaskClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TaskClass: public detail::ClassTemplate<Gst::impl::internal::TaskClassDef, Gst::impl::internal::ObjectClass>
{
typedef TaskClass self;
typedef detail::ClassTemplate<Gst::impl::internal::TaskClassDef, Gst::impl::internal::ObjectClass> super;

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

using TaskImpl = detail::ObjectImpl<Task, internal::TaskClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
