// AUTO-GENERATED

#ifndef _GI_GTK_VSCROLLBAR_HPP_
#define _GI_GTK_VSCROLLBAR_HPP_

#include "scrollbar.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;

class VScrollbar;

namespace base {


#define GI_GTK_VSCROLLBAR_BASE base::VScrollbarBase
class VScrollbarBase : public Gtk::Scrollbar
{
typedef Gtk::Scrollbar super_type;
public:
typedef ::GtkVScrollbar BaseObjectType;

VScrollbarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_vscrollbar_get_type(); } 

// GtkWidget* gtk_vscrollbar_new (GtkAdjustment* adjustment);
// ::GtkVScrollbar* gtk_vscrollbar_new (::GtkAdjustment* adjustment);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/vscrollbar_extra_def.hpp>)
#include <gtk/vscrollbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/vscrollbar_extra.hpp>)
#include <gtk/vscrollbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class VScrollbar : public GI_GTK_VSCROLLBAR_BASE
{ typedef GI_GTK_VSCROLLBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkVScrollbar>
{ typedef Gtk::VScrollbar type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class VScrollbarClassDef
{
typedef VScrollbarClassDef self;
public:
typedef Gtk::VScrollbar instance_type;
typedef ::GtkVScrollbarClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class VScrollbarClass: public detail::ClassTemplate<Gtk::impl::internal::VScrollbarClassDef, Gtk::impl::internal::ScrollbarClass>
{
typedef VScrollbarClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::VScrollbarClassDef, Gtk::impl::internal::ScrollbarClass> super;

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

using VScrollbarImpl = detail::ObjectImpl<VScrollbar, internal::VScrollbarClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
