// AUTO-GENERATED

#ifndef _GI_GTK_BUTTONACCESSIBLE_HPP_
#define _GI_GTK_BUTTONACCESSIBLE_HPP_

#include "containeraccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ButtonAccessible;

namespace base {


#define GI_GTK_BUTTONACCESSIBLE_BASE base::ButtonAccessibleBase
class ButtonAccessibleBase : public Gtk::ContainerAccessible
{
typedef Gtk::ContainerAccessible super_type;
public:
typedef ::GtkButtonAccessible BaseObjectType;

ButtonAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_button_accessible_get_type(); } 

GI_INLINE_DECL Atk::Action interface_ (gi::interface_tag<Atk::Action>);

GI_INLINE_DECL operator Atk::Action ();

GI_INLINE_DECL Atk::Image interface_ (gi::interface_tag<Atk::Image>);

GI_INLINE_DECL operator Atk::Image ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/buttonaccessible_extra_def.hpp>)
#include <gtk/buttonaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/buttonaccessible_extra.hpp>)
#include <gtk/buttonaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ButtonAccessible : public GI_GTK_BUTTONACCESSIBLE_BASE
{ typedef GI_GTK_BUTTONACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkButtonAccessible>
{ typedef Gtk::ButtonAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ButtonAccessibleClassDef
{
typedef ButtonAccessibleClassDef self;
public:
typedef Gtk::ButtonAccessible instance_type;
typedef ::GtkButtonAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ButtonAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::ButtonAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::ActionIfaceClassImpl, Atk::impl::internal::ImageIfaceClassImpl>
{
typedef ButtonAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ButtonAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::ActionIfaceClassImpl, Atk::impl::internal::ImageIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::ActionIfaceClassImpl AtkActionIface_type;
typedef Atk::impl::internal::ImageIfaceClassImpl AtkImageIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using ButtonAccessibleImpl = detail::ObjectImpl<ButtonAccessible, internal::ButtonAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
