// AUTO-GENERATED

#ifndef _GI_GTK_VBUTTONBOX_HPP_
#define _GI_GTK_VBUTTONBOX_HPP_

#include "buttonbox.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class VButtonBox;

namespace base {


#define GI_GTK_VBUTTONBOX_BASE base::VButtonBoxBase
class VButtonBoxBase : public Gtk::ButtonBox
{
typedef Gtk::ButtonBox super_type;
public:
typedef ::GtkVButtonBox BaseObjectType;

VButtonBoxBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_vbutton_box_get_type(); } 

// GtkWidget* gtk_vbutton_box_new ();
// ::GtkVButtonBox* gtk_vbutton_box_new ();
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/vbuttonbox_extra_def.hpp>)
#include <gtk/vbuttonbox_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/vbuttonbox_extra.hpp>)
#include <gtk/vbuttonbox_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class VButtonBox : public GI_GTK_VBUTTONBOX_BASE
{ typedef GI_GTK_VBUTTONBOX_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkVButtonBox>
{ typedef Gtk::VButtonBox type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class VButtonBoxClassDef
{
typedef VButtonBoxClassDef self;
public:
typedef Gtk::VButtonBox instance_type;
typedef ::GtkVButtonBoxClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class VButtonBoxClass: public detail::ClassTemplate<Gtk::impl::internal::VButtonBoxClassDef, Gtk::impl::internal::ButtonBoxClass>
{
typedef VButtonBoxClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::VButtonBoxClassDef, Gtk::impl::internal::ButtonBoxClass> super;

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

using VButtonBoxImpl = detail::ObjectImpl<VButtonBox, internal::VButtonBoxClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
