// AUTO-GENERATED

#ifndef _GI_GTK_EVENTBOX_HPP_
#define _GI_GTK_EVENTBOX_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class EventBox;

namespace base {


#define GI_GTK_EVENTBOX_BASE base::EventBoxBase
class EventBoxBase : public Gtk::Bin
{
typedef Gtk::Bin super_type;
public:
typedef ::GtkEventBox BaseObjectType;

EventBoxBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_event_box_get_type(); } 

// GtkWidget* gtk_event_box_new ();
// ::GtkEventBox* gtk_event_box_new ();
static GI_INLINE_DECL Gtk::EventBox new_ () noexcept;

// gboolean gtk_event_box_get_above_child (GtkEventBox* event_box);
// gboolean gtk_event_box_get_above_child (::GtkEventBox* event_box);
GI_INLINE_DECL bool get_above_child () noexcept;

// gboolean gtk_event_box_get_visible_window (GtkEventBox* event_box);
// gboolean gtk_event_box_get_visible_window (::GtkEventBox* event_box);
GI_INLINE_DECL bool get_visible_window () noexcept;

// void gtk_event_box_set_above_child (GtkEventBox* event_box, gboolean above_child);
// void gtk_event_box_set_above_child (::GtkEventBox* event_box, gboolean above_child);
GI_INLINE_DECL void set_above_child (gboolean above_child) noexcept;

// void gtk_event_box_set_visible_window (GtkEventBox* event_box, gboolean visible_window);
// void gtk_event_box_set_visible_window (::GtkEventBox* event_box, gboolean visible_window);
GI_INLINE_DECL void set_visible_window (gboolean visible_window) noexcept;

gi::property_proxy<bool, base::EventBoxBase> property_above_child()
{ return gi::property_proxy<bool, base::EventBoxBase> (*this, "above-child"); }
const gi::property_proxy<bool, base::EventBoxBase> property_above_child() const
{ return gi::property_proxy<bool, base::EventBoxBase> (*this, "above-child"); }

gi::property_proxy<bool, base::EventBoxBase> property_visible_window()
{ return gi::property_proxy<bool, base::EventBoxBase> (*this, "visible-window"); }
const gi::property_proxy<bool, base::EventBoxBase> property_visible_window() const
{ return gi::property_proxy<bool, base::EventBoxBase> (*this, "visible-window"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/eventbox_extra_def.hpp>)
#include <gtk/eventbox_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/eventbox_extra.hpp>)
#include <gtk/eventbox_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class EventBox : public GI_GTK_EVENTBOX_BASE
{ typedef GI_GTK_EVENTBOX_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEventBox>
{ typedef Gtk::EventBox type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class EventBoxClassDef
{
typedef EventBoxClassDef self;
public:
typedef Gtk::EventBox instance_type;
typedef ::GtkEventBoxClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class EventBoxClass: public detail::ClassTemplate<Gtk::impl::internal::EventBoxClassDef, Gtk::impl::internal::BinClass>
{
typedef EventBoxClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::EventBoxClassDef, Gtk::impl::internal::BinClass> super;

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

using EventBoxImpl = detail::ObjectImpl<EventBox, internal::EventBoxClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
