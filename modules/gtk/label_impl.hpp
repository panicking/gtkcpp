// AUTO-GENERATED

#ifndef _GI_GTK_LABEL_IMPL_HPP_
#define _GI_GTK_LABEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_label_new (const gchar* str);
// ::GtkLabel* gtk_label_new (const char* str);
Gtk::Label base::LabelBase::new_ (const std::string & str) noexcept
{
  typedef ::GtkLabel* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_new;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::Label base::LabelBase::new_ () noexcept
{
  typedef ::GtkLabel* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_new;
  auto str_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_label_new_with_mnemonic (const gchar* str);
// ::GtkLabel* gtk_label_new_with_mnemonic (const char* str);
Gtk::Label base::LabelBase::new_with_mnemonic (const std::string & str) noexcept
{
  typedef ::GtkLabel* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_new_with_mnemonic;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::Label base::LabelBase::new_with_mnemonic () noexcept
{
  typedef ::GtkLabel* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_new_with_mnemonic;
  auto str_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gdouble gtk_label_get_angle (GtkLabel* label);
// gdouble gtk_label_get_angle (::GtkLabel* label);
gdouble base::LabelBase::get_angle () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_angle;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// PangoAttrList* gtk_label_get_attributes (GtkLabel* label);
// ::PangoAttrList* gtk_label_get_attributes (::GtkLabel* label);
Pango::AttrList base::LabelBase::get_attributes () noexcept
{
  typedef ::PangoAttrList* (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_attributes;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_label_get_current_uri (GtkLabel* label);
// const char* gtk_label_get_current_uri (::GtkLabel* label);
std::string base::LabelBase::get_current_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_current_uri;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoEllipsizeMode gtk_label_get_ellipsize (GtkLabel* label);
// ::PangoEllipsizeMode gtk_label_get_ellipsize (::GtkLabel* label);
Pango::EllipsizeMode base::LabelBase::get_ellipsize () noexcept
{
  typedef ::PangoEllipsizeMode (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_ellipsize;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkJustification gtk_label_get_justify (GtkLabel* label);
// ::GtkJustification gtk_label_get_justify (::GtkLabel* label);
Gtk::Justification base::LabelBase::get_justify () noexcept
{
  typedef ::GtkJustification (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_justify;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const gchar* gtk_label_get_label (GtkLabel* label);
// const char* gtk_label_get_label (::GtkLabel* label);
std::string base::LabelBase::get_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_label;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoLayout* gtk_label_get_layout (GtkLabel* label);
// ::PangoLayout* gtk_label_get_layout (::GtkLabel* label);
Pango::Layout base::LabelBase::get_layout () noexcept
{
  typedef ::PangoLayout* (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_layout;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_label_get_layout_offsets (GtkLabel* label, gint* x, gint* y);
// void gtk_label_get_layout_offsets (::GtkLabel* label, gint* x, gint* y);
void base::LabelBase::get_layout_offsets (gint * x, gint * y) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, gint* x, gint* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_layout_offsets;
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::GtkLabel*) (gobj_()), (gint*) (x ? &x_o : nullptr), (gint*) (y ? &y_o : nullptr));
  if (y) *y = y_o;
  if (x) *x = x_o;
}
std::tuple<gint, gint> base::LabelBase::get_layout_offsets () noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, gint* x, gint* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_layout_offsets;
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::GtkLabel*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o));
  return std::make_tuple (x_o, y_o);
}

// gboolean gtk_label_get_line_wrap (GtkLabel* label);
// gboolean gtk_label_get_line_wrap (::GtkLabel* label);
bool base::LabelBase::get_line_wrap () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_line_wrap;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// PangoWrapMode gtk_label_get_line_wrap_mode (GtkLabel* label);
// ::PangoWrapMode gtk_label_get_line_wrap_mode (::GtkLabel* label);
Pango::WrapMode base::LabelBase::get_line_wrap_mode () noexcept
{
  typedef ::PangoWrapMode (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_line_wrap_mode;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint gtk_label_get_lines (GtkLabel* label);
// gint gtk_label_get_lines (::GtkLabel* label);
gint base::LabelBase::get_lines () noexcept
{
  typedef gint (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_lines;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// gint gtk_label_get_max_width_chars (GtkLabel* label);
// gint gtk_label_get_max_width_chars (::GtkLabel* label);
gint base::LabelBase::get_max_width_chars () noexcept
{
  typedef gint (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_max_width_chars;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// guint gtk_label_get_mnemonic_keyval (GtkLabel* label);
// guint gtk_label_get_mnemonic_keyval (::GtkLabel* label);
guint base::LabelBase::get_mnemonic_keyval () noexcept
{
  typedef guint (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_mnemonic_keyval;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* gtk_label_get_mnemonic_widget (GtkLabel* label);
// ::GtkWidget* gtk_label_get_mnemonic_widget (::GtkLabel* label);
Gtk::Widget base::LabelBase::get_mnemonic_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_mnemonic_widget;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_label_get_selectable (GtkLabel* label);
// gboolean gtk_label_get_selectable (::GtkLabel* label);
bool base::LabelBase::get_selectable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_selectable;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_label_get_selection_bounds (GtkLabel* label, gint* start, gint* end);
// gboolean gtk_label_get_selection_bounds (::GtkLabel* label, gint* start, gint* end);
bool base::LabelBase::get_selection_bounds (gint & start, gint & end) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLabel* label, gint* start, gint* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_selection_bounds;
  gint end_o {};
  gint start_o {};
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()), (gint*) (&start_o), (gint*) (&end_o));
  end = end_o;
  start = start_o;
  return _temp_ret;
}
std::tuple<bool, gint, gint> base::LabelBase::get_selection_bounds () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLabel* label, gint* start, gint* end);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_selection_bounds;
  gint end_o {};
  gint start_o {};
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()), (gint*) (&start_o), (gint*) (&end_o));
  return std::make_tuple (_temp_ret, start_o, end_o);
}

// gboolean gtk_label_get_single_line_mode (GtkLabel* label);
// gboolean gtk_label_get_single_line_mode (::GtkLabel* label);
bool base::LabelBase::get_single_line_mode () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_single_line_mode;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// const gchar* gtk_label_get_text (GtkLabel* label);
// const char* gtk_label_get_text (::GtkLabel* label);
std::string base::LabelBase::get_text () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_text;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_label_get_track_visited_links (GtkLabel* label);
// gboolean gtk_label_get_track_visited_links (::GtkLabel* label);
bool base::LabelBase::get_track_visited_links () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_track_visited_links;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_label_get_use_markup (GtkLabel* label);
// gboolean gtk_label_get_use_markup (::GtkLabel* label);
bool base::LabelBase::get_use_markup () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_use_markup;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_label_get_use_underline (GtkLabel* label);
// gboolean gtk_label_get_use_underline (::GtkLabel* label);
bool base::LabelBase::get_use_underline () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_use_underline;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// gint gtk_label_get_width_chars (GtkLabel* label);
// gint gtk_label_get_width_chars (::GtkLabel* label);
gint base::LabelBase::get_width_chars () noexcept
{
  typedef gint (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_width_chars;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// gfloat gtk_label_get_xalign (GtkLabel* label);
// gfloat gtk_label_get_xalign (::GtkLabel* label);
gfloat base::LabelBase::get_xalign () noexcept
{
  typedef gfloat (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_xalign;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// gfloat gtk_label_get_yalign (GtkLabel* label);
// gfloat gtk_label_get_yalign (::GtkLabel* label);
gfloat base::LabelBase::get_yalign () noexcept
{
  typedef gfloat (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_get_yalign;
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()));
  return _temp_ret;
}

// void gtk_label_select_region (GtkLabel* label, gint start_offset, gint end_offset);
// void gtk_label_select_region (::GtkLabel* label, gint start_offset, gint end_offset);
void base::LabelBase::select_region (gint start_offset, gint end_offset) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, gint start_offset, gint end_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_select_region;
  auto end_offset_to_c = end_offset;
  auto start_offset_to_c = start_offset;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gint) (start_offset_to_c), (gint) (end_offset_to_c));
}

// void gtk_label_set_angle (GtkLabel* label, gdouble angle);
// void gtk_label_set_angle (::GtkLabel* label, gdouble angle);
void base::LabelBase::set_angle (gdouble angle) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, gdouble angle);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_angle;
  auto angle_to_c = angle;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gdouble) (angle_to_c));
}

// void gtk_label_set_attributes (GtkLabel* label, PangoAttrList* attrs);
// void gtk_label_set_attributes (::GtkLabel* label, ::PangoAttrList* attrs);
void base::LabelBase::set_attributes (Pango::AttrList attrs) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, ::PangoAttrList* attrs);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_attributes;
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkLabel*) (gobj_()), (::PangoAttrList*) (attrs_to_c));
}
void base::LabelBase::set_attributes () noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, ::PangoAttrList* attrs);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_attributes;
  auto attrs_to_c = nullptr;
  call_wrap_v ((::GtkLabel*) (gobj_()), (::PangoAttrList*) (attrs_to_c));
}

// void gtk_label_set_ellipsize (GtkLabel* label, PangoEllipsizeMode mode);
// void gtk_label_set_ellipsize (::GtkLabel* label, ::PangoEllipsizeMode mode);
void base::LabelBase::set_ellipsize (Pango::EllipsizeMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, ::PangoEllipsizeMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_ellipsize;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::GtkLabel*) (gobj_()), (::PangoEllipsizeMode) (mode_to_c));
}

// void gtk_label_set_justify (GtkLabel* label, GtkJustification jtype);
// void gtk_label_set_justify (::GtkLabel* label, ::GtkJustification jtype);
void base::LabelBase::set_justify (Gtk::Justification jtype) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, ::GtkJustification jtype);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_justify;
  auto jtype_to_c = gi::unwrap (jtype);
  call_wrap_v ((::GtkLabel*) (gobj_()), (::GtkJustification) (jtype_to_c));
}

// void gtk_label_set_label (GtkLabel* label, const gchar* str);
// void gtk_label_set_label (::GtkLabel* label, const char* str);
void base::LabelBase::set_label (const std::string & str) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_label;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkLabel*) (gobj_()), (const char*) (str_to_c));
}

// void gtk_label_set_line_wrap (GtkLabel* label, gboolean wrap);
// void gtk_label_set_line_wrap (::GtkLabel* label, gboolean wrap);
void base::LabelBase::set_line_wrap (gboolean wrap) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, gboolean wrap);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_line_wrap;
  auto wrap_to_c = wrap;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gboolean) (wrap_to_c));
}

// void gtk_label_set_line_wrap_mode (GtkLabel* label, PangoWrapMode wrap_mode);
// void gtk_label_set_line_wrap_mode (::GtkLabel* label, ::PangoWrapMode wrap_mode);
void base::LabelBase::set_line_wrap_mode (Pango::WrapMode wrap_mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, ::PangoWrapMode wrap_mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_line_wrap_mode;
  auto wrap_mode_to_c = gi::unwrap (wrap_mode);
  call_wrap_v ((::GtkLabel*) (gobj_()), (::PangoWrapMode) (wrap_mode_to_c));
}

// void gtk_label_set_lines (GtkLabel* label, gint lines);
// void gtk_label_set_lines (::GtkLabel* label, gint lines);
void base::LabelBase::set_lines (gint lines) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, gint lines);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_lines;
  auto lines_to_c = lines;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gint) (lines_to_c));
}

// void gtk_label_set_markup (GtkLabel* label, const gchar* str);
// void gtk_label_set_markup (::GtkLabel* label, const char* str);
void base::LabelBase::set_markup (const std::string & str) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_markup;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkLabel*) (gobj_()), (const char*) (str_to_c));
}

// void gtk_label_set_markup_with_mnemonic (GtkLabel* label, const gchar* str);
// void gtk_label_set_markup_with_mnemonic (::GtkLabel* label, const char* str);
void base::LabelBase::set_markup_with_mnemonic (const std::string & str) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_markup_with_mnemonic;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkLabel*) (gobj_()), (const char*) (str_to_c));
}

// void gtk_label_set_max_width_chars (GtkLabel* label, gint n_chars);
// void gtk_label_set_max_width_chars (::GtkLabel* label, gint n_chars);
void base::LabelBase::set_max_width_chars (gint n_chars) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, gint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_max_width_chars;
  auto n_chars_to_c = n_chars;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gint) (n_chars_to_c));
}

// void gtk_label_set_mnemonic_widget (GtkLabel* label, GtkWidget* widget);
// void gtk_label_set_mnemonic_widget (::GtkLabel* label, ::GtkWidget* widget);
void base::LabelBase::set_mnemonic_widget (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_mnemonic_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkLabel*) (gobj_()), (::GtkWidget*) (widget_to_c));
}
void base::LabelBase::set_mnemonic_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_mnemonic_widget;
  auto widget_to_c = nullptr;
  call_wrap_v ((::GtkLabel*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void gtk_label_set_pattern (GtkLabel* label, const gchar* pattern);
// void gtk_label_set_pattern (::GtkLabel* label, const char* pattern);
void base::LabelBase::set_pattern (const std::string & pattern) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, const char* pattern);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_pattern;
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkLabel*) (gobj_()), (const char*) (pattern_to_c));
}

// void gtk_label_set_selectable (GtkLabel* label, gboolean setting);
// void gtk_label_set_selectable (::GtkLabel* label, gboolean setting);
void base::LabelBase::set_selectable (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_selectable;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_label_set_single_line_mode (GtkLabel* label, gboolean single_line_mode);
// void gtk_label_set_single_line_mode (::GtkLabel* label, gboolean single_line_mode);
void base::LabelBase::set_single_line_mode (gboolean single_line_mode) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, gboolean single_line_mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_single_line_mode;
  auto single_line_mode_to_c = single_line_mode;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gboolean) (single_line_mode_to_c));
}

// void gtk_label_set_text (GtkLabel* label, const gchar* str);
// void gtk_label_set_text (::GtkLabel* label, const char* str);
void base::LabelBase::set_text (const std::string & str) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_text;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkLabel*) (gobj_()), (const char*) (str_to_c));
}

// void gtk_label_set_text_with_mnemonic (GtkLabel* label, const gchar* str);
// void gtk_label_set_text_with_mnemonic (::GtkLabel* label, const char* str);
void base::LabelBase::set_text_with_mnemonic (const std::string & str) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_text_with_mnemonic;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkLabel*) (gobj_()), (const char*) (str_to_c));
}

// void gtk_label_set_track_visited_links (GtkLabel* label, gboolean track_links);
// void gtk_label_set_track_visited_links (::GtkLabel* label, gboolean track_links);
void base::LabelBase::set_track_visited_links (gboolean track_links) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, gboolean track_links);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_track_visited_links;
  auto track_links_to_c = track_links;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gboolean) (track_links_to_c));
}

// void gtk_label_set_use_markup (GtkLabel* label, gboolean setting);
// void gtk_label_set_use_markup (::GtkLabel* label, gboolean setting);
void base::LabelBase::set_use_markup (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_use_markup;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_label_set_use_underline (GtkLabel* label, gboolean setting);
// void gtk_label_set_use_underline (::GtkLabel* label, gboolean setting);
void base::LabelBase::set_use_underline (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_use_underline;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_label_set_width_chars (GtkLabel* label, gint n_chars);
// void gtk_label_set_width_chars (::GtkLabel* label, gint n_chars);
void base::LabelBase::set_width_chars (gint n_chars) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, gint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_width_chars;
  auto n_chars_to_c = n_chars;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gint) (n_chars_to_c));
}

// void gtk_label_set_xalign (GtkLabel* label, gfloat xalign);
// void gtk_label_set_xalign (::GtkLabel* label, gfloat xalign);
void base::LabelBase::set_xalign (gfloat xalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, gfloat xalign);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_xalign;
  auto xalign_to_c = xalign;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gfloat) (xalign_to_c));
}

// void gtk_label_set_yalign (GtkLabel* label, gfloat yalign);
// void gtk_label_set_yalign (::GtkLabel* label, gfloat yalign);
void base::LabelBase::set_yalign (gfloat yalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkLabel* label, gfloat yalign);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_label_set_yalign;
  auto yalign_to_c = yalign;
  call_wrap_v ((::GtkLabel*) (gobj_()), (gfloat) (yalign_to_c));
}







} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/label_extra_def_impl.hpp>)
#include <gtk/label_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/label_extra_impl.hpp>)
#include <gtk/label_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void LabelClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkLabelClass *methods = (::GtkLabelClass *) class_struct;
  (void) methods;

  methods->activate_link = (decltype (methods->activate_link)) detail::method_wrapper<self, bool (*) (const std::string & uri), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::activate_link_>;
  methods->copy_clipboard = (decltype (methods->copy_clipboard)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::copy_clipboard_>;
  methods->move_cursor = (decltype (methods->move_cursor)) detail::method_wrapper<self, void (*) (Gtk::MovementStep step, gint count, gboolean extend_selection), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::move_cursor_>;
  methods->populate_popup = (decltype (methods->populate_popup)) detail::method_wrapper<self, void (*) (Gtk::Menu menu), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::populate_popup_>;
}

// gboolean Label::activate_link (GtkLabel* label, const gchar* uri);
// gboolean Label::activate_link (::GtkLabel* label, const char* uri);
bool LabelClass::activate_link_ (const std::string & uri) noexcept
{
  if (!get_struct_()->activate_link) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkLabel* label, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate_link;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkLabel*) (gobj_()), (const char*) (uri_to_c));
  return _temp_ret;
}

// void Label::copy_clipboard (GtkLabel* label);
// void Label::copy_clipboard (::GtkLabel* label);
void LabelClass::copy_clipboard_ () noexcept
{
  if (!get_struct_()->copy_clipboard) return ;
  typedef void (*call_wrap_t) (::GtkLabel* label);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->copy_clipboard;
  call_wrap_v ((::GtkLabel*) (gobj_()));
}

// void Label::move_cursor (GtkLabel* label, GtkMovementStep step, gint count, gboolean extend_selection);
// void Label::move_cursor (::GtkLabel* label, ::GtkMovementStep step, gint count, gboolean extend_selection);
void LabelClass::move_cursor_ (Gtk::MovementStep step, gint count, gboolean extend_selection) noexcept
{
  if (!get_struct_()->move_cursor) return ;
  typedef void (*call_wrap_t) (::GtkLabel* label, ::GtkMovementStep step, gint count, gboolean extend_selection);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move_cursor;
  auto extend_selection_to_c = extend_selection;
  auto count_to_c = count;
  auto step_to_c = gi::unwrap (step);
  call_wrap_v ((::GtkLabel*) (gobj_()), (::GtkMovementStep) (step_to_c), (gint) (count_to_c), (gboolean) (extend_selection_to_c));
}

// void Label::populate_popup (GtkLabel* label, GtkMenu* menu);
// void Label::populate_popup (::GtkLabel* label, ::GtkMenu* menu);
void LabelClass::populate_popup_ (Gtk::Menu menu) noexcept
{
  if (!get_struct_()->populate_popup) return ;
  typedef void (*call_wrap_t) (::GtkLabel* label, ::GtkMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->populate_popup;
  auto menu_to_c = gi::unwrap (menu, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkLabel*) (gobj_()), (::GtkMenu*) (menu_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
