// AUTO-GENERATED

#ifndef _GI_GTK_ICONVIEWACCESSIBLE_HPP_
#define _GI_GTK_ICONVIEWACCESSIBLE_HPP_

#include "containeraccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class IconViewAccessible;

namespace base {


#define GI_GTK_ICONVIEWACCESSIBLE_BASE base::IconViewAccessibleBase
class IconViewAccessibleBase : public Gtk::ContainerAccessible
{
typedef Gtk::ContainerAccessible super_type;
public:
typedef ::GtkIconViewAccessible BaseObjectType;

IconViewAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_icon_view_accessible_get_type(); } 

GI_INLINE_DECL Atk::Selection interface_ (gi::interface_tag<Atk::Selection>);

GI_INLINE_DECL operator Atk::Selection ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/iconviewaccessible_extra_def.hpp>)
#include <gtk/iconviewaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/iconviewaccessible_extra.hpp>)
#include <gtk/iconviewaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class IconViewAccessible : public GI_GTK_ICONVIEWACCESSIBLE_BASE
{ typedef GI_GTK_ICONVIEWACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkIconViewAccessible>
{ typedef Gtk::IconViewAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class IconViewAccessibleClassDef
{
typedef IconViewAccessibleClassDef self;
public:
typedef Gtk::IconViewAccessible instance_type;
typedef ::GtkIconViewAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class IconViewAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::IconViewAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::SelectionIfaceClassImpl>
{
typedef IconViewAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::IconViewAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::SelectionIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::SelectionIfaceClassImpl AtkSelectionIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using IconViewAccessibleImpl = detail::ObjectImpl<IconViewAccessible, internal::IconViewAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
