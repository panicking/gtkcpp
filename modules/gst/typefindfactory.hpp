// AUTO-GENERATED

#ifndef _GI_GST_TYPEFINDFACTORY_HPP_
#define _GI_GST_TYPEFINDFACTORY_HPP_

#include "pluginfeature.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Caps;
class TypeFind;

class TypeFindFactory;

namespace base {


#define GI_GST_TYPEFINDFACTORY_BASE base::TypeFindFactoryBase
class TypeFindFactoryBase : public Gst::PluginFeature
{
typedef Gst::PluginFeature super_type;
public:
typedef ::GstTypeFindFactory BaseObjectType;

TypeFindFactoryBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_type_find_factory_get_type(); } 

// GList* gst_type_find_factory_get_list ();
// ::GList* gst_type_find_factory_get_list ();
static GI_INLINE_DECL std::vector<Gst::TypeFindFactory> get_list () noexcept;

// void gst_type_find_factory_call_function (GstTypeFindFactory* factory, GstTypeFind* find);
// void gst_type_find_factory_call_function (::GstTypeFindFactory* factory, ::GstTypeFind* find);
GI_INLINE_DECL void call_function (Gst::TypeFind find) noexcept;

// GstCaps* gst_type_find_factory_get_caps (GstTypeFindFactory* factory);
// ::GstCaps* gst_type_find_factory_get_caps (::GstTypeFindFactory* factory);
GI_INLINE_DECL Gst::Caps get_caps () noexcept;

// const gchar* const* gst_type_find_factory_get_extensions (GstTypeFindFactory* factory);
// const char** gst_type_find_factory_get_extensions (::GstTypeFindFactory* factory);
GI_INLINE_DECL std::vector<std::string> get_extensions () noexcept;

// gboolean gst_type_find_factory_has_function (GstTypeFindFactory* factory);
// gboolean gst_type_find_factory_has_function (::GstTypeFindFactory* factory);
GI_INLINE_DECL bool has_function () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/typefindfactory_extra_def.hpp>)
#include <gst/typefindfactory_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/typefindfactory_extra.hpp>)
#include <gst/typefindfactory_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class TypeFindFactory : public GI_GST_TYPEFINDFACTORY_BASE
{ typedef GI_GST_TYPEFINDFACTORY_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstTypeFindFactory>
{ typedef Gst::TypeFindFactory type; }; 

} // namespace repository

} // namespace gi

#endif
