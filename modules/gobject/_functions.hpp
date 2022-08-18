// AUTO-GENERATED

#ifndef _GI_GOBJECT__FUNCTIONS_HPP_
#define _GI_GOBJECT__FUNCTIONS_HPP_

namespace gi {

namespace repository {

namespace GObject {

// gpointer g_boxed_copy (GType boxed_type, gconstpointer src_boxed);
// void* g_boxed_copy (GType boxed_type, const void* src_boxed);
GI_INLINE_DECL gpointer boxed_copy (GType boxed_type, const void* src_boxed) noexcept;

// GType g_boxed_type_register_static (const gchar* name, GBoxedCopyFunc boxed_copy, GBoxedFreeFunc boxed_free);
// GType g_boxed_type_register_static (const char* name,  boxed_copy,  boxed_free);
// IGNORE; not introspectable, boxed_free type  not supported, boxed_copy type  not supported

// void g_clear_object (GObject** object_ptr);
// void g_clear_object (::GObject* object_ptr);
// IGNORE; not introspectable, inconsistent in object_ptr pointer depth (2 vs 1)

// void g_clear_signal_handler (gulong* handler_id_ptr, gpointer instance);
// void g_clear_signal_handler (gulong handler_id_ptr, ::GObject* instance);
// SKIP; inconsistent in handler_id_ptr pointer depth (1 vs 0)

// void g_enum_complete_type_info (GType g_enum_type, GTypeInfo* info, const GEnumValue* const_values);
// void g_enum_complete_type_info (GType g_enum_type, ::GTypeInfo** info, const ::GEnumValue* const_values);
// SKIP; inconsistent out info pointer depth (1 vs 2)

// GEnumValue* g_enum_get_value (GEnumClass* enum_class, gint value);
// ::GEnumValue* g_enum_get_value (::GEnumClass* enum_class, gint value);
GI_INLINE_DECL GObject::EnumValue enum_get_value (GObject::EnumClass enum_class, gint value) noexcept;

// GEnumValue* g_enum_get_value_by_name (GEnumClass* enum_class, const gchar* name);
// ::GEnumValue* g_enum_get_value_by_name (::GEnumClass* enum_class, const char* name);
GI_INLINE_DECL GObject::EnumValue enum_get_value_by_name (GObject::EnumClass enum_class, const std::string & name) noexcept;

// GEnumValue* g_enum_get_value_by_nick (GEnumClass* enum_class, const gchar* nick);
// ::GEnumValue* g_enum_get_value_by_nick (::GEnumClass* enum_class, const char* nick);
GI_INLINE_DECL GObject::EnumValue enum_get_value_by_nick (GObject::EnumClass enum_class, const std::string & nick) noexcept;

// GType g_enum_register_static (const gchar* name, const GEnumValue* const_static_values);
// GType g_enum_register_static (const char* name, const ::GEnumValue* const_static_values);
GI_INLINE_DECL GType enum_register_static (const std::string & name, const GObject::EnumValue & const_static_values) noexcept;

// gchar* g_enum_to_string (GType g_enum_type, gint value);
// char* g_enum_to_string (GType g_enum_type, gint value);
GI_INLINE_DECL std::string enum_to_string (GType g_enum_type, gint value) noexcept;

// void g_flags_complete_type_info (GType g_flags_type, GTypeInfo* info, const GFlagsValue* const_values);
// void g_flags_complete_type_info (GType g_flags_type, ::GTypeInfo** info, const ::GFlagsValue* const_values);
// SKIP; inconsistent out info pointer depth (1 vs 2)

// GFlagsValue* g_flags_get_first_value (GFlagsClass* flags_class, guint value);
// ::GFlagsValue* g_flags_get_first_value (::GFlagsClass* flags_class, guint value);
GI_INLINE_DECL GObject::FlagsValue flags_get_first_value (GObject::FlagsClass flags_class, guint value) noexcept;

// GFlagsValue* g_flags_get_value_by_name (GFlagsClass* flags_class, const gchar* name);
// ::GFlagsValue* g_flags_get_value_by_name (::GFlagsClass* flags_class, const char* name);
GI_INLINE_DECL GObject::FlagsValue flags_get_value_by_name (GObject::FlagsClass flags_class, const std::string & name) noexcept;

// GFlagsValue* g_flags_get_value_by_nick (GFlagsClass* flags_class, const gchar* nick);
// ::GFlagsValue* g_flags_get_value_by_nick (::GFlagsClass* flags_class, const char* nick);
GI_INLINE_DECL GObject::FlagsValue flags_get_value_by_nick (GObject::FlagsClass flags_class, const std::string & nick) noexcept;

// GType g_flags_register_static (const gchar* name, const GFlagsValue* const_static_values);
// GType g_flags_register_static (const char* name, const ::GFlagsValue* const_static_values);
GI_INLINE_DECL GType flags_register_static (const std::string & name, const GObject::FlagsValue & const_static_values) noexcept;

// gchar* g_flags_to_string (GType flags_type, guint value);
// char* g_flags_to_string (GType flags_type, guint value);
GI_INLINE_DECL std::string flags_to_string (GType flags_type, guint value) noexcept;

// GType g_gtype_get_type ();
// GType g_gtype_get_type ();
GI_INLINE_DECL GType gtype_get_type () noexcept;

// GParamSpec* g_param_spec_boolean (const gchar* name, const gchar* nick, const gchar* blurb, gboolean default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_boolean (const char* name, const char* nick, const char* blurb, gboolean default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_boolean (const std::string & name, const std::string & nick, const std::string & blurb, gboolean default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* g_param_spec_boxed (const gchar* name, const gchar* nick, const gchar* blurb, GType boxed_type, GParamFlags flags);
// ::GParamSpec* g_param_spec_boxed (const char* name, const char* nick, const char* blurb, GType boxed_type, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_boxed (const std::string & name, const std::string & nick, const std::string & blurb, GType boxed_type, GObject::ParamFlags flags) noexcept;

// GParamSpec* g_param_spec_char (const gchar* name, const gchar* nick, const gchar* blurb, gint8 minimum, gint8 maximum, gint8 default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_char (const char* name, const char* nick, const char* blurb, gint8 minimum, gint8 maximum, gint8 default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_char (const std::string & name, const std::string & nick, const std::string & blurb, gint8 minimum, gint8 maximum, gint8 default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* g_param_spec_double (const gchar* name, const gchar* nick, const gchar* blurb, gdouble minimum, gdouble maximum, gdouble default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_double (const char* name, const char* nick, const char* blurb, gdouble minimum, gdouble maximum, gdouble default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_double (const std::string & name, const std::string & nick, const std::string & blurb, gdouble minimum, gdouble maximum, gdouble default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* g_param_spec_enum (const gchar* name, const gchar* nick, const gchar* blurb, GType enum_type, gint default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_enum (const char* name, const char* nick, const char* blurb, GType enum_type, gint default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_enum (const std::string & name, const std::string & nick, const std::string & blurb, GType enum_type, gint default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* g_param_spec_flags (const gchar* name, const gchar* nick, const gchar* blurb, GType flags_type, guint default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_flags (const char* name, const char* nick, const char* blurb, GType flags_type, guint default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_flags (const std::string & name, const std::string & nick, const std::string & blurb, GType flags_type, guint default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* g_param_spec_float (const gchar* name, const gchar* nick, const gchar* blurb, gfloat minimum, gfloat maximum, gfloat default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_float (const char* name, const char* nick, const char* blurb, gfloat minimum, gfloat maximum, gfloat default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_float (const std::string & name, const std::string & nick, const std::string & blurb, gfloat minimum, gfloat maximum, gfloat default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* g_param_spec_gtype (const gchar* name, const gchar* nick, const gchar* blurb, GType is_a_type, GParamFlags flags);
// ::GParamSpec* g_param_spec_gtype (const char* name, const char* nick, const char* blurb, GType is_a_type, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_gtype (const std::string & name, const std::string & nick, const std::string & blurb, GType is_a_type, GObject::ParamFlags flags) noexcept;

// GParamSpec* g_param_spec_int (const gchar* name, const gchar* nick, const gchar* blurb, gint minimum, gint maximum, gint default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_int (const char* name, const char* nick, const char* blurb, gint minimum, gint maximum, gint default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_int (const std::string & name, const std::string & nick, const std::string & blurb, gint minimum, gint maximum, gint default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* g_param_spec_int64 (const gchar* name, const gchar* nick, const gchar* blurb, gint64 minimum, gint64 maximum, gint64 default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_int64 (const char* name, const char* nick, const char* blurb, gint64 minimum, gint64 maximum, gint64 default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_int64 (const std::string & name, const std::string & nick, const std::string & blurb, gint64 minimum, gint64 maximum, gint64 default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* g_param_spec_long (const gchar* name, const gchar* nick, const gchar* blurb, glong minimum, glong maximum, glong default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_long (const char* name, const char* nick, const char* blurb, glong minimum, glong maximum, glong default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_long (const std::string & name, const std::string & nick, const std::string & blurb, glong minimum, glong maximum, glong default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* g_param_spec_object (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
// ::GParamSpec* g_param_spec_object (const char* name, const char* nick, const char* blurb, GType object_type, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_object (const std::string & name, const std::string & nick, const std::string & blurb, GType object_type, GObject::ParamFlags flags) noexcept;

// FAILURE on g_param_spec_override; No such node (<xmlattr>.transfer-ownership)
// GParamSpec* g_param_spec_param (const gchar* name, const gchar* nick, const gchar* blurb, GType param_type, GParamFlags flags);
// ::GParamSpec* g_param_spec_param (const char* name, const char* nick, const char* blurb, GType param_type, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_param (const std::string & name, const std::string & nick, const std::string & blurb, GType param_type, GObject::ParamFlags flags) noexcept;

// GParamSpec* g_param_spec_pointer (const gchar* name, const gchar* nick, const gchar* blurb, GParamFlags flags);
// ::GParamSpec* g_param_spec_pointer (const char* name, const char* nick, const char* blurb, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_pointer (const std::string & name, const std::string & nick, const std::string & blurb, GObject::ParamFlags flags) noexcept;

// GParamSpec* g_param_spec_string (const gchar* name, const gchar* nick, const gchar* blurb, const gchar* default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_string (const char* name, const char* nick, const char* blurb, const char* default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_string (const std::string & name, const std::string & nick, const std::string & blurb, const std::string & default_value, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_string (const std::string & name, const std::string & nick, const std::string & blurb, GObject::ParamFlags flags) noexcept;

// GParamSpec* g_param_spec_uchar (const gchar* name, const gchar* nick, const gchar* blurb, guint8 minimum, guint8 maximum, guint8 default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_uchar (const char* name, const char* nick, const char* blurb, guint8 minimum, guint8 maximum, guint8 default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_uchar (const std::string & name, const std::string & nick, const std::string & blurb, guint8 minimum, guint8 maximum, guint8 default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* g_param_spec_uint (const gchar* name, const gchar* nick, const gchar* blurb, guint minimum, guint maximum, guint default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_uint (const char* name, const char* nick, const char* blurb, guint minimum, guint maximum, guint default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_uint (const std::string & name, const std::string & nick, const std::string & blurb, guint minimum, guint maximum, guint default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* g_param_spec_uint64 (const gchar* name, const gchar* nick, const gchar* blurb, guint64 minimum, guint64 maximum, guint64 default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_uint64 (const char* name, const char* nick, const char* blurb, guint64 minimum, guint64 maximum, guint64 default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_uint64 (const std::string & name, const std::string & nick, const std::string & blurb, guint64 minimum, guint64 maximum, guint64 default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* g_param_spec_ulong (const gchar* name, const gchar* nick, const gchar* blurb, gulong minimum, gulong maximum, gulong default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_ulong (const char* name, const char* nick, const char* blurb, gulong minimum, gulong maximum, gulong default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_ulong (const std::string & name, const std::string & nick, const std::string & blurb, gulong minimum, gulong maximum, gulong default_value, GObject::ParamFlags flags) noexcept;

// GParamSpec* g_param_spec_unichar (const gchar* name, const gchar* nick, const gchar* blurb, gunichar default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_unichar (const char* name, const char* nick, const char* blurb, gunichar default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_unichar (const std::string & name, const std::string & nick, const std::string & blurb, gunichar default_value, GObject::ParamFlags flags) noexcept;

// FAILURE on g_param_spec_value_array; No such node (<xmlattr>.transfer-ownership)
// GParamSpec* g_param_spec_variant (const gchar* name, const gchar* nick, const gchar* blurb, const GVariantType* type, GVariant* default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_variant (const char* name, const char* nick, const char* blurb, const ::GVariantType* type, ::GVariant* default_value, ::GParamFlags flags);
GI_INLINE_DECL GObject::ParamSpec param_spec_variant (const std::string & name, const std::string & nick, const std::string & blurb, const GLib::VariantType & type, GLib::Variant default_value, GObject::ParamFlags flags) noexcept;
GI_INLINE_DECL GObject::ParamSpec param_spec_variant (const std::string & name, const std::string & nick, const std::string & blurb, const GLib::VariantType & type, GObject::ParamFlags flags) noexcept;

// GType g_param_type_register_static (const gchar* name, const GParamSpecTypeInfo* pspec_info);
// GType g_param_type_register_static (const char* name, const ::GParamSpecTypeInfo* pspec_info);
GI_INLINE_DECL GType param_type_register_static (const std::string & name, const GObject::ParamSpecTypeInfo & pspec_info) noexcept;

// gboolean g_param_value_convert (GParamSpec* pspec, const GValue* src_value, GValue* dest_value, gboolean strict_validation);
// gboolean g_param_value_convert (::GParamSpec* pspec, const ::GValue* src_value, ::GValue* dest_value, gboolean strict_validation);
GI_INLINE_DECL bool param_value_convert (GObject::ParamSpec pspec, const GObject::Value & src_value, GObject::Value dest_value, gboolean strict_validation) noexcept;

// gboolean g_param_value_defaults (GParamSpec* pspec, const GValue* value);
// gboolean g_param_value_defaults (::GParamSpec* pspec, const ::GValue* value);
GI_INLINE_DECL bool param_value_defaults (GObject::ParamSpec pspec, const GObject::Value & value) noexcept;

// void g_param_value_set_default (GParamSpec* pspec, GValue* value);
// void g_param_value_set_default (::GParamSpec* pspec, ::GValue* value);
GI_INLINE_DECL void param_value_set_default (GObject::ParamSpec pspec, GObject::Value value) noexcept;

// gboolean g_param_value_validate (GParamSpec* pspec, GValue* value);
// gboolean g_param_value_validate (::GParamSpec* pspec, ::GValue* value);
GI_INLINE_DECL bool param_value_validate (GObject::ParamSpec pspec, GObject::Value value) noexcept;

// gint g_param_values_cmp (GParamSpec* pspec, const GValue* value1, const GValue* value2);
// gint g_param_values_cmp (::GParamSpec* pspec, const ::GValue* value1, const ::GValue* value2);
GI_INLINE_DECL gint param_values_cmp (GObject::ParamSpec pspec, const GObject::Value & value1, const GObject::Value & value2) noexcept;

// GType g_pointer_type_register_static (const gchar* name);
// GType g_pointer_type_register_static (const char* name);
GI_INLINE_DECL GType pointer_type_register_static (const std::string & name) noexcept;

// gboolean g_signal_accumulator_first_wins (GSignalInvocationHint* ihint, GValue* return_accu, const GValue* handler_return, gpointer dummy);
// gboolean g_signal_accumulator_first_wins (::GSignalInvocationHint* ihint, ::GValue* return_accu, const ::GValue* handler_return, void* dummy);
GI_INLINE_DECL bool signal_accumulator_first_wins (GObject::SignalInvocationHint ihint, GObject::Value return_accu, const GObject::Value & handler_return, void* dummy) noexcept;

// gboolean g_signal_accumulator_true_handled (GSignalInvocationHint* ihint, GValue* return_accu, const GValue* handler_return, gpointer dummy);
// gboolean g_signal_accumulator_true_handled (::GSignalInvocationHint* ihint, ::GValue* return_accu, const ::GValue* handler_return, void* dummy);
GI_INLINE_DECL bool signal_accumulator_true_handled (GObject::SignalInvocationHint ihint, GObject::Value return_accu, const GObject::Value & handler_return, void* dummy) noexcept;

// gulong g_signal_add_emission_hook (guint signal_id, GQuark detail, GSignalEmissionHook hook_func, gpointer hook_data, GDestroyNotify data_destroy);
// gulong g_signal_add_emission_hook (guint signal_id, ::GQuark detail,  hook_func, void* hook_data, GLib::DestroyNotify::cfunction_type data_destroy);
// SKIP; hook_func type  not supported

// void g_signal_chain_from_overridden (GValue* return_value);
// void g_signal_chain_from_overridden (::GValue* return_value);
// SKIP; inconsistent array info

// void g_signal_chain_from_overridden_handler (gpointer instance);
// void g_signal_chain_from_overridden_handler (::GTypeInstance* instance);
// IGNORE; not introspectable, varargs not supported

// gulong g_signal_connect_closure (gpointer instance, const gchar* detailed_signal, GClosure* closure, gboolean after);
// gulong g_signal_connect_closure (::GObject* instance, const char* detailed_signal, ::GClosure* closure, gboolean after);
GI_INLINE_DECL gulong signal_connect_closure (GObject::Object instance, const std::string & detailed_signal, GObject::Closure closure, gboolean after) noexcept;

// gulong g_signal_connect_closure_by_id (gpointer instance, guint signal_id, GQuark detail, GClosure* closure, gboolean after);
// gulong g_signal_connect_closure_by_id (::GObject* instance, guint signal_id, ::GQuark detail, ::GClosure* closure, gboolean after);
GI_INLINE_DECL gulong signal_connect_closure_by_id (GObject::Object instance, guint signal_id, ::GQuark detail, GObject::Closure closure, gboolean after) noexcept;

// gulong g_signal_connect_data (gpointer instance, const gchar* detailed_signal, GCallback c_handler, gpointer data, GClosureNotify destroy_data, GConnectFlags connect_flags);
// gulong g_signal_connect_data (::GObject* instance, const char* detailed_signal,  c_handler, void* data,  destroy_data, ::GConnectFlags connect_flags);
// IGNORE; not introspectable, destroy_data type  not supported, c_handler type  not supported

// gulong g_signal_connect_object (gpointer instance, const gchar* detailed_signal, GCallback c_handler, gpointer gobject, GConnectFlags connect_flags);
// gulong g_signal_connect_object (::GTypeInstance* instance, const char* detailed_signal,  c_handler, ::GObject* gobject, ::GConnectFlags connect_flags);
// IGNORE; not introspectable, c_handler type  not supported

// void g_signal_emit (gpointer instance, guint signal_id, GQuark detail);
// void g_signal_emit (::GObject* instance, guint signal_id, ::GQuark detail);
// IGNORE; not introspectable, varargs not supported

// void g_signal_emit_by_name (gpointer instance, const gchar* detailed_signal);
// void g_signal_emit_by_name (::GObject* instance, const char* detailed_signal);
// IGNORE; not introspectable, varargs not supported

// void g_signal_emit_valist (gpointer instance, guint signal_id, GQuark detail, va_list var_args);
// void g_signal_emit_valist (::GTypeInstance* instance, guint signal_id, ::GQuark detail,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void g_signal_emitv (guint signal_id, GQuark detail, GValue* return_value);
// void g_signal_emitv (guint signal_id, ::GQuark detail, ::GValue** return_value);
// SKIP; inconsistent array info

// GSignalInvocationHint* g_signal_get_invocation_hint (gpointer instance);
// ::GSignalInvocationHint* g_signal_get_invocation_hint (::GObject* instance);
GI_INLINE_DECL GObject::SignalInvocationHint signal_get_invocation_hint (GObject::Object instance) noexcept;

// void g_signal_handler_block (gpointer instance, gulong handler_id);
// void g_signal_handler_block (::GObject* instance, gulong handler_id);
GI_INLINE_DECL void signal_handler_block (GObject::Object instance, gulong handler_id) noexcept;

// void g_signal_handler_disconnect (gpointer instance, gulong handler_id);
// void g_signal_handler_disconnect (::GObject* instance, gulong handler_id);
GI_INLINE_DECL void signal_handler_disconnect (GObject::Object instance, gulong handler_id) noexcept;

// gulong g_signal_handler_find (gpointer instance, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure* closure, gpointer func, gpointer data);
// gulong g_signal_handler_find (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
GI_INLINE_DECL gulong signal_handler_find (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, GObject::Closure closure, void* func, void* data) noexcept;
GI_INLINE_DECL gulong signal_handler_find (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, void* func, void* data) noexcept;

// gboolean g_signal_handler_is_connected (gpointer instance, gulong handler_id);
// gboolean g_signal_handler_is_connected (::GObject* instance, gulong handler_id);
GI_INLINE_DECL bool signal_handler_is_connected (GObject::Object instance, gulong handler_id) noexcept;

// void g_signal_handler_unblock (gpointer instance, gulong handler_id);
// void g_signal_handler_unblock (::GObject* instance, gulong handler_id);
GI_INLINE_DECL void signal_handler_unblock (GObject::Object instance, gulong handler_id) noexcept;

// guint g_signal_handlers_block_matched (gpointer instance, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure* closure, gpointer func, gpointer data);
// guint g_signal_handlers_block_matched (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
GI_INLINE_DECL guint signal_handlers_block_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, GObject::Closure closure, void* func, void* data) noexcept;
GI_INLINE_DECL guint signal_handlers_block_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, void* func, void* data) noexcept;

// void g_signal_handlers_destroy (gpointer instance);
// void g_signal_handlers_destroy (::GObject* instance);
GI_INLINE_DECL void signal_handlers_destroy (GObject::Object instance) noexcept;

// guint g_signal_handlers_disconnect_matched (gpointer instance, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure* closure, gpointer func, gpointer data);
// guint g_signal_handlers_disconnect_matched (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
GI_INLINE_DECL guint signal_handlers_disconnect_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, GObject::Closure closure, void* func, void* data) noexcept;
GI_INLINE_DECL guint signal_handlers_disconnect_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, void* func, void* data) noexcept;

// guint g_signal_handlers_unblock_matched (gpointer instance, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure* closure, gpointer func, gpointer data);
// guint g_signal_handlers_unblock_matched (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
GI_INLINE_DECL guint signal_handlers_unblock_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, GObject::Closure closure, void* func, void* data) noexcept;
GI_INLINE_DECL guint signal_handlers_unblock_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, void* func, void* data) noexcept;

// gboolean g_signal_has_handler_pending (gpointer instance, guint signal_id, GQuark detail, gboolean may_be_blocked);
// gboolean g_signal_has_handler_pending (::GObject* instance, guint signal_id, ::GQuark detail, gboolean may_be_blocked);
GI_INLINE_DECL bool signal_has_handler_pending (GObject::Object instance, guint signal_id, ::GQuark detail, gboolean may_be_blocked) noexcept;

// gboolean g_signal_is_valid_name (const gchar* name);
// gboolean g_signal_is_valid_name (const char* name);
GI_INLINE_DECL bool signal_is_valid_name (const std::string & name) noexcept;

// guint* g_signal_list_ids (GType itype, guint* n_ids);
// guint* g_signal_list_ids (GType itype, guint* n_ids);
GI_INLINE_DECL std::vector<guint> signal_list_ids (GType itype) noexcept;

// guint g_signal_lookup (const gchar* name, GType itype);
// guint g_signal_lookup (const char* name, GType itype);
GI_INLINE_DECL guint signal_lookup (const std::string & name, GType itype) noexcept;

// const gchar* g_signal_name (guint signal_id);
// const char* g_signal_name (guint signal_id);
GI_INLINE_DECL std::string signal_name (guint signal_id) noexcept;

// guint g_signal_new (const gchar* signal_name, GType itype, GSignalFlags signal_flags, guint class_offset, GSignalAccumulator accumulator, gpointer accu_data, GSignalCMarshaller c_marshaller, GType return_type, guint n_params);
// guint g_signal_new (const char* signal_name, GType itype, ::GSignalFlags signal_flags, guint class_offset,  accumulator, void* accu_data,  c_marshaller, GType return_type, guint n_params);
// IGNORE; not introspectable, varargs not supported

// guint g_signal_new_class_handler (const gchar* signal_name, GType itype, GSignalFlags signal_flags, GCallback class_handler, GSignalAccumulator accumulator, gpointer accu_data, GSignalCMarshaller c_marshaller, GType return_type, guint n_params);
// guint g_signal_new_class_handler (const char* signal_name, GType itype, ::GSignalFlags signal_flags,  class_handler,  accumulator, void* accu_data,  c_marshaller, GType return_type, guint n_params);
// IGNORE; not introspectable, varargs not supported

// guint g_signal_new_valist (const gchar* signal_name, GType itype, GSignalFlags signal_flags, GClosure* class_closure, GSignalAccumulator accumulator, gpointer accu_data, GSignalCMarshaller c_marshaller, GType return_type, guint n_params, va_list args);
// guint g_signal_new_valist (const char* signal_name, GType itype, ::GSignalFlags signal_flags, ::GClosure* class_closure,  accumulator, void* accu_data,  c_marshaller, GType return_type, guint n_params,  args);
// IGNORE; not introspectable, args type  not supported, c_marshaller type  not supported, accumulator type  not supported

// guint g_signal_newv (const gchar* signal_name, GType itype, GSignalFlags signal_flags, GClosure* class_closure, GSignalAccumulator accumulator, gpointer accu_data, GSignalCMarshaller c_marshaller, GType return_type, guint n_params, GType* param_types);
// guint g_signal_newv (const char* signal_name, GType itype, ::GSignalFlags signal_flags, ::GClosure* class_closure,  accumulator, void* accu_data,  c_marshaller, GType return_type, guint n_params, GType* param_types);
// IGNORE; not introspectable, c_marshaller type  not supported, accumulator type  not supported

// void g_signal_override_class_closure (guint signal_id, GType instance_type, GClosure* class_closure);
// void g_signal_override_class_closure (guint signal_id, GType instance_type, ::GClosure* class_closure);
GI_INLINE_DECL void signal_override_class_closure (guint signal_id, GType instance_type, GObject::Closure class_closure) noexcept;

// void g_signal_override_class_handler (const gchar* signal_name, GType instance_type, GCallback class_handler);
// void g_signal_override_class_handler (const char* signal_name, GType instance_type,  class_handler);
// IGNORE; not introspectable, class_handler type  not supported

// gboolean g_signal_parse_name (const gchar* detailed_signal, GType itype, guint* signal_id_p, GQuark* detail_p, gboolean force_detail_quark);
// gboolean g_signal_parse_name (const char* detailed_signal, GType itype, guint* signal_id_p, ::GQuark* detail_p, gboolean force_detail_quark);
GI_INLINE_DECL bool signal_parse_name (const std::string & detailed_signal, GType itype, guint & signal_id_p, GLib::Quark & detail_p, gboolean force_detail_quark) noexcept;
GI_INLINE_DECL std::tuple<bool, guint, GLib::Quark> signal_parse_name (const std::string & detailed_signal, GType itype, gboolean force_detail_quark) noexcept;

// void g_signal_query (guint signal_id, GSignalQuery* query);
// void g_signal_query (guint signal_id, ::GSignalQuery* query);
GI_INLINE_DECL void signal_query (guint signal_id, GObject::SignalQuery & query) noexcept;
GI_INLINE_DECL GObject::SignalQuery signal_query (guint signal_id) noexcept;

// void g_signal_remove_emission_hook (guint signal_id, gulong hook_id);
// void g_signal_remove_emission_hook (guint signal_id, gulong hook_id);
GI_INLINE_DECL void signal_remove_emission_hook (guint signal_id, gulong hook_id) noexcept;

// void g_signal_set_va_marshaller (guint signal_id, GType instance_type, GSignalCVaMarshaller va_marshaller);
// void g_signal_set_va_marshaller (guint signal_id, GType instance_type,  va_marshaller);
// SKIP; va_marshaller type  not supported

// void g_signal_stop_emission (gpointer instance, guint signal_id, GQuark detail);
// void g_signal_stop_emission (::GObject* instance, guint signal_id, ::GQuark detail);
GI_INLINE_DECL void signal_stop_emission (GObject::Object instance, guint signal_id, ::GQuark detail) noexcept;

// void g_signal_stop_emission_by_name (gpointer instance, const gchar* detailed_signal);
// void g_signal_stop_emission_by_name (::GObject* instance, const char* detailed_signal);
GI_INLINE_DECL void signal_stop_emission_by_name (GObject::Object instance, const std::string & detailed_signal) noexcept;

// GClosure* g_signal_type_cclosure_new (GType itype, guint struct_offset);
// ::GClosure* g_signal_type_cclosure_new (GType itype, guint struct_offset);
GI_INLINE_DECL GObject::Closure signal_type_cclosure_new (GType itype, guint struct_offset) noexcept;

// void g_source_set_closure (GSource* source, GClosure* closure);
// void g_source_set_closure (::GSource* source, ::GClosure* closure);
GI_INLINE_DECL void source_set_closure (GLib::Source source, GObject::Closure closure) noexcept;

// void g_source_set_dummy_callback (GSource* source);
// void g_source_set_dummy_callback (::GSource* source);
GI_INLINE_DECL void source_set_dummy_callback (GLib::Source source) noexcept;

// gchar* g_strdup_value_contents (const GValue* value);
// char* g_strdup_value_contents (const ::GValue* value);
GI_INLINE_DECL std::string strdup_value_contents (const GObject::Value & value) noexcept;

// void g_type_add_class_cache_func (gpointer cache_data, GTypeClassCacheFunc cache_func);
// void g_type_add_class_cache_func (void* cache_data,  cache_func);
// IGNORE; not introspectable, cache_func type  not supported

// void g_type_add_class_private (GType class_type, gsize private_size);
// void g_type_add_class_private (GType class_type, gsize private_size);
GI_INLINE_DECL void type_add_class_private (GType class_type, gsize private_size) noexcept;

// gint g_type_add_instance_private (GType class_type, gsize private_size);
// gint g_type_add_instance_private (GType class_type, gsize private_size);
GI_INLINE_DECL gint type_add_instance_private (GType class_type, gsize private_size) noexcept;

// void g_type_add_interface_check (gpointer check_data, GTypeInterfaceCheckFunc check_func);
// void g_type_add_interface_check (void* check_data,  check_func);
// IGNORE; not introspectable, check_func type  not supported

// void g_type_add_interface_dynamic (GType instance_type, GType interface_type, GTypePlugin* plugin);
// void g_type_add_interface_dynamic (GType instance_type, GType interface_type, ::GTypePlugin* plugin);
GI_INLINE_DECL void type_add_interface_dynamic (GType instance_type, GType interface_type, GObject::TypePlugin plugin) noexcept;

// void g_type_add_interface_static (GType instance_type, GType interface_type, const GInterfaceInfo* info);
// void g_type_add_interface_static (GType instance_type, GType interface_type, const ::GInterfaceInfo* info);
GI_INLINE_DECL void type_add_interface_static (GType instance_type, GType interface_type, const GObject::InterfaceInfo & info) noexcept;

// FAILURE on g_type_check_class_cast; No such node (<xmlattr>.transfer-ownership)
// gboolean g_type_check_class_is_a (GTypeClass* g_class, GType is_a_type);
// gboolean g_type_check_class_is_a (::GTypeClass* g_class, GType is_a_type);
GI_INLINE_DECL bool type_check_class_is_a (GObject::TypeClass g_class, GType is_a_type) noexcept;

// gboolean g_type_check_instance (GTypeInstance* instance);
// gboolean g_type_check_instance (::GTypeInstance* instance);
GI_INLINE_DECL bool type_check_instance (GObject::TypeInstance instance) noexcept;

// FAILURE on g_type_check_instance_cast; No such node (<xmlattr>.transfer-ownership)
// gboolean g_type_check_instance_is_a (GTypeInstance* instance, GType iface_type);
// gboolean g_type_check_instance_is_a (::GTypeInstance* instance, GType iface_type);
GI_INLINE_DECL bool type_check_instance_is_a (GObject::TypeInstance instance, GType iface_type) noexcept;

// gboolean g_type_check_instance_is_fundamentally_a (GTypeInstance* instance, GType fundamental_type);
// gboolean g_type_check_instance_is_fundamentally_a (::GTypeInstance* instance, GType fundamental_type);
GI_INLINE_DECL bool type_check_instance_is_fundamentally_a (GObject::TypeInstance instance, GType fundamental_type) noexcept;

// gboolean g_type_check_is_value_type (GType type);
// gboolean g_type_check_is_value_type (GType type);
GI_INLINE_DECL bool type_check_is_value_type (GType type) noexcept;

// gboolean g_type_check_value (const GValue* value);
// gboolean g_type_check_value (const ::GValue* value);
GI_INLINE_DECL bool type_check_value (const GObject::Value & value) noexcept;

// gboolean g_type_check_value_holds (const GValue* value, GType type);
// gboolean g_type_check_value_holds (const ::GValue* value, GType type);
GI_INLINE_DECL bool type_check_value_holds (const GObject::Value & value, GType type) noexcept;

// GType* g_type_children (GType type, guint* n_children);
// GType* g_type_children (GType type, guint* n_children);
GI_INLINE_DECL std::vector<GType> type_children (GType type) noexcept;

// FAILURE on g_type_create_instance; No such node (<xmlattr>.transfer-ownership)
// gpointer g_type_default_interface_peek (GType g_type);
// ::GTypeInterface* g_type_default_interface_peek (GType g_type);
GI_INLINE_DECL GObject::TypeInterface type_default_interface_peek (GType g_type) noexcept;

// guint g_type_depth (GType type);
// guint g_type_depth (GType type);
GI_INLINE_DECL guint type_depth (GType type) noexcept;

// void g_type_ensure (GType type);
// void g_type_ensure (GType type);
GI_INLINE_DECL void type_ensure (GType type) noexcept;

// void g_type_free_instance (GTypeInstance* instance);
// void g_type_free_instance (::GTypeInstance* instance);
GI_INLINE_DECL void type_free_instance (GObject::TypeInstance instance) noexcept;

// GType g_type_from_name (const gchar* name);
// GType g_type_from_name (const char* name);
GI_INLINE_DECL GType type_from_name (const std::string & name) noexcept;

// GType g_type_fundamental (GType type_id);
// GType g_type_fundamental (GType type_id);
GI_INLINE_DECL GType type_fundamental (GType type_id) noexcept;

// GType g_type_fundamental_next ();
// GType g_type_fundamental_next ();
GI_INLINE_DECL GType type_fundamental_next () noexcept;

// int g_type_get_instance_count (GType type);
// gint g_type_get_instance_count (GType type);
GI_INLINE_DECL gint type_get_instance_count (GType type) noexcept;

// GTypePlugin* g_type_get_plugin (GType type);
// ::GTypePlugin* g_type_get_plugin (GType type);
GI_INLINE_DECL GObject::TypePlugin type_get_plugin (GType type) noexcept;

// gpointer g_type_get_qdata (GType type, GQuark quark);
// void* g_type_get_qdata (GType type, ::GQuark quark);
GI_INLINE_DECL gpointer type_get_qdata (GType type, ::GQuark quark) noexcept;

// guint g_type_get_type_registration_serial ();
// guint g_type_get_type_registration_serial ();
GI_INLINE_DECL guint type_get_type_registration_serial () noexcept;

// GType* g_type_interfaces (GType type, guint* n_interfaces);
// GType* g_type_interfaces (GType type, guint* n_interfaces);
GI_INLINE_DECL std::vector<GType> type_interfaces (GType type) noexcept;

// gboolean g_type_is_a (GType type, GType is_a_type);
// gboolean g_type_is_a (GType type, GType is_a_type);
GI_INLINE_DECL bool type_is_a (GType type, GType is_a_type) noexcept;

// const gchar* g_type_name (GType type);
// const char* g_type_name (GType type);
GI_INLINE_DECL std::string type_name (GType type) noexcept;

// const gchar* g_type_name_from_class (GTypeClass* g_class);
// const char* g_type_name_from_class (::GTypeClass* g_class);
GI_INLINE_DECL std::string type_name_from_class (GObject::TypeClass g_class) noexcept;

// const gchar* g_type_name_from_instance (GTypeInstance* instance);
// const char* g_type_name_from_instance (::GTypeInstance* instance);
GI_INLINE_DECL std::string type_name_from_instance (GObject::TypeInstance instance) noexcept;

// GType g_type_next_base (GType leaf_type, GType root_type);
// GType g_type_next_base (GType leaf_type, GType root_type);
GI_INLINE_DECL GType type_next_base (GType leaf_type, GType root_type) noexcept;

// GType g_type_parent (GType type);
// GType g_type_parent (GType type);
GI_INLINE_DECL GType type_parent (GType type) noexcept;

// GQuark g_type_qname (GType type);
// ::GQuark g_type_qname (GType type);
GI_INLINE_DECL GLib::Quark type_qname (GType type) noexcept;

// void g_type_query (GType type, GTypeQuery* query);
// void g_type_query (GType type, ::GTypeQuery* query);
GI_INLINE_DECL void type_query (GType type, GObject::TypeQuery & query) noexcept;
GI_INLINE_DECL GObject::TypeQuery type_query (GType type) noexcept;

// GType g_type_register_dynamic (GType parent_type, const gchar* type_name, GTypePlugin* plugin, GTypeFlags flags);
// GType g_type_register_dynamic (GType parent_type, const char* type_name, ::GTypePlugin* plugin, ::GTypeFlags flags);
GI_INLINE_DECL GType type_register_dynamic (GType parent_type, const std::string & type_name, GObject::TypePlugin plugin, GObject::TypeFlags flags) noexcept;

// GType g_type_register_fundamental (GType type_id, const gchar* type_name, const GTypeInfo* info, const GTypeFundamentalInfo* finfo, GTypeFlags flags);
// GType g_type_register_fundamental (GType type_id, const char* type_name, const ::GTypeInfo* info, const ::GTypeFundamentalInfo* finfo, ::GTypeFlags flags);
GI_INLINE_DECL GType type_register_fundamental (GType type_id, const std::string & type_name, const GObject::TypeInfo & info, const GObject::TypeFundamentalInfo & finfo, GObject::TypeFlags flags) noexcept;

// GType g_type_register_static (GType parent_type, const gchar* type_name, const GTypeInfo* info, GTypeFlags flags);
// GType g_type_register_static (GType parent_type, const char* type_name, const ::GTypeInfo* info, ::GTypeFlags flags);
GI_INLINE_DECL GType type_register_static (GType parent_type, const std::string & type_name, const GObject::TypeInfo & info, GObject::TypeFlags flags) noexcept;

// GType g_type_register_static_simple (GType parent_type, const gchar* type_name, guint class_size, GClassInitFunc class_init, guint instance_size, GInstanceInitFunc instance_init, GTypeFlags flags);
// GType g_type_register_static_simple (GType parent_type, const char* type_name, guint class_size,  class_init, guint instance_size,  instance_init, ::GTypeFlags flags);
// IGNORE; not introspectable, instance_init type  not supported, class_init type  not supported

// void g_type_remove_class_cache_func (gpointer cache_data, GTypeClassCacheFunc cache_func);
// void g_type_remove_class_cache_func (void* cache_data,  cache_func);
// IGNORE; not introspectable, cache_func type  not supported

// void g_type_remove_interface_check (gpointer check_data, GTypeInterfaceCheckFunc check_func);
// void g_type_remove_interface_check (void* check_data,  check_func);
// IGNORE; not introspectable, check_func type  not supported

// void g_type_set_qdata (GType type, GQuark quark, gpointer data);
// void g_type_set_qdata (GType type, ::GQuark quark, void* data);
GI_INLINE_DECL void type_set_qdata (GType type, ::GQuark quark, void* data) noexcept;

// gboolean g_type_test_flags (GType type, guint flags);
// gboolean g_type_test_flags (GType type, guint flags);
GI_INLINE_DECL bool type_test_flags (GType type, guint flags) noexcept;

} // namespace GObject

} // namespace repository

} // namespace gi

#endif
