// AUTO-GENERATED

#ifndef _GI_GST_TAGLIST_HPP_
#define _GI_GST_TAGLIST_HPP_


namespace gi {

namespace repository {

namespace Gst {

class DateTime;
class Sample;

class TagList;

namespace base {


#define GI_GST_TAGLIST_BASE base::TagListBase
class TagListBase : public gi::detail::GBoxedWrapper<TagListBase, ::GstTagList>
{
typedef gi::detail::GBoxedWrapper<TagListBase, ::GstTagList> super_type;
public:

TagListBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_tag_list_get_type(); } 

// GstTagList* gst_tag_list_new (const gchar* tag);
// ::GstTagList* gst_tag_list_new (const char* tag);
// IGNORE; not introspectable, varargs not supported

// GstTagList* gst_tag_list_new_empty ();
// ::GstTagList* gst_tag_list_new_empty ();
static GI_INLINE_DECL Gst::TagList new_empty () noexcept;

// GstTagList* gst_tag_list_new_from_string (const gchar* str);
// ::GstTagList* gst_tag_list_new_from_string (const char* str);
static GI_INLINE_DECL Gst::TagList new_from_string (const std::string & str) noexcept;

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
GI_INLINE_DECL void add_value (Gst::TagMergeMode mode, const std::string & tag, const GObject::Value & value) noexcept;

// void gst_tag_list_add_values (GstTagList* list, GstTagMergeMode mode, const gchar* tag);
// void gst_tag_list_add_values (::GstTagList* list, ::GstTagMergeMode mode, const char* tag);
// IGNORE; not introspectable, varargs not supported

// GstTagList* gst_tag_list_copy (const GstTagList* taglist);
// ::GstTagList* gst_tag_list_copy (const ::GstTagList* taglist);
GI_INLINE_DECL Gst::TagList copy () const noexcept;

// void gst_tag_list_foreach (const GstTagList* list, GstTagForeachFunc func, gpointer user_data);
// void gst_tag_list_foreach (const ::GstTagList* list, Gst::TagForeachFunc::cfunction_type func, void* user_data);
GI_INLINE_DECL void foreach (Gst::TagForeachFunc func) const noexcept;

// gboolean gst_tag_list_get_boolean (const GstTagList* list, const gchar* tag, gboolean* value);
// gboolean gst_tag_list_get_boolean (const ::GstTagList* list, const char* tag, gboolean* value);
GI_INLINE_DECL bool get_boolean (const std::string & tag, bool & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, bool> get_boolean (const std::string & tag) const noexcept;

// gboolean gst_tag_list_get_boolean_index (const GstTagList* list, const gchar* tag, guint index, gboolean* value);
// gboolean gst_tag_list_get_boolean_index (const ::GstTagList* list, const char* tag, guint index, gboolean* value);
GI_INLINE_DECL bool get_boolean_index (const std::string & tag, guint index, bool & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, bool> get_boolean_index (const std::string & tag, guint index) const noexcept;

// gboolean gst_tag_list_get_date (const GstTagList* list, const gchar* tag, GDate** value);
// gboolean gst_tag_list_get_date (const ::GstTagList* list, const char* tag, ::GDate** value);
GI_INLINE_DECL bool get_date (const std::string & tag, GLib::Date & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Date> get_date (const std::string & tag) const noexcept;

// gboolean gst_tag_list_get_date_index (const GstTagList* list, const gchar* tag, guint index, GDate** value);
// gboolean gst_tag_list_get_date_index (const ::GstTagList* list, const char* tag, guint index, ::GDate** value);
GI_INLINE_DECL bool get_date_index (const std::string & tag, guint index, GLib::Date & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Date> get_date_index (const std::string & tag, guint index) const noexcept;

// gboolean gst_tag_list_get_date_time (const GstTagList* list, const gchar* tag, GstDateTime** value);
// gboolean gst_tag_list_get_date_time (const ::GstTagList* list, const char* tag, ::GstDateTime** value);
GI_INLINE_DECL bool get_date_time (const std::string & tag, Gst::DateTime & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, Gst::DateTime> get_date_time (const std::string & tag) const noexcept;

// gboolean gst_tag_list_get_date_time_index (const GstTagList* list, const gchar* tag, guint index, GstDateTime** value);
// gboolean gst_tag_list_get_date_time_index (const ::GstTagList* list, const char* tag, guint index, ::GstDateTime** value);
GI_INLINE_DECL bool get_date_time_index (const std::string & tag, guint index, Gst::DateTime & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, Gst::DateTime> get_date_time_index (const std::string & tag, guint index) const noexcept;

// gboolean gst_tag_list_get_double (const GstTagList* list, const gchar* tag, gdouble* value);
// gboolean gst_tag_list_get_double (const ::GstTagList* list, const char* tag, gdouble* value);
GI_INLINE_DECL bool get_double (const std::string & tag, gdouble & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble> get_double (const std::string & tag) const noexcept;

// gboolean gst_tag_list_get_double_index (const GstTagList* list, const gchar* tag, guint index, gdouble* value);
// gboolean gst_tag_list_get_double_index (const ::GstTagList* list, const char* tag, guint index, gdouble* value);
GI_INLINE_DECL bool get_double_index (const std::string & tag, guint index, gdouble & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, gdouble> get_double_index (const std::string & tag, guint index) const noexcept;

// gboolean gst_tag_list_get_float (const GstTagList* list, const gchar* tag, gfloat* value);
// gboolean gst_tag_list_get_float (const ::GstTagList* list, const char* tag, gfloat* value);
GI_INLINE_DECL bool get_float (const std::string & tag, gfloat & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, gfloat> get_float (const std::string & tag) const noexcept;

// gboolean gst_tag_list_get_float_index (const GstTagList* list, const gchar* tag, guint index, gfloat* value);
// gboolean gst_tag_list_get_float_index (const ::GstTagList* list, const char* tag, guint index, gfloat* value);
GI_INLINE_DECL bool get_float_index (const std::string & tag, guint index, gfloat & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, gfloat> get_float_index (const std::string & tag, guint index) const noexcept;

// gboolean gst_tag_list_get_int (const GstTagList* list, const gchar* tag, gint* value);
// gboolean gst_tag_list_get_int (const ::GstTagList* list, const char* tag, gint* value);
GI_INLINE_DECL bool get_int (const std::string & tag, gint & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, gint> get_int (const std::string & tag) const noexcept;

// gboolean gst_tag_list_get_int64 (const GstTagList* list, const gchar* tag, gint64* value);
// gboolean gst_tag_list_get_int64 (const ::GstTagList* list, const char* tag, gint64* value);
GI_INLINE_DECL bool get_int64 (const std::string & tag, gint64 & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, gint64> get_int64 (const std::string & tag) const noexcept;

// gboolean gst_tag_list_get_int64_index (const GstTagList* list, const gchar* tag, guint index, gint64* value);
// gboolean gst_tag_list_get_int64_index (const ::GstTagList* list, const char* tag, guint index, gint64* value);
GI_INLINE_DECL bool get_int64_index (const std::string & tag, guint index, gint64 & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, gint64> get_int64_index (const std::string & tag, guint index) const noexcept;

// gboolean gst_tag_list_get_int_index (const GstTagList* list, const gchar* tag, guint index, gint* value);
// gboolean gst_tag_list_get_int_index (const ::GstTagList* list, const char* tag, guint index, gint* value);
GI_INLINE_DECL bool get_int_index (const std::string & tag, guint index, gint & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, gint> get_int_index (const std::string & tag, guint index) const noexcept;

// gboolean gst_tag_list_get_pointer (const GstTagList* list, const gchar* tag, gpointer* value);
// gboolean gst_tag_list_get_pointer (const ::GstTagList* list, const char* tag, void** value);
GI_INLINE_DECL bool get_pointer (const std::string & tag, gpointer & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, gpointer> get_pointer (const std::string & tag) const noexcept;

// gboolean gst_tag_list_get_pointer_index (const GstTagList* list, const gchar* tag, guint index, gpointer* value);
// gboolean gst_tag_list_get_pointer_index (const ::GstTagList* list, const char* tag, guint index, void** value);
GI_INLINE_DECL bool get_pointer_index (const std::string & tag, guint index, gpointer & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, gpointer> get_pointer_index (const std::string & tag, guint index) const noexcept;

// gboolean gst_tag_list_get_sample (const GstTagList* list, const gchar* tag, GstSample** sample);
// gboolean gst_tag_list_get_sample (const ::GstTagList* list, const char* tag, ::GstSample** sample);
GI_INLINE_DECL bool get_sample (const std::string & tag, Gst::Sample & sample) const noexcept;
GI_INLINE_DECL std::tuple<bool, Gst::Sample> get_sample (const std::string & tag) const noexcept;

// gboolean gst_tag_list_get_sample_index (const GstTagList* list, const gchar* tag, guint index, GstSample** sample);
// gboolean gst_tag_list_get_sample_index (const ::GstTagList* list, const char* tag, guint index, ::GstSample** sample);
GI_INLINE_DECL bool get_sample_index (const std::string & tag, guint index, Gst::Sample & sample) const noexcept;
GI_INLINE_DECL std::tuple<bool, Gst::Sample> get_sample_index (const std::string & tag, guint index) const noexcept;

// GstTagScope gst_tag_list_get_scope (const GstTagList* list);
// ::GstTagScope gst_tag_list_get_scope (const ::GstTagList* list);
GI_INLINE_DECL Gst::TagScope get_scope () const noexcept;

// gboolean gst_tag_list_get_string (const GstTagList* list, const gchar* tag, gchar** value);
// gboolean gst_tag_list_get_string (const ::GstTagList* list, const char* tag, char** value);
GI_INLINE_DECL bool get_string (const std::string & tag, std::string & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> get_string (const std::string & tag) const noexcept;

// gboolean gst_tag_list_get_string_index (const GstTagList* list, const gchar* tag, guint index, gchar** value);
// gboolean gst_tag_list_get_string_index (const ::GstTagList* list, const char* tag, guint index, char** value);
GI_INLINE_DECL bool get_string_index (const std::string & tag, guint index, std::string & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> get_string_index (const std::string & tag, guint index) const noexcept;

// guint gst_tag_list_get_tag_size (const GstTagList* list, const gchar* tag);
// guint gst_tag_list_get_tag_size (const ::GstTagList* list, const char* tag);
GI_INLINE_DECL guint get_tag_size (const std::string & tag) const noexcept;

// gboolean gst_tag_list_get_uint (const GstTagList* list, const gchar* tag, guint* value);
// gboolean gst_tag_list_get_uint (const ::GstTagList* list, const char* tag, guint* value);
GI_INLINE_DECL bool get_uint (const std::string & tag, guint & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, guint> get_uint (const std::string & tag) const noexcept;

// gboolean gst_tag_list_get_uint64 (const GstTagList* list, const gchar* tag, guint64* value);
// gboolean gst_tag_list_get_uint64 (const ::GstTagList* list, const char* tag, guint64* value);
GI_INLINE_DECL bool get_uint64 (const std::string & tag, guint64 & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, guint64> get_uint64 (const std::string & tag) const noexcept;

// gboolean gst_tag_list_get_uint64_index (const GstTagList* list, const gchar* tag, guint index, guint64* value);
// gboolean gst_tag_list_get_uint64_index (const ::GstTagList* list, const char* tag, guint index, guint64* value);
GI_INLINE_DECL bool get_uint64_index (const std::string & tag, guint index, guint64 & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, guint64> get_uint64_index (const std::string & tag, guint index) const noexcept;

// gboolean gst_tag_list_get_uint_index (const GstTagList* list, const gchar* tag, guint index, guint* value);
// gboolean gst_tag_list_get_uint_index (const ::GstTagList* list, const char* tag, guint index, guint* value);
GI_INLINE_DECL bool get_uint_index (const std::string & tag, guint index, guint & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, guint> get_uint_index (const std::string & tag, guint index) const noexcept;

// const GValue* gst_tag_list_get_value_index (const GstTagList* list, const gchar* tag, guint index);
// const ::GValue* gst_tag_list_get_value_index (const ::GstTagList* list, const char* tag, guint index);
GI_INLINE_DECL GObject::Value get_value_index (const std::string & tag, guint index) const noexcept;

// void gst_tag_list_insert (GstTagList* into, const GstTagList* from, GstTagMergeMode mode);
// void gst_tag_list_insert (::GstTagList* into, const ::GstTagList* from, ::GstTagMergeMode mode);
GI_INLINE_DECL void insert (const Gst::TagList & from, Gst::TagMergeMode mode) noexcept;

// gboolean gst_tag_list_is_empty (const GstTagList* list);
// gboolean gst_tag_list_is_empty (const ::GstTagList* list);
GI_INLINE_DECL bool is_empty () const noexcept;

// gboolean gst_tag_list_is_equal (const GstTagList* list1, const GstTagList* list2);
// gboolean gst_tag_list_is_equal (const ::GstTagList* list1, const ::GstTagList* list2);
GI_INLINE_DECL bool is_equal (const Gst::TagList & list2) const noexcept;

// GstTagList* gst_tag_list_merge (const GstTagList* list1, const GstTagList* list2, GstTagMergeMode mode);
// ::GstTagList* gst_tag_list_merge (const ::GstTagList* list1, const ::GstTagList* list2, ::GstTagMergeMode mode);
GI_INLINE_DECL Gst::TagList merge (const Gst::TagList & list2, Gst::TagMergeMode mode) const noexcept;
GI_INLINE_DECL Gst::TagList merge (Gst::TagMergeMode mode) const noexcept;

// gint gst_tag_list_n_tags (const GstTagList* list);
// gint gst_tag_list_n_tags (const ::GstTagList* list);
GI_INLINE_DECL gint n_tags () const noexcept;

// const gchar* gst_tag_list_nth_tag_name (const GstTagList* list, guint index);
// const char* gst_tag_list_nth_tag_name (const ::GstTagList* list, guint index);
GI_INLINE_DECL std::string nth_tag_name (guint index) const noexcept;

// gboolean gst_tag_list_peek_string_index (const GstTagList* list, const gchar* tag, guint index, const gchar** value);
// gboolean gst_tag_list_peek_string_index (const ::GstTagList* list, const char* tag, guint index, const char** value);
GI_INLINE_DECL bool peek_string_index (const std::string & tag, guint index, std::string & value) const noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> peek_string_index (const std::string & tag, guint index) const noexcept;

// void gst_tag_list_remove_tag (GstTagList* list, const gchar* tag);
// void gst_tag_list_remove_tag (::GstTagList* list, const char* tag);
GI_INLINE_DECL void remove_tag (const std::string & tag) noexcept;

// void gst_tag_list_set_scope (GstTagList* list, GstTagScope scope);
// void gst_tag_list_set_scope (::GstTagList* list, ::GstTagScope scope);
GI_INLINE_DECL void set_scope (Gst::TagScope scope) noexcept;

// gchar* gst_tag_list_to_string (const GstTagList* list);
// char* gst_tag_list_to_string (const ::GstTagList* list);
GI_INLINE_DECL std::string to_string () const noexcept;

// gboolean gst_tag_list_copy_value (GValue* dest, const GstTagList* list, const gchar* tag);
// gboolean gst_tag_list_copy_value (::GValue* dest, const ::GstTagList* list, const char* tag);
static GI_INLINE_DECL bool copy_value (GObject::Value & dest, const Gst::TagList & list, const std::string & tag) noexcept;
static GI_INLINE_DECL std::tuple<bool, GObject::Value> copy_value (const Gst::TagList & list, const std::string & tag) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/taglist_extra_def.hpp>)
#include <gst/taglist_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/taglist_extra.hpp>)
#include <gst/taglist_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class TagList : public GI_GST_TAGLIST_BASE
{ typedef GI_GST_TAGLIST_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstTagList>
{ typedef Gst::TagList type; }; 

} // namespace repository

} // namespace gi

#endif
