// AUTO-GENERATED

#ifndef _GI_GTK_SPINNERACCESSIBLE_HPP_
#define _GI_GTK_SPINNERACCESSIBLE_HPP_

#include "widgetaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class SpinnerAccessible;

namespace base {


#define GI_GTK_SPINNERACCESSIBLE_BASE base::SpinnerAccessibleBase
class SpinnerAccessibleBase : public Gtk::WidgetAccessible
{
typedef Gtk::WidgetAccessible super_type;
public:
typedef ::GtkSpinnerAccessible BaseObjectType;

SpinnerAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_spinner_accessible_get_type(); } 

GI_INLINE_DECL Atk::Image interface_ (gi::interface_tag<Atk::Image>);

GI_INLINE_DECL operator Atk::Image ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/spinneraccessible_extra_def.hpp>)
#include <gtk/spinneraccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/spinneraccessible_extra.hpp>)
#include <gtk/spinneraccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SpinnerAccessible : public GI_GTK_SPINNERACCESSIBLE_BASE
{ typedef GI_GTK_SPINNERACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSpinnerAccessible>
{ typedef Gtk::SpinnerAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SpinnerAccessibleClassDef
{
typedef SpinnerAccessibleClassDef self;
public:
typedef Gtk::SpinnerAccessible instance_type;
typedef ::GtkSpinnerAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SpinnerAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::SpinnerAccessibleClassDef, Gtk::impl::internal::WidgetAccessibleClass, Atk::impl::internal::ImageIfaceClassImpl>
{
typedef SpinnerAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SpinnerAccessibleClassDef, Gtk::impl::internal::WidgetAccessibleClass, Atk::impl::internal::ImageIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::ImageIfaceClassImpl AtkImageIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using SpinnerAccessibleImpl = detail::ObjectImpl<SpinnerAccessible, internal::SpinnerAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
