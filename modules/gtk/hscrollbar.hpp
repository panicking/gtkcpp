// AUTO-GENERATED

#ifndef _GI_GTK_HSCROLLBAR_HPP_
#define _GI_GTK_HSCROLLBAR_HPP_

#include "scrollbar.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;

class HScrollbar;

namespace base {


#define GI_GTK_HSCROLLBAR_BASE base::HScrollbarBase
class HScrollbarBase : public Gtk::Scrollbar
{
typedef Gtk::Scrollbar super_type;
public:
typedef ::GtkHScrollbar BaseObjectType;

HScrollbarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_hscrollbar_get_type(); } 

// GtkWidget* gtk_hscrollbar_new (GtkAdjustment* adjustment);
// ::GtkHScrollbar* gtk_hscrollbar_new (::GtkAdjustment* adjustment);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/hscrollbar_extra_def.hpp>)
#include <gtk/hscrollbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/hscrollbar_extra.hpp>)
#include <gtk/hscrollbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class HScrollbar : public GI_GTK_HSCROLLBAR_BASE
{ typedef GI_GTK_HSCROLLBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkHScrollbar>
{ typedef Gtk::HScrollbar type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class HScrollbarClassDef
{
typedef HScrollbarClassDef self;
public:
typedef Gtk::HScrollbar instance_type;
typedef ::GtkHScrollbarClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class HScrollbarClass: public detail::ClassTemplate<Gtk::impl::internal::HScrollbarClassDef, Gtk::impl::internal::ScrollbarClass>
{
typedef HScrollbarClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::HScrollbarClassDef, Gtk::impl::internal::ScrollbarClass> super;

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

using HScrollbarImpl = detail::ObjectImpl<HScrollbar, internal::HScrollbarClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
