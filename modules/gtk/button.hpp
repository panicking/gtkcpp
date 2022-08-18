// AUTO-GENERATED

#ifndef _GI_GTK_BUTTON_HPP_
#define _GI_GTK_BUTTON_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Actionable;
class Activatable;
class Widget;

class Button;

namespace base {


#define GI_GTK_BUTTON_BASE base::ButtonBase
class ButtonBase : public Gtk::Bin
{
typedef Gtk::Bin super_type;
public:
typedef ::GtkButton BaseObjectType;

ButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_button_get_type(); } 

GI_INLINE_DECL Gtk::Actionable interface_ (gi::interface_tag<Gtk::Actionable>);

GI_INLINE_DECL operator Gtk::Actionable ();

GI_INLINE_DECL Gtk::Activatable interface_ (gi::interface_tag<Gtk::Activatable>);

GI_INLINE_DECL operator Gtk::Activatable ();

// GtkWidget* gtk_button_new ();
// ::GtkButton* gtk_button_new ();
static GI_INLINE_DECL Gtk::Button new_ () noexcept;

// GtkWidget* gtk_button_new_from_icon_name (const gchar* icon_name, GtkIconSize size);
// ::GtkButton* gtk_button_new_from_icon_name (const char* icon_name, gint size);
static GI_INLINE_DECL Gtk::Button new_from_icon_name (const std::string & icon_name, gint size) noexcept;
static GI_INLINE_DECL Gtk::Button new_from_icon_name (gint size) noexcept;

// GtkWidget* gtk_button_new_from_stock (const gchar* stock_id);
// ::GtkButton* gtk_button_new_from_stock (const char* stock_id);
// IGNORE; deprecated

// GtkWidget* gtk_button_new_with_label (const gchar* label);
// ::GtkButton* gtk_button_new_with_label (const char* label);
static GI_INLINE_DECL Gtk::Button new_with_label (const std::string & label) noexcept;

// GtkWidget* gtk_button_new_with_mnemonic (const gchar* label);
// ::GtkButton* gtk_button_new_with_mnemonic (const char* label);
static GI_INLINE_DECL Gtk::Button new_with_mnemonic (const std::string & label) noexcept;

// void gtk_button_clicked (GtkButton* button);
// void gtk_button_clicked (::GtkButton* button);
GI_INLINE_DECL void clicked () noexcept;

// void gtk_button_enter (GtkButton* button);
// void gtk_button_enter (::GtkButton* button);
// IGNORE; deprecated

// void gtk_button_get_alignment (GtkButton* button, gfloat* xalign, gfloat* yalign);
// void gtk_button_get_alignment (::GtkButton* button, gfloat* xalign, gfloat* yalign);
// IGNORE; deprecated

// gboolean gtk_button_get_always_show_image (GtkButton* button);
// gboolean gtk_button_get_always_show_image (::GtkButton* button);
GI_INLINE_DECL bool get_always_show_image () noexcept;

// GdkWindow* gtk_button_get_event_window (GtkButton* button);
// ::GdkWindow* gtk_button_get_event_window (::GtkButton* button);
GI_INLINE_DECL Gdk::Window get_event_window () noexcept;

// gboolean gtk_button_get_focus_on_click (GtkButton* button);
// gboolean gtk_button_get_focus_on_click (::GtkButton* button);
// IGNORE; deprecated

// GtkWidget* gtk_button_get_image (GtkButton* button);
// ::GtkWidget* gtk_button_get_image (::GtkButton* button);
GI_INLINE_DECL Gtk::Widget get_image () noexcept;

// GtkPositionType gtk_button_get_image_position (GtkButton* button);
// ::GtkPositionType gtk_button_get_image_position (::GtkButton* button);
GI_INLINE_DECL Gtk::PositionType get_image_position () noexcept;

// const gchar* gtk_button_get_label (GtkButton* button);
// const char* gtk_button_get_label (::GtkButton* button);
GI_INLINE_DECL std::string get_label () noexcept;

// GtkReliefStyle gtk_button_get_relief (GtkButton* button);
// ::GtkReliefStyle gtk_button_get_relief (::GtkButton* button);
GI_INLINE_DECL Gtk::ReliefStyle get_relief () noexcept;

// gboolean gtk_button_get_use_stock (GtkButton* button);
// gboolean gtk_button_get_use_stock (::GtkButton* button);
// IGNORE; deprecated

// gboolean gtk_button_get_use_underline (GtkButton* button);
// gboolean gtk_button_get_use_underline (::GtkButton* button);
GI_INLINE_DECL bool get_use_underline () noexcept;

// void gtk_button_leave (GtkButton* button);
// void gtk_button_leave (::GtkButton* button);
// IGNORE; deprecated

// void gtk_button_pressed (GtkButton* button);
// void gtk_button_pressed (::GtkButton* button);
// IGNORE; deprecated

// void gtk_button_released (GtkButton* button);
// void gtk_button_released (::GtkButton* button);
// IGNORE; deprecated

// void gtk_button_set_alignment (GtkButton* button, gfloat xalign, gfloat yalign);
// void gtk_button_set_alignment (::GtkButton* button, gfloat xalign, gfloat yalign);
// IGNORE; deprecated

// void gtk_button_set_always_show_image (GtkButton* button, gboolean always_show);
// void gtk_button_set_always_show_image (::GtkButton* button, gboolean always_show);
GI_INLINE_DECL void set_always_show_image (gboolean always_show) noexcept;

// void gtk_button_set_focus_on_click (GtkButton* button, gboolean focus_on_click);
// void gtk_button_set_focus_on_click (::GtkButton* button, gboolean focus_on_click);
// IGNORE; deprecated

// void gtk_button_set_image (GtkButton* button, GtkWidget* image);
// void gtk_button_set_image (::GtkButton* button, ::GtkWidget* image);
GI_INLINE_DECL void set_image (Gtk::Widget image) noexcept;
GI_INLINE_DECL void set_image () noexcept;

// void gtk_button_set_image_position (GtkButton* button, GtkPositionType position);
// void gtk_button_set_image_position (::GtkButton* button, ::GtkPositionType position);
GI_INLINE_DECL void set_image_position (Gtk::PositionType position) noexcept;

// void gtk_button_set_label (GtkButton* button, const gchar* label);
// void gtk_button_set_label (::GtkButton* button, const char* label);
GI_INLINE_DECL void set_label (const std::string & label) noexcept;

// void gtk_button_set_relief (GtkButton* button, GtkReliefStyle relief);
// void gtk_button_set_relief (::GtkButton* button, ::GtkReliefStyle relief);
GI_INLINE_DECL void set_relief (Gtk::ReliefStyle relief) noexcept;

// void gtk_button_set_use_stock (GtkButton* button, gboolean use_stock);
// void gtk_button_set_use_stock (::GtkButton* button, gboolean use_stock);
// IGNORE; deprecated

// void gtk_button_set_use_underline (GtkButton* button, gboolean use_underline);
// void gtk_button_set_use_underline (::GtkButton* button, gboolean use_underline);
GI_INLINE_DECL void set_use_underline (gboolean use_underline) noexcept;

gi::property_proxy<bool, base::ButtonBase> property_always_show_image()
{ return gi::property_proxy<bool, base::ButtonBase> (*this, "always-show-image"); }
const gi::property_proxy<bool, base::ButtonBase> property_always_show_image() const
{ return gi::property_proxy<bool, base::ButtonBase> (*this, "always-show-image"); }

gi::property_proxy<Gtk::Widget, base::ButtonBase> property_image()
{ return gi::property_proxy<Gtk::Widget, base::ButtonBase> (*this, "image"); }
const gi::property_proxy<Gtk::Widget, base::ButtonBase> property_image() const
{ return gi::property_proxy<Gtk::Widget, base::ButtonBase> (*this, "image"); }

gi::property_proxy<Gtk::PositionType, base::ButtonBase> property_image_position()
{ return gi::property_proxy<Gtk::PositionType, base::ButtonBase> (*this, "image-position"); }
const gi::property_proxy<Gtk::PositionType, base::ButtonBase> property_image_position() const
{ return gi::property_proxy<Gtk::PositionType, base::ButtonBase> (*this, "image-position"); }

gi::property_proxy<std::string, base::ButtonBase> property_label()
{ return gi::property_proxy<std::string, base::ButtonBase> (*this, "label"); }
const gi::property_proxy<std::string, base::ButtonBase> property_label() const
{ return gi::property_proxy<std::string, base::ButtonBase> (*this, "label"); }

gi::property_proxy<Gtk::ReliefStyle, base::ButtonBase> property_relief()
{ return gi::property_proxy<Gtk::ReliefStyle, base::ButtonBase> (*this, "relief"); }
const gi::property_proxy<Gtk::ReliefStyle, base::ButtonBase> property_relief() const
{ return gi::property_proxy<Gtk::ReliefStyle, base::ButtonBase> (*this, "relief"); }

gi::property_proxy<bool, base::ButtonBase> property_use_stock()
{ return gi::property_proxy<bool, base::ButtonBase> (*this, "use-stock"); }
const gi::property_proxy<bool, base::ButtonBase> property_use_stock() const
{ return gi::property_proxy<bool, base::ButtonBase> (*this, "use-stock"); }

gi::property_proxy<bool, base::ButtonBase> property_use_underline()
{ return gi::property_proxy<bool, base::ButtonBase> (*this, "use-underline"); }
const gi::property_proxy<bool, base::ButtonBase> property_use_underline() const
{ return gi::property_proxy<bool, base::ButtonBase> (*this, "use-underline"); }

gi::property_proxy<gfloat, base::ButtonBase> property_xalign()
{ return gi::property_proxy<gfloat, base::ButtonBase> (*this, "xalign"); }
const gi::property_proxy<gfloat, base::ButtonBase> property_xalign() const
{ return gi::property_proxy<gfloat, base::ButtonBase> (*this, "xalign"); }

gi::property_proxy<gfloat, base::ButtonBase> property_yalign()
{ return gi::property_proxy<gfloat, base::ButtonBase> (*this, "yalign"); }
const gi::property_proxy<gfloat, base::ButtonBase> property_yalign() const
{ return gi::property_proxy<gfloat, base::ButtonBase> (*this, "yalign"); }

// signal activate
gi::signal_proxy<void(Gtk::Button)> signal_activate()
{ return gi::signal_proxy<void(Gtk::Button)> (*this, "activate"); }

// signal clicked
gi::signal_proxy<void(Gtk::Button)> signal_clicked()
{ return gi::signal_proxy<void(Gtk::Button)> (*this, "clicked"); }

// signal enter
// IGNORE; deprecated

// signal leave
// IGNORE; deprecated

// signal pressed
// IGNORE; deprecated

// signal released
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/button_extra_def.hpp>)
#include <gtk/button_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/button_extra.hpp>)
#include <gtk/button_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Button : public GI_GTK_BUTTON_BASE
{ typedef GI_GTK_BUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkButton>
{ typedef Gtk::Button type; }; 

} // namespace repository

} // namespace gi

#include "actionable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ButtonClassDef
{
typedef ButtonClassDef self;
public:
typedef Gtk::Button instance_type;
typedef ::GtkButtonClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Button::activate (GtkButton* button);
// void Button::activate (::GtkButton* button);
virtual void activate_ () noexcept = 0;

// void Button::clicked (GtkButton* button);
// void Button::clicked (::GtkButton* button);
virtual void clicked_ () noexcept = 0;

// void Button::enter (GtkButton* button);
// void Button::enter (::GtkButton* button);
// IGNORE; deprecated

// void Button::leave (GtkButton* button);
// void Button::leave (::GtkButton* button);
// IGNORE; deprecated

// void Button::pressed (GtkButton* button);
// void Button::pressed (::GtkButton* button);
// IGNORE; deprecated

// void Button::released (GtkButton* button);
// void Button::released (::GtkButton* button);
// IGNORE; deprecated


};

GI_CLASS_IMPL_BEGIN


class ButtonClass: public detail::ClassTemplate<Gtk::impl::internal::ButtonClassDef, Gtk::impl::internal::BinClass, Gtk::impl::internal::ActionableInterfaceClassImpl>
{
typedef ButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ButtonClassDef, Gtk::impl::internal::BinClass, Gtk::impl::internal::ActionableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ActionableInterfaceClassImpl GtkActionableInterface_type;


// void Button::activate (GtkButton* button);
// void Button::activate (::GtkButton* button);
GI_INLINE_DECL void activate_ () noexcept override;

// void Button::clicked (GtkButton* button);
// void Button::clicked (::GtkButton* button);
GI_INLINE_DECL void clicked_ () noexcept override;

// void Button::enter (GtkButton* button);
// void Button::enter (::GtkButton* button);
// IGNORE; deprecated

// void Button::leave (GtkButton* button);
// void Button::leave (::GtkButton* button);
// IGNORE; deprecated

// void Button::pressed (GtkButton* button);
// void Button::pressed (::GtkButton* button);
// IGNORE; deprecated

// void Button::released (GtkButton* button);
// void Button::released (::GtkButton* button);
// IGNORE; deprecated


};

} // namespace internal

GI_CLASS_IMPL_END

using ButtonImpl = detail::ObjectImpl<Button, internal::ButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
