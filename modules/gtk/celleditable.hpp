// AUTO-GENERATED

#ifndef _GI_GTK_CELLEDITABLE_HPP_
#define _GI_GTK_CELLEDITABLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class CellEditable;

namespace base {


#define GI_GTK_CELLEDITABLE_BASE base::CellEditableBase
class CellEditableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkCellEditable BaseObjectType;

CellEditableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_editable_get_type(); } 

// void gtk_cell_editable_editing_done (GtkCellEditable* cell_editable);
// void gtk_cell_editable_editing_done (::GtkCellEditable* cell_editable);
GI_INLINE_DECL void editing_done () noexcept;

// void gtk_cell_editable_remove_widget (GtkCellEditable* cell_editable);
// void gtk_cell_editable_remove_widget (::GtkCellEditable* cell_editable);
GI_INLINE_DECL void remove_widget () noexcept;

// void gtk_cell_editable_start_editing (GtkCellEditable* cell_editable, GdkEvent* event);
// void gtk_cell_editable_start_editing (::GtkCellEditable* cell_editable,  event);
// SKIP; event type  not supported

gi::property_proxy<bool, base::CellEditableBase> property_editing_canceled()
{ return gi::property_proxy<bool, base::CellEditableBase> (*this, "editing-canceled"); }
const gi::property_proxy<bool, base::CellEditableBase> property_editing_canceled() const
{ return gi::property_proxy<bool, base::CellEditableBase> (*this, "editing-canceled"); }

// signal editing-done
gi::signal_proxy<void(Gtk::CellEditable)> signal_editing_done()
{ return gi::signal_proxy<void(Gtk::CellEditable)> (*this, "editing-done"); }

// signal remove-widget
gi::signal_proxy<void(Gtk::CellEditable)> signal_remove_widget()
{ return gi::signal_proxy<void(Gtk::CellEditable)> (*this, "remove-widget"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/celleditable_extra_def.hpp>)
#include <gtk/celleditable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/celleditable_extra.hpp>)
#include <gtk/celleditable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellEditable : public GI_GTK_CELLEDITABLE_BASE
{ typedef GI_GTK_CELLEDITABLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellEditable>
{ typedef Gtk::CellEditable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CellEditableIfaceDef
{
typedef CellEditableIfaceDef self;
public:
typedef Gtk::CellEditable instance_type;
typedef ::GtkCellEditableIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void CellEditable::editing_done (GtkCellEditable* cell_editable);
// void CellEditable::editing_done (::GtkCellEditable* cell_editable);
virtual void editing_done_ () noexcept = 0;

// void CellEditable::remove_widget (GtkCellEditable* cell_editable);
// void CellEditable::remove_widget (::GtkCellEditable* cell_editable);
virtual void remove_widget_ () noexcept = 0;

// void CellEditable::start_editing (GtkCellEditable* cell_editable, GdkEvent* event);
// void CellEditable::start_editing (::GtkCellEditable* cell_editable,  event);
// SKIP; event type  not supported


};

using CellEditableImpl = detail::InterfaceImpl<CellEditableIfaceDef>;

class CellEditableIfaceClassImpl: public detail::InterfaceClassImpl<CellEditableImpl>
{
typedef CellEditableIfaceClassImpl self;
typedef detail::InterfaceClassImpl<CellEditableImpl> super;

protected:
using super::super;

// void CellEditable::editing_done (GtkCellEditable* cell_editable);
// void CellEditable::editing_done (::GtkCellEditable* cell_editable);
GI_INLINE_DECL void editing_done_ () noexcept override;

// void CellEditable::remove_widget (GtkCellEditable* cell_editable);
// void CellEditable::remove_widget (::GtkCellEditable* cell_editable);
GI_INLINE_DECL void remove_widget_ () noexcept override;

// void CellEditable::start_editing (GtkCellEditable* cell_editable, GdkEvent* event);
// void CellEditable::start_editing (::GtkCellEditable* cell_editable,  event);
// SKIP; event type  not supported


};

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
