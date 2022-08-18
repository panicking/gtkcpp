// AUTO-GENERATED

#ifndef _GI_GTK_LABEL_HPP_
#define _GI_GTK_LABEL_HPP_

#include "misc.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Menu;
class Widget;

class Label;

namespace base {


#define GI_GTK_LABEL_BASE base::LabelBase
class LabelBase : public Gtk::Misc
{
typedef Gtk::Misc super_type;
public:
typedef ::GtkLabel BaseObjectType;

LabelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_label_get_type(); } 

// GtkWidget* gtk_label_new (const gchar* str);
// ::GtkLabel* gtk_label_new (const char* str);
static GI_INLINE_DECL Gtk::Label new_ (const std::string & str) noexcept;
static GI_INLINE_DECL Gtk::Label new_ () noexcept;

// GtkWidget* gtk_label_new_with_mnemonic (const gchar* str);
// ::GtkLabel* gtk_label_new_with_mnemonic (const char* str);
static GI_INLINE_DECL Gtk::Label new_with_mnemonic (const std::string & str) noexcept;
static GI_INLINE_DECL Gtk::Label new_with_mnemonic () noexcept;

// gdouble gtk_label_get_angle (GtkLabel* label);
// gdouble gtk_label_get_angle (::GtkLabel* label);
GI_INLINE_DECL gdouble get_angle () noexcept;

// PangoAttrList* gtk_label_get_attributes (GtkLabel* label);
// ::PangoAttrList* gtk_label_get_attributes (::GtkLabel* label);
GI_INLINE_DECL Pango::AttrList get_attributes () noexcept;

// const gchar* gtk_label_get_current_uri (GtkLabel* label);
// const char* gtk_label_get_current_uri (::GtkLabel* label);
GI_INLINE_DECL std::string get_current_uri () noexcept;

// PangoEllipsizeMode gtk_label_get_ellipsize (GtkLabel* label);
// ::PangoEllipsizeMode gtk_label_get_ellipsize (::GtkLabel* label);
GI_INLINE_DECL Pango::EllipsizeMode get_ellipsize () noexcept;

// GtkJustification gtk_label_get_justify (GtkLabel* label);
// ::GtkJustification gtk_label_get_justify (::GtkLabel* label);
GI_INLINE_DECL Gtk::Justification get_justify () noexcept;

// const gchar* gtk_label_get_label (GtkLabel* label);
// const char* gtk_label_get_label (::GtkLabel* label);
GI_INLINE_DECL std::string get_label () noexcept;

// PangoLayout* gtk_label_get_layout (GtkLabel* label);
// ::PangoLayout* gtk_label_get_layout (::GtkLabel* label);
GI_INLINE_DECL Pango::Layout get_layout () noexcept;

// void gtk_label_get_layout_offsets (GtkLabel* label, gint* x, gint* y);
// void gtk_label_get_layout_offsets (::GtkLabel* label, gint* x, gint* y);
GI_INLINE_DECL void get_layout_offsets (gint * x = nullptr, gint * y = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_layout_offsets () noexcept;

// gboolean gtk_label_get_line_wrap (GtkLabel* label);
// gboolean gtk_label_get_line_wrap (::GtkLabel* label);
GI_INLINE_DECL bool get_line_wrap () noexcept;

// PangoWrapMode gtk_label_get_line_wrap_mode (GtkLabel* label);
// ::PangoWrapMode gtk_label_get_line_wrap_mode (::GtkLabel* label);
GI_INLINE_DECL Pango::WrapMode get_line_wrap_mode () noexcept;

// gint gtk_label_get_lines (GtkLabel* label);
// gint gtk_label_get_lines (::GtkLabel* label);
GI_INLINE_DECL gint get_lines () noexcept;

// gint gtk_label_get_max_width_chars (GtkLabel* label);
// gint gtk_label_get_max_width_chars (::GtkLabel* label);
GI_INLINE_DECL gint get_max_width_chars () noexcept;

// guint gtk_label_get_mnemonic_keyval (GtkLabel* label);
// guint gtk_label_get_mnemonic_keyval (::GtkLabel* label);
GI_INLINE_DECL guint get_mnemonic_keyval () noexcept;

// GtkWidget* gtk_label_get_mnemonic_widget (GtkLabel* label);
// ::GtkWidget* gtk_label_get_mnemonic_widget (::GtkLabel* label);
GI_INLINE_DECL Gtk::Widget get_mnemonic_widget () noexcept;

// gboolean gtk_label_get_selectable (GtkLabel* label);
// gboolean gtk_label_get_selectable (::GtkLabel* label);
GI_INLINE_DECL bool get_selectable () noexcept;

// gboolean gtk_label_get_selection_bounds (GtkLabel* label, gint* start, gint* end);
// gboolean gtk_label_get_selection_bounds (::GtkLabel* label, gint* start, gint* end);
GI_INLINE_DECL bool get_selection_bounds (gint & start, gint & end) noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint> get_selection_bounds () noexcept;

// gboolean gtk_label_get_single_line_mode (GtkLabel* label);
// gboolean gtk_label_get_single_line_mode (::GtkLabel* label);
GI_INLINE_DECL bool get_single_line_mode () noexcept;

// const gchar* gtk_label_get_text (GtkLabel* label);
// const char* gtk_label_get_text (::GtkLabel* label);
GI_INLINE_DECL std::string get_text () noexcept;

// gboolean gtk_label_get_track_visited_links (GtkLabel* label);
// gboolean gtk_label_get_track_visited_links (::GtkLabel* label);
GI_INLINE_DECL bool get_track_visited_links () noexcept;

// gboolean gtk_label_get_use_markup (GtkLabel* label);
// gboolean gtk_label_get_use_markup (::GtkLabel* label);
GI_INLINE_DECL bool get_use_markup () noexcept;

// gboolean gtk_label_get_use_underline (GtkLabel* label);
// gboolean gtk_label_get_use_underline (::GtkLabel* label);
GI_INLINE_DECL bool get_use_underline () noexcept;

// gint gtk_label_get_width_chars (GtkLabel* label);
// gint gtk_label_get_width_chars (::GtkLabel* label);
GI_INLINE_DECL gint get_width_chars () noexcept;

// gfloat gtk_label_get_xalign (GtkLabel* label);
// gfloat gtk_label_get_xalign (::GtkLabel* label);
GI_INLINE_DECL gfloat get_xalign () noexcept;

// gfloat gtk_label_get_yalign (GtkLabel* label);
// gfloat gtk_label_get_yalign (::GtkLabel* label);
GI_INLINE_DECL gfloat get_yalign () noexcept;

// void gtk_label_select_region (GtkLabel* label, gint start_offset, gint end_offset);
// void gtk_label_select_region (::GtkLabel* label, gint start_offset, gint end_offset);
GI_INLINE_DECL void select_region (gint start_offset, gint end_offset) noexcept;

// void gtk_label_set_angle (GtkLabel* label, gdouble angle);
// void gtk_label_set_angle (::GtkLabel* label, gdouble angle);
GI_INLINE_DECL void set_angle (gdouble angle) noexcept;

// void gtk_label_set_attributes (GtkLabel* label, PangoAttrList* attrs);
// void gtk_label_set_attributes (::GtkLabel* label, ::PangoAttrList* attrs);
GI_INLINE_DECL void set_attributes (Pango::AttrList attrs) noexcept;
GI_INLINE_DECL void set_attributes () noexcept;

// void gtk_label_set_ellipsize (GtkLabel* label, PangoEllipsizeMode mode);
// void gtk_label_set_ellipsize (::GtkLabel* label, ::PangoEllipsizeMode mode);
GI_INLINE_DECL void set_ellipsize (Pango::EllipsizeMode mode) noexcept;

// void gtk_label_set_justify (GtkLabel* label, GtkJustification jtype);
// void gtk_label_set_justify (::GtkLabel* label, ::GtkJustification jtype);
GI_INLINE_DECL void set_justify (Gtk::Justification jtype) noexcept;

// void gtk_label_set_label (GtkLabel* label, const gchar* str);
// void gtk_label_set_label (::GtkLabel* label, const char* str);
GI_INLINE_DECL void set_label (const std::string & str) noexcept;

// void gtk_label_set_line_wrap (GtkLabel* label, gboolean wrap);
// void gtk_label_set_line_wrap (::GtkLabel* label, gboolean wrap);
GI_INLINE_DECL void set_line_wrap (gboolean wrap) noexcept;

// void gtk_label_set_line_wrap_mode (GtkLabel* label, PangoWrapMode wrap_mode);
// void gtk_label_set_line_wrap_mode (::GtkLabel* label, ::PangoWrapMode wrap_mode);
GI_INLINE_DECL void set_line_wrap_mode (Pango::WrapMode wrap_mode) noexcept;

// void gtk_label_set_lines (GtkLabel* label, gint lines);
// void gtk_label_set_lines (::GtkLabel* label, gint lines);
GI_INLINE_DECL void set_lines (gint lines) noexcept;

// void gtk_label_set_markup (GtkLabel* label, const gchar* str);
// void gtk_label_set_markup (::GtkLabel* label, const char* str);
GI_INLINE_DECL void set_markup (const std::string & str) noexcept;

// void gtk_label_set_markup_with_mnemonic (GtkLabel* label, const gchar* str);
// void gtk_label_set_markup_with_mnemonic (::GtkLabel* label, const char* str);
GI_INLINE_DECL void set_markup_with_mnemonic (const std::string & str) noexcept;

// void gtk_label_set_max_width_chars (GtkLabel* label, gint n_chars);
// void gtk_label_set_max_width_chars (::GtkLabel* label, gint n_chars);
GI_INLINE_DECL void set_max_width_chars (gint n_chars) noexcept;

// void gtk_label_set_mnemonic_widget (GtkLabel* label, GtkWidget* widget);
// void gtk_label_set_mnemonic_widget (::GtkLabel* label, ::GtkWidget* widget);
GI_INLINE_DECL void set_mnemonic_widget (Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_mnemonic_widget () noexcept;

// void gtk_label_set_pattern (GtkLabel* label, const gchar* pattern);
// void gtk_label_set_pattern (::GtkLabel* label, const char* pattern);
GI_INLINE_DECL void set_pattern (const std::string & pattern) noexcept;

// void gtk_label_set_selectable (GtkLabel* label, gboolean setting);
// void gtk_label_set_selectable (::GtkLabel* label, gboolean setting);
GI_INLINE_DECL void set_selectable (gboolean setting) noexcept;

// void gtk_label_set_single_line_mode (GtkLabel* label, gboolean single_line_mode);
// void gtk_label_set_single_line_mode (::GtkLabel* label, gboolean single_line_mode);
GI_INLINE_DECL void set_single_line_mode (gboolean single_line_mode) noexcept;

// void gtk_label_set_text (GtkLabel* label, const gchar* str);
// void gtk_label_set_text (::GtkLabel* label, const char* str);
GI_INLINE_DECL void set_text (const std::string & str) noexcept;

// void gtk_label_set_text_with_mnemonic (GtkLabel* label, const gchar* str);
// void gtk_label_set_text_with_mnemonic (::GtkLabel* label, const char* str);
GI_INLINE_DECL void set_text_with_mnemonic (const std::string & str) noexcept;

// void gtk_label_set_track_visited_links (GtkLabel* label, gboolean track_links);
// void gtk_label_set_track_visited_links (::GtkLabel* label, gboolean track_links);
GI_INLINE_DECL void set_track_visited_links (gboolean track_links) noexcept;

// void gtk_label_set_use_markup (GtkLabel* label, gboolean setting);
// void gtk_label_set_use_markup (::GtkLabel* label, gboolean setting);
GI_INLINE_DECL void set_use_markup (gboolean setting) noexcept;

// void gtk_label_set_use_underline (GtkLabel* label, gboolean setting);
// void gtk_label_set_use_underline (::GtkLabel* label, gboolean setting);
GI_INLINE_DECL void set_use_underline (gboolean setting) noexcept;

// void gtk_label_set_width_chars (GtkLabel* label, gint n_chars);
// void gtk_label_set_width_chars (::GtkLabel* label, gint n_chars);
GI_INLINE_DECL void set_width_chars (gint n_chars) noexcept;

// void gtk_label_set_xalign (GtkLabel* label, gfloat xalign);
// void gtk_label_set_xalign (::GtkLabel* label, gfloat xalign);
GI_INLINE_DECL void set_xalign (gfloat xalign) noexcept;

// void gtk_label_set_yalign (GtkLabel* label, gfloat yalign);
// void gtk_label_set_yalign (::GtkLabel* label, gfloat yalign);
GI_INLINE_DECL void set_yalign (gfloat yalign) noexcept;

gi::property_proxy<gdouble, base::LabelBase> property_angle()
{ return gi::property_proxy<gdouble, base::LabelBase> (*this, "angle"); }
const gi::property_proxy<gdouble, base::LabelBase> property_angle() const
{ return gi::property_proxy<gdouble, base::LabelBase> (*this, "angle"); }

gi::property_proxy<Pango::AttrList, base::LabelBase> property_attributes()
{ return gi::property_proxy<Pango::AttrList, base::LabelBase> (*this, "attributes"); }
const gi::property_proxy<Pango::AttrList, base::LabelBase> property_attributes() const
{ return gi::property_proxy<Pango::AttrList, base::LabelBase> (*this, "attributes"); }

gi::property_proxy<gint, base::LabelBase> property_cursor_position()
{ return gi::property_proxy<gint, base::LabelBase> (*this, "cursor-position"); }
const gi::property_proxy<gint, base::LabelBase> property_cursor_position() const
{ return gi::property_proxy<gint, base::LabelBase> (*this, "cursor-position"); }

gi::property_proxy<Pango::EllipsizeMode, base::LabelBase> property_ellipsize()
{ return gi::property_proxy<Pango::EllipsizeMode, base::LabelBase> (*this, "ellipsize"); }
const gi::property_proxy<Pango::EllipsizeMode, base::LabelBase> property_ellipsize() const
{ return gi::property_proxy<Pango::EllipsizeMode, base::LabelBase> (*this, "ellipsize"); }

gi::property_proxy<Gtk::Justification, base::LabelBase> property_justify()
{ return gi::property_proxy<Gtk::Justification, base::LabelBase> (*this, "justify"); }
const gi::property_proxy<Gtk::Justification, base::LabelBase> property_justify() const
{ return gi::property_proxy<Gtk::Justification, base::LabelBase> (*this, "justify"); }

gi::property_proxy<std::string, base::LabelBase> property_label()
{ return gi::property_proxy<std::string, base::LabelBase> (*this, "label"); }
const gi::property_proxy<std::string, base::LabelBase> property_label() const
{ return gi::property_proxy<std::string, base::LabelBase> (*this, "label"); }

gi::property_proxy<gint, base::LabelBase> property_lines()
{ return gi::property_proxy<gint, base::LabelBase> (*this, "lines"); }
const gi::property_proxy<gint, base::LabelBase> property_lines() const
{ return gi::property_proxy<gint, base::LabelBase> (*this, "lines"); }

gi::property_proxy<gint, base::LabelBase> property_max_width_chars()
{ return gi::property_proxy<gint, base::LabelBase> (*this, "max-width-chars"); }
const gi::property_proxy<gint, base::LabelBase> property_max_width_chars() const
{ return gi::property_proxy<gint, base::LabelBase> (*this, "max-width-chars"); }

gi::property_proxy<guint, base::LabelBase> property_mnemonic_keyval()
{ return gi::property_proxy<guint, base::LabelBase> (*this, "mnemonic-keyval"); }
const gi::property_proxy<guint, base::LabelBase> property_mnemonic_keyval() const
{ return gi::property_proxy<guint, base::LabelBase> (*this, "mnemonic-keyval"); }

gi::property_proxy<Gtk::Widget, base::LabelBase> property_mnemonic_widget()
{ return gi::property_proxy<Gtk::Widget, base::LabelBase> (*this, "mnemonic-widget"); }
const gi::property_proxy<Gtk::Widget, base::LabelBase> property_mnemonic_widget() const
{ return gi::property_proxy<Gtk::Widget, base::LabelBase> (*this, "mnemonic-widget"); }

gi::property_proxy_write<std::string, base::LabelBase> property_pattern()
{ return gi::property_proxy_write<std::string, base::LabelBase> (*this, "pattern"); }

gi::property_proxy<bool, base::LabelBase> property_selectable()
{ return gi::property_proxy<bool, base::LabelBase> (*this, "selectable"); }
const gi::property_proxy<bool, base::LabelBase> property_selectable() const
{ return gi::property_proxy<bool, base::LabelBase> (*this, "selectable"); }

gi::property_proxy<gint, base::LabelBase> property_selection_bound()
{ return gi::property_proxy<gint, base::LabelBase> (*this, "selection-bound"); }
const gi::property_proxy<gint, base::LabelBase> property_selection_bound() const
{ return gi::property_proxy<gint, base::LabelBase> (*this, "selection-bound"); }

gi::property_proxy<bool, base::LabelBase> property_single_line_mode()
{ return gi::property_proxy<bool, base::LabelBase> (*this, "single-line-mode"); }
const gi::property_proxy<bool, base::LabelBase> property_single_line_mode() const
{ return gi::property_proxy<bool, base::LabelBase> (*this, "single-line-mode"); }

gi::property_proxy<bool, base::LabelBase> property_track_visited_links()
{ return gi::property_proxy<bool, base::LabelBase> (*this, "track-visited-links"); }
const gi::property_proxy<bool, base::LabelBase> property_track_visited_links() const
{ return gi::property_proxy<bool, base::LabelBase> (*this, "track-visited-links"); }

gi::property_proxy<bool, base::LabelBase> property_use_markup()
{ return gi::property_proxy<bool, base::LabelBase> (*this, "use-markup"); }
const gi::property_proxy<bool, base::LabelBase> property_use_markup() const
{ return gi::property_proxy<bool, base::LabelBase> (*this, "use-markup"); }

gi::property_proxy<bool, base::LabelBase> property_use_underline()
{ return gi::property_proxy<bool, base::LabelBase> (*this, "use-underline"); }
const gi::property_proxy<bool, base::LabelBase> property_use_underline() const
{ return gi::property_proxy<bool, base::LabelBase> (*this, "use-underline"); }

gi::property_proxy<gint, base::LabelBase> property_width_chars()
{ return gi::property_proxy<gint, base::LabelBase> (*this, "width-chars"); }
const gi::property_proxy<gint, base::LabelBase> property_width_chars() const
{ return gi::property_proxy<gint, base::LabelBase> (*this, "width-chars"); }

gi::property_proxy<bool, base::LabelBase> property_wrap()
{ return gi::property_proxy<bool, base::LabelBase> (*this, "wrap"); }
const gi::property_proxy<bool, base::LabelBase> property_wrap() const
{ return gi::property_proxy<bool, base::LabelBase> (*this, "wrap"); }

gi::property_proxy<Pango::WrapMode, base::LabelBase> property_wrap_mode()
{ return gi::property_proxy<Pango::WrapMode, base::LabelBase> (*this, "wrap-mode"); }
const gi::property_proxy<Pango::WrapMode, base::LabelBase> property_wrap_mode() const
{ return gi::property_proxy<Pango::WrapMode, base::LabelBase> (*this, "wrap-mode"); }

gi::property_proxy<gfloat, base::LabelBase> property_xalign()
{ return gi::property_proxy<gfloat, base::LabelBase> (*this, "xalign"); }
const gi::property_proxy<gfloat, base::LabelBase> property_xalign() const
{ return gi::property_proxy<gfloat, base::LabelBase> (*this, "xalign"); }

gi::property_proxy<gfloat, base::LabelBase> property_yalign()
{ return gi::property_proxy<gfloat, base::LabelBase> (*this, "yalign"); }
const gi::property_proxy<gfloat, base::LabelBase> property_yalign() const
{ return gi::property_proxy<gfloat, base::LabelBase> (*this, "yalign"); }

// signal activate-current-link
gi::signal_proxy<void(Gtk::Label)> signal_activate_current_link()
{ return gi::signal_proxy<void(Gtk::Label)> (*this, "activate-current-link"); }

// signal activate-link
gi::signal_proxy<bool(Gtk::Label, const std::string & uri)> signal_activate_link()
{ return gi::signal_proxy<bool(Gtk::Label, const std::string & uri)> (*this, "activate-link"); }

// signal copy-clipboard
gi::signal_proxy<void(Gtk::Label)> signal_copy_clipboard()
{ return gi::signal_proxy<void(Gtk::Label)> (*this, "copy-clipboard"); }

// signal move-cursor
gi::signal_proxy<void(Gtk::Label, Gtk::MovementStep step, gint count, gboolean extend_selection)> signal_move_cursor()
{ return gi::signal_proxy<void(Gtk::Label, Gtk::MovementStep step, gint count, gboolean extend_selection)> (*this, "move-cursor"); }

// signal populate-popup
gi::signal_proxy<void(Gtk::Label, Gtk::Menu menu)> signal_populate_popup()
{ return gi::signal_proxy<void(Gtk::Label, Gtk::Menu menu)> (*this, "populate-popup"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/label_extra_def.hpp>)
#include <gtk/label_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/label_extra.hpp>)
#include <gtk/label_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Label : public GI_GTK_LABEL_BASE
{ typedef GI_GTK_LABEL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkLabel>
{ typedef Gtk::Label type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class LabelClassDef
{
typedef LabelClassDef self;
public:
typedef Gtk::Label instance_type;
typedef ::GtkLabelClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean Label::activate_link (GtkLabel* label, const gchar* uri);
// gboolean Label::activate_link (::GtkLabel* label, const char* uri);
virtual bool activate_link_ (const std::string & uri) noexcept = 0;

// void Label::copy_clipboard (GtkLabel* label);
// void Label::copy_clipboard (::GtkLabel* label);
virtual void copy_clipboard_ () noexcept = 0;

// void Label::move_cursor (GtkLabel* label, GtkMovementStep step, gint count, gboolean extend_selection);
// void Label::move_cursor (::GtkLabel* label, ::GtkMovementStep step, gint count, gboolean extend_selection);
virtual void move_cursor_ (Gtk::MovementStep step, gint count, gboolean extend_selection) noexcept = 0;

// void Label::populate_popup (GtkLabel* label, GtkMenu* menu);
// void Label::populate_popup (::GtkLabel* label, ::GtkMenu* menu);
virtual void populate_popup_ (Gtk::Menu menu) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class LabelClass: public detail::ClassTemplate<Gtk::impl::internal::LabelClassDef, Gtk::impl::internal::MiscClass>
{
typedef LabelClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::LabelClassDef, Gtk::impl::internal::MiscClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean Label::activate_link (GtkLabel* label, const gchar* uri);
// gboolean Label::activate_link (::GtkLabel* label, const char* uri);
GI_INLINE_DECL bool activate_link_ (const std::string & uri) noexcept override;

// void Label::copy_clipboard (GtkLabel* label);
// void Label::copy_clipboard (::GtkLabel* label);
GI_INLINE_DECL void copy_clipboard_ () noexcept override;

// void Label::move_cursor (GtkLabel* label, GtkMovementStep step, gint count, gboolean extend_selection);
// void Label::move_cursor (::GtkLabel* label, ::GtkMovementStep step, gint count, gboolean extend_selection);
GI_INLINE_DECL void move_cursor_ (Gtk::MovementStep step, gint count, gboolean extend_selection) noexcept override;

// void Label::populate_popup (GtkLabel* label, GtkMenu* menu);
// void Label::populate_popup (::GtkLabel* label, ::GtkMenu* menu);
GI_INLINE_DECL void populate_popup_ (Gtk::Menu menu) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using LabelImpl = detail::ObjectImpl<Label, internal::LabelClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
