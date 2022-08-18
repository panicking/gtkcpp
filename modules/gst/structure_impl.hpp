// AUTO-GENERATED

#ifndef _GI_GST_STRUCTURE_IMPL_HPP_
#define _GI_GST_STRUCTURE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static GType _field_type_get (const ::GstStructure* obj) { return (GType) obj->type; }
// GType Structure::type (const ::GstStructure* obj);
// GType Structure::type (const ::GstStructure* obj);
GType base::StructureBase::type_ () const noexcept
{
  typedef GType (*call_wrap_t) (const ::GstStructure* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()));
  return _temp_ret;
}

static void _field_type_set (::GstStructure* obj, GType _value) { obj->type = (decltype(obj->type)) _value; }
//  Structure::type (::GstStructure* obj, GType _value);
// void Structure::type (::GstStructure* obj, GType _value);
void base::StructureBase::type_ (GType _value) noexcept
{
  typedef void (*call_wrap_t) (::GstStructure* obj, GType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstStructure*) (gobj_()), (GType) (_value_to_c));
}

// GstStructure* gst_structure_from_string (const gchar* string, gchar** end);
// ::GstStructure* gst_structure_from_string (const char* string, char** end);
Gst::Structure base::StructureBase::from_string (const std::string & string, std::string * end) noexcept
{
  typedef ::GstStructure* (*call_wrap_t) (const char* string, char** end);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_from_string;
  char* end_o {};
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (char**) (end ? &end_o : nullptr));
  if (end) *end = gi::wrap (end_o, gi::transfer_none, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<Gst::Structure, std::string> base::StructureBase::from_string (const std::string & string) noexcept
{
  typedef ::GstStructure* (*call_wrap_t) (const char* string, char** end);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_from_string;
  char* end_o {};
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (char**) (&end_o));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (end_o, gi::transfer_none, gi::direction_out));
}

// GstStructure* gst_structure_new (const gchar* name, const gchar* firstfield);
// ::GstStructure* gst_structure_new (const char* name, const char* firstfield);
// IGNORE; not introspectable, varargs not supported

// GstStructure* gst_structure_new_empty (const gchar* name);
// ::GstStructure* gst_structure_new_empty (const char* name);
Gst::Structure base::StructureBase::new_empty (const std::string & name) noexcept
{
  typedef ::GstStructure* (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_new_empty;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstStructure* gst_structure_new_from_string (const gchar* string);
// ::GstStructure* gst_structure_new_from_string (const char* string);
Gst::Structure base::StructureBase::new_from_string (const std::string & string) noexcept
{
  typedef ::GstStructure* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_new_from_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstStructure* gst_structure_new_id (GQuark name_quark, GQuark field_quark);
// ::GstStructure* gst_structure_new_id (::GQuark name_quark, ::GQuark field_quark);
// IGNORE; not introspectable, varargs not supported

// GstStructure* gst_structure_new_id_empty (GQuark quark);
// ::GstStructure* gst_structure_new_id_empty (::GQuark quark);
Gst::Structure base::StructureBase::new_id_empty (::GQuark quark) noexcept
{
  typedef ::GstStructure* (*call_wrap_t) (::GQuark quark);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_new_id_empty;
  auto quark_to_c = quark;
  auto _temp_ret = call_wrap_v ((::GQuark) (quark_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstStructure* gst_structure_new_valist (const gchar* name, const gchar* firstfield, va_list varargs);
// ::GstStructure* gst_structure_new_valist (const char* name, const char* firstfield,  varargs);
// IGNORE; not introspectable, varargs type  not supported

// gboolean gst_structure_can_intersect (const GstStructure* struct1, const GstStructure* struct2);
// gboolean gst_structure_can_intersect (const ::GstStructure* struct1, const ::GstStructure* struct2);
bool base::StructureBase::can_intersect (const Gst::Structure & struct2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* struct1, const ::GstStructure* struct2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_can_intersect;
  auto struct2_to_c = gi::unwrap (struct2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const ::GstStructure*) (struct2_to_c));
  return _temp_ret;
}

// GstStructure* gst_structure_copy (const GstStructure* structure);
// ::GstStructure* gst_structure_copy (const ::GstStructure* structure);
Gst::Structure base::StructureBase::copy () const noexcept
{
  typedef ::GstStructure* (*call_wrap_t) (const ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_copy;
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_structure_filter_and_map_in_place (GstStructure* structure, GstStructureFilterMapFunc func, gpointer user_data);
// void gst_structure_filter_and_map_in_place (::GstStructure* structure, Gst::StructureFilterMapFunc::cfunction_type func, void* user_data);
void base::StructureBase::filter_and_map_in_place (Gst::StructureFilterMapFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GstStructure* structure, Gst::StructureFilterMapFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_filter_and_map_in_place;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::GstStructure*) (gobj_()), (Gst::StructureFilterMapFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// void gst_structure_fixate (GstStructure* structure);
// void gst_structure_fixate (::GstStructure* structure);
void base::StructureBase::fixate () noexcept
{
  typedef void (*call_wrap_t) (::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_fixate;
  call_wrap_v ((::GstStructure*) (gobj_()));
}

// gboolean gst_structure_fixate_field (GstStructure* structure, const char* field_name);
// gboolean gst_structure_fixate_field (::GstStructure* structure, const char* field_name);
bool base::StructureBase::fixate_field (const std::string & field_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstStructure* structure, const char* field_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_fixate_field;
  auto field_name_to_c = gi::unwrap (field_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStructure*) (gobj_()), (const char*) (field_name_to_c));
  return _temp_ret;
}

// gboolean gst_structure_fixate_field_boolean (GstStructure* structure, const char* field_name, gboolean target);
// gboolean gst_structure_fixate_field_boolean (::GstStructure* structure, const char* field_name, gboolean target);
bool base::StructureBase::fixate_field_boolean (const std::string & field_name, gboolean target) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstStructure* structure, const char* field_name, gboolean target);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_fixate_field_boolean;
  auto target_to_c = target;
  auto field_name_to_c = gi::unwrap (field_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStructure*) (gobj_()), (const char*) (field_name_to_c), (gboolean) (target_to_c));
  return _temp_ret;
}

// gboolean gst_structure_fixate_field_nearest_double (GstStructure* structure, const char* field_name, double target);
// gboolean gst_structure_fixate_field_nearest_double (::GstStructure* structure, const char* field_name, gdouble target);
bool base::StructureBase::fixate_field_nearest_double (const std::string & field_name, gdouble target) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstStructure* structure, const char* field_name, gdouble target);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_fixate_field_nearest_double;
  auto target_to_c = target;
  auto field_name_to_c = gi::unwrap (field_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStructure*) (gobj_()), (const char*) (field_name_to_c), (gdouble) (target_to_c));
  return _temp_ret;
}

// gboolean gst_structure_fixate_field_nearest_fraction (GstStructure* structure, const char* field_name, const gint target_numerator, const gint target_denominator);
// gboolean gst_structure_fixate_field_nearest_fraction (::GstStructure* structure, const char* field_name, const gint target_numerator, const gint target_denominator);
bool base::StructureBase::fixate_field_nearest_fraction (const std::string & field_name, const gint target_numerator, const gint target_denominator) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstStructure* structure, const char* field_name, const gint target_numerator, const gint target_denominator);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_fixate_field_nearest_fraction;
  auto target_denominator_to_c = target_denominator;
  auto target_numerator_to_c = target_numerator;
  auto field_name_to_c = gi::unwrap (field_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStructure*) (gobj_()), (const char*) (field_name_to_c), (const gint) (target_numerator_to_c), (const gint) (target_denominator_to_c));
  return _temp_ret;
}

// gboolean gst_structure_fixate_field_nearest_int (GstStructure* structure, const char* field_name, int target);
// gboolean gst_structure_fixate_field_nearest_int (::GstStructure* structure, const char* field_name, gint target);
bool base::StructureBase::fixate_field_nearest_int (const std::string & field_name, gint target) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstStructure* structure, const char* field_name, gint target);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_fixate_field_nearest_int;
  auto target_to_c = target;
  auto field_name_to_c = gi::unwrap (field_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStructure*) (gobj_()), (const char*) (field_name_to_c), (gint) (target_to_c));
  return _temp_ret;
}

// gboolean gst_structure_fixate_field_string (GstStructure* structure, const char* field_name, const gchar* target);
// gboolean gst_structure_fixate_field_string (::GstStructure* structure, const char* field_name, const char* target);
bool base::StructureBase::fixate_field_string (const std::string & field_name, const std::string & target) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstStructure* structure, const char* field_name, const char* target);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_fixate_field_string;
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  auto field_name_to_c = gi::unwrap (field_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStructure*) (gobj_()), (const char*) (field_name_to_c), (const char*) (target_to_c));
  return _temp_ret;
}

// gboolean gst_structure_foreach (const GstStructure* structure, GstStructureForeachFunc func, gpointer user_data);
// gboolean gst_structure_foreach (const ::GstStructure* structure, Gst::StructureForeachFunc::cfunction_type func, void* user_data);
bool base::StructureBase::foreach (Gst::StructureForeachFunc func) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, Gst::StructureForeachFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (Gst::StructureForeachFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
  return _temp_ret;
}

// void gst_structure_free (GstStructure* structure);
// void gst_structure_free (::GstStructure* structure);
// IGNORE; marked ignore

// gboolean gst_structure_get (const GstStructure* structure, const char* first_fieldname);
// gboolean gst_structure_get (const ::GstStructure* structure, const char* first_fieldname);
// IGNORE; not introspectable, varargs not supported

// gboolean gst_structure_get_array (GstStructure* structure, const gchar* fieldname, GValueArray** array);
// gboolean gst_structure_get_array (::GstStructure* structure, const char* fieldname, * array);
// SKIP; array type  not supported

// gboolean gst_structure_get_boolean (const GstStructure* structure, const gchar* fieldname, gboolean* value);
// gboolean gst_structure_get_boolean (const ::GstStructure* structure, const char* fieldname, gboolean* value);
bool base::StructureBase::get_boolean (const std::string & fieldname, bool & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, gboolean* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_boolean;
  gboolean value_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (gboolean*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, bool> base::StructureBase::get_boolean (const std::string & fieldname) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, gboolean* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_boolean;
  gboolean value_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (gboolean*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_structure_get_clock_time (const GstStructure* structure, const gchar* fieldname, GstClockTime* value);
// gboolean gst_structure_get_clock_time (const ::GstStructure* structure, const char* fieldname, ::GstClockTime* value);
bool base::StructureBase::get_clock_time (const std::string & fieldname, Gst::ClockTime & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, ::GstClockTime* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_clock_time;
  ::GstClockTime value_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (::GstClockTime*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, Gst::ClockTime> base::StructureBase::get_clock_time (const std::string & fieldname) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, ::GstClockTime* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_clock_time;
  ::GstClockTime value_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (::GstClockTime*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_structure_get_date (const GstStructure* structure, const gchar* fieldname, GDate** value);
// gboolean gst_structure_get_date (const ::GstStructure* structure, const char* fieldname, ::GDate** value);
bool base::StructureBase::get_date (const std::string & fieldname, GLib::Date & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, ::GDate** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_date;
  ::GDate* value_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (::GDate**) (&value_o));
  value = gi::wrap (value_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GLib::Date> base::StructureBase::get_date (const std::string & fieldname) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, ::GDate** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_date;
  ::GDate* value_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (::GDate**) (&value_o));
  return std::make_tuple (_temp_ret, gi::wrap (value_o, gi::transfer_full, gi::direction_out));
}

// gboolean gst_structure_get_date_time (const GstStructure* structure, const gchar* fieldname, GstDateTime** value);
// gboolean gst_structure_get_date_time (const ::GstStructure* structure, const char* fieldname, ::GstDateTime** value);
bool base::StructureBase::get_date_time (const std::string & fieldname, Gst::DateTime & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, ::GstDateTime** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_date_time;
  ::GstDateTime* value_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (::GstDateTime**) (&value_o));
  value = gi::wrap (value_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gst::DateTime> base::StructureBase::get_date_time (const std::string & fieldname) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, ::GstDateTime** value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_date_time;
  ::GstDateTime* value_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (::GstDateTime**) (&value_o));
  return std::make_tuple (_temp_ret, gi::wrap (value_o, gi::transfer_full, gi::direction_out));
}

// gboolean gst_structure_get_double (const GstStructure* structure, const gchar* fieldname, gdouble* value);
// gboolean gst_structure_get_double (const ::GstStructure* structure, const char* fieldname, gdouble* value);
bool base::StructureBase::get_double (const std::string & fieldname, gdouble & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, gdouble* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_double;
  gdouble value_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (gdouble*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gdouble> base::StructureBase::get_double (const std::string & fieldname) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, gdouble* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_double;
  gdouble value_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (gdouble*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_structure_get_enum (const GstStructure* structure, const gchar* fieldname, GType enumtype, gint* value);
// gboolean gst_structure_get_enum (const ::GstStructure* structure, const char* fieldname, GType enumtype, gint* value);
bool base::StructureBase::get_enum (const std::string & fieldname, GType enumtype, gint & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, GType enumtype, gint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_enum;
  gint value_o {};
  auto enumtype_to_c = enumtype;
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (GType) (enumtype_to_c), (gint*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gint> base::StructureBase::get_enum (const std::string & fieldname, GType enumtype) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, GType enumtype, gint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_enum;
  gint value_o {};
  auto enumtype_to_c = enumtype;
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (GType) (enumtype_to_c), (gint*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// GType gst_structure_get_field_type (const GstStructure* structure, const gchar* fieldname);
// GType gst_structure_get_field_type (const ::GstStructure* structure, const char* fieldname);
GType base::StructureBase::get_field_type (const std::string & fieldname) const noexcept
{
  typedef GType (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_field_type;
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c));
  return _temp_ret;
}

// gboolean gst_structure_get_flagset (const GstStructure* structure, const gchar* fieldname, guint* value_flags, guint* value_mask);
// gboolean gst_structure_get_flagset (const ::GstStructure* structure, const char* fieldname, guint* value_flags, guint* value_mask);
bool base::StructureBase::get_flagset (const std::string & fieldname, guint * value_flags, guint * value_mask) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, guint* value_flags, guint* value_mask);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_flagset;
  guint value_mask_o {};
  guint value_flags_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (guint*) (value_flags ? &value_flags_o : nullptr), (guint*) (value_mask ? &value_mask_o : nullptr));
  if (value_mask) *value_mask = value_mask_o;
  if (value_flags) *value_flags = value_flags_o;
  return _temp_ret;
}
std::tuple<bool, guint, guint> base::StructureBase::get_flagset (const std::string & fieldname) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, guint* value_flags, guint* value_mask);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_flagset;
  guint value_mask_o {};
  guint value_flags_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (guint*) (&value_flags_o), (guint*) (&value_mask_o));
  return std::make_tuple (_temp_ret, value_flags_o, value_mask_o);
}

// gboolean gst_structure_get_fraction (const GstStructure* structure, const gchar* fieldname, gint* value_numerator, gint* value_denominator);
// gboolean gst_structure_get_fraction (const ::GstStructure* structure, const char* fieldname, gint* value_numerator, gint* value_denominator);
bool base::StructureBase::get_fraction (const std::string & fieldname, gint & value_numerator, gint & value_denominator) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, gint* value_numerator, gint* value_denominator);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_fraction;
  gint value_denominator_o {};
  gint value_numerator_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (gint*) (&value_numerator_o), (gint*) (&value_denominator_o));
  value_denominator = value_denominator_o;
  value_numerator = value_numerator_o;
  return _temp_ret;
}
std::tuple<bool, gint, gint> base::StructureBase::get_fraction (const std::string & fieldname) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, gint* value_numerator, gint* value_denominator);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_fraction;
  gint value_denominator_o {};
  gint value_numerator_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (gint*) (&value_numerator_o), (gint*) (&value_denominator_o));
  return std::make_tuple (_temp_ret, value_numerator_o, value_denominator_o);
}

// gboolean gst_structure_get_int (const GstStructure* structure, const gchar* fieldname, gint* value);
// gboolean gst_structure_get_int (const ::GstStructure* structure, const char* fieldname, gint* value);
bool base::StructureBase::get_int (const std::string & fieldname, gint & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, gint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_int;
  gint value_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (gint*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gint> base::StructureBase::get_int (const std::string & fieldname) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, gint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_int;
  gint value_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (gint*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_structure_get_int64 (const GstStructure* structure, const gchar* fieldname, gint64* value);
// gboolean gst_structure_get_int64 (const ::GstStructure* structure, const char* fieldname, gint64* value);
bool base::StructureBase::get_int64 (const std::string & fieldname, gint64 & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, gint64* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_int64;
  gint64 value_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (gint64*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gint64> base::StructureBase::get_int64 (const std::string & fieldname) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, gint64* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_int64;
  gint64 value_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (gint64*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_structure_get_list (GstStructure* structure, const gchar* fieldname, GValueArray** array);
// gboolean gst_structure_get_list (::GstStructure* structure, const char* fieldname, * array);
// SKIP; array type  not supported

// const gchar* gst_structure_get_name (const GstStructure* structure);
// const char* gst_structure_get_name (const ::GstStructure* structure);
std::string base::StructureBase::get_name () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_name;
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GQuark gst_structure_get_name_id (const GstStructure* structure);
// ::GQuark gst_structure_get_name_id (const ::GstStructure* structure);
GLib::Quark base::StructureBase::get_name_id () const noexcept
{
  typedef ::GQuark (*call_wrap_t) (const ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_name_id;
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()));
  return _temp_ret;
}

// const gchar* gst_structure_get_string (const GstStructure* structure, const gchar* fieldname);
// const char* gst_structure_get_string (const ::GstStructure* structure, const char* fieldname);
std::string base::StructureBase::get_string (const std::string & fieldname) const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_string;
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_structure_get_uint (const GstStructure* structure, const gchar* fieldname, guint* value);
// gboolean gst_structure_get_uint (const ::GstStructure* structure, const char* fieldname, guint* value);
bool base::StructureBase::get_uint (const std::string & fieldname, guint & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, guint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_uint;
  guint value_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (guint*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, guint> base::StructureBase::get_uint (const std::string & fieldname) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, guint* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_uint;
  guint value_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (guint*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_structure_get_uint64 (const GstStructure* structure, const gchar* fieldname, guint64* value);
// gboolean gst_structure_get_uint64 (const ::GstStructure* structure, const char* fieldname, guint64* value);
bool base::StructureBase::get_uint64 (const std::string & fieldname, guint64 & value) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, guint64* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_uint64;
  guint64 value_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (guint64*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, guint64> base::StructureBase::get_uint64 (const std::string & fieldname) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, guint64* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_uint64;
  guint64 value_o {};
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (guint64*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// gboolean gst_structure_get_valist (const GstStructure* structure, const char* first_fieldname, va_list args);
// gboolean gst_structure_get_valist (const ::GstStructure* structure, const char* first_fieldname,  args);
// IGNORE; not introspectable, args type  not supported

// const GValue* gst_structure_get_value (const GstStructure* structure, const gchar* fieldname);
// const ::GValue* gst_structure_get_value (const ::GstStructure* structure, const char* fieldname);
GObject::Value base::StructureBase::get_value (const std::string & fieldname) const noexcept
{
  typedef const ::GValue* (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_get_value;
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_structure_has_field (const GstStructure* structure, const gchar* fieldname);
// gboolean gst_structure_has_field (const ::GstStructure* structure, const char* fieldname);
bool base::StructureBase::has_field (const std::string & fieldname) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_has_field;
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c));
  return _temp_ret;
}

// gboolean gst_structure_has_field_typed (const GstStructure* structure, const gchar* fieldname, GType type);
// gboolean gst_structure_has_field_typed (const ::GstStructure* structure, const char* fieldname, GType type);
bool base::StructureBase::has_field_typed (const std::string & fieldname, GType type) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* fieldname, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_has_field_typed;
  auto type_to_c = type;
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (GType) (type_to_c));
  return _temp_ret;
}

// gboolean gst_structure_has_name (const GstStructure* structure, const gchar* name);
// gboolean gst_structure_has_name (const ::GstStructure* structure, const char* name);
bool base::StructureBase::has_name (const std::string & name) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_has_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// gboolean gst_structure_id_get (const GstStructure* structure, GQuark first_field_id);
// gboolean gst_structure_id_get (const ::GstStructure* structure, ::GQuark first_field_id);
// IGNORE; not introspectable, varargs not supported

// gboolean gst_structure_id_get_valist (const GstStructure* structure, GQuark first_field_id, va_list args);
// gboolean gst_structure_id_get_valist (const ::GstStructure* structure, ::GQuark first_field_id,  args);
// IGNORE; not introspectable, args type  not supported

// const GValue* gst_structure_id_get_value (const GstStructure* structure, GQuark field);
// const ::GValue* gst_structure_id_get_value (const ::GstStructure* structure, ::GQuark field);
GObject::Value base::StructureBase::id_get_value (::GQuark field) const noexcept
{
  typedef const ::GValue* (*call_wrap_t) (const ::GstStructure* structure, ::GQuark field);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_id_get_value;
  auto field_to_c = field;
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (::GQuark) (field_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_structure_id_has_field (const GstStructure* structure, GQuark field);
// gboolean gst_structure_id_has_field (const ::GstStructure* structure, ::GQuark field);
bool base::StructureBase::id_has_field (::GQuark field) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, ::GQuark field);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_id_has_field;
  auto field_to_c = field;
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (::GQuark) (field_to_c));
  return _temp_ret;
}

// gboolean gst_structure_id_has_field_typed (const GstStructure* structure, GQuark field, GType type);
// gboolean gst_structure_id_has_field_typed (const ::GstStructure* structure, ::GQuark field, GType type);
bool base::StructureBase::id_has_field_typed (::GQuark field, GType type) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure, ::GQuark field, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_id_has_field_typed;
  auto type_to_c = type;
  auto field_to_c = field;
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (::GQuark) (field_to_c), (GType) (type_to_c));
  return _temp_ret;
}

// void gst_structure_id_set (GstStructure* structure, GQuark fieldname);
// void gst_structure_id_set (::GstStructure* structure, ::GQuark fieldname);
// IGNORE; not introspectable, varargs not supported

// void gst_structure_id_set_valist (GstStructure* structure, GQuark fieldname, va_list varargs);
// void gst_structure_id_set_valist (::GstStructure* structure, ::GQuark fieldname,  varargs);
// IGNORE; not introspectable, varargs type  not supported

// void gst_structure_id_set_value (GstStructure* structure, GQuark field, const GValue* value);
// void gst_structure_id_set_value (::GstStructure* structure, ::GQuark field, const ::GValue* value);
void base::StructureBase::id_set_value (::GQuark field, const GObject::Value & value) noexcept
{
  typedef void (*call_wrap_t) (::GstStructure* structure, ::GQuark field, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_id_set_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto field_to_c = field;
  call_wrap_v ((::GstStructure*) (gobj_()), (::GQuark) (field_to_c), (const ::GValue*) (value_to_c));
}

// void gst_structure_id_take_value (GstStructure* structure, GQuark field, GValue* value);
// void gst_structure_id_take_value (::GstStructure* structure, ::GQuark field, ::GValue* value);
void base::StructureBase::id_take_value (::GQuark field, GObject::Value value) noexcept
{
  typedef void (*call_wrap_t) (::GstStructure* structure, ::GQuark field, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_id_take_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_full, gi::direction_in);
  auto field_to_c = field;
  call_wrap_v ((::GstStructure*) (gobj_()), (::GQuark) (field_to_c), (::GValue*) (value_to_c));
}

// GstStructure* gst_structure_intersect (const GstStructure* struct1, const GstStructure* struct2);
// ::GstStructure* gst_structure_intersect (const ::GstStructure* struct1, const ::GstStructure* struct2);
Gst::Structure base::StructureBase::intersect (const Gst::Structure & struct2) const noexcept
{
  typedef ::GstStructure* (*call_wrap_t) (const ::GstStructure* struct1, const ::GstStructure* struct2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_intersect;
  auto struct2_to_c = gi::unwrap (struct2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const ::GstStructure*) (struct2_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_structure_is_equal (const GstStructure* structure1, const GstStructure* structure2);
// gboolean gst_structure_is_equal (const ::GstStructure* structure1, const ::GstStructure* structure2);
bool base::StructureBase::is_equal (const Gst::Structure & structure2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* structure1, const ::GstStructure* structure2);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_is_equal;
  auto structure2_to_c = gi::unwrap (structure2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const ::GstStructure*) (structure2_to_c));
  return _temp_ret;
}

// gboolean gst_structure_is_subset (const GstStructure* subset, const GstStructure* superset);
// gboolean gst_structure_is_subset (const ::GstStructure* subset, const ::GstStructure* superset);
bool base::StructureBase::is_subset (const Gst::Structure & superset) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstStructure* subset, const ::GstStructure* superset);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_is_subset;
  auto superset_to_c = gi::unwrap (superset, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (const ::GstStructure*) (superset_to_c));
  return _temp_ret;
}

// gboolean gst_structure_map_in_place (GstStructure* structure, GstStructureMapFunc func, gpointer user_data);
// gboolean gst_structure_map_in_place (::GstStructure* structure, Gst::StructureMapFunc::cfunction_type func, void* user_data);
bool base::StructureBase::map_in_place (Gst::StructureMapFunc func) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstStructure* structure, Gst::StructureMapFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_map_in_place;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  auto _temp_ret = call_wrap_v ((::GstStructure*) (gobj_()), (Gst::StructureMapFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
  return _temp_ret;
}

// gint gst_structure_n_fields (const GstStructure* structure);
// gint gst_structure_n_fields (const ::GstStructure* structure);
gint base::StructureBase::n_fields () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_n_fields;
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()));
  return _temp_ret;
}

// const gchar* gst_structure_nth_field_name (const GstStructure* structure, guint index);
// const char* gst_structure_nth_field_name (const ::GstStructure* structure, guint index);
std::string base::StructureBase::nth_field_name (guint index) const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstStructure* structure, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_nth_field_name;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gst_structure_remove_all_fields (GstStructure* structure);
// void gst_structure_remove_all_fields (::GstStructure* structure);
void base::StructureBase::remove_all_fields () noexcept
{
  typedef void (*call_wrap_t) (::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_remove_all_fields;
  call_wrap_v ((::GstStructure*) (gobj_()));
}

// void gst_structure_remove_field (GstStructure* structure, const gchar* fieldname);
// void gst_structure_remove_field (::GstStructure* structure, const char* fieldname);
void base::StructureBase::remove_field (const std::string & fieldname) noexcept
{
  typedef void (*call_wrap_t) (::GstStructure* structure, const char* fieldname);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_remove_field;
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstStructure*) (gobj_()), (const char*) (fieldname_to_c));
}

// void gst_structure_remove_fields (GstStructure* structure, const gchar* fieldname);
// void gst_structure_remove_fields (::GstStructure* structure, const char* fieldname);
// IGNORE; not introspectable, varargs not supported

// void gst_structure_remove_fields_valist (GstStructure* structure, const gchar* fieldname, va_list varargs);
// void gst_structure_remove_fields_valist (::GstStructure* structure, const char* fieldname,  varargs);
// IGNORE; not introspectable, varargs type  not supported

// gchar* gst_structure_serialize (const GstStructure* structure, GstSerializeFlags flags);
// char* gst_structure_serialize (const ::GstStructure* structure, ::GstSerializeFlags flags);
std::string base::StructureBase::serialize (Gst::SerializeFlags flags) const noexcept
{
  typedef char* (*call_wrap_t) (const ::GstStructure* structure, ::GstSerializeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_serialize;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()), (::GstSerializeFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_structure_set (GstStructure* structure, const gchar* fieldname);
// void gst_structure_set (::GstStructure* structure, const char* fieldname);
// IGNORE; not introspectable, varargs not supported

// void gst_structure_set_array (GstStructure* structure, const gchar* fieldname, const GValueArray* array);
// void gst_structure_set_array (::GstStructure* structure, const char* fieldname, const  array);
// SKIP; array type  not supported

// void gst_structure_set_list (GstStructure* structure, const gchar* fieldname, const GValueArray* array);
// void gst_structure_set_list (::GstStructure* structure, const char* fieldname, const  array);
// SKIP; array type  not supported

// void gst_structure_set_name (GstStructure* structure, const gchar* name);
// void gst_structure_set_name (::GstStructure* structure, const char* name);
void base::StructureBase::set_name (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GstStructure* structure, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstStructure*) (gobj_()), (const char*) (name_to_c));
}

// gboolean gst_structure_set_parent_refcount (GstStructure* structure, gint* refcount);
// gboolean gst_structure_set_parent_refcount (::GstStructure* structure, gint refcount);
// SKIP; inconsistent in refcount pointer depth (1 vs 0)

// void gst_structure_set_valist (GstStructure* structure, const gchar* fieldname, va_list varargs);
// void gst_structure_set_valist (::GstStructure* structure, const char* fieldname,  varargs);
// IGNORE; not introspectable, varargs type  not supported

// void gst_structure_set_value (GstStructure* structure, const gchar* fieldname, const GValue* value);
// void gst_structure_set_value (::GstStructure* structure, const char* fieldname, const ::GValue* value);
void base::StructureBase::set_value (const std::string & fieldname, const GObject::Value & value) noexcept
{
  typedef void (*call_wrap_t) (::GstStructure* structure, const char* fieldname, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_set_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (const ::GValue*) (value_to_c));
}

// void gst_structure_take_value (GstStructure* structure, const gchar* fieldname, GValue* value);
// void gst_structure_take_value (::GstStructure* structure, const char* fieldname, ::GValue* value);
void base::StructureBase::take_value (const std::string & fieldname, GObject::Value value) noexcept
{
  typedef void (*call_wrap_t) (::GstStructure* structure, const char* fieldname, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_take_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_full, gi::direction_in);
  auto fieldname_to_c = gi::unwrap (fieldname, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstStructure*) (gobj_()), (const char*) (fieldname_to_c), (::GValue*) (value_to_c));
}

// gchar* gst_structure_to_string (const GstStructure* structure);
// char* gst_structure_to_string (const ::GstStructure* structure);
std::string base::StructureBase::to_string () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GstStructure* structure);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_to_string;
  auto _temp_ret = call_wrap_v ((const ::GstStructure*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_structure_take (GstStructure** oldstr_ptr, GstStructure* newstr);
// gboolean gst_structure_take (::GstStructure** oldstr_ptr, ::GstStructure* newstr);
bool base::StructureBase::take (Gst::Structure * oldstr_ptr, Gst::Structure newstr) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstStructure** oldstr_ptr, ::GstStructure* newstr);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_take;
  auto newstr_to_c = gi::unwrap (newstr, gi::transfer_full, gi::direction_in);
  auto oldstr_ptr_to_c = gi::unwrap (*oldstr_ptr, gi::transfer_full, gi::direction_in);
  ::GstStructure* oldstr_ptr_o = oldstr_ptr_to_c;
  auto _temp_ret = call_wrap_v ((::GstStructure**) (oldstr_ptr ? &oldstr_ptr_o : nullptr), (::GstStructure*) (newstr_to_c));
  if (oldstr_ptr) *oldstr_ptr = gi::wrap (oldstr_ptr_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::StructureBase::take (Gst::Structure * oldstr_ptr) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstStructure** oldstr_ptr, ::GstStructure* newstr);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_structure_take;
  auto newstr_to_c = nullptr;
  auto oldstr_ptr_to_c = nullptr;
  ::GstStructure* oldstr_ptr_o = oldstr_ptr_to_c;
  auto _temp_ret = call_wrap_v ((::GstStructure**) (oldstr_ptr ? &oldstr_ptr_o : nullptr), (::GstStructure*) (newstr_to_c));
  if (oldstr_ptr) *oldstr_ptr = gi::wrap (oldstr_ptr_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/structure_extra_def_impl.hpp>)
#include <gst/structure_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/structure_extra_impl.hpp>)
#include <gst/structure_extra_impl.hpp>
#endif
#endif

#endif
