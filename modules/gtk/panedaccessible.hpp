// AUTO-GENERATED

#ifndef _GI_GTK_PANEDACCESSIBLE_HPP_
#define _GI_GTK_PANEDACCESSIBLE_HPP_

#include "containeraccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class PanedAccessible;

namespace base {


#define GI_GTK_PANEDACCESSIBLE_BASE base::PanedAccessibleBase
class PanedAccessibleBase : public Gtk::ContainerAccessible
{
typedef Gtk::ContainerAccessible super_type;
public:
typedef ::GtkPanedAccessible BaseObjectType;

PanedAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_paned_accessible_get_type(); } 

GI_INLINE_DECL Atk::Value interface_ (gi::interface_tag<Atk::Value>);

GI_INLINE_DECL operator Atk::Value ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/panedaccessible_extra_def.hpp>)
#include <gtk/panedaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/panedaccessible_extra.hpp>)
#include <gtk/panedaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PanedAccessible : public GI_GTK_PANEDACCESSIBLE_BASE
{ typedef GI_GTK_PANEDACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPanedAccessible>
{ typedef Gtk::PanedAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class PanedAccessibleClassDef
{
typedef PanedAccessibleClassDef self;
public:
typedef Gtk::PanedAccessible instance_type;
typedef ::GtkPanedAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class PanedAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::PanedAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::ValueIfaceClassImpl>
{
typedef PanedAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::PanedAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::ValueIfaceClassImpl> super;

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

using PanedAccessibleImpl = detail::ObjectImpl<PanedAccessible, internal::PanedAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
