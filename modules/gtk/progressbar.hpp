// AUTO-GENERATED

#ifndef _GI_GTK_PROGRESSBAR_HPP_
#define _GI_GTK_PROGRESSBAR_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Orientable;

class ProgressBar;

namespace base {


#define GI_GTK_PROGRESSBAR_BASE base::ProgressBarBase
class ProgressBarBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkProgressBar BaseObjectType;

ProgressBarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_progress_bar_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* gtk_progress_bar_new ();
// ::GtkProgressBar* gtk_progress_bar_new ();
static GI_INLINE_DECL Gtk::ProgressBar new_ () noexcept;

// PangoEllipsizeMode gtk_progress_bar_get_ellipsize (GtkProgressBar* pbar);
// ::PangoEllipsizeMode gtk_progress_bar_get_ellipsize (::GtkProgressBar* pbar);
GI_INLINE_DECL Pango::EllipsizeMode get_ellipsize () noexcept;

// gdouble gtk_progress_bar_get_fraction (GtkProgressBar* pbar);
// gdouble gtk_progress_bar_get_fraction (::GtkProgressBar* pbar);
GI_INLINE_DECL gdouble get_fraction () noexcept;

// gboolean gtk_progress_bar_get_inverted (GtkProgressBar* pbar);
// gboolean gtk_progress_bar_get_inverted (::GtkProgressBar* pbar);
GI_INLINE_DECL bool get_inverted () noexcept;

// gdouble gtk_progress_bar_get_pulse_step (GtkProgressBar* pbar);
// gdouble gtk_progress_bar_get_pulse_step (::GtkProgressBar* pbar);
GI_INLINE_DECL gdouble get_pulse_step () noexcept;

// gboolean gtk_progress_bar_get_show_text (GtkProgressBar* pbar);
// gboolean gtk_progress_bar_get_show_text (::GtkProgressBar* pbar);
GI_INLINE_DECL bool get_show_text () noexcept;

// const gchar* gtk_progress_bar_get_text (GtkProgressBar* pbar);
// const char* gtk_progress_bar_get_text (::GtkProgressBar* pbar);
GI_INLINE_DECL std::string get_text () noexcept;

// void gtk_progress_bar_pulse (GtkProgressBar* pbar);
// void gtk_progress_bar_pulse (::GtkProgressBar* pbar);
GI_INLINE_DECL void pulse () noexcept;

// void gtk_progress_bar_set_ellipsize (GtkProgressBar* pbar, PangoEllipsizeMode mode);
// void gtk_progress_bar_set_ellipsize (::GtkProgressBar* pbar, ::PangoEllipsizeMode mode);
GI_INLINE_DECL void set_ellipsize (Pango::EllipsizeMode mode) noexcept;

// void gtk_progress_bar_set_fraction (GtkProgressBar* pbar, gdouble fraction);
// void gtk_progress_bar_set_fraction (::GtkProgressBar* pbar, gdouble fraction);
GI_INLINE_DECL void set_fraction (gdouble fraction) noexcept;

// void gtk_progress_bar_set_inverted (GtkProgressBar* pbar, gboolean inverted);
// void gtk_progress_bar_set_inverted (::GtkProgressBar* pbar, gboolean inverted);
GI_INLINE_DECL void set_inverted (gboolean inverted) noexcept;

// void gtk_progress_bar_set_pulse_step (GtkProgressBar* pbar, gdouble fraction);
// void gtk_progress_bar_set_pulse_step (::GtkProgressBar* pbar, gdouble fraction);
GI_INLINE_DECL void set_pulse_step (gdouble fraction) noexcept;

// void gtk_progress_bar_set_show_text (GtkProgressBar* pbar, gboolean show_text);
// void gtk_progress_bar_set_show_text (::GtkProgressBar* pbar, gboolean show_text);
GI_INLINE_DECL void set_show_text (gboolean show_text) noexcept;

// void gtk_progress_bar_set_text (GtkProgressBar* pbar, const gchar* text);
// void gtk_progress_bar_set_text (::GtkProgressBar* pbar, const char* text);
GI_INLINE_DECL void set_text (const std::string & text) noexcept;
GI_INLINE_DECL void set_text () noexcept;

gi::property_proxy<Pango::EllipsizeMode, base::ProgressBarBase> property_ellipsize()
{ return gi::property_proxy<Pango::EllipsizeMode, base::ProgressBarBase> (*this, "ellipsize"); }
const gi::property_proxy<Pango::EllipsizeMode, base::ProgressBarBase> property_ellipsize() const
{ return gi::property_proxy<Pango::EllipsizeMode, base::ProgressBarBase> (*this, "ellipsize"); }

gi::property_proxy<gdouble, base::ProgressBarBase> property_fraction()
{ return gi::property_proxy<gdouble, base::ProgressBarBase> (*this, "fraction"); }
const gi::property_proxy<gdouble, base::ProgressBarBase> property_fraction() const
{ return gi::property_proxy<gdouble, base::ProgressBarBase> (*this, "fraction"); }

gi::property_proxy<bool, base::ProgressBarBase> property_inverted()
{ return gi::property_proxy<bool, base::ProgressBarBase> (*this, "inverted"); }
const gi::property_proxy<bool, base::ProgressBarBase> property_inverted() const
{ return gi::property_proxy<bool, base::ProgressBarBase> (*this, "inverted"); }

gi::property_proxy<gdouble, base::ProgressBarBase> property_pulse_step()
{ return gi::property_proxy<gdouble, base::ProgressBarBase> (*this, "pulse-step"); }
const gi::property_proxy<gdouble, base::ProgressBarBase> property_pulse_step() const
{ return gi::property_proxy<gdouble, base::ProgressBarBase> (*this, "pulse-step"); }

gi::property_proxy<bool, base::ProgressBarBase> property_show_text()
{ return gi::property_proxy<bool, base::ProgressBarBase> (*this, "show-text"); }
const gi::property_proxy<bool, base::ProgressBarBase> property_show_text() const
{ return gi::property_proxy<bool, base::ProgressBarBase> (*this, "show-text"); }

gi::property_proxy<std::string, base::ProgressBarBase> property_text()
{ return gi::property_proxy<std::string, base::ProgressBarBase> (*this, "text"); }
const gi::property_proxy<std::string, base::ProgressBarBase> property_text() const
{ return gi::property_proxy<std::string, base::ProgressBarBase> (*this, "text"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/progressbar_extra_def.hpp>)
#include <gtk/progressbar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/progressbar_extra.hpp>)
#include <gtk/progressbar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ProgressBar : public GI_GTK_PROGRESSBAR_BASE
{ typedef GI_GTK_PROGRESSBAR_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkProgressBar>
{ typedef Gtk::ProgressBar type; }; 

} // namespace repository

} // namespace gi

#include "orientable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ProgressBarClassDef
{
typedef ProgressBarClassDef self;
public:
typedef Gtk::ProgressBar instance_type;
typedef ::GtkProgressBarClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ProgressBarClass: public detail::ClassTemplate<Gtk::impl::internal::ProgressBarClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
typedef ProgressBarClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ProgressBarClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using ProgressBarImpl = detail::ObjectImpl<ProgressBar, internal::ProgressBarClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
