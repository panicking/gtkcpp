// AUTO-GENERATED

#ifndef _GI_GTK_ENTRY_IMPL_HPP_
#define _GI_GTK_ENTRY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::CellEditable EntryBase::interface_ (gi::interface_tag<Gtk::CellEditable>)
{ return gi::wrap ((Gtk::CellEditable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

EntryBase::operator Gtk::CellEditable ()
{ return interface_ (gi::interface_tag<Gtk::CellEditable>()); }

Gtk::Editable EntryBase::interface_ (gi::interface_tag<Gtk::Editable>)
{ return gi::wrap ((Gtk::Editable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

EntryBase::operator Gtk::Editable ()
{ return interface_ (gi::interface_tag<Gtk::Editable>()); }

// GtkWidget* gtk_entry_new ();
// ::GtkEntry* gtk_entry_new ();
Gtk::Entry base::EntryBase::new_ () noexcept
{
  typedef ::GtkEntry* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_entry_new_with_buffer (GtkEntryBuffer* buffer);
// ::GtkEntry* gtk_entry_new_with_buffer (::GtkEntryBuffer* buffer);
Gtk::Entry base::EntryBase::new_with_buffer (Gtk::EntryBuffer buffer) noexcept
{
  typedef ::GtkEntry* (*call_wrap_t) (::GtkEntryBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_new_with_buffer;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkEntryBuffer*) (buffer_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_entry_get_activates_default (GtkEntry* entry);
// gboolean gtk_entry_get_activates_default (::GtkEntry* entry);
bool base::EntryBase::get_activates_default () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_activates_default;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// gfloat gtk_entry_get_alignment (GtkEntry* entry);
// gfloat gtk_entry_get_alignment (::GtkEntry* entry);
gfloat base::EntryBase::get_alignment () noexcept
{
  typedef gfloat (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_alignment;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// PangoAttrList* gtk_entry_get_attributes (GtkEntry* entry);
// ::PangoAttrList* gtk_entry_get_attributes (::GtkEntry* entry);
Pango::AttrList base::EntryBase::get_attributes () noexcept
{
  typedef ::PangoAttrList* (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_attributes;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkEntryBuffer* gtk_entry_get_buffer (GtkEntry* entry);
// ::GtkEntryBuffer* gtk_entry_get_buffer (::GtkEntry* entry);
Gtk::EntryBuffer base::EntryBase::get_buffer () noexcept
{
  typedef ::GtkEntryBuffer* (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_buffer;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkEntryCompletion* gtk_entry_get_completion (GtkEntry* entry);
// ::GtkEntryCompletion* gtk_entry_get_completion (::GtkEntry* entry);
Gtk::EntryCompletion base::EntryBase::get_completion () noexcept
{
  typedef ::GtkEntryCompletion* (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_completion;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gtk_entry_get_current_icon_drag_source (GtkEntry* entry);
// gint gtk_entry_get_current_icon_drag_source (::GtkEntry* entry);
gint base::EntryBase::get_current_icon_drag_source () noexcept
{
  typedef gint (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_current_icon_drag_source;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// GtkAdjustment* gtk_entry_get_cursor_hadjustment (GtkEntry* entry);
// ::GtkAdjustment* gtk_entry_get_cursor_hadjustment (::GtkEntry* entry);
Gtk::Adjustment base::EntryBase::get_cursor_hadjustment () noexcept
{
  typedef ::GtkAdjustment* (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_cursor_hadjustment;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_entry_get_has_frame (GtkEntry* entry);
// gboolean gtk_entry_get_has_frame (::GtkEntry* entry);
bool base::EntryBase::get_has_frame () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_has_frame;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_entry_get_icon_activatable (GtkEntry* entry, GtkEntryIconPosition icon_pos);
// gboolean gtk_entry_get_icon_activatable (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
bool base::EntryBase::get_icon_activatable (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_icon_activatable;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c));
  return _temp_ret;
}

// void gtk_entry_get_icon_area (GtkEntry* entry, GtkEntryIconPosition icon_pos, GdkRectangle* icon_area);
// void gtk_entry_get_icon_area (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GdkRectangle* icon_area);
void base::EntryBase::get_icon_area (Gtk::EntryIconPosition icon_pos, Gdk::Rectangle & icon_area) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GdkRectangle* icon_area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_icon_area;
  traits::unset_wrapper<::GdkRectangle>::type icon_area_c;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (::GdkRectangle*) ((::GdkRectangle*) &icon_area_c));
  icon_area = gi::wrap ((::GdkRectangle*) &icon_area_c, gi::transfer_none, gi::direction_out);
}
Gdk::Rectangle base::EntryBase::get_icon_area (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GdkRectangle* icon_area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_icon_area;
  traits::unset_wrapper<::GdkRectangle>::type icon_area_c;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (::GdkRectangle*) ((::GdkRectangle*) &icon_area_c));
  return gi::wrap ((::GdkRectangle*) &icon_area_c, gi::transfer_none, gi::direction_out);
}

// gint gtk_entry_get_icon_at_pos (GtkEntry* entry, gint x, gint y);
// gint gtk_entry_get_icon_at_pos (::GtkEntry* entry, gint x, gint y);
gint base::EntryBase::get_icon_at_pos (gint x, gint y) noexcept
{
  typedef gint (*call_wrap_t) (::GtkEntry* entry, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_icon_at_pos;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c));
  return _temp_ret;
}

// GIcon* gtk_entry_get_icon_gicon (GtkEntry* entry, GtkEntryIconPosition icon_pos);
// ::GIcon* gtk_entry_get_icon_gicon (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
Gio::Icon base::EntryBase::get_icon_gicon (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_icon_gicon;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_entry_get_icon_name (GtkEntry* entry, GtkEntryIconPosition icon_pos);
// const char* gtk_entry_get_icon_name (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
std::string base::EntryBase::get_icon_name (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef const char* (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_icon_name;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkPixbuf* gtk_entry_get_icon_pixbuf (GtkEntry* entry, GtkEntryIconPosition icon_pos);
// ::GdkPixbuf* gtk_entry_get_icon_pixbuf (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
GdkPixbuf::Pixbuf base::EntryBase::get_icon_pixbuf (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_icon_pixbuf;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_entry_get_icon_sensitive (GtkEntry* entry, GtkEntryIconPosition icon_pos);
// gboolean gtk_entry_get_icon_sensitive (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
bool base::EntryBase::get_icon_sensitive (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_icon_sensitive;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c));
  return _temp_ret;
}

// const gchar* gtk_entry_get_icon_stock (GtkEntry* entry, GtkEntryIconPosition icon_pos);
// const char* gtk_entry_get_icon_stock (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
// IGNORE; deprecated

// GtkImageType gtk_entry_get_icon_storage_type (GtkEntry* entry, GtkEntryIconPosition icon_pos);
// ::GtkImageType gtk_entry_get_icon_storage_type (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
Gtk::ImageType base::EntryBase::get_icon_storage_type (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef ::GtkImageType (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_icon_storage_type;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c));
  return gi::wrap (_temp_ret);
}

// gchar* gtk_entry_get_icon_tooltip_markup (GtkEntry* entry, GtkEntryIconPosition icon_pos);
// char* gtk_entry_get_icon_tooltip_markup (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
std::string base::EntryBase::get_icon_tooltip_markup (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef char* (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_icon_tooltip_markup;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gtk_entry_get_icon_tooltip_text (GtkEntry* entry, GtkEntryIconPosition icon_pos);
// char* gtk_entry_get_icon_tooltip_text (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
std::string base::EntryBase::get_icon_tooltip_text (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef char* (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_icon_tooltip_text;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const GtkBorder* gtk_entry_get_inner_border (GtkEntry* entry);
// const ::GtkBorder* gtk_entry_get_inner_border (::GtkEntry* entry);
// IGNORE; deprecated

// GtkInputHints gtk_entry_get_input_hints (GtkEntry* entry);
// ::GtkInputHints gtk_entry_get_input_hints (::GtkEntry* entry);
Gtk::InputHints base::EntryBase::get_input_hints () noexcept
{
  typedef ::GtkInputHints (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_input_hints;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkInputPurpose gtk_entry_get_input_purpose (GtkEntry* entry);
// ::GtkInputPurpose gtk_entry_get_input_purpose (::GtkEntry* entry);
Gtk::InputPurpose base::EntryBase::get_input_purpose () noexcept
{
  typedef ::GtkInputPurpose (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_input_purpose;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gunichar gtk_entry_get_invisible_char (GtkEntry* entry);
// gunichar gtk_entry_get_invisible_char (::GtkEntry* entry);
gunichar base::EntryBase::get_invisible_char () noexcept
{
  typedef gunichar (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_invisible_char;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// PangoLayout* gtk_entry_get_layout (GtkEntry* entry);
// ::PangoLayout* gtk_entry_get_layout (::GtkEntry* entry);
Pango::Layout base::EntryBase::get_layout () noexcept
{
  typedef ::PangoLayout* (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_layout;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_entry_get_layout_offsets (GtkEntry* entry, gint* x, gint* y);
// void gtk_entry_get_layout_offsets (::GtkEntry* entry, gint* x, gint* y);
void base::EntryBase::get_layout_offsets (gint * x, gint * y) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gint* x, gint* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_layout_offsets;
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::GtkEntry*) (gobj_()), (gint*) (x ? &x_o : nullptr), (gint*) (y ? &y_o : nullptr));
  if (y) *y = y_o;
  if (x) *x = x_o;
}
std::tuple<gint, gint> base::EntryBase::get_layout_offsets () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gint* x, gint* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_layout_offsets;
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::GtkEntry*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o));
  return std::make_tuple (x_o, y_o);
}

// gint gtk_entry_get_max_length (GtkEntry* entry);
// gint gtk_entry_get_max_length (::GtkEntry* entry);
gint base::EntryBase::get_max_length () noexcept
{
  typedef gint (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_max_length;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// gint gtk_entry_get_max_width_chars (GtkEntry* entry);
// gint gtk_entry_get_max_width_chars (::GtkEntry* entry);
gint base::EntryBase::get_max_width_chars () noexcept
{
  typedef gint (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_max_width_chars;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_entry_get_overwrite_mode (GtkEntry* entry);
// gboolean gtk_entry_get_overwrite_mode (::GtkEntry* entry);
bool base::EntryBase::get_overwrite_mode () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_overwrite_mode;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// const gchar* gtk_entry_get_placeholder_text (GtkEntry* entry);
// const char* gtk_entry_get_placeholder_text (::GtkEntry* entry);
std::string base::EntryBase::get_placeholder_text () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_placeholder_text;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gdouble gtk_entry_get_progress_fraction (GtkEntry* entry);
// gdouble gtk_entry_get_progress_fraction (::GtkEntry* entry);
gdouble base::EntryBase::get_progress_fraction () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_progress_fraction;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// gdouble gtk_entry_get_progress_pulse_step (GtkEntry* entry);
// gdouble gtk_entry_get_progress_pulse_step (::GtkEntry* entry);
gdouble base::EntryBase::get_progress_pulse_step () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_progress_pulse_step;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// PangoTabArray* gtk_entry_get_tabs (GtkEntry* entry);
// ::PangoTabArray* gtk_entry_get_tabs (::GtkEntry* entry);
Pango::TabArray base::EntryBase::get_tabs () noexcept
{
  typedef ::PangoTabArray* (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_tabs;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_entry_get_text (GtkEntry* entry);
// const char* gtk_entry_get_text (::GtkEntry* entry);
std::string base::EntryBase::get_text () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_text;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_entry_get_text_area (GtkEntry* entry, GdkRectangle* text_area);
// void gtk_entry_get_text_area (::GtkEntry* entry, ::GdkRectangle* text_area);
void base::EntryBase::get_text_area (Gdk::Rectangle & text_area) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GdkRectangle* text_area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_text_area;
  traits::unset_wrapper<::GdkRectangle>::type text_area_c;
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &text_area_c));
  text_area = gi::wrap ((::GdkRectangle*) &text_area_c, gi::transfer_none, gi::direction_out);
}
Gdk::Rectangle base::EntryBase::get_text_area () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GdkRectangle* text_area);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_text_area;
  traits::unset_wrapper<::GdkRectangle>::type text_area_c;
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &text_area_c));
  return gi::wrap ((::GdkRectangle*) &text_area_c, gi::transfer_none, gi::direction_out);
}

// guint16 gtk_entry_get_text_length (GtkEntry* entry);
// guint16 gtk_entry_get_text_length (::GtkEntry* entry);
guint16 base::EntryBase::get_text_length () noexcept
{
  typedef guint16 (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_text_length;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_entry_get_visibility (GtkEntry* entry);
// gboolean gtk_entry_get_visibility (::GtkEntry* entry);
bool base::EntryBase::get_visibility () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_visibility;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// gint gtk_entry_get_width_chars (GtkEntry* entry);
// gint gtk_entry_get_width_chars (::GtkEntry* entry);
gint base::EntryBase::get_width_chars () noexcept
{
  typedef gint (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_get_width_chars;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()));
  return _temp_ret;
}

// void gtk_entry_grab_focus_without_selecting (GtkEntry* entry);
// void gtk_entry_grab_focus_without_selecting (::GtkEntry* entry);
void base::EntryBase::grab_focus_without_selecting () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_grab_focus_without_selecting;
  call_wrap_v ((::GtkEntry*) (gobj_()));
}

// gboolean gtk_entry_im_context_filter_keypress (GtkEntry* entry, GdkEventKey* event);
// gboolean gtk_entry_im_context_filter_keypress (::GtkEntry* entry, ::GdkEventKey* event);
bool base::EntryBase::im_context_filter_keypress (Gdk::EventKey event) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEntry* entry, ::GdkEventKey* event);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_im_context_filter_keypress;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (::GdkEventKey*) (event_to_c));
  return _temp_ret;
}

// gint gtk_entry_layout_index_to_text_index (GtkEntry* entry, gint layout_index);
// gint gtk_entry_layout_index_to_text_index (::GtkEntry* entry, gint layout_index);
gint base::EntryBase::layout_index_to_text_index (gint layout_index) noexcept
{
  typedef gint (*call_wrap_t) (::GtkEntry* entry, gint layout_index);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_layout_index_to_text_index;
  auto layout_index_to_c = layout_index;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (gint) (layout_index_to_c));
  return _temp_ret;
}

// void gtk_entry_progress_pulse (GtkEntry* entry);
// void gtk_entry_progress_pulse (::GtkEntry* entry);
void base::EntryBase::progress_pulse () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_progress_pulse;
  call_wrap_v ((::GtkEntry*) (gobj_()));
}

// void gtk_entry_reset_im_context (GtkEntry* entry);
// void gtk_entry_reset_im_context (::GtkEntry* entry);
void base::EntryBase::reset_im_context () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_reset_im_context;
  call_wrap_v ((::GtkEntry*) (gobj_()));
}

// void gtk_entry_set_activates_default (GtkEntry* entry, gboolean setting);
// void gtk_entry_set_activates_default (::GtkEntry* entry, gboolean setting);
void base::EntryBase::set_activates_default (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_activates_default;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_entry_set_alignment (GtkEntry* entry, gfloat xalign);
// void gtk_entry_set_alignment (::GtkEntry* entry, gfloat xalign);
void base::EntryBase::set_alignment (gfloat xalign) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gfloat xalign);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_alignment;
  auto xalign_to_c = xalign;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gfloat) (xalign_to_c));
}

// void gtk_entry_set_attributes (GtkEntry* entry, PangoAttrList* attrs);
// void gtk_entry_set_attributes (::GtkEntry* entry, ::PangoAttrList* attrs);
void base::EntryBase::set_attributes (Pango::AttrList attrs) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::PangoAttrList* attrs);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_attributes;
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::PangoAttrList*) (attrs_to_c));
}

// void gtk_entry_set_buffer (GtkEntry* entry, GtkEntryBuffer* buffer);
// void gtk_entry_set_buffer (::GtkEntry* entry, ::GtkEntryBuffer* buffer);
void base::EntryBase::set_buffer (Gtk::EntryBuffer buffer) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_buffer;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryBuffer*) (buffer_to_c));
}

// void gtk_entry_set_completion (GtkEntry* entry, GtkEntryCompletion* completion);
// void gtk_entry_set_completion (::GtkEntry* entry, ::GtkEntryCompletion* completion);
void base::EntryBase::set_completion (Gtk::EntryCompletion completion) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_completion;
  auto completion_to_c = gi::unwrap (completion, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryCompletion*) (completion_to_c));
}
void base::EntryBase::set_completion () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryCompletion* completion);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_completion;
  auto completion_to_c = nullptr;
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryCompletion*) (completion_to_c));
}

// void gtk_entry_set_cursor_hadjustment (GtkEntry* entry, GtkAdjustment* adjustment);
// void gtk_entry_set_cursor_hadjustment (::GtkEntry* entry, ::GtkAdjustment* adjustment);
void base::EntryBase::set_cursor_hadjustment (Gtk::Adjustment adjustment) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_cursor_hadjustment;
  auto adjustment_to_c = gi::unwrap (adjustment, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}
void base::EntryBase::set_cursor_hadjustment () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkAdjustment* adjustment);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_cursor_hadjustment;
  auto adjustment_to_c = nullptr;
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkAdjustment*) (adjustment_to_c));
}

// void gtk_entry_set_has_frame (GtkEntry* entry, gboolean setting);
// void gtk_entry_set_has_frame (::GtkEntry* entry, gboolean setting);
void base::EntryBase::set_has_frame (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_has_frame;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_entry_set_icon_activatable (GtkEntry* entry, GtkEntryIconPosition icon_pos, gboolean activatable);
// void gtk_entry_set_icon_activatable (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, gboolean activatable);
void base::EntryBase::set_icon_activatable (Gtk::EntryIconPosition icon_pos, gboolean activatable) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, gboolean activatable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_icon_activatable;
  auto activatable_to_c = activatable;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (gboolean) (activatable_to_c));
}

// void gtk_entry_set_icon_drag_source (GtkEntry* entry, GtkEntryIconPosition icon_pos, GtkTargetList* target_list, GdkDragAction actions);
// void gtk_entry_set_icon_drag_source (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GtkTargetList* target_list, ::GdkDragAction actions);
void base::EntryBase::set_icon_drag_source (Gtk::EntryIconPosition icon_pos, Gtk::TargetList target_list, Gdk::DragAction actions) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GtkTargetList* target_list, ::GdkDragAction actions);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_icon_drag_source;
  auto actions_to_c = gi::unwrap (actions);
  auto target_list_to_c = gi::unwrap (target_list, gi::transfer_none, gi::direction_in);
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (::GtkTargetList*) (target_list_to_c), (::GdkDragAction) (actions_to_c));
}

// void gtk_entry_set_icon_from_gicon (GtkEntry* entry, GtkEntryIconPosition icon_pos, GIcon* icon);
// void gtk_entry_set_icon_from_gicon (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GIcon* icon);
void base::EntryBase::set_icon_from_gicon (Gtk::EntryIconPosition icon_pos, Gio::Icon icon) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_icon_from_gicon;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none, gi::direction_in);
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (::GIcon*) (icon_to_c));
}
void base::EntryBase::set_icon_from_gicon (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_icon_from_gicon;
  auto icon_to_c = nullptr;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (::GIcon*) (icon_to_c));
}

// void gtk_entry_set_icon_from_icon_name (GtkEntry* entry, GtkEntryIconPosition icon_pos, const gchar* icon_name);
// void gtk_entry_set_icon_from_icon_name (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* icon_name);
void base::EntryBase::set_icon_from_icon_name (Gtk::EntryIconPosition icon_pos, const std::string & icon_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_icon_from_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (const char*) (icon_name_to_c));
}
void base::EntryBase::set_icon_from_icon_name (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_icon_from_icon_name;
  auto icon_name_to_c = nullptr;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (const char*) (icon_name_to_c));
}

// void gtk_entry_set_icon_from_pixbuf (GtkEntry* entry, GtkEntryIconPosition icon_pos, GdkPixbuf* pixbuf);
// void gtk_entry_set_icon_from_pixbuf (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GdkPixbuf* pixbuf);
void base::EntryBase::set_icon_from_pixbuf (Gtk::EntryIconPosition icon_pos, GdkPixbuf::Pixbuf pixbuf) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_icon_from_pixbuf;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none, gi::direction_in);
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (::GdkPixbuf*) (pixbuf_to_c));
}
void base::EntryBase::set_icon_from_pixbuf (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_icon_from_pixbuf;
  auto pixbuf_to_c = nullptr;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (::GdkPixbuf*) (pixbuf_to_c));
}

// void gtk_entry_set_icon_from_stock (GtkEntry* entry, GtkEntryIconPosition icon_pos, const gchar* stock_id);
// void gtk_entry_set_icon_from_stock (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* stock_id);
// IGNORE; deprecated

// void gtk_entry_set_icon_sensitive (GtkEntry* entry, GtkEntryIconPosition icon_pos, gboolean sensitive);
// void gtk_entry_set_icon_sensitive (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, gboolean sensitive);
void base::EntryBase::set_icon_sensitive (Gtk::EntryIconPosition icon_pos, gboolean sensitive) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, gboolean sensitive);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_icon_sensitive;
  auto sensitive_to_c = sensitive;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (gboolean) (sensitive_to_c));
}

// void gtk_entry_set_icon_tooltip_markup (GtkEntry* entry, GtkEntryIconPosition icon_pos, const gchar* tooltip);
// void gtk_entry_set_icon_tooltip_markup (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* tooltip);
void base::EntryBase::set_icon_tooltip_markup (Gtk::EntryIconPosition icon_pos, const std::string & tooltip) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* tooltip);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_icon_tooltip_markup;
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none, gi::direction_in);
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (const char*) (tooltip_to_c));
}
void base::EntryBase::set_icon_tooltip_markup (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* tooltip);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_icon_tooltip_markup;
  auto tooltip_to_c = nullptr;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (const char*) (tooltip_to_c));
}

// void gtk_entry_set_icon_tooltip_text (GtkEntry* entry, GtkEntryIconPosition icon_pos, const gchar* tooltip);
// void gtk_entry_set_icon_tooltip_text (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* tooltip);
void base::EntryBase::set_icon_tooltip_text (Gtk::EntryIconPosition icon_pos, const std::string & tooltip) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* tooltip);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_icon_tooltip_text;
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none, gi::direction_in);
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (const char*) (tooltip_to_c));
}
void base::EntryBase::set_icon_tooltip_text (Gtk::EntryIconPosition icon_pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkEntryIconPosition icon_pos, const char* tooltip);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_icon_tooltip_text;
  auto tooltip_to_c = nullptr;
  auto icon_pos_to_c = gi::unwrap (icon_pos);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkEntryIconPosition) (icon_pos_to_c), (const char*) (tooltip_to_c));
}

// void gtk_entry_set_inner_border (GtkEntry* entry, const GtkBorder* border);
// void gtk_entry_set_inner_border (::GtkEntry* entry, const ::GtkBorder* border);
// IGNORE; deprecated

// void gtk_entry_set_input_hints (GtkEntry* entry, GtkInputHints hints);
// void gtk_entry_set_input_hints (::GtkEntry* entry, ::GtkInputHints hints);
void base::EntryBase::set_input_hints (Gtk::InputHints hints) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkInputHints hints);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_input_hints;
  auto hints_to_c = gi::unwrap (hints);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkInputHints) (hints_to_c));
}

// void gtk_entry_set_input_purpose (GtkEntry* entry, GtkInputPurpose purpose);
// void gtk_entry_set_input_purpose (::GtkEntry* entry, ::GtkInputPurpose purpose);
void base::EntryBase::set_input_purpose (Gtk::InputPurpose purpose) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkInputPurpose purpose);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_input_purpose;
  auto purpose_to_c = gi::unwrap (purpose);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkInputPurpose) (purpose_to_c));
}

// void gtk_entry_set_invisible_char (GtkEntry* entry, gunichar ch);
// void gtk_entry_set_invisible_char (::GtkEntry* entry, gunichar ch);
void base::EntryBase::set_invisible_char (gunichar ch) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gunichar ch);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_invisible_char;
  auto ch_to_c = ch;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gunichar) (ch_to_c));
}

// void gtk_entry_set_max_length (GtkEntry* entry, gint max);
// void gtk_entry_set_max_length (::GtkEntry* entry, gint max);
void base::EntryBase::set_max_length (gint max) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gint max);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_max_length;
  auto max_to_c = max;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gint) (max_to_c));
}

// void gtk_entry_set_max_width_chars (GtkEntry* entry, gint n_chars);
// void gtk_entry_set_max_width_chars (::GtkEntry* entry, gint n_chars);
void base::EntryBase::set_max_width_chars (gint n_chars) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_max_width_chars;
  auto n_chars_to_c = n_chars;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gint) (n_chars_to_c));
}

// void gtk_entry_set_overwrite_mode (GtkEntry* entry, gboolean overwrite);
// void gtk_entry_set_overwrite_mode (::GtkEntry* entry, gboolean overwrite);
void base::EntryBase::set_overwrite_mode (gboolean overwrite) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gboolean overwrite);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_overwrite_mode;
  auto overwrite_to_c = overwrite;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gboolean) (overwrite_to_c));
}

// void gtk_entry_set_placeholder_text (GtkEntry* entry, const gchar* text);
// void gtk_entry_set_placeholder_text (::GtkEntry* entry, const char* text);
void base::EntryBase::set_placeholder_text (const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_placeholder_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkEntry*) (gobj_()), (const char*) (text_to_c));
}
void base::EntryBase::set_placeholder_text () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_placeholder_text;
  auto text_to_c = nullptr;
  call_wrap_v ((::GtkEntry*) (gobj_()), (const char*) (text_to_c));
}

// void gtk_entry_set_progress_fraction (GtkEntry* entry, gdouble fraction);
// void gtk_entry_set_progress_fraction (::GtkEntry* entry, gdouble fraction);
void base::EntryBase::set_progress_fraction (gdouble fraction) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gdouble fraction);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_progress_fraction;
  auto fraction_to_c = fraction;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gdouble) (fraction_to_c));
}

// void gtk_entry_set_progress_pulse_step (GtkEntry* entry, gdouble fraction);
// void gtk_entry_set_progress_pulse_step (::GtkEntry* entry, gdouble fraction);
void base::EntryBase::set_progress_pulse_step (gdouble fraction) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gdouble fraction);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_progress_pulse_step;
  auto fraction_to_c = fraction;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gdouble) (fraction_to_c));
}

// void gtk_entry_set_tabs (GtkEntry* entry, PangoTabArray* tabs);
// void gtk_entry_set_tabs (::GtkEntry* entry, ::PangoTabArray* tabs);
void base::EntryBase::set_tabs (Pango::TabArray tabs) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::PangoTabArray* tabs);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_tabs;
  auto tabs_to_c = gi::unwrap (tabs, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::PangoTabArray*) (tabs_to_c));
}

// void gtk_entry_set_text (GtkEntry* entry, const gchar* text);
// void gtk_entry_set_text (::GtkEntry* entry, const char* text);
void base::EntryBase::set_text (const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkEntry*) (gobj_()), (const char*) (text_to_c));
}

// void gtk_entry_set_visibility (GtkEntry* entry, gboolean visible);
// void gtk_entry_set_visibility (::GtkEntry* entry, gboolean visible);
void base::EntryBase::set_visibility (gboolean visible) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gboolean visible);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_visibility;
  auto visible_to_c = visible;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gboolean) (visible_to_c));
}

// void gtk_entry_set_width_chars (GtkEntry* entry, gint n_chars);
// void gtk_entry_set_width_chars (::GtkEntry* entry, gint n_chars);
void base::EntryBase::set_width_chars (gint n_chars) noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry, gint n_chars);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_set_width_chars;
  auto n_chars_to_c = n_chars;
  call_wrap_v ((::GtkEntry*) (gobj_()), (gint) (n_chars_to_c));
}

// gint gtk_entry_text_index_to_layout_index (GtkEntry* entry, gint text_index);
// gint gtk_entry_text_index_to_layout_index (::GtkEntry* entry, gint text_index);
gint base::EntryBase::text_index_to_layout_index (gint text_index) noexcept
{
  typedef gint (*call_wrap_t) (::GtkEntry* entry, gint text_index);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_text_index_to_layout_index;
  auto text_index_to_c = text_index;
  auto _temp_ret = call_wrap_v ((::GtkEntry*) (gobj_()), (gint) (text_index_to_c));
  return _temp_ret;
}

// void gtk_entry_unset_invisible_char (GtkEntry* entry);
// void gtk_entry_unset_invisible_char (::GtkEntry* entry);
void base::EntryBase::unset_invisible_char () noexcept
{
  typedef void (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_entry_unset_invisible_char;
  call_wrap_v ((::GtkEntry*) (gobj_()));
}






// SKIP; event type  not supported

// SKIP; event type  not supported









} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/entry_extra_def_impl.hpp>)
#include <gtk/entry_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/entry_extra_impl.hpp>)
#include <gtk/entry_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void EntryClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkEntryClass *methods = (::GtkEntryClass *) class_struct;
  (void) methods;

  methods->activate = (decltype (methods->activate)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::activate_>;
  methods->backspace = (decltype (methods->backspace)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::backspace_>;
  methods->copy_clipboard = (decltype (methods->copy_clipboard)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::copy_clipboard_>;
  methods->cut_clipboard = (decltype (methods->cut_clipboard)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::cut_clipboard_>;
  methods->delete_from_cursor = (decltype (methods->delete_from_cursor)) detail::method_wrapper<self, void (*) (Gtk::DeleteType type, gint count), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::delete_from_cursor_>;
  methods->insert_at_cursor = (decltype (methods->insert_at_cursor)) detail::method_wrapper<self, void (*) (const std::string & str), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::insert_at_cursor_>;
  methods->insert_emoji = (decltype (methods->insert_emoji)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::insert_emoji_>;
  methods->move_cursor = (decltype (methods->move_cursor)) detail::method_wrapper<self, void (*) (Gtk::MovementStep step, gint count, gboolean extend_selection), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::move_cursor_>;
  methods->paste_clipboard = (decltype (methods->paste_clipboard)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::paste_clipboard_>;
  methods->populate_popup = (decltype (methods->populate_popup)) detail::method_wrapper<self, void (*) (Gtk::Widget popup), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::populate_popup_>;
  methods->toggle_overwrite = (decltype (methods->toggle_overwrite)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::toggle_overwrite_>;
}

// void Entry::activate (GtkEntry* entry);
// void Entry::activate (::GtkEntry* entry);
void EntryClass::activate_ () noexcept
{
  if (!get_struct_()->activate) return ;
  typedef void (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  call_wrap_v ((::GtkEntry*) (gobj_()));
}

// void Entry::backspace (GtkEntry* entry);
// void Entry::backspace (::GtkEntry* entry);
void EntryClass::backspace_ () noexcept
{
  if (!get_struct_()->backspace) return ;
  typedef void (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->backspace;
  call_wrap_v ((::GtkEntry*) (gobj_()));
}

// void Entry::copy_clipboard (GtkEntry* entry);
// void Entry::copy_clipboard (::GtkEntry* entry);
void EntryClass::copy_clipboard_ () noexcept
{
  if (!get_struct_()->copy_clipboard) return ;
  typedef void (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->copy_clipboard;
  call_wrap_v ((::GtkEntry*) (gobj_()));
}

// void Entry::cut_clipboard (GtkEntry* entry);
// void Entry::cut_clipboard (::GtkEntry* entry);
void EntryClass::cut_clipboard_ () noexcept
{
  if (!get_struct_()->cut_clipboard) return ;
  typedef void (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->cut_clipboard;
  call_wrap_v ((::GtkEntry*) (gobj_()));
}

// void Entry::delete_from_cursor (GtkEntry* entry, GtkDeleteType type, gint count);
// void Entry::delete_from_cursor (::GtkEntry* entry, ::GtkDeleteType type, gint count);
void EntryClass::delete_from_cursor_ (Gtk::DeleteType type, gint count) noexcept
{
  if (!get_struct_()->delete_from_cursor) return ;
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkDeleteType type, gint count);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->delete_from_cursor;
  auto count_to_c = count;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkDeleteType) (type_to_c), (gint) (count_to_c));
}

// void Entry::get_frame_size (GtkEntry* entry, gint* x, gint* y, gint* width, gint* height);
// void Entry::get_frame_size (::GtkEntry* entry, gint x, gint y, gint width, gint height);
// SKIP; inconsistent in height pointer depth (1 vs 0), inconsistent in width pointer depth (1 vs 0), inconsistent in y pointer depth (1 vs 0), inconsistent in x pointer depth (1 vs 0)

// void Entry::get_text_area_size (GtkEntry* entry, gint* x, gint* y, gint* width, gint* height);
// void Entry::get_text_area_size (::GtkEntry* entry, gint x, gint y, gint width, gint height);
// SKIP; inconsistent in height pointer depth (1 vs 0), inconsistent in width pointer depth (1 vs 0), inconsistent in y pointer depth (1 vs 0), inconsistent in x pointer depth (1 vs 0)

// void Entry::insert_at_cursor (GtkEntry* entry, const gchar* str);
// void Entry::insert_at_cursor (::GtkEntry* entry, const char* str);
void EntryClass::insert_at_cursor_ (const std::string & str) noexcept
{
  if (!get_struct_()->insert_at_cursor) return ;
  typedef void (*call_wrap_t) (::GtkEntry* entry, const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->insert_at_cursor;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkEntry*) (gobj_()), (const char*) (str_to_c));
}

// void Entry::insert_emoji (GtkEntry* entry);
// void Entry::insert_emoji (::GtkEntry* entry);
void EntryClass::insert_emoji_ () noexcept
{
  if (!get_struct_()->insert_emoji) return ;
  typedef void (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->insert_emoji;
  call_wrap_v ((::GtkEntry*) (gobj_()));
}

// void Entry::move_cursor (GtkEntry* entry, GtkMovementStep step, gint count, gboolean extend_selection);
// void Entry::move_cursor (::GtkEntry* entry, ::GtkMovementStep step, gint count, gboolean extend_selection);
void EntryClass::move_cursor_ (Gtk::MovementStep step, gint count, gboolean extend_selection) noexcept
{
  if (!get_struct_()->move_cursor) return ;
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkMovementStep step, gint count, gboolean extend_selection);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move_cursor;
  auto extend_selection_to_c = extend_selection;
  auto count_to_c = count;
  auto step_to_c = gi::unwrap (step);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkMovementStep) (step_to_c), (gint) (count_to_c), (gboolean) (extend_selection_to_c));
}

// void Entry::paste_clipboard (GtkEntry* entry);
// void Entry::paste_clipboard (::GtkEntry* entry);
void EntryClass::paste_clipboard_ () noexcept
{
  if (!get_struct_()->paste_clipboard) return ;
  typedef void (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->paste_clipboard;
  call_wrap_v ((::GtkEntry*) (gobj_()));
}

// void Entry::populate_popup (GtkEntry* entry, GtkWidget* popup);
// void Entry::populate_popup (::GtkEntry* entry, ::GtkWidget* popup);
void EntryClass::populate_popup_ (Gtk::Widget popup) noexcept
{
  if (!get_struct_()->populate_popup) return ;
  typedef void (*call_wrap_t) (::GtkEntry* entry, ::GtkWidget* popup);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->populate_popup;
  auto popup_to_c = gi::unwrap (popup, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkEntry*) (gobj_()), (::GtkWidget*) (popup_to_c));
}

// void Entry::toggle_overwrite (GtkEntry* entry);
// void Entry::toggle_overwrite (::GtkEntry* entry);
void EntryClass::toggle_overwrite_ () noexcept
{
  if (!get_struct_()->toggle_overwrite) return ;
  typedef void (*call_wrap_t) (::GtkEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->toggle_overwrite;
  call_wrap_v ((::GtkEntry*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
