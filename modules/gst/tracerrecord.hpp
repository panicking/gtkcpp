// AUTO-GENERATED

#ifndef _GI_GST_TRACERRECORD_HPP_
#define _GI_GST_TRACERRECORD_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {


class TracerRecord;

namespace base {


#define GI_GST_TRACERRECORD_BASE base::TracerRecordBase
class TracerRecordBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstTracerRecord BaseObjectType;

TracerRecordBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_tracer_record_get_type(); } 

// GstTracerRecord* gst_tracer_record_new (const gchar* name, const gchar* firstfield);
// ::GstTracerRecord* gst_tracer_record_new (const char* name, const char* firstfield);
// IGNORE; not introspectable, varargs not supported

// void gst_tracer_record_log (GstTracerRecord* self);
// void gst_tracer_record_log (::GstTracerRecord* self);
// IGNORE; not introspectable, varargs not supported

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/tracerrecord_extra_def.hpp>)
#include <gst/tracerrecord_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/tracerrecord_extra.hpp>)
#include <gst/tracerrecord_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class TracerRecord : public GI_GST_TRACERRECORD_BASE
{ typedef GI_GST_TRACERRECORD_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstTracerRecord>
{ typedef Gst::TracerRecord type; }; 

} // namespace repository

} // namespace gi

#endif
