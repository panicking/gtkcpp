// AUTO-GENERATED

#ifndef _GI_GTK_PLUGACCESSIBLE_HPP_
#define _GI_GTK_PLUGACCESSIBLE_HPP_

#include "windowaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class PlugAccessible;

namespace base {


#define GI_GTK_PLUGACCESSIBLE_BASE base::PlugAccessibleBase
class PlugAccessibleBase : public Gtk::WindowAccessible
{
typedef Gtk::WindowAccessible super_type;
public:
typedef ::GtkPlugAccessible BaseObjectType;

PlugAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_plug_accessible_get_type(); } 

// gchar* gtk_plug_accessible_get_id (GtkPlugAccessible* plug);
// char* gtk_plug_accessible_get_id (::GtkPlugAccessible* plug);
GI_INLINE_DECL std::string get_id () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/plugaccessible_extra_def.hpp>)
#include <gtk/plugaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/plugaccessible_extra.hpp>)
#include <gtk/plugaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PlugAccessible : public GI_GTK_PLUGACCESSIBLE_BASE
{ typedef GI_GTK_PLUGACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPlugAccessible>
{ typedef Gtk::PlugAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class PlugAccessibleClassDef
{
typedef PlugAccessibleClassDef self;
public:
typedef Gtk::PlugAccessible instance_type;
typedef ::GtkPlugAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class PlugAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::PlugAccessibleClassDef, Gtk::impl::internal::WindowAccessibleClass>
{
typedef PlugAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::PlugAccessibleClassDef, Gtk::impl::internal::WindowAccessibleClass> super;

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

using PlugAccessibleImpl = detail::ObjectImpl<PlugAccessible, internal::PlugAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
