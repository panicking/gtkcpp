// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERERACCEL_HPP_
#define _GI_GTK_CELLRENDERERACCEL_HPP_

#include "cellrenderertext.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class CellRendererAccel;

namespace base {


#define GI_GTK_CELLRENDERERACCEL_BASE base::CellRendererAccelBase
class CellRendererAccelBase : public Gtk::CellRendererText
{
typedef Gtk::CellRendererText super_type;
public:
typedef ::GtkCellRendererAccel BaseObjectType;

CellRendererAccelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_renderer_accel_get_type(); } 

// GtkCellRenderer* gtk_cell_renderer_accel_new ();
// ::GtkCellRendererAccel* gtk_cell_renderer_accel_new ();
static GI_INLINE_DECL Gtk::CellRendererAccel new_ () noexcept;

gi::property_proxy<guint, base::CellRendererAccelBase> property_accel_key()
{ return gi::property_proxy<guint, base::CellRendererAccelBase> (*this, "accel-key"); }
const gi::property_proxy<guint, base::CellRendererAccelBase> property_accel_key() const
{ return gi::property_proxy<guint, base::CellRendererAccelBase> (*this, "accel-key"); }

gi::property_proxy<Gtk::CellRendererAccelMode, base::CellRendererAccelBase> property_accel_mode()
{ return gi::property_proxy<Gtk::CellRendererAccelMode, base::CellRendererAccelBase> (*this, "accel-mode"); }
const gi::property_proxy<Gtk::CellRendererAccelMode, base::CellRendererAccelBase> property_accel_mode() const
{ return gi::property_proxy<Gtk::CellRendererAccelMode, base::CellRendererAccelBase> (*this, "accel-mode"); }

gi::property_proxy<Gdk::ModifierType, base::CellRendererAccelBase> property_accel_mods()
{ return gi::property_proxy<Gdk::ModifierType, base::CellRendererAccelBase> (*this, "accel-mods"); }
const gi::property_proxy<Gdk::ModifierType, base::CellRendererAccelBase> property_accel_mods() const
{ return gi::property_proxy<Gdk::ModifierType, base::CellRendererAccelBase> (*this, "accel-mods"); }

gi::property_proxy<guint, base::CellRendererAccelBase> property_keycode()
{ return gi::property_proxy<guint, base::CellRendererAccelBase> (*this, "keycode"); }
const gi::property_proxy<guint, base::CellRendererAccelBase> property_keycode() const
{ return gi::property_proxy<guint, base::CellRendererAccelBase> (*this, "keycode"); }

// signal accel-cleared
gi::signal_proxy<void(Gtk::CellRendererAccel, const std::string & path_string)> signal_accel_cleared()
{ return gi::signal_proxy<void(Gtk::CellRendererAccel, const std::string & path_string)> (*this, "accel-cleared"); }

// signal accel-edited
gi::signal_proxy<void(Gtk::CellRendererAccel, const std::string & path_string, guint accel_key, Gdk::ModifierType accel_mods, guint hardware_keycode)> signal_accel_edited()
{ return gi::signal_proxy<void(Gtk::CellRendererAccel, const std::string & path_string, guint accel_key, Gdk::ModifierType accel_mods, guint hardware_keycode)> (*this, "accel-edited"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrendereraccel_extra_def.hpp>)
#include <gtk/cellrendereraccel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrendereraccel_extra.hpp>)
#include <gtk/cellrendereraccel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellRendererAccel : public GI_GTK_CELLRENDERERACCEL_BASE
{ typedef GI_GTK_CELLRENDERERACCEL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellRendererAccel>
{ typedef Gtk::CellRendererAccel type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CellRendererAccelClassDef
{
typedef CellRendererAccelClassDef self;
public:
typedef Gtk::CellRendererAccel instance_type;
typedef ::GtkCellRendererAccelClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void CellRendererAccel::accel_cleared (GtkCellRendererAccel* accel, const gchar* path_string);
// void CellRendererAccel::accel_cleared (::GtkCellRendererAccel* accel, const char* path_string);
virtual void accel_cleared_ (const std::string & path_string) noexcept = 0;

// void CellRendererAccel::accel_edited (GtkCellRendererAccel* accel, const gchar* path_string, guint accel_key, GdkModifierType accel_mods, guint hardware_keycode);
// void CellRendererAccel::accel_edited (::GtkCellRendererAccel* accel, const char* path_string, guint accel_key, ::GdkModifierType accel_mods, guint hardware_keycode);
virtual void accel_edited_ (const std::string & path_string, guint accel_key, Gdk::ModifierType accel_mods, guint hardware_keycode) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class CellRendererAccelClass: public detail::ClassTemplate<Gtk::impl::internal::CellRendererAccelClassDef, Gtk::impl::internal::CellRendererTextClass>
{
typedef CellRendererAccelClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CellRendererAccelClassDef, Gtk::impl::internal::CellRendererTextClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void CellRendererAccel::accel_cleared (GtkCellRendererAccel* accel, const gchar* path_string);
// void CellRendererAccel::accel_cleared (::GtkCellRendererAccel* accel, const char* path_string);
GI_INLINE_DECL void accel_cleared_ (const std::string & path_string) noexcept override;

// void CellRendererAccel::accel_edited (GtkCellRendererAccel* accel, const gchar* path_string, guint accel_key, GdkModifierType accel_mods, guint hardware_keycode);
// void CellRendererAccel::accel_edited (::GtkCellRendererAccel* accel, const char* path_string, guint accel_key, ::GdkModifierType accel_mods, guint hardware_keycode);
GI_INLINE_DECL void accel_edited_ (const std::string & path_string, guint accel_key, Gdk::ModifierType accel_mods, guint hardware_keycode) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using CellRendererAccelImpl = detail::ObjectImpl<CellRendererAccel, internal::CellRendererAccelClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
