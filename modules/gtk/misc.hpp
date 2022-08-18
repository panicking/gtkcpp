// AUTO-GENERATED

#ifndef _GI_GTK_MISC_HPP_
#define _GI_GTK_MISC_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class Misc;

namespace base {


#define GI_GTK_MISC_BASE base::MiscBase
class MiscBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkMisc BaseObjectType;

MiscBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_misc_get_type(); } 

// void gtk_misc_get_alignment (GtkMisc* misc, gfloat* xalign, gfloat* yalign);
// void gtk_misc_get_alignment (::GtkMisc* misc, gfloat* xalign, gfloat* yalign);
// IGNORE; deprecated

// void gtk_misc_get_padding (GtkMisc* misc, gint* xpad, gint* ypad);
// void gtk_misc_get_padding (::GtkMisc* misc, gint* xpad, gint* ypad);
// IGNORE; deprecated

// void gtk_misc_set_alignment (GtkMisc* misc, gfloat xalign, gfloat yalign);
// void gtk_misc_set_alignment (::GtkMisc* misc, gfloat xalign, gfloat yalign);
// IGNORE; deprecated

// void gtk_misc_set_padding (GtkMisc* misc, gint xpad, gint ypad);
// void gtk_misc_set_padding (::GtkMisc* misc, gint xpad, gint ypad);
// IGNORE; deprecated

gi::property_proxy<gfloat, base::MiscBase> property_xalign()
{ return gi::property_proxy<gfloat, base::MiscBase> (*this, "xalign"); }
const gi::property_proxy<gfloat, base::MiscBase> property_xalign() const
{ return gi::property_proxy<gfloat, base::MiscBase> (*this, "xalign"); }

gi::property_proxy<gint, base::MiscBase> property_xpad()
{ return gi::property_proxy<gint, base::MiscBase> (*this, "xpad"); }
const gi::property_proxy<gint, base::MiscBase> property_xpad() const
{ return gi::property_proxy<gint, base::MiscBase> (*this, "xpad"); }

gi::property_proxy<gfloat, base::MiscBase> property_yalign()
{ return gi::property_proxy<gfloat, base::MiscBase> (*this, "yalign"); }
const gi::property_proxy<gfloat, base::MiscBase> property_yalign() const
{ return gi::property_proxy<gfloat, base::MiscBase> (*this, "yalign"); }

gi::property_proxy<gint, base::MiscBase> property_ypad()
{ return gi::property_proxy<gint, base::MiscBase> (*this, "ypad"); }
const gi::property_proxy<gint, base::MiscBase> property_ypad() const
{ return gi::property_proxy<gint, base::MiscBase> (*this, "ypad"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/misc_extra_def.hpp>)
#include <gtk/misc_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/misc_extra.hpp>)
#include <gtk/misc_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Misc : public GI_GTK_MISC_BASE
{ typedef GI_GTK_MISC_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMisc>
{ typedef Gtk::Misc type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class MiscClassDef
{
typedef MiscClassDef self;
public:
typedef Gtk::Misc instance_type;
typedef ::GtkMiscClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MiscClass: public detail::ClassTemplate<Gtk::impl::internal::MiscClassDef, Gtk::impl::internal::WidgetClass>
{
typedef MiscClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::MiscClassDef, Gtk::impl::internal::WidgetClass> super;

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

using MiscImpl = detail::ObjectImpl<Misc, internal::MiscClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
