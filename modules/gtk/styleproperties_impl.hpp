// AUTO-GENERATED

#ifndef _GI_GTK_STYLEPROPERTIES_IMPL_HPP_
#define _GI_GTK_STYLEPROPERTIES_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::StyleProvider StylePropertiesBase::interface_ (gi::interface_tag<Gtk::StyleProvider>)
{ return gi::wrap ((Gtk::StyleProvider::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

StylePropertiesBase::operator Gtk::StyleProvider ()
{ return interface_ (gi::interface_tag<Gtk::StyleProvider>()); }

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


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/styleproperties_extra_def_impl.hpp>)
#include <gtk/styleproperties_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/styleproperties_extra_impl.hpp>)
#include <gtk/styleproperties_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void StylePropertiesClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkStylePropertiesClass *methods = (::GtkStylePropertiesClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
