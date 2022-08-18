// AUTO-GENERATED

#ifndef _GI_GTK_HSV_HPP_
#define _GI_GTK_HSV_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class HSV;

namespace base {


#define GI_GTK_HSV_BASE base::HSVBase
class HSVBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkHSV BaseObjectType;

HSVBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_hsv_get_type(); } 

// GtkWidget* gtk_hsv_new ();
// ::GtkHSV* gtk_hsv_new ();
static GI_INLINE_DECL Gtk::HSV new_ () noexcept;

// void gtk_hsv_to_rgb (gdouble h, gdouble s, gdouble v, gdouble* r, gdouble* g, gdouble* b);
// void gtk_hsv_to_rgb (gdouble h, gdouble s, gdouble v, gdouble* r, gdouble* g, gdouble* b);
static GI_INLINE_DECL void to_rgb (gdouble h, gdouble s, gdouble v, gdouble & r, gdouble & g, gdouble & b) noexcept;
static GI_INLINE_DECL std::tuple<gdouble, gdouble, gdouble> to_rgb (gdouble h, gdouble s, gdouble v) noexcept;

// void gtk_hsv_get_color (GtkHSV* hsv, gdouble* h, gdouble* s, gdouble* v);
// void gtk_hsv_get_color (::GtkHSV* hsv, gdouble* h, gdouble* s, gdouble* v);
GI_INLINE_DECL void get_color (gdouble & h, gdouble & s, gdouble & v) noexcept;
GI_INLINE_DECL std::tuple<gdouble, gdouble, gdouble> get_color () noexcept;

// void gtk_hsv_get_metrics (GtkHSV* hsv, gint* size, gint* ring_width);
// void gtk_hsv_get_metrics (::GtkHSV* hsv, gint* size, gint* ring_width);
GI_INLINE_DECL void get_metrics (gint & size, gint & ring_width) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_metrics () noexcept;

// gboolean gtk_hsv_is_adjusting (GtkHSV* hsv);
// gboolean gtk_hsv_is_adjusting (::GtkHSV* hsv);
GI_INLINE_DECL bool is_adjusting () noexcept;

// void gtk_hsv_set_color (GtkHSV* hsv, double h, double s, double v);
// void gtk_hsv_set_color (::GtkHSV* hsv, gdouble h, gdouble s, gdouble v);
GI_INLINE_DECL void set_color (gdouble h, gdouble s, gdouble v) noexcept;

// void gtk_hsv_set_metrics (GtkHSV* hsv, gint size, gint ring_width);
// void gtk_hsv_set_metrics (::GtkHSV* hsv, gint size, gint ring_width);
GI_INLINE_DECL void set_metrics (gint size, gint ring_width) noexcept;

// signal changed
gi::signal_proxy<void(Gtk::HSV)> signal_changed()
{ return gi::signal_proxy<void(Gtk::HSV)> (*this, "changed"); }

// signal move
gi::signal_proxy<void(Gtk::HSV, Gtk::DirectionType object)> signal_move()
{ return gi::signal_proxy<void(Gtk::HSV, Gtk::DirectionType object)> (*this, "move"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/hsv_extra_def.hpp>)
#include <gtk/hsv_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/hsv_extra.hpp>)
#include <gtk/hsv_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class HSV : public GI_GTK_HSV_BASE
{ typedef GI_GTK_HSV_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkHSV>
{ typedef Gtk::HSV type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class HSVClassDef
{
typedef HSVClassDef self;
public:
typedef Gtk::HSV instance_type;
typedef ::GtkHSVClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void HSV::changed (GtkHSV* hsv);
// void HSV::changed (::GtkHSV* hsv);
virtual void changed_ () noexcept = 0;

// void HSV::move (GtkHSV* hsv, GtkDirectionType type);
// void HSV::move (::GtkHSV* hsv, ::GtkDirectionType type);
virtual void move_ (Gtk::DirectionType type) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class HSVClass: public detail::ClassTemplate<Gtk::impl::internal::HSVClassDef, Gtk::impl::internal::WidgetClass>
{
typedef HSVClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::HSVClassDef, Gtk::impl::internal::WidgetClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void HSV::changed (GtkHSV* hsv);
// void HSV::changed (::GtkHSV* hsv);
GI_INLINE_DECL void changed_ () noexcept override;

// void HSV::move (GtkHSV* hsv, GtkDirectionType type);
// void HSV::move (::GtkHSV* hsv, ::GtkDirectionType type);
GI_INLINE_DECL void move_ (Gtk::DirectionType type) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using HSVImpl = detail::ObjectImpl<HSV, internal::HSVClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
