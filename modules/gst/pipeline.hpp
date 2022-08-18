// AUTO-GENERATED

#ifndef _GI_GST_PIPELINE_HPP_
#define _GI_GST_PIPELINE_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Bus;
class Clock;

class Pipeline;

namespace base {


#define GI_GST_PIPELINE_BASE base::PipelineBase
class PipelineBase : public Gst::Bin
{
typedef Gst::Bin super_type;
public:
typedef ::GstPipeline BaseObjectType;

PipelineBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_pipeline_get_type(); } 

// GstElement* gst_pipeline_new (const gchar* name);
// ::GstPipeline* gst_pipeline_new (const char* name);
static GI_INLINE_DECL Gst::Pipeline new_ (const std::string & name) noexcept;
static GI_INLINE_DECL Gst::Pipeline new_ () noexcept;

// void gst_pipeline_auto_clock (GstPipeline* pipeline);
// void gst_pipeline_auto_clock (::GstPipeline* pipeline);
GI_INLINE_DECL void auto_clock () noexcept;

// gboolean gst_pipeline_get_auto_flush_bus (GstPipeline* pipeline);
// gboolean gst_pipeline_get_auto_flush_bus (::GstPipeline* pipeline);
GI_INLINE_DECL bool get_auto_flush_bus () noexcept;

// GstBus* gst_pipeline_get_bus (GstPipeline* pipeline);
// ::GstBus* gst_pipeline_get_bus (::GstPipeline* pipeline);
GI_INLINE_DECL Gst::Bus get_bus () noexcept;

// GstClock* gst_pipeline_get_clock (GstPipeline* pipeline);
// ::GstClock* gst_pipeline_get_clock (::GstPipeline* pipeline);
GI_INLINE_DECL Gst::Clock get_clock () noexcept;

// GstClockTime gst_pipeline_get_delay (GstPipeline* pipeline);
// ::GstClockTime gst_pipeline_get_delay (::GstPipeline* pipeline);
GI_INLINE_DECL Gst::ClockTime get_delay () noexcept;

// GstClockTime gst_pipeline_get_latency (GstPipeline* pipeline);
// ::GstClockTime gst_pipeline_get_latency (::GstPipeline* pipeline);
GI_INLINE_DECL Gst::ClockTime get_latency () noexcept;

// GstClock* gst_pipeline_get_pipeline_clock (GstPipeline* pipeline);
// ::GstClock* gst_pipeline_get_pipeline_clock (::GstPipeline* pipeline);
GI_INLINE_DECL Gst::Clock get_pipeline_clock () noexcept;

// void gst_pipeline_set_auto_flush_bus (GstPipeline* pipeline, gboolean auto_flush);
// void gst_pipeline_set_auto_flush_bus (::GstPipeline* pipeline, gboolean auto_flush);
GI_INLINE_DECL void set_auto_flush_bus (gboolean auto_flush) noexcept;

// gboolean gst_pipeline_set_clock (GstPipeline* pipeline, GstClock* clock);
// gboolean gst_pipeline_set_clock (::GstPipeline* pipeline, ::GstClock* clock);
GI_INLINE_DECL bool set_clock (Gst::Clock clock) noexcept;

// void gst_pipeline_set_delay (GstPipeline* pipeline, GstClockTime delay);
// void gst_pipeline_set_delay (::GstPipeline* pipeline, ::GstClockTime delay);
GI_INLINE_DECL void set_delay (::GstClockTime delay) noexcept;

// void gst_pipeline_set_latency (GstPipeline* pipeline, GstClockTime latency);
// void gst_pipeline_set_latency (::GstPipeline* pipeline, ::GstClockTime latency);
GI_INLINE_DECL void set_latency (::GstClockTime latency) noexcept;

// void gst_pipeline_use_clock (GstPipeline* pipeline, GstClock* clock);
// void gst_pipeline_use_clock (::GstPipeline* pipeline, ::GstClock* clock);
GI_INLINE_DECL void use_clock (Gst::Clock clock) noexcept;
GI_INLINE_DECL void use_clock () noexcept;

gi::property_proxy<bool, base::PipelineBase> property_auto_flush_bus()
{ return gi::property_proxy<bool, base::PipelineBase> (*this, "auto-flush-bus"); }
const gi::property_proxy<bool, base::PipelineBase> property_auto_flush_bus() const
{ return gi::property_proxy<bool, base::PipelineBase> (*this, "auto-flush-bus"); }

gi::property_proxy<guint64, base::PipelineBase> property_delay()
{ return gi::property_proxy<guint64, base::PipelineBase> (*this, "delay"); }
const gi::property_proxy<guint64, base::PipelineBase> property_delay() const
{ return gi::property_proxy<guint64, base::PipelineBase> (*this, "delay"); }

gi::property_proxy<guint64, base::PipelineBase> property_latency()
{ return gi::property_proxy<guint64, base::PipelineBase> (*this, "latency"); }
const gi::property_proxy<guint64, base::PipelineBase> property_latency() const
{ return gi::property_proxy<guint64, base::PipelineBase> (*this, "latency"); }

// ::GstClock* Pipeline::fixed_clock (const ::GstPipeline* obj);
// ::GstClock* Pipeline::fixed_clock (const ::GstPipeline* obj);
GI_INLINE_DECL Gst::Clock fixed_clock_ () const noexcept;

// ::GstClockTime Pipeline::stream_time (const ::GstPipeline* obj);
// ::GstClockTime Pipeline::stream_time (const ::GstPipeline* obj);
GI_INLINE_DECL Gst::ClockTime stream_time_ () const noexcept;

//  Pipeline::stream_time (::GstPipeline* obj, ::GstClockTime _value);
// void Pipeline::stream_time (::GstPipeline* obj, ::GstClockTime _value);
GI_INLINE_DECL void stream_time_ (::GstClockTime _value) noexcept;

// ::GstClockTime Pipeline::delay (const ::GstPipeline* obj);
// ::GstClockTime Pipeline::delay (const ::GstPipeline* obj);
GI_INLINE_DECL Gst::ClockTime delay_ () const noexcept;

//  Pipeline::delay (::GstPipeline* obj, ::GstClockTime _value);
// void Pipeline::delay (::GstPipeline* obj, ::GstClockTime _value);
GI_INLINE_DECL void delay_ (::GstClockTime _value) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/pipeline_extra_def.hpp>)
#include <gst/pipeline_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/pipeline_extra.hpp>)
#include <gst/pipeline_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Pipeline : public GI_GST_PIPELINE_BASE
{ typedef GI_GST_PIPELINE_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstPipeline>
{ typedef Gst::Pipeline type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class PipelineClassDef
{
typedef PipelineClassDef self;
public:
typedef Gst::Pipeline instance_type;
typedef ::GstPipelineClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class PipelineClass: public detail::ClassTemplate<Gst::impl::internal::PipelineClassDef, Gst::impl::internal::BinClass>
{
typedef PipelineClass self;
typedef detail::ClassTemplate<Gst::impl::internal::PipelineClassDef, Gst::impl::internal::BinClass> super;

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

using PipelineImpl = detail::ObjectImpl<Pipeline, internal::PipelineClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
