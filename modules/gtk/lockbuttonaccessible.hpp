// AUTO-GENERATED

#ifndef _GI_GTK_LOCKBUTTONACCESSIBLE_HPP_
#define _GI_GTK_LOCKBUTTONACCESSIBLE_HPP_

#include "buttonaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class LockButtonAccessible;

namespace base {


#define GI_GTK_LOCKBUTTONACCESSIBLE_BASE base::LockButtonAccessibleBase
class LockButtonAccessibleBase : public Gtk::ButtonAccessible
{
typedef Gtk::ButtonAccessible super_type;
public:
typedef ::GtkLockButtonAccessible BaseObjectType;

LockButtonAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_lock_button_accessible_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/lockbuttonaccessible_extra_def.hpp>)
#include <gtk/lockbuttonaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/lockbuttonaccessible_extra.hpp>)
#include <gtk/lockbuttonaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class LockButtonAccessible : public GI_GTK_LOCKBUTTONACCESSIBLE_BASE
{ typedef GI_GTK_LOCKBUTTONACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkLockButtonAccessible>
{ typedef Gtk::LockButtonAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class LockButtonAccessibleClassDef
{
typedef LockButtonAccessibleClassDef self;
public:
typedef Gtk::LockButtonAccessible instance_type;
typedef ::GtkLockButtonAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class LockButtonAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::LockButtonAccessibleClassDef, Gtk::impl::internal::ButtonAccessibleClass>
{
typedef LockButtonAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::LockButtonAccessibleClassDef, Gtk::impl::internal::ButtonAccessibleClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using LockButtonAccessibleImpl = detail::ObjectImpl<LockButtonAccessible, internal::LockButtonAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
