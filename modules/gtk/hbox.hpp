// AUTO-GENERATED

#ifndef _GI_GTK_HBOX_HPP_
#define _GI_GTK_HBOX_HPP_

#include "box.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class HBox;

namespace base {


#define GI_GTK_HBOX_BASE base::HBoxBase
class HBoxBase : public Gtk::Box
{
typedef Gtk::Box super_type;
public:
typedef ::GtkHBox BaseObjectType;

HBoxBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_hbox_get_type(); } 

// GtkWidget* gtk_hbox_new (gboolean homogeneous, gint spacing);
// ::GtkHBox* gtk_hbox_new (gboolean homogeneous, gint spacing);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/hbox_extra_def.hpp>)
#include <gtk/hbox_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/hbox_extra.hpp>)
#include <gtk/hbox_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class HBox : public GI_GTK_HBOX_BASE
{ typedef GI_GTK_HBOX_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkHBox>
{ typedef Gtk::HBox type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class HBoxClassDef
{
typedef HBoxClassDef self;
public:
typedef Gtk::HBox instance_type;
typedef ::GtkHBoxClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class HBoxClass: public detail::ClassTemplate<Gtk::impl::internal::HBoxClassDef, Gtk::impl::internal::BoxClass>
{
typedef HBoxClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::HBoxClassDef, Gtk::impl::internal::BoxClass> super;

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

using HBoxImpl = detail::ObjectImpl<HBox, internal::HBoxClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
