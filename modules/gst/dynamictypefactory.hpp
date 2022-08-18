// AUTO-GENERATED

#ifndef _GI_GST_DYNAMICTYPEFACTORY_HPP_
#define _GI_GST_DYNAMICTYPEFACTORY_HPP_

#include "pluginfeature.hpp"

namespace gi {

namespace repository {

namespace Gst {


class DynamicTypeFactory;

namespace base {


#define GI_GST_DYNAMICTYPEFACTORY_BASE base::DynamicTypeFactoryBase
class DynamicTypeFactoryBase : public Gst::PluginFeature
{
typedef Gst::PluginFeature super_type;
public:
typedef ::GstDynamicTypeFactory BaseObjectType;

DynamicTypeFactoryBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_dynamic_type_factory_get_type(); } 

// GType gst_dynamic_type_factory_load (const gchar* factoryname);
// GType gst_dynamic_type_factory_load (const char* factoryname);
static GI_INLINE_DECL GType load (const std::string & factoryname) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/dynamictypefactory_extra_def.hpp>)
#include <gst/dynamictypefactory_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/dynamictypefactory_extra.hpp>)
#include <gst/dynamictypefactory_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class DynamicTypeFactory : public GI_GST_DYNAMICTYPEFACTORY_BASE
{ typedef GI_GST_DYNAMICTYPEFACTORY_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstDynamicTypeFactory>
{ typedef Gst::DynamicTypeFactory type; }; 

} // namespace repository

} // namespace gi

#endif
