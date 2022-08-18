// AUTO-GENERATED

#ifndef _GI_GST_TAGLIST_IMPL_HPP_
#define _GI_GST_TAGLIST_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstTagList* gst_tag_list_new (const gchar* tag);
// ::GstTagList* gst_tag_list_new (const char* tag);
// IGNORE; not introspectable, varargs not supported

// GstTagList* gst_tag_list_new_empty ();
// ::GstTagList* gst_tag_list_new_empty ();
Gst::TagList base::TagListBase::new_empty () noexcept
{
  typedef ::GstTagList* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_new_empty;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstTagList* gst_tag_list_new_from_string (const gchar* str);
// ::GstTagList* gst_tag_list_new_from_string (const char* str);
Gst::TagList base::TagListBase::new_from_string (const std::string & str) noexcept
{
  typedef ::GstTagList* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_new_from_string;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstTagList* gst_tag_list_new_valist (va_list var_args);
// ::GstTagList* gst_tag_list_new_valist ( var_args);
// IGNORE; not introspectable, var_args type  not supported

// void gst_tag_list_add (GstTagList* list, GstTagMergeMode mode, const gchar* tag);
// void gst_tag_list_add (::GstTagList* list, ::GstTagMergeMode mode, const char* tag);
// IGNORE; not introspectable, varargs not supported

// void gst_tag_list_add_valist (GstTagList* list, GstTagMergeMode mode, const gchar* tag, va_list var_args);
// void gst_tag_list_add_valist (::GstTagList* list, ::GstTagMergeMode mode, const char* tag,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void gst_tag_list_add_valist_values (GstTagList* list, GstTagMergeMode mode, const gchar* tag, va_list var_args);
// void gst_tag_list_add_valist_values (::GstTagList* list, ::GstTagMergeMode mode, const char* tag,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void gst_tag_list_add_value (GstTagList* list, GstTagMergeMode mode, const gchar* tag, const GValue* value);
// void gst_tag_list_add_value (::GstTagList* list, ::GstTagMergeMode mode, const char* tag, const ::GValue* value);
void base::TagListBase::add_value (Gst::TagMergeMode mode, const std::string & tag, const GObject::Value & value) noexcept
{
  typedef void (*call_wrap_t) (::GstTagList* list, ::GstTagMergeMode mode, const char* tag, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_add_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::GstTagList*) (gobj_()), (::GstTagMergeMode) (mode_to_c), (const char*) (tag_to_c), (const ::GValue*) (value_to_c));
}

// void gst_tag_list_add_values (GstTagList* list, GstTagMergeMode mode, const gchar* tag);
// void gst_tag_list_add_values (::GstTagList* list, ::GstTagMergeMode mode, const char* tag);
// IGNORE; not introspectable, varargs not supported

// GstTagList* gst_tag_list_copy (const GstTagList* taglist);
// ::GstTagList* gst_tag_list_copy (const ::GstTagList* taglist);
Gst::TagList base::TagListBase::copy () const noexcept
{
  typedef ::GstTagList* (*call_wrap_t) (const ::GstTagList* taglist);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_copy;
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_tag_list_foreach (const GstTagList* list, GstTagForeachFunc func, gpointer user_data);
// void gst_tag_list_foreach (const ::GstTagList* list, Gst::TagForeachFunc::cfunction_type func, void* user_data);
void base::TagListBase::foreach (Gst::TagForeachFunc func) const noexcept
{
  typedef void (*call_wrap_t) (const ::GstTagList* list, Gst::TagForeachFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((const ::GstTagList*) (gobj_()), (Gst::TagForeachFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// gboolean gst_tag_list_get_boolean (const GstTagList* list, const gchar* tag, gboolean* value);
// gboolean gst_tag_list_get_boolean (const ::GstTagList* list, const char* tag, gboolean* value);
bool base::TagListBase::get_boolean (const std::string & tag, bool & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, gboolean* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_boolean;
  gboolean value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (gboolean*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, bool> base::TagListBase::get_boolean (const std::string & tag) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, gboolean* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_boolean;
  gboolean value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (gboolean*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_tag_list_get_boolean_index (const GstTagList* list, const gchar* tag, guint index, gboolean* value);
// gboolean gst_tag_list_get_boolean_index (const ::GstTagList* list, const char* tag, guint index, gboolean* value);
bool base::TagListBase::get_boolean_index (const std::string & tag, guint index, bool & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, gboolean* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_boolean_index;
  gboolean value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (gboolean*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, bool> base::TagListBase::get_boolean_index (const std::string & tag, guint index) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, gboolean* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_boolean_index;
  gboolean value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (gboolean*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_tag_list_get_date (const GstTagList* list, const gchar* tag, GDate** value);
// gboolean gst_tag_list_get_date (const ::GstTagList* list, const char* tag, ::GDate** value);
bool base::TagListBase::get_date (const std::string & tag, GLib::Date & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, ::GDate** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_date;
  ::GDate* value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (::GDate**) (&value_o));
  value = gi::wrap (value_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GLib::Date> base::TagListBase::get_date (const std::string & tag) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, ::GDate** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_date;
  ::GDate* value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (::GDate**) (&value_o));
  return std::make_tuple (_temp_ret, gi::wrap (value_o, gi::transfer_full, gi::direction_out));
}

// gboolean gst_tag_list_get_date_index (const GstTagList* list, const gchar* tag, guint index, GDate** value);
// gboolean gst_tag_list_get_date_index (const ::GstTagList* list, const char* tag, guint index, ::GDate** value);
bool base::TagListBase::get_date_index (const std::string & tag, guint index, GLib::Date & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, ::GDate** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_date_index;
  ::GDate* value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (::GDate**) (&value_o));
  value = gi::wrap (value_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GLib::Date> base::TagListBase::get_date_index (const std::string & tag, guint index) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, ::GDate** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_date_index;
  ::GDate* value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (::GDate**) (&value_o));
  return std::make_tuple (_temp_ret, gi::wrap (value_o, gi::transfer_full, gi::direction_out));
}

// gboolean gst_tag_list_get_date_time (const GstTagList* list, const gchar* tag, GstDateTime** value);
// gboolean gst_tag_list_get_date_time (const ::GstTagList* list, const char* tag, ::GstDateTime** value);
bool base::TagListBase::get_date_time (const std::string & tag, Gst::DateTime & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, ::GstDateTime** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_date_time;
  ::GstDateTime* value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (::GstDateTime**) (&value_o));
  value = gi::wrap (value_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gst::DateTime> base::TagListBase::get_date_time (const std::string & tag) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, ::GstDateTime** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_date_time;
  ::GstDateTime* value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (::GstDateTime**) (&value_o));
  return std::make_tuple (_temp_ret, gi::wrap (value_o, gi::transfer_full, gi::direction_out));
}

// gboolean gst_tag_list_get_date_time_index (const GstTagList* list, const gchar* tag, guint index, GstDateTime** value);
// gboolean gst_tag_list_get_date_time_index (const ::GstTagList* list, const char* tag, guint index, ::GstDateTime** value);
bool base::TagListBase::get_date_time_index (const std::string & tag, guint index, Gst::DateTime & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, ::GstDateTime** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_date_time_index;
  ::GstDateTime* value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (::GstDateTime**) (&value_o));
  value = gi::wrap (value_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gst::DateTime> base::TagListBase::get_date_time_index (const std::string & tag, guint index) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, ::GstDateTime** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_date_time_index;
  ::GstDateTime* value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (::GstDateTime**) (&value_o));
  return std::make_tuple (_temp_ret, gi::wrap (value_o, gi::transfer_full, gi::direction_out));
}

// gboolean gst_tag_list_get_double (const GstTagList* list, const gchar* tag, gdouble* value);
// gboolean gst_tag_list_get_double (const ::GstTagList* list, const char* tag, gdouble* value);
bool base::TagListBase::get_double (const std::string & tag, gdouble & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, gdouble* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_double;
  gdouble value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (gdouble*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gdouble> base::TagListBase::get_double (const std::string & tag) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, gdouble* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_double;
  gdouble value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (gdouble*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_tag_list_get_double_index (const GstTagList* list, const gchar* tag, guint index, gdouble* value);
// gboolean gst_tag_list_get_double_index (const ::GstTagList* list, const char* tag, guint index, gdouble* value);
bool base::TagListBase::get_double_index (const std::string & tag, guint index, gdouble & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, gdouble* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_double_index;
  gdouble value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (gdouble*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gdouble> base::TagListBase::get_double_index (const std::string & tag, guint index) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, gdouble* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_double_index;
  gdouble value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (gdouble*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_tag_list_get_float (const GstTagList* list, const gchar* tag, gfloat* value);
// gboolean gst_tag_list_get_float (const ::GstTagList* list, const char* tag, gfloat* value);
bool base::TagListBase::get_float (const std::string & tag, gfloat & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, gfloat* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_float;
  gfloat value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (gfloat*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gfloat> base::TagListBase::get_float (const std::string & tag) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, gfloat* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_float;
  gfloat value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (gfloat*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_tag_list_get_float_index (const GstTagList* list, const gchar* tag, guint index, gfloat* value);
// gboolean gst_tag_list_get_float_index (const ::GstTagList* list, const char* tag, guint index, gfloat* value);
bool base::TagListBase::get_float_index (const std::string & tag, guint index, gfloat & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, gfloat* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_float_index;
  gfloat value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (gfloat*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gfloat> base::TagListBase::get_float_index (const std::string & tag, guint index) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, gfloat* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_float_index;
  gfloat value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (gfloat*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_tag_list_get_int (const GstTagList* list, const gchar* tag, gint* value);
// gboolean gst_tag_list_get_int (const ::GstTagList* list, const char* tag, gint* value);
bool base::TagListBase::get_int (const std::string & tag, gint & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, gint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_int;
  gint value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (gint*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gint> base::TagListBase::get_int (const std::string & tag) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, gint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_int;
  gint value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (gint*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_tag_list_get_int64 (const GstTagList* list, const gchar* tag, gint64* value);
// gboolean gst_tag_list_get_int64 (const ::GstTagList* list, const char* tag, gint64* value);
bool base::TagListBase::get_int64 (const std::string & tag, gint64 & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, gint64* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_int64;
  gint64 value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (gint64*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gint64> base::TagListBase::get_int64 (const std::string & tag) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, gint64* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_int64;
  gint64 value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (gint64*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_tag_list_get_int64_index (const GstTagList* list, const gchar* tag, guint index, gint64* value);
// gboolean gst_tag_list_get_int64_index (const ::GstTagList* list, const char* tag, guint index, gint64* value);
bool base::TagListBase::get_int64_index (const std::string & tag, guint index, gint64 & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, gint64* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_int64_index;
  gint64 value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (gint64*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gint64> base::TagListBase::get_int64_index (const std::string & tag, guint index) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, gint64* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_int64_index;
  gint64 value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (gint64*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_tag_list_get_int_index (const GstTagList* list, const gchar* tag, guint index, gint* value);
// gboolean gst_tag_list_get_int_index (const ::GstTagList* list, const char* tag, guint index, gint* value);
bool base::TagListBase::get_int_index (const std::string & tag, guint index, gint & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, gint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_int_index;
  gint value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (gint*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gint> base::TagListBase::get_int_index (const std::string & tag, guint index) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, gint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_int_index;
  gint value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (gint*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_tag_list_get_pointer (const GstTagList* list, const gchar* tag, gpointer* value);
// gboolean gst_tag_list_get_pointer (const ::GstTagList* list, const char* tag, void** value);
bool base::TagListBase::get_pointer (const std::string & tag, gpointer & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, void** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_pointer;
  void* value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (void**) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gpointer> base::TagListBase::get_pointer (const std::string & tag) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, void** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_pointer;
  void* value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (void**) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_tag_list_get_pointer_index (const GstTagList* list, const gchar* tag, guint index, gpointer* value);
// gboolean gst_tag_list_get_pointer_index (const ::GstTagList* list, const char* tag, guint index, void** value);
bool base::TagListBase::get_pointer_index (const std::string & tag, guint index, gpointer & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, void** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_pointer_index;
  void* value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (void**) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gpointer> base::TagListBase::get_pointer_index (const std::string & tag, guint index) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, void** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_pointer_index;
  void* value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (void**) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_tag_list_get_sample (const GstTagList* list, const gchar* tag, GstSample** sample);
// gboolean gst_tag_list_get_sample (const ::GstTagList* list, const char* tag, ::GstSample** sample);
bool base::TagListBase::get_sample (const std::string & tag, Gst::Sample & sample) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, ::GstSample** sample);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_sample;
  ::GstSample* sample_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (::GstSample**) (&sample_o));
  sample = gi::wrap (sample_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gst::Sample> base::TagListBase::get_sample (const std::string & tag) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, ::GstSample** sample);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_sample;
  ::GstSample* sample_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (::GstSample**) (&sample_o));
  return std::make_tuple (_temp_ret, gi::wrap (sample_o, gi::transfer_full, gi::direction_out));
}

// gboolean gst_tag_list_get_sample_index (const GstTagList* list, const gchar* tag, guint index, GstSample** sample);
// gboolean gst_tag_list_get_sample_index (const ::GstTagList* list, const char* tag, guint index, ::GstSample** sample);
bool base::TagListBase::get_sample_index (const std::string & tag, guint index, Gst::Sample & sample) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, ::GstSample** sample);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_sample_index;
  ::GstSample* sample_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (::GstSample**) (&sample_o));
  sample = gi::wrap (sample_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gst::Sample> base::TagListBase::get_sample_index (const std::string & tag, guint index) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, ::GstSample** sample);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_sample_index;
  ::GstSample* sample_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (::GstSample**) (&sample_o));
  return std::make_tuple (_temp_ret, gi::wrap (sample_o, gi::transfer_full, gi::direction_out));
}

// GstTagScope gst_tag_list_get_scope (const GstTagList* list);
// ::GstTagScope gst_tag_list_get_scope (const ::GstTagList* list);
Gst::TagScope base::TagListBase::get_scope () const noexcept
{
  typedef ::GstTagScope (*call_wrap_t) (const ::GstTagList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_scope;
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gst_tag_list_get_string (const GstTagList* list, const gchar* tag, gchar** value);
// gboolean gst_tag_list_get_string (const ::GstTagList* list, const char* tag, char** value);
bool base::TagListBase::get_string (const std::string & tag, std::string & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, char** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_string;
  char* value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (char**) (&value_o));
  value = gi::wrap (value_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> base::TagListBase::get_string (const std::string & tag) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, char** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_string;
  char* value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (char**) (&value_o));
  return std::make_tuple (_temp_ret, gi::wrap (value_o, gi::transfer_full, gi::direction_out));
}

// gboolean gst_tag_list_get_string_index (const GstTagList* list, const gchar* tag, guint index, gchar** value);
// gboolean gst_tag_list_get_string_index (const ::GstTagList* list, const char* tag, guint index, char** value);
bool base::TagListBase::get_string_index (const std::string & tag, guint index, std::string & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, char** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_string_index;
  char* value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (char**) (&value_o));
  value = gi::wrap (value_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> base::TagListBase::get_string_index (const std::string & tag, guint index) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, char** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_string_index;
  char* value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (char**) (&value_o));
  return std::make_tuple (_temp_ret, gi::wrap (value_o, gi::transfer_full, gi::direction_out));
}

// guint gst_tag_list_get_tag_size (const GstTagList* list, const gchar* tag);
// guint gst_tag_list_get_tag_size (const ::GstTagList* list, const char* tag);
guint base::TagListBase::get_tag_size (const std::string & tag) const noexcept
{
  typedef guint (*call_wrap_t) (const ::GstTagList* list, const char* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_tag_size;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c));
  return _temp_ret;
}

// gboolean gst_tag_list_get_uint (const GstTagList* list, const gchar* tag, guint* value);
// gboolean gst_tag_list_get_uint (const ::GstTagList* list, const char* tag, guint* value);
bool base::TagListBase::get_uint (const std::string & tag, guint & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_uint;
  guint value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, guint> base::TagListBase::get_uint (const std::string & tag) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_uint;
  guint value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_tag_list_get_uint64 (const GstTagList* list, const gchar* tag, guint64* value);
// gboolean gst_tag_list_get_uint64 (const ::GstTagList* list, const char* tag, guint64* value);
bool base::TagListBase::get_uint64 (const std::string & tag, guint64 & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint64* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_uint64;
  guint64 value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint64*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, guint64> base::TagListBase::get_uint64 (const std::string & tag) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint64* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_uint64;
  guint64 value_o {};
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint64*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_tag_list_get_uint64_index (const GstTagList* list, const gchar* tag, guint index, guint64* value);
// gboolean gst_tag_list_get_uint64_index (const ::GstTagList* list, const char* tag, guint index, guint64* value);
bool base::TagListBase::get_uint64_index (const std::string & tag, guint index, guint64 & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, guint64* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_uint64_index;
  guint64 value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (guint64*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, guint64> base::TagListBase::get_uint64_index (const std::string & tag, guint index) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, guint64* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_uint64_index;
  guint64 value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (guint64*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_tag_list_get_uint_index (const GstTagList* list, const gchar* tag, guint index, guint* value);
// gboolean gst_tag_list_get_uint_index (const ::GstTagList* list, const char* tag, guint index, guint* value);
bool base::TagListBase::get_uint_index (const std::string & tag, guint index, guint & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, guint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_uint_index;
  guint value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (guint*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, guint> base::TagListBase::get_uint_index (const std::string & tag, guint index) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, guint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_uint_index;
  guint value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (guint*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// const GValue* gst_tag_list_get_value_index (const GstTagList* list, const gchar* tag, guint index);
// const ::GValue* gst_tag_list_get_value_index (const ::GstTagList* list, const char* tag, guint index);
GObject::Value base::TagListBase::get_value_index (const std::string & tag, guint index) const noexcept
{
  typedef const ::GValue* (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_get_value_index;
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gst_tag_list_insert (GstTagList* into, const GstTagList* from, GstTagMergeMode mode);
// void gst_tag_list_insert (::GstTagList* into, const ::GstTagList* from, ::GstTagMergeMode mode);
void base::TagListBase::insert (const Gst::TagList & from, Gst::TagMergeMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GstTagList* into, const ::GstTagList* from, ::GstTagMergeMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_insert;
  auto mode_to_c = gi::unwrap (mode);
  auto from_to_c = gi::unwrap (from, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstTagList*) (gobj_()), (const ::GstTagList*) (from_to_c), (::GstTagMergeMode) (mode_to_c));
}

// gboolean gst_tag_list_is_empty (const GstTagList* list);
// gboolean gst_tag_list_is_empty (const ::GstTagList* list);
bool base::TagListBase::is_empty () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_is_empty;
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_tag_list_is_equal (const GstTagList* list1, const GstTagList* list2);
// gboolean gst_tag_list_is_equal (const ::GstTagList* list1, const ::GstTagList* list2);
bool base::TagListBase::is_equal (const Gst::TagList & list2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list1, const ::GstTagList* list2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_is_equal;
  auto list2_to_c = gi::unwrap (list2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const ::GstTagList*) (list2_to_c));
  return _temp_ret;
}

// GstTagList* gst_tag_list_merge (const GstTagList* list1, const GstTagList* list2, GstTagMergeMode mode);
// ::GstTagList* gst_tag_list_merge (const ::GstTagList* list1, const ::GstTagList* list2, ::GstTagMergeMode mode);
Gst::TagList base::TagListBase::merge (const Gst::TagList & list2, Gst::TagMergeMode mode) const noexcept
{
  typedef ::GstTagList* (*call_wrap_t) (const ::GstTagList* list1, const ::GstTagList* list2, ::GstTagMergeMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_merge;
  auto mode_to_c = gi::unwrap (mode);
  auto list2_to_c = gi::unwrap (list2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const ::GstTagList*) (list2_to_c), (::GstTagMergeMode) (mode_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::TagList base::TagListBase::merge (Gst::TagMergeMode mode) const noexcept
{
  typedef ::GstTagList* (*call_wrap_t) (const ::GstTagList* list1, const ::GstTagList* list2, ::GstTagMergeMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_merge;
  auto mode_to_c = gi::unwrap (mode);
  auto list2_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const ::GstTagList*) (list2_to_c), (::GstTagMergeMode) (mode_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint gst_tag_list_n_tags (const GstTagList* list);
// gint gst_tag_list_n_tags (const ::GstTagList* list);
gint base::TagListBase::n_tags () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstTagList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_n_tags;
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()));
  return _temp_ret;
}

// const gchar* gst_tag_list_nth_tag_name (const GstTagList* list, guint index);
// const char* gst_tag_list_nth_tag_name (const ::GstTagList* list, guint index);
std::string base::TagListBase::nth_tag_name (guint index) const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstTagList* list, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_nth_tag_name;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_tag_list_peek_string_index (const GstTagList* list, const gchar* tag, guint index, const gchar** value);
// gboolean gst_tag_list_peek_string_index (const ::GstTagList* list, const char* tag, guint index, const char** value);
bool base::TagListBase::peek_string_index (const std::string & tag, guint index, std::string & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, const char** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_peek_string_index;
  const char* value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (const char**) (&value_o));
  value = gi::wrap (value_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> base::TagListBase::peek_string_index (const std::string & tag, guint index) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTagList* list, const char* tag, guint index, const char** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_peek_string_index;
  const char* value_o {};
  auto index_to_c = index;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()), (const char*) (tag_to_c), (guint) (index_to_c), (const char**) (&value_o));
  return std::make_tuple (_temp_ret, gi::wrap (value_o, gi::transfer_none, gi::direction_out));
}

// void gst_tag_list_remove_tag (GstTagList* list, const gchar* tag);
// void gst_tag_list_remove_tag (::GstTagList* list, const char* tag);
void base::TagListBase::remove_tag (const std::string & tag) noexcept
{
  typedef void (*call_wrap_t) (::GstTagList* list, const char* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_remove_tag;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstTagList*) (gobj_()), (const char*) (tag_to_c));
}

// void gst_tag_list_set_scope (GstTagList* list, GstTagScope scope);
// void gst_tag_list_set_scope (::GstTagList* list, ::GstTagScope scope);
void base::TagListBase::set_scope (Gst::TagScope scope) noexcept
{
  typedef void (*call_wrap_t) (::GstTagList* list, ::GstTagScope scope);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_set_scope;
  auto scope_to_c = gi::unwrap (scope);
  call_wrap_v ((::GstTagList*) (gobj_()), (::GstTagScope) (scope_to_c));
}

// gchar* gst_tag_list_to_string (const GstTagList* list);
// char* gst_tag_list_to_string (const ::GstTagList* list);
std::string base::TagListBase::to_string () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GstTagList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_to_string;
  auto _temp_ret = call_wrap_v ((const ::GstTagList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_tag_list_copy_value (GValue* dest, const GstTagList* list, const gchar* tag);
// gboolean gst_tag_list_copy_value (::GValue* dest, const ::GstTagList* list, const char* tag);
bool base::TagListBase::copy_value (GObject::Value & dest, const Gst::TagList & list, const std::string & tag) noexcept
{
  typedef gboolean (*call_wrap_t) (::GValue* dest, const ::GstTagList* list, const char* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_copy_value;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto list_to_c = gi::unwrap (list, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  auto _temp_ret = call_wrap_v ((::GValue*) ((GValue*) &dest_c), (const ::GstTagList*) (list_to_c), (const char*) (tag_to_c));
  dest = gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GObject::Value> base::TagListBase::copy_value (const Gst::TagList & list, const std::string & tag) noexcept
{
  typedef gboolean (*call_wrap_t) (::GValue* dest, const ::GstTagList* list, const char* tag);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tag_list_copy_value;
  auto tag_to_c = gi::unwrap (tag, gi::transfer_none, gi::direction_in);
  auto list_to_c = gi::unwrap (list, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<GValue>::type dest_c;
  auto _temp_ret = call_wrap_v ((::GValue*) ((GValue*) &dest_c), (const ::GstTagList*) (list_to_c), (const char*) (tag_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((GValue*) &dest_c, gi::transfer_none, gi::direction_out));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/taglist_extra_def_impl.hpp>)
#include <gst/taglist_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/taglist_extra_impl.hpp>)
#include <gst/taglist_extra_impl.hpp>
#endif
#endif

#endif
