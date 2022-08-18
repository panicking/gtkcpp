// AUTO-GENERATED

#ifndef _GI_GTK_TOPLEVELACCESSIBLE_HPP_
#define _GI_GTK_TOPLEVELACCESSIBLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Window;

class ToplevelAccessible;

namespace base {


#define GI_GTK_TOPLEVELACCESSIBLE_BASE base::ToplevelAccessibleBase
class ToplevelAccessibleBase : public Atk::Object
{
typedef Atk::Object super_type;
public:
typedef ::GtkToplevelAccessible BaseObjectType;

ToplevelAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_toplevel_accessible_get_type(); } 

// GList* gtk_toplevel_accessible_get_children (GtkToplevelAccessible* accessible);
// ::GList* gtk_toplevel_accessible_get_children (::GtkToplevelAccessible* accessible);
GI_INLINE_DECL std::vector<Gtk::Window> get_children () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/toplevelaccessible_extra_def.hpp>)
#include <gtk/toplevelaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/toplevelaccessible_extra.hpp>)
#include <gtk/toplevelaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ToplevelAccessible : public GI_GTK_TOPLEVELACCESSIBLE_BASE
{ typedef GI_GTK_TOPLEVELACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkToplevelAccessible>
{ typedef Gtk::ToplevelAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ToplevelAccessibleClassDef
{
typedef ToplevelAccessibleClassDef self;
public:
typedef Gtk::ToplevelAccessible instance_type;
typedef ::GtkToplevelAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ToplevelAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::ToplevelAccessibleClassDef, Atk::impl::internal::ObjectClass>
{
typedef ToplevelAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ToplevelAccessibleClassDef, Atk::impl::internal::ObjectClass> super;

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

using ToplevelAccessibleImpl = detail::ObjectImpl<ToplevelAccessible, internal::ToplevelAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
