// AUTO-GENERATED

#ifndef _GI_GTK_CELLACCESSIBLE_HPP_
#define _GI_GTK_CELLACCESSIBLE_HPP_

#include "accessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class CellAccessible;

namespace base {


#define GI_GTK_CELLACCESSIBLE_BASE base::CellAccessibleBase
class CellAccessibleBase : public Gtk::Accessible
{
typedef Gtk::Accessible super_type;
public:
typedef ::GtkCellAccessible BaseObjectType;

CellAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_accessible_get_type(); } 

GI_INLINE_DECL Atk::Action interface_ (gi::interface_tag<Atk::Action>);

GI_INLINE_DECL operator Atk::Action ();

GI_INLINE_DECL Atk::Component interface_ (gi::interface_tag<Atk::Component>);

GI_INLINE_DECL operator Atk::Component ();

GI_INLINE_DECL Atk::TableCell interface_ (gi::interface_tag<Atk::TableCell>);

GI_INLINE_DECL operator Atk::TableCell ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellaccessible_extra_def.hpp>)
#include <gtk/cellaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellaccessible_extra.hpp>)
#include <gtk/cellaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellAccessible : public GI_GTK_CELLACCESSIBLE_BASE
{ typedef GI_GTK_CELLACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellAccessible>
{ typedef Gtk::CellAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CellAccessibleClassDef
{
typedef CellAccessibleClassDef self;
public:
typedef Gtk::CellAccessible instance_type;
typedef ::GtkCellAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void CellAccessible::update_cache (GtkCellAccessible* cell, gboolean emit_signal);
// void CellAccessible::update_cache (::GtkCellAccessible* cell, gboolean emit_signal);
virtual void update_cache_ (gboolean emit_signal) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class CellAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::CellAccessibleClassDef, Gtk::impl::internal::AccessibleClass, Atk::impl::internal::ActionIfaceClassImpl, Atk::impl::internal::ComponentIfaceClassImpl, Atk::impl::internal::TableCellIfaceClassImpl>
{
typedef CellAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CellAccessibleClassDef, Gtk::impl::internal::AccessibleClass, Atk::impl::internal::ActionIfaceClassImpl, Atk::impl::internal::ComponentIfaceClassImpl, Atk::impl::internal::TableCellIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::ActionIfaceClassImpl AtkActionIface_type;
typedef Atk::impl::internal::ComponentIfaceClassImpl AtkComponentIface_type;
typedef Atk::impl::internal::TableCellIfaceClassImpl AtkTableCellIface_type;


// void CellAccessible::update_cache (GtkCellAccessible* cell, gboolean emit_signal);
// void CellAccessible::update_cache (::GtkCellAccessible* cell, gboolean emit_signal);
GI_INLINE_DECL void update_cache_ (gboolean emit_signal) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using CellAccessibleImpl = detail::ObjectImpl<CellAccessible, internal::CellAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
