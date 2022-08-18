// AUTO-GENERATED

#ifndef _GI_GTK_ORIENTABLE_HPP_
#define _GI_GTK_ORIENTABLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class Orientable;

namespace base {


#define GI_GTK_ORIENTABLE_BASE base::OrientableBase
class OrientableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkOrientable BaseObjectType;

OrientableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_orientable_get_type(); } 

// GtkOrientation gtk_orientable_get_orientation (GtkOrientable* orientable);
// ::GtkOrientation gtk_orientable_get_orientation (::GtkOrientable* orientable);
GI_INLINE_DECL Gtk::Orientation get_orientation () noexcept;

// void gtk_orientable_set_orientation (GtkOrientable* orientable, GtkOrientation orientation);
// void gtk_orientable_set_orientation (::GtkOrientable* orientable, ::GtkOrientation orientation);
GI_INLINE_DECL void set_orientation (Gtk::Orientation orientation) noexcept;

gi::property_proxy<Gtk::Orientation, base::OrientableBase> property_orientation()
{ return gi::property_proxy<Gtk::Orientation, base::OrientableBase> (*this, "orientation"); }
const gi::property_proxy<Gtk::Orientation, base::OrientableBase> property_orientation() const
{ return gi::property_proxy<Gtk::Orientation, base::OrientableBase> (*this, "orientation"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/orientable_extra_def.hpp>)
#include <gtk/orientable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/orientable_extra.hpp>)
#include <gtk/orientable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Orientable : public GI_GTK_ORIENTABLE_BASE
{ typedef GI_GTK_ORIENTABLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkOrientable>
{ typedef Gtk::Orientable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class OrientableIfaceDef
{
typedef OrientableIfaceDef self;
public:
typedef Gtk::Orientable instance_type;
typedef ::GtkOrientableIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );


};

using OrientableImpl = detail::InterfaceImpl<OrientableIfaceDef>;

class OrientableIfaceClassImpl: public detail::InterfaceClassImpl<OrientableImpl>
{
typedef OrientableIfaceClassImpl self;
typedef detail::InterfaceClassImpl<OrientableImpl> super;

protected:
using super::super;


};

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
