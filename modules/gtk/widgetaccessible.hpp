// AUTO-GENERATED

#ifndef _GI_GTK_WIDGETACCESSIBLE_HPP_
#define _GI_GTK_WIDGETACCESSIBLE_HPP_

#include "accessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class WidgetAccessible;

namespace base {


#define GI_GTK_WIDGETACCESSIBLE_BASE base::WidgetAccessibleBase
class WidgetAccessibleBase : public Gtk::Accessible
{
typedef Gtk::Accessible super_type;
public:
typedef ::GtkWidgetAccessible BaseObjectType;

WidgetAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_widget_accessible_get_type(); } 

GI_INLINE_DECL Atk::Component interface_ (gi::interface_tag<Atk::Component>);

GI_INLINE_DECL operator Atk::Component ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/widgetaccessible_extra_def.hpp>)
#include <gtk/widgetaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/widgetaccessible_extra.hpp>)
#include <gtk/widgetaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class WidgetAccessible : public GI_GTK_WIDGETACCESSIBLE_BASE
{ typedef GI_GTK_WIDGETACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkWidgetAccessible>
{ typedef Gtk::WidgetAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class WidgetAccessibleClassDef
{
typedef WidgetAccessibleClassDef self;
public:
typedef Gtk::WidgetAccessible instance_type;
typedef ::GtkWidgetAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class WidgetAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::WidgetAccessibleClassDef, Gtk::impl::internal::AccessibleClass, Atk::impl::internal::ComponentIfaceClassImpl>
{
typedef WidgetAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::WidgetAccessibleClassDef, Gtk::impl::internal::AccessibleClass, Atk::impl::internal::ComponentIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::ComponentIfaceClassImpl AtkComponentIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using WidgetAccessibleImpl = detail::ObjectImpl<WidgetAccessible, internal::WidgetAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
