// AUTO-GENERATED

#ifndef _GI_GTK_EVENTCONTROLLER_HPP_
#define _GI_GTK_EVENTCONTROLLER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class EventController;

namespace base {


#define GI_GTK_EVENTCONTROLLER_BASE base::EventControllerBase
class EventControllerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkEventController BaseObjectType;

EventControllerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_event_controller_get_type(); } 

// GtkPropagationPhase gtk_event_controller_get_propagation_phase (GtkEventController* controller);
// ::GtkPropagationPhase gtk_event_controller_get_propagation_phase (::GtkEventController* controller);
GI_INLINE_DECL Gtk::PropagationPhase get_propagation_phase () noexcept;

// GtkWidget* gtk_event_controller_get_widget (GtkEventController* controller);
// ::GtkWidget* gtk_event_controller_get_widget (::GtkEventController* controller);
GI_INLINE_DECL Gtk::Widget get_widget () noexcept;

// gboolean gtk_event_controller_handle_event (GtkEventController* controller, const GdkEvent* event);
// gboolean gtk_event_controller_handle_event (::GtkEventController* controller, const  event);
// SKIP; event type  not supported

// void gtk_event_controller_reset (GtkEventController* controller);
// void gtk_event_controller_reset (::GtkEventController* controller);
GI_INLINE_DECL void reset () noexcept;

// void gtk_event_controller_set_propagation_phase (GtkEventController* controller, GtkPropagationPhase phase);
// void gtk_event_controller_set_propagation_phase (::GtkEventController* controller, ::GtkPropagationPhase phase);
GI_INLINE_DECL void set_propagation_phase (Gtk::PropagationPhase phase) noexcept;

gi::property_proxy<Gtk::PropagationPhase, base::EventControllerBase> property_propagation_phase()
{ return gi::property_proxy<Gtk::PropagationPhase, base::EventControllerBase> (*this, "propagation-phase"); }
const gi::property_proxy<Gtk::PropagationPhase, base::EventControllerBase> property_propagation_phase() const
{ return gi::property_proxy<Gtk::PropagationPhase, base::EventControllerBase> (*this, "propagation-phase"); }

gi::property_proxy<Gtk::Widget, base::EventControllerBase> property_widget()
{ return gi::property_proxy<Gtk::Widget, base::EventControllerBase> (*this, "widget"); }
const gi::property_proxy<Gtk::Widget, base::EventControllerBase> property_widget() const
{ return gi::property_proxy<Gtk::Widget, base::EventControllerBase> (*this, "widget"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/eventcontroller_extra_def.hpp>)
#include <gtk/eventcontroller_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/eventcontroller_extra.hpp>)
#include <gtk/eventcontroller_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class EventController : public GI_GTK_EVENTCONTROLLER_BASE
{ typedef GI_GTK_EVENTCONTROLLER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEventController>
{ typedef Gtk::EventController type; }; 

} // namespace repository

} // namespace gi

#endif
