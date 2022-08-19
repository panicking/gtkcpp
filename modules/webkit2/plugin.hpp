// AUTO-GENERATED

#ifndef _GI_WEBKIT2_PLUGIN_HPP_
#define _GI_WEBKIT2_PLUGIN_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class MimeInfo;

class Plugin;

namespace base {


#define GI_WEBKIT2_PLUGIN_BASE base::PluginBase
class PluginBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitPlugin BaseObjectType;

PluginBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_plugin_get_type(); } 

// const gchar* webkit_plugin_get_description (WebKitPlugin* plugin);
// const char* webkit_plugin_get_description (::WebKitPlugin* plugin);
// IGNORE; deprecated

// GList* webkit_plugin_get_mime_info_list (WebKitPlugin* plugin);
// ::GList* webkit_plugin_get_mime_info_list (::WebKitPlugin* plugin);
// IGNORE; deprecated

// const gchar* webkit_plugin_get_name (WebKitPlugin* plugin);
// const char* webkit_plugin_get_name (::WebKitPlugin* plugin);
// IGNORE; deprecated

// const gchar* webkit_plugin_get_path (WebKitPlugin* plugin);
// const char* webkit_plugin_get_path (::WebKitPlugin* plugin);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/plugin_extra_def.hpp>)
#include <webkit2/plugin_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/plugin_extra.hpp>)
#include <webkit2/plugin_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class Plugin : public GI_WEBKIT2_PLUGIN_BASE
{ typedef GI_WEBKIT2_PLUGIN_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitPlugin>
{ typedef WebKit2::Plugin type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class PluginClassDef
{
typedef PluginClassDef self;
public:
typedef WebKit2::Plugin instance_type;
typedef ::WebKitPluginClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class PluginClass: public detail::ClassTemplate<WebKit2::impl::internal::PluginClassDef, GObject::impl::internal::ObjectClass>
{
typedef PluginClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::PluginClassDef, GObject::impl::internal::ObjectClass> super;

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

using PluginImpl = detail::ObjectImpl<Plugin, internal::PluginClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
