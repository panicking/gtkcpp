// AUTO-GENERATED

#ifndef _GI_GTK_SWITCHACCESSIBLE_HPP_
#define _GI_GTK_SWITCHACCESSIBLE_HPP_

#include "widgetaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class SwitchAccessible;

namespace base {


#define GI_GTK_SWITCHACCESSIBLE_BASE base::SwitchAccessibleBase
class SwitchAccessibleBase : public Gtk::WidgetAccessible
{
typedef Gtk::WidgetAccessible super_type;
public:
typedef ::GtkSwitchAccessible BaseObjectType;

SwitchAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_switch_accessible_get_type(); } 

GI_INLINE_DECL Atk::Action interface_ (gi::interface_tag<Atk::Action>);

GI_INLINE_DECL operator Atk::Action ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/switchaccessible_extra_def.hpp>)
#include <gtk/switchaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/switchaccessible_extra.hpp>)
#include <gtk/switchaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SwitchAccessible : public GI_GTK_SWITCHACCESSIBLE_BASE
{ typedef GI_GTK_SWITCHACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSwitchAccessible>
{ typedef Gtk::SwitchAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SwitchAccessibleClassDef
{
typedef SwitchAccessibleClassDef self;
public:
typedef Gtk::SwitchAccessible instance_type;
typedef ::GtkSwitchAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SwitchAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::SwitchAccessibleClassDef, Gtk::impl::internal::WidgetAccessibleClass, Atk::impl::internal::ActionIfaceClassImpl>
{
typedef SwitchAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SwitchAccessibleClassDef, Gtk::impl::internal::WidgetAccessibleClass, Atk::impl::internal::ActionIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::ActionIfaceClassImpl AtkActionIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using SwitchAccessibleImpl = detail::ObjectImpl<SwitchAccessible, internal::SwitchAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
