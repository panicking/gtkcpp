// AUTO-GENERATED

#ifndef _GI_GTK_RCPROPERTY_HPP_
#define _GI_GTK_RCPROPERTY_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class RcProperty;

namespace base {


#define GI_GTK_RCPROPERTY_BASE base::RcPropertyBase
class RcPropertyBase : public gi::detail::CBoxedWrapper<RcPropertyBase, ::GtkRcProperty>
{
typedef gi::detail::CBoxedWrapper<RcPropertyBase, ::GtkRcProperty> super_type;
public:

RcPropertyBase (std::nullptr_t = nullptr) : super_type() {}

// ::GQuark RcProperty::type_name (const ::GtkRcProperty* obj);
// ::GQuark RcProperty::type_name (const ::GtkRcProperty* obj);
GI_INLINE_DECL GLib::Quark type_name_ () const noexcept;

//  RcProperty::type_name (::GtkRcProperty* obj, ::GQuark _value);
// void RcProperty::type_name (::GtkRcProperty* obj, ::GQuark _value);
GI_INLINE_DECL void type_name_ (::GQuark _value) noexcept;

// ::GQuark RcProperty::property_name (const ::GtkRcProperty* obj);
// ::GQuark RcProperty::property_name (const ::GtkRcProperty* obj);
GI_INLINE_DECL GLib::Quark property_name_ () const noexcept;

//  RcProperty::property_name (::GtkRcProperty* obj, ::GQuark _value);
// void RcProperty::property_name (::GtkRcProperty* obj, ::GQuark _value);
GI_INLINE_DECL void property_name_ (::GQuark _value) noexcept;

// char* RcProperty::origin (const ::GtkRcProperty* obj);
// char* RcProperty::origin (const ::GtkRcProperty* obj);
GI_INLINE_DECL std::string origin_ () const noexcept;

// gboolean gtk_rc_property_parse_border (const GParamSpec* pspec, const GString* gstring, GValue* property_value);
// gboolean gtk_rc_property_parse_border (const ::GParamSpec* pspec, const ::GString* gstring, ::GValue* property_value);
static GI_INLINE_DECL bool parse_border (const GObject::ParamSpec & pspec, const GLib::String & gstring, GObject::Value property_value) noexcept;

// gboolean gtk_rc_property_parse_color (const GParamSpec* pspec, const GString* gstring, GValue* property_value);
// gboolean gtk_rc_property_parse_color (const ::GParamSpec* pspec, const ::GString* gstring, ::GValue* property_value);
static GI_INLINE_DECL bool parse_color (const GObject::ParamSpec & pspec, const GLib::String & gstring, GObject::Value property_value) noexcept;

// gboolean gtk_rc_property_parse_enum (const GParamSpec* pspec, const GString* gstring, GValue* property_value);
// gboolean gtk_rc_property_parse_enum (const ::GParamSpec* pspec, const ::GString* gstring, ::GValue* property_value);
static GI_INLINE_DECL bool parse_enum (const GObject::ParamSpec & pspec, const GLib::String & gstring, GObject::Value property_value) noexcept;

// gboolean gtk_rc_property_parse_flags (const GParamSpec* pspec, const GString* gstring, GValue* property_value);
// gboolean gtk_rc_property_parse_flags (const ::GParamSpec* pspec, const ::GString* gstring, ::GValue* property_value);
static GI_INLINE_DECL bool parse_flags (const GObject::ParamSpec & pspec, const GLib::String & gstring, GObject::Value property_value) noexcept;

// gboolean gtk_rc_property_parse_requisition (const GParamSpec* pspec, const GString* gstring, GValue* property_value);
// gboolean gtk_rc_property_parse_requisition (const ::GParamSpec* pspec, const ::GString* gstring, ::GValue* property_value);
static GI_INLINE_DECL bool parse_requisition (const GObject::ParamSpec & pspec, const GLib::String & gstring, GObject::Value property_value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/rcproperty_extra_def.hpp>)
#include <gtk/rcproperty_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/rcproperty_extra.hpp>)
#include <gtk/rcproperty_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RcProperty : public GI_GTK_RCPROPERTY_BASE
{ typedef GI_GTK_RCPROPERTY_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRcProperty>
{ typedef Gtk::RcProperty type; }; 

} // namespace repository

} // namespace gi

#endif
