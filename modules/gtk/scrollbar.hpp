// AUTO-GENERATED

#ifndef _GI_GTK_SCROLLBAR_HPP_
#define _GI_GTK_SCROLLBAR_HPP_

#include "range.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;

class Scrollbar;

namespace base {


#define GI_GTK_SCROLLBAR_BASE base::ScrollbarBase
class ScrollbarBase : public Gtk::Range
{
typedef Gtk::Range super_type;
public:
typedef ::GtkScrollbar BaseObjectType;

ScrollbarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_scrollbar_get_type(); } 

// GtkWidget* gtk_scrollbar_new (GtkOrientation orientation, GtkAdjustment* adjustment);
// ::GtkScrollbar* gtk_scrollbar_new (::GtkOrientation orientation, ::GtkAdjustment* adjustment);
static GI_INLINE_DECL Gtk::Scrollbar new_ (Gtk::Orientation orientation, Gtk::Adjustment adjustment) noexcept;
static GI_INLINE_DECL Gtk::Scrollbar new_ (Gtk::Orientation orientation) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scrollbar_extra_def.hpp>)
#include <gtk/scrollbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scrollbar_extra.hpp>)
#include <gtk/scrollbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Scrollbar : public GI_GTK_SCROLLBAR_BASE
{ typedef GI_GTK_SCROLLBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkScrollbar>
{ typedef Gtk::Scrollbar type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ScrollbarClassDef
{
typedef ScrollbarClassDef self;
public:
typedef Gtk::Scrollbar instance_type;
typedef ::GtkScrollbarClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ScrollbarClass: public detail::ClassTemplate<Gtk::impl::internal::ScrollbarClassDef, Gtk::impl::internal::RangeClass>
{
typedef ScrollbarClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ScrollbarClassDef, Gtk::impl::internal::RangeClass> super;

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

using ScrollbarImpl = detail::ObjectImpl<Scrollbar, internal::ScrollbarClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
