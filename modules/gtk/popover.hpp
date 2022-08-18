// AUTO-GENERATED

#ifndef _GI_GTK_POPOVER_HPP_
#define _GI_GTK_POPOVER_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class Popover;

namespace base {


#define GI_GTK_POPOVER_BASE base::PopoverBase
class PopoverBase : public Gtk::Bin
{
typedef Gtk::Bin super_type;
public:
typedef ::GtkPopover BaseObjectType;

PopoverBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_popover_get_type(); } 

// GtkWidget* gtk_popover_new (GtkWidget* relative_to);
// ::GtkPopover* gtk_popover_new (::GtkWidget* relative_to);
static GI_INLINE_DECL Gtk::Popover new_ (Gtk::Widget relative_to) noexcept;
static GI_INLINE_DECL Gtk::Popover new_ () noexcept;

// GtkWidget* gtk_popover_new_from_model (GtkWidget* relative_to, GMenuModel* model);
// ::GtkPopover* gtk_popover_new_from_model (::GtkWidget* relative_to, ::GMenuModel* model);
static GI_INLINE_DECL Gtk::Popover new_from_model (Gtk::Widget relative_to, Gio::MenuModel model) noexcept;
static GI_INLINE_DECL Gtk::Popover new_from_model (Gio::MenuModel model) noexcept;

// void gtk_popover_bind_model (GtkPopover* popover, GMenuModel* model, const gchar* action_namespace);
// void gtk_popover_bind_model (::GtkPopover* popover, ::GMenuModel* model, const char* action_namespace);
GI_INLINE_DECL void bind_model (Gio::MenuModel model, const std::string & action_namespace) noexcept;
GI_INLINE_DECL void bind_model () noexcept;

// GtkPopoverConstraint gtk_popover_get_constrain_to (GtkPopover* popover);
// ::GtkPopoverConstraint gtk_popover_get_constrain_to (::GtkPopover* popover);
GI_INLINE_DECL Gtk::PopoverConstraint get_constrain_to () noexcept;

// GtkWidget* gtk_popover_get_default_widget (GtkPopover* popover);
// ::GtkWidget* gtk_popover_get_default_widget (::GtkPopover* popover);
GI_INLINE_DECL Gtk::Widget get_default_widget () noexcept;

// gboolean gtk_popover_get_modal (GtkPopover* popover);
// gboolean gtk_popover_get_modal (::GtkPopover* popover);
GI_INLINE_DECL bool get_modal () noexcept;

// gboolean gtk_popover_get_pointing_to (GtkPopover* popover, GdkRectangle* rect);
// gboolean gtk_popover_get_pointing_to (::GtkPopover* popover, ::GdkRectangle* rect);
GI_INLINE_DECL bool get_pointing_to (Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL std::tuple<bool, Gdk::Rectangle> get_pointing_to () noexcept;

// GtkPositionType gtk_popover_get_position (GtkPopover* popover);
// ::GtkPositionType gtk_popover_get_position (::GtkPopover* popover);
GI_INLINE_DECL Gtk::PositionType get_position () noexcept;

// GtkWidget* gtk_popover_get_relative_to (GtkPopover* popover);
// ::GtkWidget* gtk_popover_get_relative_to (::GtkPopover* popover);
GI_INLINE_DECL Gtk::Widget get_relative_to () noexcept;

// gboolean gtk_popover_get_transitions_enabled (GtkPopover* popover);
// gboolean gtk_popover_get_transitions_enabled (::GtkPopover* popover);
// IGNORE; deprecated

// void gtk_popover_popdown (GtkPopover* popover);
// void gtk_popover_popdown (::GtkPopover* popover);
GI_INLINE_DECL void popdown () noexcept;

// void gtk_popover_popup (GtkPopover* popover);
// void gtk_popover_popup (::GtkPopover* popover);
GI_INLINE_DECL void popup () noexcept;

// void gtk_popover_set_constrain_to (GtkPopover* popover, GtkPopoverConstraint constraint);
// void gtk_popover_set_constrain_to (::GtkPopover* popover, ::GtkPopoverConstraint constraint);
GI_INLINE_DECL void set_constrain_to (Gtk::PopoverConstraint constraint) noexcept;

// void gtk_popover_set_default_widget (GtkPopover* popover, GtkWidget* widget);
// void gtk_popover_set_default_widget (::GtkPopover* popover, ::GtkWidget* widget);
GI_INLINE_DECL void set_default_widget (Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_default_widget () noexcept;

// void gtk_popover_set_modal (GtkPopover* popover, gboolean modal);
// void gtk_popover_set_modal (::GtkPopover* popover, gboolean modal);
GI_INLINE_DECL void set_modal (gboolean modal) noexcept;

// void gtk_popover_set_pointing_to (GtkPopover* popover, const GdkRectangle* rect);
// void gtk_popover_set_pointing_to (::GtkPopover* popover, const ::GdkRectangle* rect);
GI_INLINE_DECL void set_pointing_to (const Gdk::Rectangle & rect) noexcept;

// void gtk_popover_set_position (GtkPopover* popover, GtkPositionType position);
// void gtk_popover_set_position (::GtkPopover* popover, ::GtkPositionType position);
GI_INLINE_DECL void set_position (Gtk::PositionType position) noexcept;

// void gtk_popover_set_relative_to (GtkPopover* popover, GtkWidget* relative_to);
// void gtk_popover_set_relative_to (::GtkPopover* popover, ::GtkWidget* relative_to);
GI_INLINE_DECL void set_relative_to (Gtk::Widget relative_to) noexcept;
GI_INLINE_DECL void set_relative_to () noexcept;

// void gtk_popover_set_transitions_enabled (GtkPopover* popover, gboolean transitions_enabled);
// void gtk_popover_set_transitions_enabled (::GtkPopover* popover, gboolean transitions_enabled);
// IGNORE; deprecated

gi::property_proxy<Gtk::PopoverConstraint, base::PopoverBase> property_constrain_to()
{ return gi::property_proxy<Gtk::PopoverConstraint, base::PopoverBase> (*this, "constrain-to"); }
const gi::property_proxy<Gtk::PopoverConstraint, base::PopoverBase> property_constrain_to() const
{ return gi::property_proxy<Gtk::PopoverConstraint, base::PopoverBase> (*this, "constrain-to"); }

gi::property_proxy<bool, base::PopoverBase> property_modal()
{ return gi::property_proxy<bool, base::PopoverBase> (*this, "modal"); }
const gi::property_proxy<bool, base::PopoverBase> property_modal() const
{ return gi::property_proxy<bool, base::PopoverBase> (*this, "modal"); }

gi::property_proxy<Gdk::Rectangle, base::PopoverBase> property_pointing_to()
{ return gi::property_proxy<Gdk::Rectangle, base::PopoverBase> (*this, "pointing-to"); }
const gi::property_proxy<Gdk::Rectangle, base::PopoverBase> property_pointing_to() const
{ return gi::property_proxy<Gdk::Rectangle, base::PopoverBase> (*this, "pointing-to"); }

gi::property_proxy<Gtk::PositionType, base::PopoverBase> property_position()
{ return gi::property_proxy<Gtk::PositionType, base::PopoverBase> (*this, "position"); }
const gi::property_proxy<Gtk::PositionType, base::PopoverBase> property_position() const
{ return gi::property_proxy<Gtk::PositionType, base::PopoverBase> (*this, "position"); }

gi::property_proxy<Gtk::Widget, base::PopoverBase> property_relative_to()
{ return gi::property_proxy<Gtk::Widget, base::PopoverBase> (*this, "relative-to"); }
const gi::property_proxy<Gtk::Widget, base::PopoverBase> property_relative_to() const
{ return gi::property_proxy<Gtk::Widget, base::PopoverBase> (*this, "relative-to"); }

gi::property_proxy<bool, base::PopoverBase> property_transitions_enabled()
{ return gi::property_proxy<bool, base::PopoverBase> (*this, "transitions-enabled"); }
const gi::property_proxy<bool, base::PopoverBase> property_transitions_enabled() const
{ return gi::property_proxy<bool, base::PopoverBase> (*this, "transitions-enabled"); }

// signal closed
gi::signal_proxy<void(Gtk::Popover)> signal_closed()
{ return gi::signal_proxy<void(Gtk::Popover)> (*this, "closed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/popover_extra_def.hpp>)
#include <gtk/popover_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/popover_extra.hpp>)
#include <gtk/popover_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Popover : public GI_GTK_POPOVER_BASE
{ typedef GI_GTK_POPOVER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPopover>
{ typedef Gtk::Popover type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class PopoverClassDef
{
typedef PopoverClassDef self;
public:
typedef Gtk::Popover instance_type;
typedef ::GtkPopoverClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Popover::closed (GtkPopover* popover);
// void Popover::closed (::GtkPopover* popover);
virtual void closed_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class PopoverClass: public detail::ClassTemplate<Gtk::impl::internal::PopoverClassDef, Gtk::impl::internal::BinClass>
{
typedef PopoverClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::PopoverClassDef, Gtk::impl::internal::BinClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Popover::closed (GtkPopover* popover);
// void Popover::closed (::GtkPopover* popover);
GI_INLINE_DECL void closed_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using PopoverImpl = detail::ObjectImpl<Popover, internal::PopoverClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
