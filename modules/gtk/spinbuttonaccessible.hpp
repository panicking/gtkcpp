// AUTO-GENERATED

#ifndef _GI_GTK_SPINBUTTONACCESSIBLE_HPP_
#define _GI_GTK_SPINBUTTONACCESSIBLE_HPP_

#include "entryaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class SpinButtonAccessible;

namespace base {


#define GI_GTK_SPINBUTTONACCESSIBLE_BASE base::SpinButtonAccessibleBase
class SpinButtonAccessibleBase : public Gtk::EntryAccessible
{
typedef Gtk::EntryAccessible super_type;
public:
typedef ::GtkSpinButtonAccessible BaseObjectType;

SpinButtonAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_spin_button_accessible_get_type(); } 

GI_INLINE_DECL Atk::Value interface_ (gi::interface_tag<Atk::Value>);

GI_INLINE_DECL operator Atk::Value ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/spinbuttonaccessible_extra_def.hpp>)
#include <gtk/spinbuttonaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/spinbuttonaccessible_extra.hpp>)
#include <gtk/spinbuttonaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SpinButtonAccessible : public GI_GTK_SPINBUTTONACCESSIBLE_BASE
{ typedef GI_GTK_SPINBUTTONACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSpinButtonAccessible>
{ typedef Gtk::SpinButtonAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SpinButtonAccessibleClassDef
{
typedef SpinButtonAccessibleClassDef self;
public:
typedef Gtk::SpinButtonAccessible instance_type;
typedef ::GtkSpinButtonAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SpinButtonAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::SpinButtonAccessibleClassDef, Gtk::impl::internal::EntryAccessibleClass, Atk::impl::internal::ValueIfaceClassImpl>
{
typedef SpinButtonAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SpinButtonAccessibleClassDef, Gtk::impl::internal::EntryAccessibleClass, Atk::impl::internal::ValueIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::ValueIfaceClassImpl AtkValueIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using SpinButtonAccessibleImpl = detail::ObjectImpl<SpinButtonAccessible, internal::SpinButtonAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
