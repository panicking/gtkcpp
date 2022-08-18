// AUTO-GENERATED

#ifndef _GI_GTK_WINDOWACCESSIBLE_HPP_
#define _GI_GTK_WINDOWACCESSIBLE_HPP_

#include "containeraccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class WindowAccessible;

namespace base {


#define GI_GTK_WINDOWACCESSIBLE_BASE base::WindowAccessibleBase
class WindowAccessibleBase : public Gtk::ContainerAccessible
{
typedef Gtk::ContainerAccessible super_type;
public:
typedef ::GtkWindowAccessible BaseObjectType;

WindowAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_window_accessible_get_type(); } 

GI_INLINE_DECL Atk::Window interface_ (gi::interface_tag<Atk::Window>);

GI_INLINE_DECL operator Atk::Window ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/windowaccessible_extra_def.hpp>)
#include <gtk/windowaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/windowaccessible_extra.hpp>)
#include <gtk/windowaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class WindowAccessible : public GI_GTK_WINDOWACCESSIBLE_BASE
{ typedef GI_GTK_WINDOWACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkWindowAccessible>
{ typedef Gtk::WindowAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class WindowAccessibleClassDef
{
typedef WindowAccessibleClassDef self;
public:
typedef Gtk::WindowAccessible instance_type;
typedef ::GtkWindowAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class WindowAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::WindowAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::WindowIfaceClassImpl>
{
typedef WindowAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::WindowAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::WindowIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::WindowIfaceClassImpl AtkWindowIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using WindowAccessibleImpl = detail::ObjectImpl<WindowAccessible, internal::WindowAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
