// AUTO-GENERATED

#ifndef _GI_GST_TRACERFACTORY_HPP_
#define _GI_GST_TRACERFACTORY_HPP_

#include "pluginfeature.hpp"

namespace gi {

namespace repository {

namespace Gst {


class TracerFactory;

namespace base {


#define GI_GST_TRACERFACTORY_BASE base::TracerFactoryBase
class TracerFactoryBase : public Gst::PluginFeature
{
typedef Gst::PluginFeature super_type;
public:
typedef ::GstTracerFactory BaseObjectType;

TracerFactoryBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_tracer_factory_get_type(); } 

// GList* gst_tracer_factory_get_list ();
// ::GList* gst_tracer_factory_get_list ();
static GI_INLINE_DECL std::vector<Gst::TracerFactory> get_list () noexcept;

// GType gst_tracer_factory_get_tracer_type (GstTracerFactory* factory);
// GType gst_tracer_factory_get_tracer_type (::GstTracerFactory* factory);
GI_INLINE_DECL GType get_tracer_type () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/tracerfactory_extra_def.hpp>)
#include <gst/tracerfactory_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/tracerfactory_extra.hpp>)
#include <gst/tracerfactory_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class TracerFactory : public GI_GST_TRACERFACTORY_BASE
{ typedef GI_GST_TRACERFACTORY_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstTracerFactory>
{ typedef Gst::TracerFactory type; }; 

} // namespace repository

} // namespace gi

#endif
