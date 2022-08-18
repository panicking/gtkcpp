// AUTO-GENERATED

#ifndef _GI_GST_ALLOCATIONPARAMS_IMPL_HPP_
#define _GI_GST_ALLOCATIONPARAMS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static ::GstMemoryFlags _field_flags_get (const ::GstAllocationParams* obj) { return (::GstMemoryFlags) obj->flags; }
// ::GstMemoryFlags AllocationParams::flags (const ::GstAllocationParams* obj);
// ::GstMemoryFlags AllocationParams::flags (const ::GstAllocationParams* obj);
Gst::MemoryFlags base::AllocationParamsBase::flags_ () const noexcept
{
  typedef ::GstMemoryFlags (*call_wrap_t) (const ::GstAllocationParams* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_get;
  auto _temp_ret = call_wrap_v ((const ::GstAllocationParams*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_flags_set (::GstAllocationParams* obj, ::GstMemoryFlags _value) { obj->flags = (decltype(obj->flags)) _value; }
//  AllocationParams::flags (::GstAllocationParams* obj, ::GstMemoryFlags _value);
// void AllocationParams::flags (::GstAllocationParams* obj, ::GstMemoryFlags _value);
void base::AllocationParamsBase::flags_ (Gst::MemoryFlags _value) noexcept
{
  typedef void (*call_wrap_t) (::GstAllocationParams* obj, ::GstMemoryFlags _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstAllocationParams*) (gobj_()), (::GstMemoryFlags) (_value_to_c));
}

static gsize _field_align_get (const ::GstAllocationParams* obj) { return (gsize) obj->align; }
// gsize AllocationParams::align (const ::GstAllocationParams* obj);
// gsize AllocationParams::align (const ::GstAllocationParams* obj);
gsize base::AllocationParamsBase::align_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GstAllocationParams* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_align_get;
  auto _temp_ret = call_wrap_v ((const ::GstAllocationParams*) (gobj_()));
  return _temp_ret;
}

static void _field_align_set (::GstAllocationParams* obj, gsize _value) { obj->align = (decltype(obj->align)) _value; }
//  AllocationParams::align (::GstAllocationParams* obj, gsize _value);
// void AllocationParams::align (::GstAllocationParams* obj, gsize _value);
void base::AllocationParamsBase::align_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GstAllocationParams* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_align_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstAllocationParams*) (gobj_()), (gsize) (_value_to_c));
}

static gsize _field_prefix_get (const ::GstAllocationParams* obj) { return (gsize) obj->prefix; }
// gsize AllocationParams::prefix (const ::GstAllocationParams* obj);
// gsize AllocationParams::prefix (const ::GstAllocationParams* obj);
gsize base::AllocationParamsBase::prefix_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GstAllocationParams* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_prefix_get;
  auto _temp_ret = call_wrap_v ((const ::GstAllocationParams*) (gobj_()));
  return _temp_ret;
}

static void _field_prefix_set (::GstAllocationParams* obj, gsize _value) { obj->prefix = (decltype(obj->prefix)) _value; }
//  AllocationParams::prefix (::GstAllocationParams* obj, gsize _value);
// void AllocationParams::prefix (::GstAllocationParams* obj, gsize _value);
void base::AllocationParamsBase::prefix_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GstAllocationParams* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_prefix_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstAllocationParams*) (gobj_()), (gsize) (_value_to_c));
}

static gsize _field_padding_get (const ::GstAllocationParams* obj) { return (gsize) obj->padding; }
// gsize AllocationParams::padding (const ::GstAllocationParams* obj);
// gsize AllocationParams::padding (const ::GstAllocationParams* obj);
gsize base::AllocationParamsBase::padding_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GstAllocationParams* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_padding_get;
  auto _temp_ret = call_wrap_v ((const ::GstAllocationParams*) (gobj_()));
  return _temp_ret;
}

static void _field_padding_set (::GstAllocationParams* obj, gsize _value) { obj->padding = (decltype(obj->padding)) _value; }
//  AllocationParams::padding (::GstAllocationParams* obj, gsize _value);
// void AllocationParams::padding (::GstAllocationParams* obj, gsize _value);
void base::AllocationParamsBase::padding_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GstAllocationParams* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_padding_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstAllocationParams*) (gobj_()), (gsize) (_value_to_c));
}

// GstAllocationParams* gst_allocation_params_new ();
// ::GstAllocationParams* gst_allocation_params_new ();
Gst::AllocationParams base::AllocationParamsBase::new_ () noexcept
{
  typedef ::GstAllocationParams* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_allocation_params_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstAllocationParams* gst_allocation_params_copy (const GstAllocationParams* params);
// ::GstAllocationParams* gst_allocation_params_copy (const ::GstAllocationParams* params);
Gst::AllocationParams base::AllocationParamsBase::copy () const noexcept
{
  typedef ::GstAllocationParams* (*call_wrap_t) (const ::GstAllocationParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_allocation_params_copy;
  auto _temp_ret = call_wrap_v ((const ::GstAllocationParams*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_allocation_params_free (GstAllocationParams* params);
// void gst_allocation_params_free (::GstAllocationParams* params);
// IGNORE; marked ignore

// void gst_allocation_params_init (GstAllocationParams* params);
// void gst_allocation_params_init (::GstAllocationParams* params);
void base::AllocationParamsBase::init () noexcept
{
  typedef void (*call_wrap_t) (::GstAllocationParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_allocation_params_init;
  call_wrap_v ((::GstAllocationParams*) (gobj_()));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/allocationparams_extra_def_impl.hpp>)
#include <gst/allocationparams_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/allocationparams_extra_impl.hpp>)
#include <gst/allocationparams_extra_impl.hpp>
#endif
#endif

#endif
