// AUTO-GENERATED

#ifndef _GI_GTK_HBUTTONBOX_HPP_
#define _GI_GTK_HBUTTONBOX_HPP_

#include "buttonbox.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class HButtonBox;

namespace base {


#define GI_GTK_HBUTTONBOX_BASE base::HButtonBoxBase
class HButtonBoxBase : public Gtk::ButtonBox
{
typedef Gtk::ButtonBox super_type;
public:
typedef ::GtkHButtonBox BaseObjectType;

HButtonBoxBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_hbutton_box_get_type(); } 

// GtkWidget* gtk_hbutton_box_new ();
// ::GtkHButtonBox* gtk_hbutton_box_new ();
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/hbuttonbox_extra_def.hpp>)
#include <gtk/hbuttonbox_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/hbuttonbox_extra.hpp>)
#include <gtk/hbuttonbox_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class HButtonBox : public GI_GTK_HBUTTONBOX_BASE
{ typedef GI_GTK_HBUTTONBOX_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkHButtonBox>
{ typedef Gtk::HButtonBox type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class HButtonBoxClassDef
{
typedef HButtonBoxClassDef self;
public:
typedef Gtk::HButtonBox instance_type;
typedef ::GtkHButtonBoxClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class HButtonBoxClass: public detail::ClassTemplate<Gtk::impl::internal::HButtonBoxClassDef, Gtk::impl::internal::ButtonBoxClass>
{
typedef HButtonBoxClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::HButtonBoxClassDef, Gtk::impl::internal::ButtonBoxClass> super;

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

using HButtonBoxImpl = detail::ObjectImpl<HButtonBox, internal::HButtonBoxClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
