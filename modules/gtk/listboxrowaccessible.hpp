// AUTO-GENERATED

#ifndef _GI_GTK_LISTBOXROWACCESSIBLE_HPP_
#define _GI_GTK_LISTBOXROWACCESSIBLE_HPP_

#include "containeraccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ListBoxRowAccessible;

namespace base {


#define GI_GTK_LISTBOXROWACCESSIBLE_BASE base::ListBoxRowAccessibleBase
class ListBoxRowAccessibleBase : public Gtk::ContainerAccessible
{
typedef Gtk::ContainerAccessible super_type;
public:
typedef ::GtkListBoxRowAccessible BaseObjectType;

ListBoxRowAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_list_box_row_accessible_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/listboxrowaccessible_extra_def.hpp>)
#include <gtk/listboxrowaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/listboxrowaccessible_extra.hpp>)
#include <gtk/listboxrowaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ListBoxRowAccessible : public GI_GTK_LISTBOXROWACCESSIBLE_BASE
{ typedef GI_GTK_LISTBOXROWACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkListBoxRowAccessible>
{ typedef Gtk::ListBoxRowAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ListBoxRowAccessibleClassDef
{
typedef ListBoxRowAccessibleClassDef self;
public:
typedef Gtk::ListBoxRowAccessible instance_type;
typedef ::GtkListBoxRowAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ListBoxRowAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::ListBoxRowAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass>
{
typedef ListBoxRowAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ListBoxRowAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass> super;

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

using ListBoxRowAccessibleImpl = detail::ObjectImpl<ListBoxRowAccessible, internal::ListBoxRowAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
