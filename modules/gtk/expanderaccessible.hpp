// AUTO-GENERATED

#ifndef _GI_GTK_EXPANDERACCESSIBLE_HPP_
#define _GI_GTK_EXPANDERACCESSIBLE_HPP_

#include "containeraccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ExpanderAccessible;

namespace base {


#define GI_GTK_EXPANDERACCESSIBLE_BASE base::ExpanderAccessibleBase
class ExpanderAccessibleBase : public Gtk::ContainerAccessible
{
typedef Gtk::ContainerAccessible super_type;
public:
typedef ::GtkExpanderAccessible BaseObjectType;

ExpanderAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_expander_accessible_get_type(); } 

GI_INLINE_DECL Atk::Action interface_ (gi::interface_tag<Atk::Action>);

GI_INLINE_DECL operator Atk::Action ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/expanderaccessible_extra_def.hpp>)
#include <gtk/expanderaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/expanderaccessible_extra.hpp>)
#include <gtk/expanderaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ExpanderAccessible : public GI_GTK_EXPANDERACCESSIBLE_BASE
{ typedef GI_GTK_EXPANDERACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkExpanderAccessible>
{ typedef Gtk::ExpanderAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ExpanderAccessibleClassDef
{
typedef ExpanderAccessibleClassDef self;
public:
typedef Gtk::ExpanderAccessible instance_type;
typedef ::GtkExpanderAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ExpanderAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::ExpanderAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::ActionIfaceClassImpl>
{
typedef ExpanderAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ExpanderAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::ActionIfaceClassImpl> super;

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

using ExpanderAccessibleImpl = detail::ObjectImpl<ExpanderAccessible, internal::ExpanderAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
