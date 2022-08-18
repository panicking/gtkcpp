// AUTO-GENERATED

#ifndef _GI_GST_ELEMENTFACTORY_HPP_
#define _GI_GST_ELEMENTFACTORY_HPP_

#include "pluginfeature.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Caps;
class Element;
class StaticPadTemplate;

class ElementFactory;

namespace base {


#define GI_GST_ELEMENTFACTORY_BASE base::ElementFactoryBase
class ElementFactoryBase : public Gst::PluginFeature
{
typedef Gst::PluginFeature super_type;
public:
typedef ::GstElementFactory BaseObjectType;

ElementFactoryBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_element_factory_get_type(); } 

// GstElementFactory* gst_element_factory_find (const gchar* name);
// ::GstElementFactory* gst_element_factory_find (const char* name);
static GI_INLINE_DECL Gst::ElementFactory find (const std::string & name) noexcept;

// GList* gst_element_factory_list_filter (GList* list, const GstCaps* caps, GstPadDirection direction, gboolean subsetonly);
// ::GList* gst_element_factory_list_filter (::GList* list, const ::GstCaps* caps, ::GstPadDirection direction, gboolean subsetonly);
static GI_INLINE_DECL std::vector<Gst::ElementFactory> list_filter (const std::vector<Gst::ElementFactory> & list, const Gst::Caps & caps, Gst::PadDirection direction, gboolean subsetonly) noexcept;

// GList* gst_element_factory_list_get_elements (GstElementFactoryListType type, GstRank minrank);
// ::GList* gst_element_factory_list_get_elements (::GstElementFactoryListType type, ::GstRank minrank);
static GI_INLINE_DECL std::vector<Gst::ElementFactory> list_get_elements (::GstElementFactoryListType type, Gst::Rank minrank) noexcept;

// GstElement* gst_element_factory_make (const gchar* factoryname, const gchar* name);
// ::GstElement* gst_element_factory_make (const char* factoryname, const char* name);
static GI_INLINE_DECL Gst::Element make (const std::string & factoryname, const std::string & name) noexcept;
static GI_INLINE_DECL Gst::Element make (const std::string & factoryname) noexcept;

// GstElement* gst_element_factory_make_full (const gchar* factoryname, const gchar* first);
// ::GstElement* gst_element_factory_make_full (const char* factoryname, const char* first);
// IGNORE; not introspectable, varargs not supported

// GstElement* gst_element_factory_make_valist (const gchar* factoryname, const gchar* first, va_list properties);
// ::GstElement* gst_element_factory_make_valist (const char* factoryname, const char* first,  properties);
// IGNORE; not introspectable, properties type  not supported

// GstElement* gst_element_factory_make_with_properties (const gchar* factoryname, guint n, const gchar** names, const GValue* values);
// ::GstElement* gst_element_factory_make_with_properties (const char* factoryname, guint n, const char** names, const ::GValue** values);
// SKIP; inconsistent in values pointer depth (1 vs 2)

// gboolean gst_element_factory_can_sink_all_caps (GstElementFactory* factory, const GstCaps* caps);
// gboolean gst_element_factory_can_sink_all_caps (::GstElementFactory* factory, const ::GstCaps* caps);
GI_INLINE_DECL bool can_sink_all_caps (const Gst::Caps & caps) noexcept;

// gboolean gst_element_factory_can_sink_any_caps (GstElementFactory* factory, const GstCaps* caps);
// gboolean gst_element_factory_can_sink_any_caps (::GstElementFactory* factory, const ::GstCaps* caps);
GI_INLINE_DECL bool can_sink_any_caps (const Gst::Caps & caps) noexcept;

// gboolean gst_element_factory_can_src_all_caps (GstElementFactory* factory, const GstCaps* caps);
// gboolean gst_element_factory_can_src_all_caps (::GstElementFactory* factory, const ::GstCaps* caps);
GI_INLINE_DECL bool can_src_all_caps (const Gst::Caps & caps) noexcept;

// gboolean gst_element_factory_can_src_any_caps (GstElementFactory* factory, const GstCaps* caps);
// gboolean gst_element_factory_can_src_any_caps (::GstElementFactory* factory, const ::GstCaps* caps);
GI_INLINE_DECL bool can_src_any_caps (const Gst::Caps & caps) noexcept;

// GstElement* gst_element_factory_create (GstElementFactory* factory, const gchar* name);
// ::GstElement* gst_element_factory_create (::GstElementFactory* factory, const char* name);
GI_INLINE_DECL Gst::Element create (const std::string & name) noexcept;
GI_INLINE_DECL Gst::Element create () noexcept;

// GstElement* gst_element_factory_create_full (GstElementFactory* factory, const gchar* first);
// ::GstElement* gst_element_factory_create_full (::GstElementFactory* factory, const char* first);
// IGNORE; not introspectable, varargs not supported

// GstElement* gst_element_factory_create_valist (GstElementFactory* factory, const gchar* first, va_list properties);
// ::GstElement* gst_element_factory_create_valist (::GstElementFactory* factory, const char* first,  properties);
// IGNORE; not introspectable, properties type  not supported

// GstElement* gst_element_factory_create_with_properties (GstElementFactory* factory, guint n, const gchar** names, const GValue* values);
// ::GstElement* gst_element_factory_create_with_properties (::GstElementFactory* factory, guint n, const char** names, const ::GValue** values);
// SKIP; inconsistent in values pointer depth (1 vs 2)

// GType gst_element_factory_get_element_type (GstElementFactory* factory);
// GType gst_element_factory_get_element_type (::GstElementFactory* factory);
GI_INLINE_DECL GType get_element_type () noexcept;

// const gchar* gst_element_factory_get_metadata (GstElementFactory* factory, const gchar* key);
// const char* gst_element_factory_get_metadata (::GstElementFactory* factory, const char* key);
GI_INLINE_DECL std::string get_metadata (const std::string & key) noexcept;

// gchar** gst_element_factory_get_metadata_keys (GstElementFactory* factory);
// char** gst_element_factory_get_metadata_keys (::GstElementFactory* factory);
GI_INLINE_DECL std::vector<std::string> get_metadata_keys () noexcept;

// guint gst_element_factory_get_num_pad_templates (GstElementFactory* factory);
// guint gst_element_factory_get_num_pad_templates (::GstElementFactory* factory);
GI_INLINE_DECL guint get_num_pad_templates () noexcept;

// gboolean gst_element_factory_get_skip_documentation (GstElementFactory* factory);
// gboolean gst_element_factory_get_skip_documentation (::GstElementFactory* factory);
GI_INLINE_DECL bool get_skip_documentation () noexcept;

// const GList* gst_element_factory_get_static_pad_templates (GstElementFactory* factory);
// const ::GList* gst_element_factory_get_static_pad_templates (::GstElementFactory* factory);
GI_INLINE_DECL std::vector<Gst::StaticPadTemplate> get_static_pad_templates () noexcept;

// const gchar* const* gst_element_factory_get_uri_protocols (GstElementFactory* factory);
// const char** gst_element_factory_get_uri_protocols (::GstElementFactory* factory);
GI_INLINE_DECL std::vector<std::string> get_uri_protocols () noexcept;

// GstURIType gst_element_factory_get_uri_type (GstElementFactory* factory);
// ::GstURIType gst_element_factory_get_uri_type (::GstElementFactory* factory);
GI_INLINE_DECL Gst::URIType get_uri_type () noexcept;

// gboolean gst_element_factory_has_interface (GstElementFactory* factory, const gchar* interfacename);
// gboolean gst_element_factory_has_interface (::GstElementFactory* factory, const char* interfacename);
GI_INLINE_DECL bool has_interface (const std::string & interfacename) noexcept;

// gboolean gst_element_factory_list_is_type (GstElementFactory* factory, GstElementFactoryListType type);
// gboolean gst_element_factory_list_is_type (::GstElementFactory* factory, ::GstElementFactoryListType type);
GI_INLINE_DECL bool list_is_type (::GstElementFactoryListType type) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/elementfactory_extra_def.hpp>)
#include <gst/elementfactory_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/elementfactory_extra.hpp>)
#include <gst/elementfactory_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class ElementFactory : public GI_GST_ELEMENTFACTORY_BASE
{ typedef GI_GST_ELEMENTFACTORY_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstElementFactory>
{ typedef Gst::ElementFactory type; }; 

} // namespace repository

} // namespace gi

#endif
