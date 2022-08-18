// AUTO-GENERATED

#ifndef _GI_GST_PLUGINDESC_HPP_
#define _GI_GST_PLUGINDESC_HPP_


namespace gi {

namespace repository {

namespace Gst {


class PluginDesc;

namespace base {


#define GI_GST_PLUGINDESC_BASE base::PluginDescBase
class PluginDescBase : public gi::detail::CBoxedWrapper<PluginDescBase, ::GstPluginDesc>
{
typedef gi::detail::CBoxedWrapper<PluginDescBase, ::GstPluginDesc> super_type;
public:

PluginDescBase (std::nullptr_t = nullptr) : super_type() {}

// gint PluginDesc::major_version (const ::GstPluginDesc* obj);
// gint PluginDesc::major_version (const ::GstPluginDesc* obj);
GI_INLINE_DECL gint major_version_ () const noexcept;

//  PluginDesc::major_version (::GstPluginDesc* obj, gint _value);
// void PluginDesc::major_version (::GstPluginDesc* obj, gint _value);
GI_INLINE_DECL void major_version_ (gint _value) noexcept;

// gint PluginDesc::minor_version (const ::GstPluginDesc* obj);
// gint PluginDesc::minor_version (const ::GstPluginDesc* obj);
GI_INLINE_DECL gint minor_version_ () const noexcept;

//  PluginDesc::minor_version (::GstPluginDesc* obj, gint _value);
// void PluginDesc::minor_version (::GstPluginDesc* obj, gint _value);
GI_INLINE_DECL void minor_version_ (gint _value) noexcept;

// const char* PluginDesc::name (const ::GstPluginDesc* obj);
// const char* PluginDesc::name (const ::GstPluginDesc* obj);
GI_INLINE_DECL std::string name_ () const noexcept;

// const char* PluginDesc::description (const ::GstPluginDesc* obj);
// const char* PluginDesc::description (const ::GstPluginDesc* obj);
GI_INLINE_DECL std::string description_ () const noexcept;

// const char* PluginDesc::version (const ::GstPluginDesc* obj);
// const char* PluginDesc::version (const ::GstPluginDesc* obj);
GI_INLINE_DECL std::string version_ () const noexcept;

// const char* PluginDesc::license (const ::GstPluginDesc* obj);
// const char* PluginDesc::license (const ::GstPluginDesc* obj);
GI_INLINE_DECL std::string license_ () const noexcept;

// const char* PluginDesc::source (const ::GstPluginDesc* obj);
// const char* PluginDesc::source (const ::GstPluginDesc* obj);
GI_INLINE_DECL std::string source_ () const noexcept;

// const char* PluginDesc::package (const ::GstPluginDesc* obj);
// const char* PluginDesc::package (const ::GstPluginDesc* obj);
GI_INLINE_DECL std::string package_ () const noexcept;

// const char* PluginDesc::origin (const ::GstPluginDesc* obj);
// const char* PluginDesc::origin (const ::GstPluginDesc* obj);
GI_INLINE_DECL std::string origin_ () const noexcept;

// const char* PluginDesc::release_datetime (const ::GstPluginDesc* obj);
// const char* PluginDesc::release_datetime (const ::GstPluginDesc* obj);
GI_INLINE_DECL std::string release_datetime_ () const noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/plugindesc_extra_def.hpp>)
#include <gst/plugindesc_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/plugindesc_extra.hpp>)
#include <gst/plugindesc_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class PluginDesc : public GI_GST_PLUGINDESC_BASE
{ typedef GI_GST_PLUGINDESC_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstPluginDesc>
{ typedef Gst::PluginDesc type; }; 

} // namespace repository

} // namespace gi

#endif
