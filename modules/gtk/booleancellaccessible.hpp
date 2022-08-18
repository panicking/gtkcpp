// AUTO-GENERATED

#ifndef _GI_GTK_BOOLEANCELLACCESSIBLE_HPP_
#define _GI_GTK_BOOLEANCELLACCESSIBLE_HPP_

#include "renderercellaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class BooleanCellAccessible;

namespace base {


#define GI_GTK_BOOLEANCELLACCESSIBLE_BASE base::BooleanCellAccessibleBase
class BooleanCellAccessibleBase : public Gtk::RendererCellAccessible
{
typedef Gtk::RendererCellAccessible super_type;
public:
typedef ::GtkBooleanCellAccessible BaseObjectType;

BooleanCellAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_boolean_cell_accessible_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/booleancellaccessible_extra_def.hpp>)
#include <gtk/booleancellaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/booleancellaccessible_extra.hpp>)
#include <gtk/booleancellaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class BooleanCellAccessible : public GI_GTK_BOOLEANCELLACCESSIBLE_BASE
{ typedef GI_GTK_BOOLEANCELLACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBooleanCellAccessible>
{ typedef Gtk::BooleanCellAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class BooleanCellAccessibleClassDef
{
typedef BooleanCellAccessibleClassDef self;
public:
typedef Gtk::BooleanCellAccessible instance_type;
typedef ::GtkBooleanCellAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class BooleanCellAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::BooleanCellAccessibleClassDef, Gtk::impl::internal::RendererCellAccessibleClass>
{
typedef BooleanCellAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::BooleanCellAccessibleClassDef, Gtk::impl::internal::RendererCellAccessibleClass> super;

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

using BooleanCellAccessibleImpl = detail::ObjectImpl<BooleanCellAccessible, internal::BooleanCellAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
