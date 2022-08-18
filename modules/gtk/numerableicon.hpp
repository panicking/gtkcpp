// AUTO-GENERATED

#ifndef _GI_GTK_NUMERABLEICON_HPP_
#define _GI_GTK_NUMERABLEICON_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class StyleContext;

class NumerableIcon;

namespace base {


#define GI_GTK_NUMERABLEICON_BASE base::NumerableIconBase
class NumerableIconBase : public Gio::EmblemedIcon
{
typedef Gio::EmblemedIcon super_type;
public:
typedef ::GtkNumerableIcon BaseObjectType;

NumerableIconBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_numerable_icon_get_type(); } 

// GIcon* gtk_numerable_icon_new (GIcon* base_icon);
// ::GIcon* gtk_numerable_icon_new (::GIcon* base_icon);
// IGNORE; deprecated

// GIcon* gtk_numerable_icon_new_with_style_context (GIcon* base_icon, GtkStyleContext* context);
// ::GIcon* gtk_numerable_icon_new_with_style_context (::GIcon* base_icon, ::GtkStyleContext* context);
// IGNORE; deprecated

// GIcon* gtk_numerable_icon_get_background_gicon (GtkNumerableIcon* self);
// ::GIcon* gtk_numerable_icon_get_background_gicon (::GtkNumerableIcon* self);
// IGNORE; deprecated

// const gchar* gtk_numerable_icon_get_background_icon_name (GtkNumerableIcon* self);
// const char* gtk_numerable_icon_get_background_icon_name (::GtkNumerableIcon* self);
// IGNORE; deprecated

// gint gtk_numerable_icon_get_count (GtkNumerableIcon* self);
// gint gtk_numerable_icon_get_count (::GtkNumerableIcon* self);
// IGNORE; deprecated

// const gchar* gtk_numerable_icon_get_label (GtkNumerableIcon* self);
// const char* gtk_numerable_icon_get_label (::GtkNumerableIcon* self);
// IGNORE; deprecated

// GtkStyleContext* gtk_numerable_icon_get_style_context (GtkNumerableIcon* self);
// ::GtkStyleContext* gtk_numerable_icon_get_style_context (::GtkNumerableIcon* self);
// IGNORE; deprecated

// void gtk_numerable_icon_set_background_gicon (GtkNumerableIcon* self, GIcon* icon);
// void gtk_numerable_icon_set_background_gicon (::GtkNumerableIcon* self, ::GIcon* icon);
// IGNORE; deprecated

// void gtk_numerable_icon_set_background_icon_name (GtkNumerableIcon* self, const gchar* icon_name);
// void gtk_numerable_icon_set_background_icon_name (::GtkNumerableIcon* self, const char* icon_name);
// IGNORE; deprecated

// void gtk_numerable_icon_set_count (GtkNumerableIcon* self, gint count);
// void gtk_numerable_icon_set_count (::GtkNumerableIcon* self, gint count);
// IGNORE; deprecated

// void gtk_numerable_icon_set_label (GtkNumerableIcon* self, const gchar* label);
// void gtk_numerable_icon_set_label (::GtkNumerableIcon* self, const char* label);
// IGNORE; deprecated

// void gtk_numerable_icon_set_style_context (GtkNumerableIcon* self, GtkStyleContext* style);
// void gtk_numerable_icon_set_style_context (::GtkNumerableIcon* self, ::GtkStyleContext* style);
// IGNORE; deprecated

gi::property_proxy<Gio::Icon, base::NumerableIconBase> property_background_icon()
{ return gi::property_proxy<Gio::Icon, base::NumerableIconBase> (*this, "background-icon"); }
const gi::property_proxy<Gio::Icon, base::NumerableIconBase> property_background_icon() const
{ return gi::property_proxy<Gio::Icon, base::NumerableIconBase> (*this, "background-icon"); }

gi::property_proxy<std::string, base::NumerableIconBase> property_background_icon_name()
{ return gi::property_proxy<std::string, base::NumerableIconBase> (*this, "background-icon-name"); }
const gi::property_proxy<std::string, base::NumerableIconBase> property_background_icon_name() const
{ return gi::property_proxy<std::string, base::NumerableIconBase> (*this, "background-icon-name"); }

gi::property_proxy<gint, base::NumerableIconBase> property_count()
{ return gi::property_proxy<gint, base::NumerableIconBase> (*this, "count"); }
const gi::property_proxy<gint, base::NumerableIconBase> property_count() const
{ return gi::property_proxy<gint, base::NumerableIconBase> (*this, "count"); }

gi::property_proxy<std::string, base::NumerableIconBase> property_label()
{ return gi::property_proxy<std::string, base::NumerableIconBase> (*this, "label"); }
const gi::property_proxy<std::string, base::NumerableIconBase> property_label() const
{ return gi::property_proxy<std::string, base::NumerableIconBase> (*this, "label"); }

gi::property_proxy<Gtk::StyleContext, base::NumerableIconBase> property_style_context()
{ return gi::property_proxy<Gtk::StyleContext, base::NumerableIconBase> (*this, "style-context"); }
const gi::property_proxy<Gtk::StyleContext, base::NumerableIconBase> property_style_context() const
{ return gi::property_proxy<Gtk::StyleContext, base::NumerableIconBase> (*this, "style-context"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/numerableicon_extra_def.hpp>)
#include <gtk/numerableicon_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/numerableicon_extra.hpp>)
#include <gtk/numerableicon_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class NumerableIcon : public GI_GTK_NUMERABLEICON_BASE
{ typedef GI_GTK_NUMERABLEICON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkNumerableIcon>
{ typedef Gtk::NumerableIcon type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class NumerableIconClassDef
{
typedef NumerableIconClassDef self;
public:
typedef Gtk::NumerableIcon instance_type;
typedef ::GtkNumerableIconClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class NumerableIconClass: public detail::ClassTemplate<Gtk::impl::internal::NumerableIconClassDef, Gio::impl::internal::EmblemedIconClass>
{
typedef NumerableIconClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::NumerableIconClassDef, Gio::impl::internal::EmblemedIconClass> super;

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

using NumerableIconImpl = detail::ObjectImpl<NumerableIcon, internal::NumerableIconClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
