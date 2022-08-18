// AUTO-GENERATED

#ifndef _GI_GST_ELEMENTFACTORY_IMPL_HPP_
#define _GI_GST_ELEMENTFACTORY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstElementFactory* gst_element_factory_find (const gchar* name);
// ::GstElementFactory* gst_element_factory_find (const char* name);
Gst::ElementFactory base::ElementFactoryBase::find (const std::string & name) noexcept
{
  typedef ::GstElementFactory* (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_find;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* gst_element_factory_list_filter (GList* list, const GstCaps* caps, GstPadDirection direction, gboolean subsetonly);
// ::GList* gst_element_factory_list_filter (::GList* list, const ::GstCaps* caps, ::GstPadDirection direction, gboolean subsetonly);
std::vector<Gst::ElementFactory> base::ElementFactoryBase::list_filter (const std::vector<Gst::ElementFactory> & list, const Gst::Caps & caps, Gst::PadDirection direction, gboolean subsetonly) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GList* list, const ::GstCaps* caps, ::GstPadDirection direction, gboolean subsetonly);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_list_filter;
  auto subsetonly_to_c = subsetonly;
  auto direction_to_c = gi::unwrap (direction);
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto list_i = detail::make_list_unwrap_range<::GList> (list);
  auto list_w = unwrap (list_i, gi::transfer_none, direction_in);
  auto list_to_c = list_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GList*) (list_to_c), (const ::GstCaps*) (caps_to_c), (::GstPadDirection) (direction_to_c), (gboolean) (subsetonly_to_c));
  return gi::detail::wrap_list<Gst::ElementFactory> (_temp_ret, gi::transfer_full);
}

// GList* gst_element_factory_list_get_elements (GstElementFactoryListType type, GstRank minrank);
// ::GList* gst_element_factory_list_get_elements (::GstElementFactoryListType type, ::GstRank minrank);
std::vector<Gst::ElementFactory> base::ElementFactoryBase::list_get_elements (::GstElementFactoryListType type, Gst::Rank minrank) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GstElementFactoryListType type, ::GstRank minrank);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_list_get_elements;
  auto minrank_to_c = gi::unwrap (minrank);
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((::GstElementFactoryListType) (type_to_c), (::GstRank) (minrank_to_c));
  return gi::detail::wrap_list<Gst::ElementFactory> (_temp_ret, gi::transfer_full);
}

// GstElement* gst_element_factory_make (const gchar* factoryname, const gchar* name);
// ::GstElement* gst_element_factory_make (const char* factoryname, const char* name);
Gst::Element base::ElementFactoryBase::make (const std::string & factoryname, const std::string & name) noexcept
{
  typedef ::GstElement* (*call_wrap_t) (const char* factoryname, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_make;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto factoryname_to_c = gi::unwrap (factoryname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (factoryname_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Element base::ElementFactoryBase::make (const std::string & factoryname) noexcept
{
  typedef ::GstElement* (*call_wrap_t) (const char* factoryname, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_make;
  auto name_to_c = nullptr;
  auto factoryname_to_c = gi::unwrap (factoryname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (factoryname_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

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
bool base::ElementFactoryBase::can_sink_all_caps (const Gst::Caps & caps) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElementFactory* factory, const ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_can_sink_all_caps;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElementFactory*) (gobj_()), (const ::GstCaps*) (caps_to_c));
  return _temp_ret;
}

// gboolean gst_element_factory_can_sink_any_caps (GstElementFactory* factory, const GstCaps* caps);
// gboolean gst_element_factory_can_sink_any_caps (::GstElementFactory* factory, const ::GstCaps* caps);
bool base::ElementFactoryBase::can_sink_any_caps (const Gst::Caps & caps) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElementFactory* factory, const ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_can_sink_any_caps;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElementFactory*) (gobj_()), (const ::GstCaps*) (caps_to_c));
  return _temp_ret;
}

// gboolean gst_element_factory_can_src_all_caps (GstElementFactory* factory, const GstCaps* caps);
// gboolean gst_element_factory_can_src_all_caps (::GstElementFactory* factory, const ::GstCaps* caps);
bool base::ElementFactoryBase::can_src_all_caps (const Gst::Caps & caps) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElementFactory* factory, const ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_can_src_all_caps;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElementFactory*) (gobj_()), (const ::GstCaps*) (caps_to_c));
  return _temp_ret;
}

// gboolean gst_element_factory_can_src_any_caps (GstElementFactory* factory, const GstCaps* caps);
// gboolean gst_element_factory_can_src_any_caps (::GstElementFactory* factory, const ::GstCaps* caps);
bool base::ElementFactoryBase::can_src_any_caps (const Gst::Caps & caps) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElementFactory* factory, const ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_can_src_any_caps;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElementFactory*) (gobj_()), (const ::GstCaps*) (caps_to_c));
  return _temp_ret;
}

// GstElement* gst_element_factory_create (GstElementFactory* factory, const gchar* name);
// ::GstElement* gst_element_factory_create (::GstElementFactory* factory, const char* name);
Gst::Element base::ElementFactoryBase::create (const std::string & name) noexcept
{
  typedef ::GstElement* (*call_wrap_t) (::GstElementFactory* factory, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_create;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElementFactory*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Element base::ElementFactoryBase::create () noexcept
{
  typedef ::GstElement* (*call_wrap_t) (::GstElementFactory* factory, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_create;
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstElementFactory*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

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
GType base::ElementFactoryBase::get_element_type () noexcept
{
  typedef GType (*call_wrap_t) (::GstElementFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_get_element_type;
  auto _temp_ret = call_wrap_v ((::GstElementFactory*) (gobj_()));
  return _temp_ret;
}

// const gchar* gst_element_factory_get_metadata (GstElementFactory* factory, const gchar* key);
// const char* gst_element_factory_get_metadata (::GstElementFactory* factory, const char* key);
std::string base::ElementFactoryBase::get_metadata (const std::string & key) noexcept
{
  typedef const char* (*call_wrap_t) (::GstElementFactory* factory, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_get_metadata;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElementFactory*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar** gst_element_factory_get_metadata_keys (GstElementFactory* factory);
// char** gst_element_factory_get_metadata_keys (::GstElementFactory* factory);
std::vector<std::string> base::ElementFactoryBase::get_metadata_keys () noexcept
{
  typedef char** (*call_wrap_t) (::GstElementFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_get_metadata_keys;
  auto _temp_ret = call_wrap_v ((::GstElementFactory*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// guint gst_element_factory_get_num_pad_templates (GstElementFactory* factory);
// guint gst_element_factory_get_num_pad_templates (::GstElementFactory* factory);
guint base::ElementFactoryBase::get_num_pad_templates () noexcept
{
  typedef guint (*call_wrap_t) (::GstElementFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_get_num_pad_templates;
  auto _temp_ret = call_wrap_v ((::GstElementFactory*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_element_factory_get_skip_documentation (GstElementFactory* factory);
// gboolean gst_element_factory_get_skip_documentation (::GstElementFactory* factory);
bool base::ElementFactoryBase::get_skip_documentation () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElementFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_get_skip_documentation;
  auto _temp_ret = call_wrap_v ((::GstElementFactory*) (gobj_()));
  return _temp_ret;
}

// const GList* gst_element_factory_get_static_pad_templates (GstElementFactory* factory);
// const ::GList* gst_element_factory_get_static_pad_templates (::GstElementFactory* factory);
std::vector<Gst::StaticPadTemplate> base::ElementFactoryBase::get_static_pad_templates () noexcept
{
  typedef const ::GList* (*call_wrap_t) (::GstElementFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_get_static_pad_templates;
  auto _temp_ret = call_wrap_v ((::GstElementFactory*) (gobj_()));
  return gi::detail::wrap_list<Gst::StaticPadTemplate> (_temp_ret, gi::transfer_none);
}

// const gchar* const* gst_element_factory_get_uri_protocols (GstElementFactory* factory);
// const char** gst_element_factory_get_uri_protocols (::GstElementFactory* factory);
std::vector<std::string> base::ElementFactoryBase::get_uri_protocols () noexcept
{
  typedef const char** (*call_wrap_t) (::GstElementFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_get_uri_protocols;
  auto _temp_ret = call_wrap_v ((::GstElementFactory*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// GstURIType gst_element_factory_get_uri_type (GstElementFactory* factory);
// ::GstURIType gst_element_factory_get_uri_type (::GstElementFactory* factory);
Gst::URIType base::ElementFactoryBase::get_uri_type () noexcept
{
  typedef ::GstURIType (*call_wrap_t) (::GstElementFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_get_uri_type;
  auto _temp_ret = call_wrap_v ((::GstElementFactory*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gst_element_factory_has_interface (GstElementFactory* factory, const gchar* interfacename);
// gboolean gst_element_factory_has_interface (::GstElementFactory* factory, const char* interfacename);
bool base::ElementFactoryBase::has_interface (const std::string & interfacename) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElementFactory* factory, const char* interfacename);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_has_interface;
  auto interfacename_to_c = gi::unwrap (interfacename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstElementFactory*) (gobj_()), (const char*) (interfacename_to_c));
  return _temp_ret;
}

// gboolean gst_element_factory_list_is_type (GstElementFactory* factory, GstElementFactoryListType type);
// gboolean gst_element_factory_list_is_type (::GstElementFactory* factory, ::GstElementFactoryListType type);
bool base::ElementFactoryBase::list_is_type (::GstElementFactoryListType type) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstElementFactory* factory, ::GstElementFactoryListType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_element_factory_list_is_type;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((::GstElementFactory*) (gobj_()), (::GstElementFactoryListType) (type_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/elementfactory_extra_def_impl.hpp>)
#include <gst/elementfactory_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/elementfactory_extra_impl.hpp>)
#include <gst/elementfactory_extra_impl.hpp>
#endif
#endif

#endif
