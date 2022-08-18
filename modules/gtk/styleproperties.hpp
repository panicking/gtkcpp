// AUTO-GENERATED

#ifndef _GI_GTK_STYLEPROPERTIES_HPP_
#define _GI_GTK_STYLEPROPERTIES_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class StyleProvider;
class SymbolicColor;

class StyleProperties;

namespace base {


#define GI_GTK_STYLEPROPERTIES_BASE base::StylePropertiesBase
class StylePropertiesBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkStyleProperties BaseObjectType;

StylePropertiesBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_style_properties_get_type(); } 

GI_INLINE_DECL Gtk::StyleProvider interface_ (gi::interface_tag<Gtk::StyleProvider>);

GI_INLINE_DECL operator Gtk::StyleProvider ();

// GtkStyleProperties* gtk_style_properties_new ();
// ::GtkStyleProperties* gtk_style_properties_new ();
// IGNORE; deprecated

// gboolean gtk_style_properties_lookup_property (const gchar* property_name, GtkStylePropertyParser* parse_func, GParamSpec** pspec);
// gboolean gtk_style_properties_lookup_property (const char* property_name, * parse_func, ::GParamSpec** pspec);
// IGNORE; deprecated

// void gtk_style_properties_register_property (GtkStylePropertyParser parse_func, GParamSpec* pspec);
// void gtk_style_properties_register_property ( parse_func, ::GParamSpec* pspec);
// IGNORE; deprecated

// void gtk_style_properties_clear (GtkStyleProperties* props);
// void gtk_style_properties_clear (::GtkStyleProperties* props);
// IGNORE; deprecated

// void gtk_style_properties_get (GtkStyleProperties* props, GtkStateFlags state);
// void gtk_style_properties_get (::GtkStyleProperties* props, ::GtkStateFlags state);
// IGNORE; deprecated, varargs not supported

// gboolean gtk_style_properties_get_property (GtkStyleProperties* props, const gchar* property, GtkStateFlags state, GValue* value);
// gboolean gtk_style_properties_get_property (::GtkStyleProperties* props, const char* property, ::GtkStateFlags state, ::GValue* value);
// IGNORE; deprecated

// void gtk_style_properties_get_valist (GtkStyleProperties* props, GtkStateFlags state, va_list args);
// void gtk_style_properties_get_valist (::GtkStyleProperties* props, ::GtkStateFlags state,  args);
// IGNORE; deprecated

// GtkSymbolicColor* gtk_style_properties_lookup_color (GtkStyleProperties* props, const gchar* name);
// ::GtkSymbolicColor* gtk_style_properties_lookup_color (::GtkStyleProperties* props, const char* name);
// IGNORE; deprecated

// void gtk_style_properties_map_color (GtkStyleProperties* props, const gchar* name, GtkSymbolicColor* color);
// void gtk_style_properties_map_color (::GtkStyleProperties* props, const char* name, ::GtkSymbolicColor* color);
// IGNORE; deprecated

// void gtk_style_properties_merge (GtkStyleProperties* props, const GtkStyleProperties* props_to_merge, gboolean replace);
// void gtk_style_properties_merge (::GtkStyleProperties* props, const ::GtkStyleProperties* props_to_merge, gboolean replace);
// IGNORE; deprecated

// void gtk_style_properties_set (GtkStyleProperties* props, GtkStateFlags state);
// void gtk_style_properties_set (::GtkStyleProperties* props, ::GtkStateFlags state);
// IGNORE; deprecated, varargs not supported

// void gtk_style_properties_set_property (GtkStyleProperties* props, const gchar* property, GtkStateFlags state, const GValue* value);
// void gtk_style_properties_set_property (::GtkStyleProperties* props, const char* property, ::GtkStateFlags state, const ::GValue* value);
// IGNORE; deprecated

// void gtk_style_properties_set_valist (GtkStyleProperties* props, GtkStateFlags state, va_list args);
// void gtk_style_properties_set_valist (::GtkStyleProperties* props, ::GtkStateFlags state,  args);
// IGNORE; deprecated

// void gtk_style_properties_unset_property (GtkStyleProperties* props, const gchar* property, GtkStateFlags state);
// void gtk_style_properties_unset_property (::GtkStyleProperties* props, const char* property, ::GtkStateFlags state);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/styleproperties_extra_def.hpp>)
#include <gtk/styleproperties_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/styleproperties_extra.hpp>)
#include <gtk/styleproperties_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class StyleProperties : public GI_GTK_STYLEPROPERTIES_BASE
{ typedef GI_GTK_STYLEPROPERTIES_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStyleProperties>
{ typedef Gtk::StyleProperties type; }; 

} // namespace repository

} // namespace gi

#include "styleprovider.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class StylePropertiesClassDef
{
typedef StylePropertiesClassDef self;
public:
typedef Gtk::StyleProperties instance_type;
typedef ::GtkStylePropertiesClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class StylePropertiesClass: public detail::ClassTemplate<Gtk::impl::internal::StylePropertiesClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::StyleProviderIfaceClassImpl>
{
typedef StylePropertiesClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::StylePropertiesClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::StyleProviderIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::StyleProviderIfaceClassImpl GtkStyleProviderIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using StylePropertiesImpl = detail::ObjectImpl<StyleProperties, internal::StylePropertiesClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
