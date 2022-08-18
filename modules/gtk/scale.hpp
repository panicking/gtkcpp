// AUTO-GENERATED

#ifndef _GI_GTK_SCALE_HPP_
#define _GI_GTK_SCALE_HPP_

#include "range.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Adjustment;

class Scale;

namespace base {


#define GI_GTK_SCALE_BASE base::ScaleBase
class ScaleBase : public Gtk::Range
{
typedef Gtk::Range super_type;
public:
typedef ::GtkScale BaseObjectType;

ScaleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_scale_get_type(); } 

// GtkWidget* gtk_scale_new (GtkOrientation orientation, GtkAdjustment* adjustment);
// ::GtkScale* gtk_scale_new (::GtkOrientation orientation, ::GtkAdjustment* adjustment);
static GI_INLINE_DECL Gtk::Scale new_ (Gtk::Orientation orientation, Gtk::Adjustment adjustment) noexcept;
static GI_INLINE_DECL Gtk::Scale new_ (Gtk::Orientation orientation) noexcept;

// GtkWidget* gtk_scale_new_with_range (GtkOrientation orientation, gdouble min, gdouble max, gdouble step);
// ::GtkScale* gtk_scale_new_with_range (::GtkOrientation orientation, gdouble min, gdouble max, gdouble step);
static GI_INLINE_DECL Gtk::Scale new_with_range (Gtk::Orientation orientation, gdouble min, gdouble max, gdouble step) noexcept;

// void gtk_scale_add_mark (GtkScale* scale, gdouble value, GtkPositionType position, const gchar* markup);
// void gtk_scale_add_mark (::GtkScale* scale, gdouble value, ::GtkPositionType position, const char* markup);
GI_INLINE_DECL void add_mark (gdouble value, Gtk::PositionType position, const std::string & markup) noexcept;
GI_INLINE_DECL void add_mark (gdouble value, Gtk::PositionType position) noexcept;

// void gtk_scale_clear_marks (GtkScale* scale);
// void gtk_scale_clear_marks (::GtkScale* scale);
GI_INLINE_DECL void clear_marks () noexcept;

// gint gtk_scale_get_digits (GtkScale* scale);
// gint gtk_scale_get_digits (::GtkScale* scale);
GI_INLINE_DECL gint get_digits () noexcept;

// gboolean gtk_scale_get_draw_value (GtkScale* scale);
// gboolean gtk_scale_get_draw_value (::GtkScale* scale);
GI_INLINE_DECL bool get_draw_value () noexcept;

// gboolean gtk_scale_get_has_origin (GtkScale* scale);
// gboolean gtk_scale_get_has_origin (::GtkScale* scale);
GI_INLINE_DECL bool get_has_origin () noexcept;

// PangoLayout* gtk_scale_get_layout (GtkScale* scale);
// ::PangoLayout* gtk_scale_get_layout (::GtkScale* scale);
GI_INLINE_DECL Pango::Layout get_layout () noexcept;

// void gtk_scale_get_layout_offsets (GtkScale* scale, gint* x, gint* y);
// void gtk_scale_get_layout_offsets (::GtkScale* scale, gint* x, gint* y);
GI_INLINE_DECL void get_layout_offsets (gint * x = nullptr, gint * y = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_layout_offsets () noexcept;

// GtkPositionType gtk_scale_get_value_pos (GtkScale* scale);
// ::GtkPositionType gtk_scale_get_value_pos (::GtkScale* scale);
GI_INLINE_DECL Gtk::PositionType get_value_pos () noexcept;

// void gtk_scale_set_digits (GtkScale* scale, gint digits);
// void gtk_scale_set_digits (::GtkScale* scale, gint digits);
GI_INLINE_DECL void set_digits (gint digits) noexcept;

// void gtk_scale_set_draw_value (GtkScale* scale, gboolean draw_value);
// void gtk_scale_set_draw_value (::GtkScale* scale, gboolean draw_value);
GI_INLINE_DECL void set_draw_value (gboolean draw_value) noexcept;

// void gtk_scale_set_has_origin (GtkScale* scale, gboolean has_origin);
// void gtk_scale_set_has_origin (::GtkScale* scale, gboolean has_origin);
GI_INLINE_DECL void set_has_origin (gboolean has_origin) noexcept;

// void gtk_scale_set_value_pos (GtkScale* scale, GtkPositionType pos);
// void gtk_scale_set_value_pos (::GtkScale* scale, ::GtkPositionType pos);
GI_INLINE_DECL void set_value_pos (Gtk::PositionType pos) noexcept;

gi::property_proxy<gint, base::ScaleBase> property_digits()
{ return gi::property_proxy<gint, base::ScaleBase> (*this, "digits"); }
const gi::property_proxy<gint, base::ScaleBase> property_digits() const
{ return gi::property_proxy<gint, base::ScaleBase> (*this, "digits"); }

gi::property_proxy<bool, base::ScaleBase> property_draw_value()
{ return gi::property_proxy<bool, base::ScaleBase> (*this, "draw-value"); }
const gi::property_proxy<bool, base::ScaleBase> property_draw_value() const
{ return gi::property_proxy<bool, base::ScaleBase> (*this, "draw-value"); }

gi::property_proxy<bool, base::ScaleBase> property_has_origin()
{ return gi::property_proxy<bool, base::ScaleBase> (*this, "has-origin"); }
const gi::property_proxy<bool, base::ScaleBase> property_has_origin() const
{ return gi::property_proxy<bool, base::ScaleBase> (*this, "has-origin"); }

gi::property_proxy<Gtk::PositionType, base::ScaleBase> property_value_pos()
{ return gi::property_proxy<Gtk::PositionType, base::ScaleBase> (*this, "value-pos"); }
const gi::property_proxy<Gtk::PositionType, base::ScaleBase> property_value_pos() const
{ return gi::property_proxy<Gtk::PositionType, base::ScaleBase> (*this, "value-pos"); }

// signal format-value
gi::signal_proxy<std::string(Gtk::Scale, gdouble value)> signal_format_value()
{ return gi::signal_proxy<std::string(Gtk::Scale, gdouble value)> (*this, "format-value"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scale_extra_def.hpp>)
#include <gtk/scale_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scale_extra.hpp>)
#include <gtk/scale_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Scale : public GI_GTK_SCALE_BASE
{ typedef GI_GTK_SCALE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkScale>
{ typedef Gtk::Scale type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ScaleClassDef
{
typedef ScaleClassDef self;
public:
typedef Gtk::Scale instance_type;
typedef ::GtkScaleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Scale::draw_value (GtkScale* scale);
// void Scale::draw_value (::GtkScale* scale);
virtual void draw_value_ () noexcept = 0;

// gchar* Scale::format_value (GtkScale* scale, gdouble value);
// char* Scale::format_value (::GtkScale* scale, gdouble value);
virtual std::string format_value_ (gdouble value) noexcept = 0;

// void Scale::get_layout_offsets (GtkScale* scale, gint* x, gint* y);
// void Scale::get_layout_offsets (::GtkScale* scale, gint* x, gint* y);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported


};

GI_CLASS_IMPL_BEGIN


class ScaleClass: public detail::ClassTemplate<Gtk::impl::internal::ScaleClassDef, Gtk::impl::internal::RangeClass>
{
typedef ScaleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ScaleClassDef, Gtk::impl::internal::RangeClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Scale::draw_value (GtkScale* scale);
// void Scale::draw_value (::GtkScale* scale);
GI_INLINE_DECL void draw_value_ () noexcept override;

// gchar* Scale::format_value (GtkScale* scale, gdouble value);
// char* Scale::format_value (::GtkScale* scale, gdouble value);
GI_INLINE_DECL std::string format_value_ (gdouble value) noexcept override;

// void Scale::get_layout_offsets (GtkScale* scale, gint* x, gint* y);
// void Scale::get_layout_offsets (::GtkScale* scale, gint* x, gint* y);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using ScaleImpl = detail::ObjectImpl<Scale, internal::ScaleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
