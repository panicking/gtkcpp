// AUTO-GENERATED

#ifndef _GI_GST_TRACER_HPP_
#define _GI_GST_TRACER_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Plugin;

class Tracer;

namespace base {


#define GI_GST_TRACER_BASE base::TracerBase
class TracerBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstTracer BaseObjectType;

TracerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_tracer_get_type(); } 

// gboolean gst_tracer_register (GstPlugin* plugin, const gchar* name, GType type);
// gboolean gst_tracer_register (::GstPlugin* plugin, const char* name, GType type);
static GI_INLINE_DECL bool register_ (Gst::Plugin plugin, const std::string & name, GType type) noexcept;
static GI_INLINE_DECL bool register_ (const std::string & name, GType type) noexcept;

gi::property_proxy<std::string, base::TracerBase> property_params()
{ return gi::property_proxy<std::string, base::TracerBase> (*this, "params"); }
const gi::property_proxy<std::string, base::TracerBase> property_params() const
{ return gi::property_proxy<std::string, base::TracerBase> (*this, "params"); }

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/tracer_extra_def.hpp>)
#include <gst/tracer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/tracer_extra.hpp>)
#include <gst/tracer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Tracer : public GI_GST_TRACER_BASE
{ typedef GI_GST_TRACER_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstTracer>
{ typedef Gst::Tracer type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class TracerClassDef
{
typedef TracerClassDef self;
public:
typedef Gst::Tracer instance_type;
typedef ::GstTracerClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TracerClass: public detail::ClassTemplate<Gst::impl::internal::TracerClassDef, Gst::impl::internal::ObjectClass>
{
typedef TracerClass self;
typedef detail::ClassTemplate<Gst::impl::internal::TracerClassDef, Gst::impl::internal::ObjectClass> super;

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

using TracerImpl = detail::ObjectImpl<Tracer, internal::TracerClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
