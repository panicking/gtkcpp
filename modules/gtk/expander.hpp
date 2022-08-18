// AUTO-GENERATED

#ifndef _GI_GTK_EXPANDER_HPP_
#define _GI_GTK_EXPANDER_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class Expander;

namespace base {


#define GI_GTK_EXPANDER_BASE base::ExpanderBase
class ExpanderBase : public Gtk::Bin
{
typedef Gtk::Bin super_type;
public:
typedef ::GtkExpander BaseObjectType;

ExpanderBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_expander_get_type(); } 

// GtkWidget* gtk_expander_new (const gchar* label);
// ::GtkExpander* gtk_expander_new (const char* label);
static GI_INLINE_DECL Gtk::Expander new_ (const std::string & label) noexcept;
static GI_INLINE_DECL Gtk::Expander new_ () noexcept;

// GtkWidget* gtk_expander_new_with_mnemonic (const gchar* label);
// ::GtkExpander* gtk_expander_new_with_mnemonic (const char* label);
static GI_INLINE_DECL Gtk::Expander new_with_mnemonic (const std::string & label) noexcept;
static GI_INLINE_DECL Gtk::Expander new_with_mnemonic () noexcept;

// gboolean gtk_expander_get_expanded (GtkExpander* expander);
// gboolean gtk_expander_get_expanded (::GtkExpander* expander);
GI_INLINE_DECL bool get_expanded () noexcept;

// const gchar* gtk_expander_get_label (GtkExpander* expander);
// const char* gtk_expander_get_label (::GtkExpander* expander);
GI_INLINE_DECL std::string get_label () noexcept;

// gboolean gtk_expander_get_label_fill (GtkExpander* expander);
// gboolean gtk_expander_get_label_fill (::GtkExpander* expander);
GI_INLINE_DECL bool get_label_fill () noexcept;

// GtkWidget* gtk_expander_get_label_widget (GtkExpander* expander);
// ::GtkWidget* gtk_expander_get_label_widget (::GtkExpander* expander);
GI_INLINE_DECL Gtk::Widget get_label_widget () noexcept;

// gboolean gtk_expander_get_resize_toplevel (GtkExpander* expander);
// gboolean gtk_expander_get_resize_toplevel (::GtkExpander* expander);
GI_INLINE_DECL bool get_resize_toplevel () noexcept;

// gint gtk_expander_get_spacing (GtkExpander* expander);
// gint gtk_expander_get_spacing (::GtkExpander* expander);
// IGNORE; deprecated

// gboolean gtk_expander_get_use_markup (GtkExpander* expander);
// gboolean gtk_expander_get_use_markup (::GtkExpander* expander);
GI_INLINE_DECL bool get_use_markup () noexcept;

// gboolean gtk_expander_get_use_underline (GtkExpander* expander);
// gboolean gtk_expander_get_use_underline (::GtkExpander* expander);
GI_INLINE_DECL bool get_use_underline () noexcept;

// void gtk_expander_set_expanded (GtkExpander* expander, gboolean expanded);
// void gtk_expander_set_expanded (::GtkExpander* expander, gboolean expanded);
GI_INLINE_DECL void set_expanded (gboolean expanded) noexcept;

// void gtk_expander_set_label (GtkExpander* expander, const gchar* label);
// void gtk_expander_set_label (::GtkExpander* expander, const char* label);
GI_INLINE_DECL void set_label (const std::string & label) noexcept;
GI_INLINE_DECL void set_label () noexcept;

// void gtk_expander_set_label_fill (GtkExpander* expander, gboolean label_fill);
// void gtk_expander_set_label_fill (::GtkExpander* expander, gboolean label_fill);
GI_INLINE_DECL void set_label_fill (gboolean label_fill) noexcept;

// void gtk_expander_set_label_widget (GtkExpander* expander, GtkWidget* label_widget);
// void gtk_expander_set_label_widget (::GtkExpander* expander, ::GtkWidget* label_widget);
GI_INLINE_DECL void set_label_widget (Gtk::Widget label_widget) noexcept;
GI_INLINE_DECL void set_label_widget () noexcept;

// void gtk_expander_set_resize_toplevel (GtkExpander* expander, gboolean resize_toplevel);
// void gtk_expander_set_resize_toplevel (::GtkExpander* expander, gboolean resize_toplevel);
GI_INLINE_DECL void set_resize_toplevel (gboolean resize_toplevel) noexcept;

// void gtk_expander_set_spacing (GtkExpander* expander, gint spacing);
// void gtk_expander_set_spacing (::GtkExpander* expander, gint spacing);
// IGNORE; deprecated

// void gtk_expander_set_use_markup (GtkExpander* expander, gboolean use_markup);
// void gtk_expander_set_use_markup (::GtkExpander* expander, gboolean use_markup);
GI_INLINE_DECL void set_use_markup (gboolean use_markup) noexcept;

// void gtk_expander_set_use_underline (GtkExpander* expander, gboolean use_underline);
// void gtk_expander_set_use_underline (::GtkExpander* expander, gboolean use_underline);
GI_INLINE_DECL void set_use_underline (gboolean use_underline) noexcept;

gi::property_proxy<bool, base::ExpanderBase> property_expanded()
{ return gi::property_proxy<bool, base::ExpanderBase> (*this, "expanded"); }
const gi::property_proxy<bool, base::ExpanderBase> property_expanded() const
{ return gi::property_proxy<bool, base::ExpanderBase> (*this, "expanded"); }

gi::property_proxy<std::string, base::ExpanderBase> property_label()
{ return gi::property_proxy<std::string, base::ExpanderBase> (*this, "label"); }
const gi::property_proxy<std::string, base::ExpanderBase> property_label() const
{ return gi::property_proxy<std::string, base::ExpanderBase> (*this, "label"); }

gi::property_proxy<bool, base::ExpanderBase> property_label_fill()
{ return gi::property_proxy<bool, base::ExpanderBase> (*this, "label-fill"); }
const gi::property_proxy<bool, base::ExpanderBase> property_label_fill() const
{ return gi::property_proxy<bool, base::ExpanderBase> (*this, "label-fill"); }

gi::property_proxy<Gtk::Widget, base::ExpanderBase> property_label_widget()
{ return gi::property_proxy<Gtk::Widget, base::ExpanderBase> (*this, "label-widget"); }
const gi::property_proxy<Gtk::Widget, base::ExpanderBase> property_label_widget() const
{ return gi::property_proxy<Gtk::Widget, base::ExpanderBase> (*this, "label-widget"); }

gi::property_proxy<bool, base::ExpanderBase> property_resize_toplevel()
{ return gi::property_proxy<bool, base::ExpanderBase> (*this, "resize-toplevel"); }
const gi::property_proxy<bool, base::ExpanderBase> property_resize_toplevel() const
{ return gi::property_proxy<bool, base::ExpanderBase> (*this, "resize-toplevel"); }

gi::property_proxy<gint, base::ExpanderBase> property_spacing()
{ return gi::property_proxy<gint, base::ExpanderBase> (*this, "spacing"); }
const gi::property_proxy<gint, base::ExpanderBase> property_spacing() const
{ return gi::property_proxy<gint, base::ExpanderBase> (*this, "spacing"); }

gi::property_proxy<bool, base::ExpanderBase> property_use_markup()
{ return gi::property_proxy<bool, base::ExpanderBase> (*this, "use-markup"); }
const gi::property_proxy<bool, base::ExpanderBase> property_use_markup() const
{ return gi::property_proxy<bool, base::ExpanderBase> (*this, "use-markup"); }

gi::property_proxy<bool, base::ExpanderBase> property_use_underline()
{ return gi::property_proxy<bool, base::ExpanderBase> (*this, "use-underline"); }
const gi::property_proxy<bool, base::ExpanderBase> property_use_underline() const
{ return gi::property_proxy<bool, base::ExpanderBase> (*this, "use-underline"); }

// signal activate
gi::signal_proxy<void(Gtk::Expander)> signal_activate()
{ return gi::signal_proxy<void(Gtk::Expander)> (*this, "activate"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/expander_extra_def.hpp>)
#include <gtk/expander_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/expander_extra.hpp>)
#include <gtk/expander_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Expander : public GI_GTK_EXPANDER_BASE
{ typedef GI_GTK_EXPANDER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkExpander>
{ typedef Gtk::Expander type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ExpanderClassDef
{
typedef ExpanderClassDef self;
public:
typedef Gtk::Expander instance_type;
typedef ::GtkExpanderClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Expander::activate (GtkExpander* expander);
// void Expander::activate (::GtkExpander* expander);
virtual void activate_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ExpanderClass: public detail::ClassTemplate<Gtk::impl::internal::ExpanderClassDef, Gtk::impl::internal::BinClass>
{
typedef ExpanderClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ExpanderClassDef, Gtk::impl::internal::BinClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Expander::activate (GtkExpander* expander);
// void Expander::activate (::GtkExpander* expander);
GI_INLINE_DECL void activate_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ExpanderImpl = detail::ObjectImpl<Expander, internal::ExpanderClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
