// AUTO-GENERATED

#ifndef _GI_GTK_COMBOBOXACCESSIBLE_HPP_
#define _GI_GTK_COMBOBOXACCESSIBLE_HPP_

#include "containeraccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ComboBoxAccessible;

namespace base {


#define GI_GTK_COMBOBOXACCESSIBLE_BASE base::ComboBoxAccessibleBase
class ComboBoxAccessibleBase : public Gtk::ContainerAccessible
{
typedef Gtk::ContainerAccessible super_type;
public:
typedef ::GtkComboBoxAccessible BaseObjectType;

ComboBoxAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_combo_box_accessible_get_type(); } 

GI_INLINE_DECL Atk::Action interface_ (gi::interface_tag<Atk::Action>);

GI_INLINE_DECL operator Atk::Action ();

GI_INLINE_DECL Atk::Selection interface_ (gi::interface_tag<Atk::Selection>);

GI_INLINE_DECL operator Atk::Selection ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/comboboxaccessible_extra_def.hpp>)
#include <gtk/comboboxaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/comboboxaccessible_extra.hpp>)
#include <gtk/comboboxaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ComboBoxAccessible : public GI_GTK_COMBOBOXACCESSIBLE_BASE
{ typedef GI_GTK_COMBOBOXACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkComboBoxAccessible>
{ typedef Gtk::ComboBoxAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ComboBoxAccessibleClassDef
{
typedef ComboBoxAccessibleClassDef self;
public:
typedef Gtk::ComboBoxAccessible instance_type;
typedef ::GtkComboBoxAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ComboBoxAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::ComboBoxAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::ActionIfaceClassImpl, Atk::impl::internal::SelectionIfaceClassImpl>
{
typedef ComboBoxAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ComboBoxAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::ActionIfaceClassImpl, Atk::impl::internal::SelectionIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::ActionIfaceClassImpl AtkActionIface_type;
typedef Atk::impl::internal::SelectionIfaceClassImpl AtkSelectionIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using ComboBoxAccessibleImpl = detail::ObjectImpl<ComboBoxAccessible, internal::ComboBoxAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
