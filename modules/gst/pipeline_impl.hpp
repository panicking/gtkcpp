// AUTO-GENERATED

#ifndef _GI_GST_PIPELINE_IMPL_HPP_
#define _GI_GST_PIPELINE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstElement* gst_pipeline_new (const gchar* name);
// ::GstPipeline* gst_pipeline_new (const char* name);
Gst::Pipeline base::PipelineBase::new_ (const std::string & name) noexcept
{
  typedef ::GstPipeline* (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pipeline_new;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Pipeline base::PipelineBase::new_ () noexcept
{
  typedef ::GstPipeline* (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pipeline_new;
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gst_pipeline_auto_clock (GstPipeline* pipeline);
// void gst_pipeline_auto_clock (::GstPipeline* pipeline);
void base::PipelineBase::auto_clock () noexcept
{
  typedef void (*call_wrap_t) (::GstPipeline* pipeline);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pipeline_auto_clock;
  call_wrap_v ((::GstPipeline*) (gobj_()));
}

// gboolean gst_pipeline_get_auto_flush_bus (GstPipeline* pipeline);
// gboolean gst_pipeline_get_auto_flush_bus (::GstPipeline* pipeline);
bool base::PipelineBase::get_auto_flush_bus () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPipeline* pipeline);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pipeline_get_auto_flush_bus;
  auto _temp_ret = call_wrap_v ((::GstPipeline*) (gobj_()));
  return _temp_ret;
}

// GstBus* gst_pipeline_get_bus (GstPipeline* pipeline);
// ::GstBus* gst_pipeline_get_bus (::GstPipeline* pipeline);
Gst::Bus base::PipelineBase::get_bus () noexcept
{
  typedef ::GstBus* (*call_wrap_t) (::GstPipeline* pipeline);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pipeline_get_bus;
  auto _temp_ret = call_wrap_v ((::GstPipeline*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstClock* gst_pipeline_get_clock (GstPipeline* pipeline);
// ::GstClock* gst_pipeline_get_clock (::GstPipeline* pipeline);
Gst::Clock base::PipelineBase::get_clock () noexcept
{
  typedef ::GstClock* (*call_wrap_t) (::GstPipeline* pipeline);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pipeline_get_clock;
  auto _temp_ret = call_wrap_v ((::GstPipeline*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstClockTime gst_pipeline_get_delay (GstPipeline* pipeline);
// ::GstClockTime gst_pipeline_get_delay (::GstPipeline* pipeline);
Gst::ClockTime base::PipelineBase::get_delay () noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (::GstPipeline* pipeline);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pipeline_get_delay;
  auto _temp_ret = call_wrap_v ((::GstPipeline*) (gobj_()));
  return _temp_ret;
}

// GstClockTime gst_pipeline_get_latency (GstPipeline* pipeline);
// ::GstClockTime gst_pipeline_get_latency (::GstPipeline* pipeline);
Gst::ClockTime base::PipelineBase::get_latency () noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (::GstPipeline* pipeline);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pipeline_get_latency;
  auto _temp_ret = call_wrap_v ((::GstPipeline*) (gobj_()));
  return _temp_ret;
}

// GstClock* gst_pipeline_get_pipeline_clock (GstPipeline* pipeline);
// ::GstClock* gst_pipeline_get_pipeline_clock (::GstPipeline* pipeline);
Gst::Clock base::PipelineBase::get_pipeline_clock () noexcept
{
  typedef ::GstClock* (*call_wrap_t) (::GstPipeline* pipeline);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pipeline_get_pipeline_clock;
  auto _temp_ret = call_wrap_v ((::GstPipeline*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_pipeline_set_auto_flush_bus (GstPipeline* pipeline, gboolean auto_flush);
// void gst_pipeline_set_auto_flush_bus (::GstPipeline* pipeline, gboolean auto_flush);
void base::PipelineBase::set_auto_flush_bus (gboolean auto_flush) noexcept
{
  typedef void (*call_wrap_t) (::GstPipeline* pipeline, gboolean auto_flush);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pipeline_set_auto_flush_bus;
  auto auto_flush_to_c = auto_flush;
  call_wrap_v ((::GstPipeline*) (gobj_()), (gboolean) (auto_flush_to_c));
}

// gboolean gst_pipeline_set_clock (GstPipeline* pipeline, GstClock* clock);
// gboolean gst_pipeline_set_clock (::GstPipeline* pipeline, ::GstClock* clock);
bool base::PipelineBase::set_clock (Gst::Clock clock) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPipeline* pipeline, ::GstClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pipeline_set_clock;
  auto clock_to_c = gi::unwrap (clock, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPipeline*) (gobj_()), (::GstClock*) (clock_to_c));
  return _temp_ret;
}

// void gst_pipeline_set_delay (GstPipeline* pipeline, GstClockTime delay);
// void gst_pipeline_set_delay (::GstPipeline* pipeline, ::GstClockTime delay);
void base::PipelineBase::set_delay (::GstClockTime delay) noexcept
{
  typedef void (*call_wrap_t) (::GstPipeline* pipeline, ::GstClockTime delay);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pipeline_set_delay;
  auto delay_to_c = delay;
  call_wrap_v ((::GstPipeline*) (gobj_()), (::GstClockTime) (delay_to_c));
}

// void gst_pipeline_set_latency (GstPipeline* pipeline, GstClockTime latency);
// void gst_pipeline_set_latency (::GstPipeline* pipeline, ::GstClockTime latency);
void base::PipelineBase::set_latency (::GstClockTime latency) noexcept
{
  typedef void (*call_wrap_t) (::GstPipeline* pipeline, ::GstClockTime latency);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pipeline_set_latency;
  auto latency_to_c = latency;
  call_wrap_v ((::GstPipeline*) (gobj_()), (::GstClockTime) (latency_to_c));
}

// void gst_pipeline_use_clock (GstPipeline* pipeline, GstClock* clock);
// void gst_pipeline_use_clock (::GstPipeline* pipeline, ::GstClock* clock);
void base::PipelineBase::use_clock (Gst::Clock clock) noexcept
{
  typedef void (*call_wrap_t) (::GstPipeline* pipeline, ::GstClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pipeline_use_clock;
  auto clock_to_c = gi::unwrap (clock, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstPipeline*) (gobj_()), (::GstClock*) (clock_to_c));
}
void base::PipelineBase::use_clock () noexcept
{
  typedef void (*call_wrap_t) (::GstPipeline* pipeline, ::GstClock* clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_pipeline_use_clock;
  auto clock_to_c = nullptr;
  call_wrap_v ((::GstPipeline*) (gobj_()), (::GstClock*) (clock_to_c));
}

static ::GstClock* _field_fixed_clock_get (const ::GstPipeline* obj) { return (::GstClock*) obj->fixed_clock; }
// ::GstClock* Pipeline::fixed_clock (const ::GstPipeline* obj);
// ::GstClock* Pipeline::fixed_clock (const ::GstPipeline* obj);
Gst::Clock base::PipelineBase::fixed_clock_ () const noexcept
{
  typedef ::GstClock* (*call_wrap_t) (const ::GstPipeline* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_fixed_clock_get;
  auto _temp_ret = call_wrap_v ((const ::GstPipeline*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GstClockTime _field_stream_time_get (const ::GstPipeline* obj) { return (::GstClockTime) obj->stream_time; }
// ::GstClockTime Pipeline::stream_time (const ::GstPipeline* obj);
// ::GstClockTime Pipeline::stream_time (const ::GstPipeline* obj);
Gst::ClockTime base::PipelineBase::stream_time_ () const noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (const ::GstPipeline* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_stream_time_get;
  auto _temp_ret = call_wrap_v ((const ::GstPipeline*) (gobj_()));
  return _temp_ret;
}

static void _field_stream_time_set (::GstPipeline* obj, ::GstClockTime _value) { obj->stream_time = (decltype(obj->stream_time)) _value; }
//  Pipeline::stream_time (::GstPipeline* obj, ::GstClockTime _value);
// void Pipeline::stream_time (::GstPipeline* obj, ::GstClockTime _value);
void base::PipelineBase::stream_time_ (::GstClockTime _value) noexcept
{
  typedef void (*call_wrap_t) (::GstPipeline* obj, ::GstClockTime _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_stream_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstPipeline*) (gobj_()), (::GstClockTime) (_value_to_c));
}

static ::GstClockTime _field_delay_get (const ::GstPipeline* obj) { return (::GstClockTime) obj->delay; }
// ::GstClockTime Pipeline::delay (const ::GstPipeline* obj);
// ::GstClockTime Pipeline::delay (const ::GstPipeline* obj);
Gst::ClockTime base::PipelineBase::delay_ () const noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (const ::GstPipeline* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_delay_get;
  auto _temp_ret = call_wrap_v ((const ::GstPipeline*) (gobj_()));
  return _temp_ret;
}

static void _field_delay_set (::GstPipeline* obj, ::GstClockTime _value) { obj->delay = (decltype(obj->delay)) _value; }
//  Pipeline::delay (::GstPipeline* obj, ::GstClockTime _value);
// void Pipeline::delay (::GstPipeline* obj, ::GstClockTime _value);
void base::PipelineBase::delay_ (::GstClockTime _value) noexcept
{
  typedef void (*call_wrap_t) (::GstPipeline* obj, ::GstClockTime _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_delay_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstPipeline*) (gobj_()), (::GstClockTime) (_value_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/pipeline_extra_def_impl.hpp>)
#include <gst/pipeline_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/pipeline_extra_impl.hpp>)
#include <gst/pipeline_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void PipelineClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstPipelineClass *methods = (::GstPipelineClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
