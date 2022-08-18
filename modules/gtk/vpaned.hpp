// AUTO-GENERATED

#ifndef _GI_GTK_VPANED_HPP_
#define _GI_GTK_VPANED_HPP_

#include "paned.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class VPaned;

namespace base {


#define GI_GTK_VPANED_BASE base::VPanedBase
class VPanedBase : public Gtk::Paned
{
typedef Gtk::Paned super_type;
public:
typedef ::GtkVPaned BaseObjectType;

VPanedBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_vpaned_get_type(); } 

// GtkWidget* gtk_vpaned_new ();
// ::GtkVPaned* gtk_vpaned_new ();
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/vpaned_extra_def.hpp>)
#include <gtk/vpaned_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/vpaned_extra.hpp>)
#include <gtk/vpaned_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class VPaned : public GI_GTK_VPANED_BASE
{ typedef GI_GTK_VPANED_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkVPaned>
{ typedef Gtk::VPaned type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class VPanedClassDef
{
typedef VPanedClassDef self;
public:
typedef Gtk::VPaned instance_type;
typedef ::GtkVPanedClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class VPanedClass: public detail::ClassTemplate<Gtk::impl::internal::VPanedClassDef, Gtk::impl::internal::PanedClass>
{
typedef VPanedClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::VPanedClassDef, Gtk::impl::internal::PanedClass> super;

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

using VPanedImpl = detail::ObjectImpl<VPaned, internal::VPanedClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
