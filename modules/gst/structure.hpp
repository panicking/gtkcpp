// AUTO-GENERATED

#ifndef _GI_GST_STRUCTURE_HPP_
#define _GI_GST_STRUCTURE_HPP_


namespace gi {

namespace repository {

namespace Gst {

class DateTime;

class Structure;

namespace base {


#define GI_GST_STRUCTURE_BASE base::StructureBase
class StructureBase : public gi::detail::GBoxedWrapper<StructureBase, ::GstStructure>
{
typedef gi::detail::GBoxedWrapper<StructureBase, ::GstStructure> super_type;
public:

StructureBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_structure_get_type(); } 

// GType Structure::type (const ::GstStructure* obj);
// GType Structure::type (const ::GstStructure* obj);
GI_INLINE_DECL GType type_ () const noexcept;

//  Structure::type (::GstStructure* obj, GType _value);
// void Structure::type (::GstStructure* obj, GType _value);
GI_INLINE_DECL void type_ (GType _value) noexcept;

// GstStructure* gst_structure_from_string (const gchar* string, gchar** end);
// ::GstStructure* gst_structure_from_string (const char* string, char** end);
static GI_INLINE_DECL Gst::Structure from_string (const std::string & string, std::string * end = nullptr) noexcept;
static GI_INLINE_DECL std::tuple<Gst::Structure, std::string> from_string (const std::string & string) noexcept;

// GstStructure* gst_structure_new (const gchar* name, const gchar* firstfield);
// ::GstStructure* gst_structure_new (const char* name, const char* firstfield);
// IGNORE; not introspectable, varargs not supported

// GstStructure* gst_structure_new_empty (const gchar* name);
// ::GstStructure* gst_structure_new_empty (const char* name);
static GI_INLINE_DECL Gst::Structure new_empty (const std::string & name) noexcept;

// GstStructure* gst_structure_new_from_string (const gchar* string);
// ::GstStructure* gst_structure_new_from_string (const char* string);
static GI_INLINE_DECL Gst::Structure new_from_string (const std::string & string) noexcept;

// GstStructure* gst_structure_new_id (GQuark name_quark, GQuark field_quark);
// ::GstStructure* gst_structure_new_id (::GQuark name_quark, ::GQuark field_quark);
// IGNORE; not introspectable, varargs not supported

// GstStructure* gst_structure_new_id_empty (GQuark quark);
// ::GstStructure* gst_structure_new_id_empty (::GQuark quark);
static GI_INLINE_DECL Gst::Structure new_id_empty (::GQuark quark) noexcept;

// GstStructure* gst_structure_new_valist (const gchar* name, const gchar* firstfield, va_list varargs);
// ::GstStructure* gst_structure_new_valist (const char* name, const char* firstfield,  varargs);
// IGNORE; not introspectable, varargs type  not supported

// gboolean gst_structure_can_intersect (const GstStructure* struct1, const GstStructure* struct2);
// gboolean gst_structure_can_intersect (const ::GstStructure* struct1, const ::GstStructure* struct2);
GI_INLINE_DECL bool can_intersect (const Gst::Structure & struct2) const noexcept;

// GstStructure* gst_structure_copy (const GstStructure* structure);
// ::GstStructure* gst_structure_copy (const ::GstStructure* structure);
GI_INLINE_DECL Gst::Structure copy () const noexcept;

// void gst_structure_filter_and_map_in_place (GstStructure* structure, GstStructureFilterMapFunc func, gpointer user_data);
// void gst_structure_filter_and_map_in_place (::GstStructure* structure, Gst::StructureFilterMapFunc::cfunction_type func, void* user_data);
GI_INLINE_DECL void filter_and_map_in_place (Gst::StructureFilterMapFunc func) noexcept;

// void gst_structure_fixate (GstStructure* structure);
// void gst_structure_fixate (::GstStructure* structure);
GI_INLINE_DECL void fixate () noexcept;

// gboolean gst_structure_fixate_field (GstStructure* structure, const char* field_name);
// gboolean gst_structure_fixate_field (::GstStructure* structure, const char* field_name);
GI_INLINE_DECL bool fixate_field (const std::string & field_name) noexcept;

// gboolean gst_structure_fixate_field_boolean (GstStructure* structure, const char* field_name, gboolean target);
// gboolean gst_structure_fixate_field_boolean (::GstStructure* structure, const char* field_name, gboolean target);
GI_INLINE_DECL bool fixate_field_boolean (const std::string & field_name, gboolean target) noexcept;

// gboolean gst_structure_fixate_field_nearest_double (GstStructure* structure, const char* field_name, double target);
// gboolean gst_structure_fixate_field_nearest_double (::GstStructure* structure, const char* field_name, gdouble target);
GI_INLINE_DECL bool fixate_field_nearest_double (const std::string & field_name, gdouble target) noexcept;

// gboolean gst_structure_fixate_field_nearest_fraction (GstStructure* structure, const char* field_name, const gint target_numerator, const gint target_denominator);
// gboolean gst_structure_fixate_field_nearest_fraction (::GstStructure* structure, const char* field_name, const gint target_numerator, const gint target_denominator);
GI_INLINE_DECL bool fixate_field_nearest_fraction (const std::string & field_name, const gint target_numerator, const gint target_denominator) noexcept;

// gboolean gst_structure_fixate_field_nearest_int (GstStructure* structure, const char* field_name, int target);
// gboolean gst_structure_fixate_field_nearest_int (::GstStructure* structure, const char* field_name, gint target);
GI_INLINE_DECL bool fixate_field_nearest_int (const std::string & field_name, gint target) noexcept;

// gboolean gst_structure_fixate_field_string (GstStructure* structure, const char* field_name, const gchar* target);
// gboolean gst_structure_fixate_field_string (::GstStructure* structure, const char* field_name, const char* target);
GI_INLINE_DECL bool fixate_field_string (const std::string & field_name, const std::string & target) noexcept;

// gboolean gst_structure_foreach (const GstStructure* structure, GstStructureForeachFunc func, gpointer user_data);
// gboolean gst_structure_foreach (const ::GstStructure* structure, Gst::StructureForeachFunc::cfunction_type func, void* user_data);
GI_INLINE_DECL bool foreach (Gst::StructureForeachFunc func) const noexcept;

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
GI_INLINE_DECL bool get_boolean (const std::string & fieldname, bool & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, bool> get_boolean (const std::string & fieldname) const noexcept;

// gboolean gst_structure_get_clock_time (const GstStructure* structure, const gchar* fieldname, GstClockTime* value);
// gboolean gst_structure_get_clock_time (const ::GstStructure* structure, const char* fieldname, ::GstClockTime* value);
GI_INLINE_DECL bool get_clock_time (const std::string & fieldname, Gst::ClockTime & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, Gst::ClockTime> get_clock_time (const std::string & fieldname) const noexcept;

// gboolean gst_structure_get_date (const GstStructure* structure, const gchar* fieldname, GDate** value);
// gboolean gst_structure_get_date (const ::GstStructure* structure, const char* fieldname, ::GDate** value);
GI_INLINE_DECL bool get_date (const std::string & fieldname, GLib::Date & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Date> get_date (const std::string & fieldname) const noexcept;

// gboolean gst_structure_get_date_time (const GstStructure* structure, const gchar* fieldname, GstDateTime** value);
// gboolean gst_structure_get_date_time (const ::GstStructure* structure, const char* fieldname, ::GstDateTime** value);
GI_INLINE_DECL bool get_date_time (const std::string & fieldname, Gst::DateTime & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, Gst::DateTime> get_date_time (const std::string & fieldname) const noexcept;

// gboolean gst_structure_get_double (const GstStructure* structure, const gchar* fieldname, gdouble* value);
// gboolean gst_structure_get_double (const ::GstStructure* structure, const char* fieldname, gdouble* value);
GI_INLINE_DECL bool get_double (const std::string & fieldname, gdouble & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble> get_double (const std::string & fieldname) const noexcept;

// gboolean gst_structure_get_enum (const GstStructure* structure, const gchar* fieldname, GType enumtype, gint* value);
// gboolean gst_structure_get_enum (const ::GstStructure* structure, const char* fieldname, GType enumtype, gint* value);
GI_INLINE_DECL bool get_enum (const std::string & fieldname, GType enumtype, gint & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, gint> get_enum (const std::string & fieldname, GType enumtype) const noexcept;

// GType gst_structure_get_field_type (const GstStructure* structure, const gchar* fieldname);
// GType gst_structure_get_field_type (const ::GstStructure* structure, const char* fieldname);
GI_INLINE_DECL GType get_field_type (const std::string & fieldname) const noexcept;

// gboolean gst_structure_get_flagset (const GstStructure* structure, const gchar* fieldname, guint* value_flags, guint* value_mask);
// gboolean gst_structure_get_flagset (const ::GstStructure* structure, const char* fieldname, guint* value_flags, guint* value_mask);
GI_INLINE_DECL bool get_flagset (const std::string & fieldname, guint * value_flags = nullptr, guint * value_mask = nullptr) const noexcept;
GI_INLINE_DECL std::tuple<bool, guint, guint> get_flagset (const std::string & fieldname) const noexcept;

// gboolean gst_structure_get_fraction (const GstStructure* structure, const gchar* fieldname, gint* value_numerator, gint* value_denominator);
// gboolean gst_structure_get_fraction (const ::GstStructure* structure, const char* fieldname, gint* value_numerator, gint* value_denominator);
GI_INLINE_DECL bool get_fraction (const std::string & fieldname, gint & value_numerator, gint & value_denominator) const noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint> get_fraction (const std::string & fieldname) const noexcept;

// gboolean gst_structure_get_int (const GstStructure* structure, const gchar* fieldname, gint* value);
// gboolean gst_structure_get_int (const ::GstStructure* structure, const char* fieldname, gint* value);
GI_INLINE_DECL bool get_int (const std::string & fieldname, gint & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, gint> get_int (const std::string & fieldname) const noexcept;

// gboolean gst_structure_get_int64 (const GstStructure* structure, const gchar* fieldname, gint64* value);
// gboolean gst_structure_get_int64 (const ::GstStructure* structure, const char* fieldname, gint64* value);
GI_INLINE_DECL bool get_int64 (const std::string & fieldname, gint64 & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, gint64> get_int64 (const std::string & fieldname) const noexcept;

// gboolean gst_structure_get_list (GstStructure* structure, const gchar* fieldname, GValueArray** array);
// gboolean gst_structure_get_list (::GstStructure* structure, const char* fieldname, * array);
// SKIP; array type  not supported

// const gchar* gst_structure_get_name (const GstStructure* structure);
// const char* gst_structure_get_name (const ::GstStructure* structure);
GI_INLINE_DECL std::string get_name () const noexcept;

// GQuark gst_structure_get_name_id (const GstStructure* structure);
// ::GQuark gst_structure_get_name_id (const ::GstStructure* structure);
GI_INLINE_DECL GLib::Quark get_name_id () const noexcept;

// const gchar* gst_structure_get_string (const GstStructure* structure, const gchar* fieldname);
// const char* gst_structure_get_string (const ::GstStructure* structure, const char* fieldname);
GI_INLINE_DECL std::string get_string (const std::string & fieldname) const noexcept;

// gboolean gst_structure_get_uint (const GstStructure* structure, const gchar* fieldname, guint* value);
// gboolean gst_structure_get_uint (const ::GstStructure* structure, const char* fieldname, guint* value);
GI_INLINE_DECL bool get_uint (const std::string & fieldname, guint & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, guint> get_uint (const std::string & fieldname) const noexcept;

// gboolean gst_structure_get_uint64 (const GstStructure* structure, const gchar* fieldname, guint64* value);
// gboolean gst_structure_get_uint64 (const ::GstStructure* structure, const char* fieldname, guint64* value);
GI_INLINE_DECL bool get_uint64 (const std::string & fieldname, guint64 & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, guint64> get_uint64 (const std::string & fieldname) const noexcept;

// gboolean gst_structure_get_valist (const GstStructure* structure, const char* first_fieldname, va_list args);
// gboolean gst_structure_get_valist (const ::GstStructure* structure, const char* first_fieldname,  args);
// IGNORE; not introspectable, args type  not supported

// const GValue* gst_structure_get_value (const GstStructure* structure, const gchar* fieldname);
// const ::GValue* gst_structure_get_value (const ::GstStructure* structure, const char* fieldname);
GI_INLINE_DECL GObject::Value get_value (const std::string & fieldname) const noexcept;

// gboolean gst_structure_has_field (const GstStructure* structure, const gchar* fieldname);
// gboolean gst_structure_has_field (const ::GstStructure* structure, const char* fieldname);
GI_INLINE_DECL bool has_field (const std::string & fieldname) const noexcept;

// gboolean gst_structure_has_field_typed (const GstStructure* structure, const gchar* fieldname, GType type);
// gboolean gst_structure_has_field_typed (const ::GstStructure* structure, const char* fieldname, GType type);
GI_INLINE_DECL bool has_field_typed (const std::string & fieldname, GType type) const noexcept;

// gboolean gst_structure_has_name (const GstStructure* structure, const gchar* name);
// gboolean gst_structure_has_name (const ::GstStructure* structure, const char* name);
GI_INLINE_DECL bool has_name (const std::string & name) const noexcept;

// gboolean gst_structure_id_get (const GstStructure* structure, GQuark first_field_id);
// gboolean gst_structure_id_get (const ::GstStructure* structure, ::GQuark first_field_id);
// IGNORE; not introspectable, varargs not supported

// gboolean gst_structure_id_get_valist (const GstStructure* structure, GQuark first_field_id, va_list args);
// gboolean gst_structure_id_get_valist (const ::GstStructure* structure, ::GQuark first_field_id,  args);
// IGNORE; not introspectable, args type  not supported

// const GValue* gst_structure_id_get_value (const GstStructure* structure, GQuark field);
// const ::GValue* gst_structure_id_get_value (const ::GstStructure* structure, ::GQuark field);
GI_INLINE_DECL GObject::Value id_get_value (::GQuark field) const noexcept;

// gboolean gst_structure_id_has_field (const GstStructure* structure, GQuark field);
// gboolean gst_structure_id_has_field (const ::GstStructure* structure, ::GQuark field);
GI_INLINE_DECL bool id_has_field (::GQuark field) const noexcept;

// gboolean gst_structure_id_has_field_typed (const GstStructure* structure, GQuark field, GType type);
// gboolean gst_structure_id_has_field_typed (const ::GstStructure* structure, ::GQuark field, GType type);
GI_INLINE_DECL bool id_has_field_typed (::GQuark field, GType type) const noexcept;

// void gst_structure_id_set (GstStructure* structure, GQuark fieldname);
// void gst_structure_id_set (::GstStructure* structure, ::GQuark fieldname);
// IGNORE; not introspectable, varargs not supported

// void gst_structure_id_set_valist (GstStructure* structure, GQuark fieldname, va_list varargs);
// void gst_structure_id_set_valist (::GstStructure* structure, ::GQuark fieldname,  varargs);
// IGNORE; not introspectable, varargs type  not supported

// void gst_structure_id_set_value (GstStructure* structure, GQuark field, const GValue* value);
// void gst_structure_id_set_value (::GstStructure* structure, ::GQuark field, const ::GValue* value);
GI_INLINE_DECL void id_set_value (::GQuark field, const GObject::Value & value) noexcept;

// void gst_structure_id_take_value (GstStructure* structure, GQuark field, GValue* value);
// void gst_structure_id_take_value (::GstStructure* structure, ::GQuark field, ::GValue* value);
GI_INLINE_DECL void id_take_value (::GQuark field, GObject::Value value) noexcept;

// GstStructure* gst_structure_intersect (const GstStructure* struct1, const GstStructure* struct2);
// ::GstStructure* gst_structure_intersect (const ::GstStructure* struct1, const ::GstStructure* struct2);
GI_INLINE_DECL Gst::Structure intersect (const Gst::Structure & struct2) const noexcept;

// gboolean gst_structure_is_equal (const GstStructure* structure1, const GstStructure* structure2);
// gboolean gst_structure_is_equal (const ::GstStructure* structure1, const ::GstStructure* structure2);
GI_INLINE_DECL bool is_equal (const Gst::Structure & structure2) const noexcept;

// gboolean gst_structure_is_subset (const GstStructure* subset, const GstStructure* superset);
// gboolean gst_structure_is_subset (const ::GstStructure* subset, const ::GstStructure* superset);
GI_INLINE_DECL bool is_subset (const Gst::Structure & superset) const noexcept;

// gboolean gst_structure_map_in_place (GstStructure* structure, GstStructureMapFunc func, gpointer user_data);
// gboolean gst_structure_map_in_place (::GstStructure* structure, Gst::StructureMapFunc::cfunction_type func, void* user_data);
GI_INLINE_DECL bool map_in_place (Gst::StructureMapFunc func) noexcept;

// gint gst_structure_n_fields (const GstStructure* structure);
// gint gst_structure_n_fields (const ::GstStructure* structure);
GI_INLINE_DECL gint n_fields () const noexcept;

// const gchar* gst_structure_nth_field_name (const GstStructure* structure, guint index);
// const char* gst_structure_nth_field_name (const ::GstStructure* structure, guint index);
GI_INLINE_DECL std::string nth_field_name (guint index) const noexcept;

// void gst_structure_remove_all_fields (GstStructure* structure);
// void gst_structure_remove_all_fields (::GstStructure* structure);
GI_INLINE_DECL void remove_all_fields () noexcept;

// void gst_structure_remove_field (GstStructure* structure, const gchar* fieldname);
// void gst_structure_remove_field (::GstStructure* structure, const char* fieldname);
GI_INLINE_DECL void remove_field (const std::string & fieldname) noexcept;

// void gst_structure_remove_fields (GstStructure* structure, const gchar* fieldname);
// void gst_structure_remove_fields (::GstStructure* structure, const char* fieldname);
// IGNORE; not introspectable, varargs not supported

// void gst_structure_remove_fields_valist (GstStructure* structure, const gchar* fieldname, va_list varargs);
// void gst_structure_remove_fields_valist (::GstStructure* structure, const char* fieldname,  varargs);
// IGNORE; not introspectable, varargs type  not supported

// gchar* gst_structure_serialize (const GstStructure* structure, GstSerializeFlags flags);
// char* gst_structure_serialize (const ::GstStructure* structure, ::GstSerializeFlags flags);
GI_INLINE_DECL std::string serialize (Gst::SerializeFlags flags) const noexcept;

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
GI_INLINE_DECL void set_name (const std::string & name) noexcept;

// gboolean gst_structure_set_parent_refcount (GstStructure* structure, gint* refcount);
// gboolean gst_structure_set_parent_refcount (::GstStructure* structure, gint refcount);
// SKIP; inconsistent in refcount pointer depth (1 vs 0)

// void gst_structure_set_valist (GstStructure* structure, const gchar* fieldname, va_list varargs);
// void gst_structure_set_valist (::GstStructure* structure, const char* fieldname,  varargs);
// IGNORE; not introspectable, varargs type  not supported

// void gst_structure_set_value (GstStructure* structure, const gchar* fieldname, const GValue* value);
// void gst_structure_set_value (::GstStructure* structure, const char* fieldname, const ::GValue* value);
GI_INLINE_DECL void set_value (const std::string & fieldname, const GObject::Value & value) noexcept;

// void gst_structure_take_value (GstStructure* structure, const gchar* fieldname, GValue* value);
// void gst_structure_take_value (::GstStructure* structure, const char* fieldname, ::GValue* value);
GI_INLINE_DECL void take_value (const std::string & fieldname, GObject::Value value) noexcept;

// gchar* gst_structure_to_string (const GstStructure* structure);
// char* gst_structure_to_string (const ::GstStructure* structure);
GI_INLINE_DECL std::string to_string () const noexcept;

// gboolean gst_structure_take (GstStructure** oldstr_ptr, GstStructure* newstr);
// gboolean gst_structure_take (::GstStructure** oldstr_ptr, ::GstStructure* newstr);
static GI_INLINE_DECL bool take (Gst::Structure * oldstr_ptr, Gst::Structure newstr) noexcept;
static GI_INLINE_DECL bool take (Gst::Structure * oldstr_ptr = nullptr) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/structure_extra_def.hpp>)
#include <gst/structure_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/structure_extra.hpp>)
#include <gst/structure_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Structure : public GI_GST_STRUCTURE_BASE
{ typedef GI_GST_STRUCTURE_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstStructure>
{ typedef Gst::Structure type; }; 

} // namespace repository

} // namespace gi

#endif
