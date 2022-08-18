// AUTO-GENERATED

#ifndef _GI_GTK_SELECTIONDATA_IMPL_HPP_
#define _GI_GTK_SELECTIONDATA_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkSelectionData* gtk_selection_data_copy (const GtkSelectionData* data);
// ::GtkSelectionData* gtk_selection_data_copy (const ::GtkSelectionData* data);
Gtk::SelectionData base::SelectionDataBase::copy () const noexcept
{
  typedef ::GtkSelectionData* (*call_wrap_t) (const ::GtkSelectionData* data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_selection_data_copy;
  auto _temp_ret = call_wrap_v ((const ::GtkSelectionData*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_selection_data_free (GtkSelectionData* data);
// void gtk_selection_data_free (::GtkSelectionData* data);
// IGNORE; marked ignore

//  gtk_selection_data_get_data (const GtkSelectionData* selection_data);
//  gtk_selection_data_get_data (const ::GtkSelectionData* selection_data);
// IGNORE; not introspectable; shadowed-by get_data_with_length, inconsistent array info

// GdkAtom gtk_selection_data_get_data_type (const GtkSelectionData* selection_data);
//  gtk_selection_data_get_data_type (const ::GtkSelectionData* selection_data);
// SKIP;  type  not supported

// const guchar* gtk_selection_data_get_data_with_length (const GtkSelectionData* selection_data, gint* length);
// const guint8* gtk_selection_data_get_data_with_length (const ::GtkSelectionData* selection_data, gint* length);
std::vector<guint8> base::SelectionDataBase::get_data () const noexcept
{
  typedef const guint8* (*call_wrap_t) (const ::GtkSelectionData* selection_data, gint* length);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_selection_data_get_data_with_length;
  gint length;
  std::vector<guint8> _temp_ret;
  auto _ret_o = call_wrap_v ((const ::GtkSelectionData*) (gobj_()), (gint*) (&length));
  _temp_ret.resize(length);
  detail::wrap_array (_ret_o, gi::transfer_none, length, _temp_ret.data());
  return _temp_ret;
}

// GdkDisplay* gtk_selection_data_get_display (const GtkSelectionData* selection_data);
// ::GdkDisplay* gtk_selection_data_get_display (const ::GtkSelectionData* selection_data);
Gdk::Display base::SelectionDataBase::get_display () const noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (const ::GtkSelectionData* selection_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_selection_data_get_display;
  auto _temp_ret = call_wrap_v ((const ::GtkSelectionData*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gtk_selection_data_get_format (const GtkSelectionData* selection_data);
// gint gtk_selection_data_get_format (const ::GtkSelectionData* selection_data);
gint base::SelectionDataBase::get_format () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkSelectionData* selection_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_selection_data_get_format;
  auto _temp_ret = call_wrap_v ((const ::GtkSelectionData*) (gobj_()));
  return _temp_ret;
}

// gint gtk_selection_data_get_length (const GtkSelectionData* selection_data);
// gint gtk_selection_data_get_length (const ::GtkSelectionData* selection_data);
gint base::SelectionDataBase::get_length () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkSelectionData* selection_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_selection_data_get_length;
  auto _temp_ret = call_wrap_v ((const ::GtkSelectionData*) (gobj_()));
  return _temp_ret;
}

// GdkPixbuf* gtk_selection_data_get_pixbuf (const GtkSelectionData* selection_data);
// ::GdkPixbuf* gtk_selection_data_get_pixbuf (const ::GtkSelectionData* selection_data);
GdkPixbuf::Pixbuf base::SelectionDataBase::get_pixbuf () const noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (const ::GtkSelectionData* selection_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_selection_data_get_pixbuf;
  auto _temp_ret = call_wrap_v ((const ::GtkSelectionData*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GdkAtom gtk_selection_data_get_selection (const GtkSelectionData* selection_data);
//  gtk_selection_data_get_selection (const ::GtkSelectionData* selection_data);
// SKIP;  type  not supported

// GdkAtom gtk_selection_data_get_target (const GtkSelectionData* selection_data);
//  gtk_selection_data_get_target (const ::GtkSelectionData* selection_data);
// SKIP;  type  not supported

// gboolean gtk_selection_data_get_targets (const GtkSelectionData* selection_data, gint* n_atoms);
// gboolean gtk_selection_data_get_targets (const ::GtkSelectionData* selection_data, gint* n_atoms);
// SKIP; container element not supported

// guchar* gtk_selection_data_get_text (const GtkSelectionData* selection_data);
// char* gtk_selection_data_get_text (const ::GtkSelectionData* selection_data);
std::string base::SelectionDataBase::get_text () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GtkSelectionData* selection_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_selection_data_get_text;
  auto _temp_ret = call_wrap_v ((const ::GtkSelectionData*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar** gtk_selection_data_get_uris (const GtkSelectionData* selection_data);
// char** gtk_selection_data_get_uris (const ::GtkSelectionData* selection_data);
std::vector<std::string> base::SelectionDataBase::get_uris () const noexcept
{
  typedef char** (*call_wrap_t) (const ::GtkSelectionData* selection_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_selection_data_get_uris;
  auto _temp_ret = call_wrap_v ((const ::GtkSelectionData*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// void gtk_selection_data_set (GtkSelectionData* selection_data, GdkAtom type, gint format, const guchar* data, gint length);
// void gtk_selection_data_set (::GtkSelectionData* selection_data,  type, gint format, const guint8* data, gint length);
// SKIP; type type  not supported

// gboolean gtk_selection_data_set_pixbuf (GtkSelectionData* selection_data, GdkPixbuf* pixbuf);
// gboolean gtk_selection_data_set_pixbuf (::GtkSelectionData* selection_data, ::GdkPixbuf* pixbuf);
bool base::SelectionDataBase::set_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSelectionData* selection_data, ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_selection_data_set_pixbuf;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkSelectionData*) (gobj_()), (::GdkPixbuf*) (pixbuf_to_c));
  return _temp_ret;
}

// gboolean gtk_selection_data_set_text (GtkSelectionData* selection_data, const gchar* str, gint len);
// gboolean gtk_selection_data_set_text (::GtkSelectionData* selection_data, const char* str, gint len);
bool base::SelectionDataBase::set_text (const std::string & str, gint len) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSelectionData* selection_data, const char* str, gint len);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_selection_data_set_text;
  auto len_to_c = len;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkSelectionData*) (gobj_()), (const char*) (str_to_c), (gint) (len_to_c));
  return _temp_ret;
}

// gboolean gtk_selection_data_set_uris (GtkSelectionData* selection_data, gchar** uris);
// gboolean gtk_selection_data_set_uris (::GtkSelectionData* selection_data, char** uris);
bool base::SelectionDataBase::set_uris (const std::vector<std::string> & uris) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSelectionData* selection_data, char** uris);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_selection_data_set_uris;
  auto uris_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (uris);
  auto uris_w = unwrap (uris_i, gi::transfer_none, direction_in);
  auto uris_to_c = uris_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GtkSelectionData*) (gobj_()), (char**) (uris_to_c));
  return _temp_ret;
}

// gboolean gtk_selection_data_targets_include_image (const GtkSelectionData* selection_data, gboolean writable);
// gboolean gtk_selection_data_targets_include_image (const ::GtkSelectionData* selection_data, gboolean writable);
bool base::SelectionDataBase::targets_include_image (gboolean writable) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkSelectionData* selection_data, gboolean writable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_selection_data_targets_include_image;
  auto writable_to_c = writable;
  auto _temp_ret = call_wrap_v ((const ::GtkSelectionData*) (gobj_()), (gboolean) (writable_to_c));
  return _temp_ret;
}

// gboolean gtk_selection_data_targets_include_rich_text (const GtkSelectionData* selection_data, GtkTextBuffer* buffer);
// gboolean gtk_selection_data_targets_include_rich_text (const ::GtkSelectionData* selection_data, ::GtkTextBuffer* buffer);
bool base::SelectionDataBase::targets_include_rich_text (Gtk::TextBuffer buffer) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkSelectionData* selection_data, ::GtkTextBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_selection_data_targets_include_rich_text;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkSelectionData*) (gobj_()), (::GtkTextBuffer*) (buffer_to_c));
  return _temp_ret;
}

// gboolean gtk_selection_data_targets_include_text (const GtkSelectionData* selection_data);
// gboolean gtk_selection_data_targets_include_text (const ::GtkSelectionData* selection_data);
bool base::SelectionDataBase::targets_include_text () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkSelectionData* selection_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_selection_data_targets_include_text;
  auto _temp_ret = call_wrap_v ((const ::GtkSelectionData*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_selection_data_targets_include_uri (const GtkSelectionData* selection_data);
// gboolean gtk_selection_data_targets_include_uri (const ::GtkSelectionData* selection_data);
bool base::SelectionDataBase::targets_include_uri () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GtkSelectionData* selection_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_selection_data_targets_include_uri;
  auto _temp_ret = call_wrap_v ((const ::GtkSelectionData*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/selectiondata_extra_def_impl.hpp>)
#include <gtk/selectiondata_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/selectiondata_extra_impl.hpp>)
#include <gtk/selectiondata_extra_impl.hpp>
#endif
#endif

#endif
