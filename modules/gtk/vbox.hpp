// AUTO-GENERATED

#ifndef _GI_GTK_VBOX_HPP_
#define _GI_GTK_VBOX_HPP_

#include "box.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class VBox;

namespace base {


#define GI_GTK_VBOX_BASE base::VBoxBase
class VBoxBase : public Gtk::Box
{
typedef Gtk::Box super_type;
public:
typedef ::GtkVBox BaseObjectType;

VBoxBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_vbox_get_type(); } 

// GtkWidget* gtk_vbox_new (gboolean homogeneous, gint spacing);
// ::GtkVBox* gtk_vbox_new (gboolean homogeneous, gint spacing);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/vbox_extra_def.hpp>)
#include <gtk/vbox_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/vbox_extra.hpp>)
#include <gtk/vbox_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class VBox : public GI_GTK_VBOX_BASE
{ typedef GI_GTK_VBOX_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkVBox>
{ typedef Gtk::VBox type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class VBoxClassDef
{
typedef VBoxClassDef self;
public:
typedef Gtk::VBox instance_type;
typedef ::GtkVBoxClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class VBoxClass: public detail::ClassTemplate<Gtk::impl::internal::VBoxClassDef, Gtk::impl::internal::BoxClass>
{
typedef VBoxClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::VBoxClassDef, Gtk::impl::internal::BoxClass> super;

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

using VBoxImpl = detail::ObjectImpl<VBox, internal::VBoxClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
