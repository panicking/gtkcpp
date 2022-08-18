// AUTO-GENERATED

#ifndef _GI_GST_ALLOCATIONPARAMS_HPP_
#define _GI_GST_ALLOCATIONPARAMS_HPP_


namespace gi {

namespace repository {

namespace Gst {


class AllocationParams;

namespace base {


#define GI_GST_ALLOCATIONPARAMS_BASE base::AllocationParamsBase
class AllocationParamsBase : public gi::detail::GBoxedWrapper<AllocationParamsBase, ::GstAllocationParams>
{
typedef gi::detail::GBoxedWrapper<AllocationParamsBase, ::GstAllocationParams> super_type;
public:

AllocationParamsBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_allocation_params_get_type(); } 

// ::GstMemoryFlags AllocationParams::flags (const ::GstAllocationParams* obj);
// ::GstMemoryFlags AllocationParams::flags (const ::GstAllocationParams* obj);
GI_INLINE_DECL Gst::MemoryFlags flags_ () const noexcept;

//  AllocationParams::flags (::GstAllocationParams* obj, ::GstMemoryFlags _value);
// void AllocationParams::flags (::GstAllocationParams* obj, ::GstMemoryFlags _value);
GI_INLINE_DECL void flags_ (Gst::MemoryFlags _value) noexcept;

// gsize AllocationParams::align (const ::GstAllocationParams* obj);
// gsize AllocationParams::align (const ::GstAllocationParams* obj);
GI_INLINE_DECL gsize align_ () const noexcept;

//  AllocationParams::align (::GstAllocationParams* obj, gsize _value);
// void AllocationParams::align (::GstAllocationParams* obj, gsize _value);
GI_INLINE_DECL void align_ (gsize _value) noexcept;

// gsize AllocationParams::prefix (const ::GstAllocationParams* obj);
// gsize AllocationParams::prefix (const ::GstAllocationParams* obj);
GI_INLINE_DECL gsize prefix_ () const noexcept;

//  AllocationParams::prefix (::GstAllocationParams* obj, gsize _value);
// void AllocationParams::prefix (::GstAllocationParams* obj, gsize _value);
GI_INLINE_DECL void prefix_ (gsize _value) noexcept;

// gsize AllocationParams::padding (const ::GstAllocationParams* obj);
// gsize AllocationParams::padding (const ::GstAllocationParams* obj);
GI_INLINE_DECL gsize padding_ () const noexcept;

//  AllocationParams::padding (::GstAllocationParams* obj, gsize _value);
// void AllocationParams::padding (::GstAllocationParams* obj, gsize _value);
GI_INLINE_DECL void padding_ (gsize _value) noexcept;

// GstAllocationParams* gst_allocation_params_new ();
// ::GstAllocationParams* gst_allocation_params_new ();
static GI_INLINE_DECL Gst::AllocationParams new_ () noexcept;

// GstAllocationParams* gst_allocation_params_copy (const GstAllocationParams* params);
// ::GstAllocationParams* gst_allocation_params_copy (const ::GstAllocationParams* params);
GI_INLINE_DECL Gst::AllocationParams copy () const noexcept;

// void gst_allocation_params_free (GstAllocationParams* params);
// void gst_allocation_params_free (::GstAllocationParams* params);
// IGNORE; marked ignore

// void gst_allocation_params_init (GstAllocationParams* params);
// void gst_allocation_params_init (::GstAllocationParams* params);
GI_INLINE_DECL void init () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/allocationparams_extra_def.hpp>)
#include <gst/allocationparams_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/allocationparams_extra.hpp>)
#include <gst/allocationparams_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class AllocationParams : public GI_GST_ALLOCATIONPARAMS_BASE
{ typedef GI_GST_ALLOCATIONPARAMS_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstAllocationParams>
{ typedef Gst::AllocationParams type; }; 

} // namespace repository

} // namespace gi

#endif
