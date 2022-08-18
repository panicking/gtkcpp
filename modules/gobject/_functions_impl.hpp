// AUTO-GENERATED

#ifndef _GI_GOBJECT__FUNCTIONS_IMPL_HPP_
#define _GI_GOBJECT__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

// gpointer g_boxed_copy (GType boxed_type, gconstpointer src_boxed);
// void* g_boxed_copy (GType boxed_type, const void* src_boxed);
gpointer boxed_copy (GType boxed_type, const void* src_boxed) noexcept
{
  typedef void* (*call_wrap_t) (GType boxed_type, const void* src_boxed);
  call_wrap_t call_wrap_v = (call_wrap_t) g_boxed_copy;
  auto src_boxed_to_c = src_boxed;
  auto boxed_type_to_c = boxed_type;
  auto _temp_ret = call_wrap_v ((GType) (boxed_type_to_c), (const void*) (src_boxed_to_c));
  return _temp_ret;
}

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
GObject::EnumValue enum_get_value (GObject::EnumClass enum_class, gint value) noexcept
{
  typedef ::GEnumValue* (*call_wrap_t) (::GEnumClass* enum_class, gint value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_enum_get_value;
  auto value_to_c = value;
  auto enum_class_to_c = gi::unwrap (enum_class, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GEnumClass*) (enum_class_to_c), (gint) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GEnumValue* g_enum_get_value_by_name (GEnumClass* enum_class, const gchar* name);
// ::GEnumValue* g_enum_get_value_by_name (::GEnumClass* enum_class, const char* name);
GObject::EnumValue enum_get_value_by_name (GObject::EnumClass enum_class, const std::string & name) noexcept
{
  typedef ::GEnumValue* (*call_wrap_t) (::GEnumClass* enum_class, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_enum_get_value_by_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto enum_class_to_c = gi::unwrap (enum_class, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GEnumClass*) (enum_class_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GEnumValue* g_enum_get_value_by_nick (GEnumClass* enum_class, const gchar* nick);
// ::GEnumValue* g_enum_get_value_by_nick (::GEnumClass* enum_class, const char* nick);
GObject::EnumValue enum_get_value_by_nick (GObject::EnumClass enum_class, const std::string & nick) noexcept
{
  typedef ::GEnumValue* (*call_wrap_t) (::GEnumClass* enum_class, const char* nick);
  call_wrap_t call_wrap_v = (call_wrap_t) g_enum_get_value_by_nick;
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto enum_class_to_c = gi::unwrap (enum_class, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GEnumClass*) (enum_class_to_c), (const char*) (nick_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GType g_enum_register_static (const gchar* name, const GEnumValue* const_static_values);
// GType g_enum_register_static (const char* name, const ::GEnumValue* const_static_values);
GType enum_register_static (const std::string & name, const GObject::EnumValue & const_static_values) noexcept
{
  typedef GType (*call_wrap_t) (const char* name, const ::GEnumValue* const_static_values);
  call_wrap_t call_wrap_v = (call_wrap_t) g_enum_register_static;
  auto const_static_values_to_c = gi::unwrap (const_static_values, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const ::GEnumValue*) (const_static_values_to_c));
  return _temp_ret;
}

// gchar* g_enum_to_string (GType g_enum_type, gint value);
// char* g_enum_to_string (GType g_enum_type, gint value);
std::string enum_to_string (GType g_enum_type, gint value) noexcept
{
  typedef char* (*call_wrap_t) (GType g_enum_type, gint value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_enum_to_string;
  auto value_to_c = value;
  auto g_enum_type_to_c = g_enum_type;
  auto _temp_ret = call_wrap_v ((GType) (g_enum_type_to_c), (gint) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_flags_complete_type_info (GType g_flags_type, GTypeInfo* info, const GFlagsValue* const_values);
// void g_flags_complete_type_info (GType g_flags_type, ::GTypeInfo** info, const ::GFlagsValue* const_values);
// SKIP; inconsistent out info pointer depth (1 vs 2)

// GFlagsValue* g_flags_get_first_value (GFlagsClass* flags_class, guint value);
// ::GFlagsValue* g_flags_get_first_value (::GFlagsClass* flags_class, guint value);
GObject::FlagsValue flags_get_first_value (GObject::FlagsClass flags_class, guint value) noexcept
{
  typedef ::GFlagsValue* (*call_wrap_t) (::GFlagsClass* flags_class, guint value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_flags_get_first_value;
  auto value_to_c = value;
  auto flags_class_to_c = gi::unwrap (flags_class, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFlagsClass*) (flags_class_to_c), (guint) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GFlagsValue* g_flags_get_value_by_name (GFlagsClass* flags_class, const gchar* name);
// ::GFlagsValue* g_flags_get_value_by_name (::GFlagsClass* flags_class, const char* name);
GObject::FlagsValue flags_get_value_by_name (GObject::FlagsClass flags_class, const std::string & name) noexcept
{
  typedef ::GFlagsValue* (*call_wrap_t) (::GFlagsClass* flags_class, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_flags_get_value_by_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto flags_class_to_c = gi::unwrap (flags_class, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFlagsClass*) (flags_class_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GFlagsValue* g_flags_get_value_by_nick (GFlagsClass* flags_class, const gchar* nick);
// ::GFlagsValue* g_flags_get_value_by_nick (::GFlagsClass* flags_class, const char* nick);
GObject::FlagsValue flags_get_value_by_nick (GObject::FlagsClass flags_class, const std::string & nick) noexcept
{
  typedef ::GFlagsValue* (*call_wrap_t) (::GFlagsClass* flags_class, const char* nick);
  call_wrap_t call_wrap_v = (call_wrap_t) g_flags_get_value_by_nick;
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto flags_class_to_c = gi::unwrap (flags_class, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFlagsClass*) (flags_class_to_c), (const char*) (nick_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GType g_flags_register_static (const gchar* name, const GFlagsValue* const_static_values);
// GType g_flags_register_static (const char* name, const ::GFlagsValue* const_static_values);
GType flags_register_static (const std::string & name, const GObject::FlagsValue & const_static_values) noexcept
{
  typedef GType (*call_wrap_t) (const char* name, const ::GFlagsValue* const_static_values);
  call_wrap_t call_wrap_v = (call_wrap_t) g_flags_register_static;
  auto const_static_values_to_c = gi::unwrap (const_static_values, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const ::GFlagsValue*) (const_static_values_to_c));
  return _temp_ret;
}

// gchar* g_flags_to_string (GType flags_type, guint value);
// char* g_flags_to_string (GType flags_type, guint value);
std::string flags_to_string (GType flags_type, guint value) noexcept
{
  typedef char* (*call_wrap_t) (GType flags_type, guint value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_flags_to_string;
  auto value_to_c = value;
  auto flags_type_to_c = flags_type;
  auto _temp_ret = call_wrap_v ((GType) (flags_type_to_c), (guint) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GType g_gtype_get_type ();
// GType g_gtype_get_type ();
GType gtype_get_type () noexcept
{
  typedef GType (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_gtype_get_type;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GParamSpec* g_param_spec_boolean (const gchar* name, const gchar* nick, const gchar* blurb, gboolean default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_boolean (const char* name, const char* nick, const char* blurb, gboolean default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_boolean (const std::string & name, const std::string & nick, const std::string & blurb, gboolean default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gboolean default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_boolean;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gboolean) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GParamSpec* g_param_spec_boxed (const gchar* name, const gchar* nick, const gchar* blurb, GType boxed_type, GParamFlags flags);
// ::GParamSpec* g_param_spec_boxed (const char* name, const char* nick, const char* blurb, GType boxed_type, ::GParamFlags flags);
GObject::ParamSpec param_spec_boxed (const std::string & name, const std::string & nick, const std::string & blurb, GType boxed_type, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, GType boxed_type, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_boxed;
  auto flags_to_c = gi::unwrap (flags);
  auto boxed_type_to_c = boxed_type;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (GType) (boxed_type_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GParamSpec* g_param_spec_char (const gchar* name, const gchar* nick, const gchar* blurb, gint8 minimum, gint8 maximum, gint8 default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_char (const char* name, const char* nick, const char* blurb, gint8 minimum, gint8 maximum, gint8 default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_char (const std::string & name, const std::string & nick, const std::string & blurb, gint8 minimum, gint8 maximum, gint8 default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gint8 minimum, gint8 maximum, gint8 default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_char;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gint8) (minimum_to_c), (gint8) (maximum_to_c), (gint8) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GParamSpec* g_param_spec_double (const gchar* name, const gchar* nick, const gchar* blurb, gdouble minimum, gdouble maximum, gdouble default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_double (const char* name, const char* nick, const char* blurb, gdouble minimum, gdouble maximum, gdouble default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_double (const std::string & name, const std::string & nick, const std::string & blurb, gdouble minimum, gdouble maximum, gdouble default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gdouble minimum, gdouble maximum, gdouble default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_double;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gdouble) (minimum_to_c), (gdouble) (maximum_to_c), (gdouble) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GParamSpec* g_param_spec_enum (const gchar* name, const gchar* nick, const gchar* blurb, GType enum_type, gint default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_enum (const char* name, const char* nick, const char* blurb, GType enum_type, gint default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_enum (const std::string & name, const std::string & nick, const std::string & blurb, GType enum_type, gint default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, GType enum_type, gint default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_enum;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto enum_type_to_c = enum_type;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (GType) (enum_type_to_c), (gint) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GParamSpec* g_param_spec_flags (const gchar* name, const gchar* nick, const gchar* blurb, GType flags_type, guint default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_flags (const char* name, const char* nick, const char* blurb, GType flags_type, guint default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_flags (const std::string & name, const std::string & nick, const std::string & blurb, GType flags_type, guint default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, GType flags_type, guint default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_flags;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto flags_type_to_c = flags_type;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (GType) (flags_type_to_c), (guint) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GParamSpec* g_param_spec_float (const gchar* name, const gchar* nick, const gchar* blurb, gfloat minimum, gfloat maximum, gfloat default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_float (const char* name, const char* nick, const char* blurb, gfloat minimum, gfloat maximum, gfloat default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_float (const std::string & name, const std::string & nick, const std::string & blurb, gfloat minimum, gfloat maximum, gfloat default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gfloat minimum, gfloat maximum, gfloat default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_float;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gfloat) (minimum_to_c), (gfloat) (maximum_to_c), (gfloat) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GParamSpec* g_param_spec_gtype (const gchar* name, const gchar* nick, const gchar* blurb, GType is_a_type, GParamFlags flags);
// ::GParamSpec* g_param_spec_gtype (const char* name, const char* nick, const char* blurb, GType is_a_type, ::GParamFlags flags);
GObject::ParamSpec param_spec_gtype (const std::string & name, const std::string & nick, const std::string & blurb, GType is_a_type, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, GType is_a_type, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_gtype;
  auto flags_to_c = gi::unwrap (flags);
  auto is_a_type_to_c = is_a_type;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (GType) (is_a_type_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GParamSpec* g_param_spec_int (const gchar* name, const gchar* nick, const gchar* blurb, gint minimum, gint maximum, gint default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_int (const char* name, const char* nick, const char* blurb, gint minimum, gint maximum, gint default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_int (const std::string & name, const std::string & nick, const std::string & blurb, gint minimum, gint maximum, gint default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gint minimum, gint maximum, gint default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_int;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gint) (minimum_to_c), (gint) (maximum_to_c), (gint) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GParamSpec* g_param_spec_int64 (const gchar* name, const gchar* nick, const gchar* blurb, gint64 minimum, gint64 maximum, gint64 default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_int64 (const char* name, const char* nick, const char* blurb, gint64 minimum, gint64 maximum, gint64 default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_int64 (const std::string & name, const std::string & nick, const std::string & blurb, gint64 minimum, gint64 maximum, gint64 default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gint64 minimum, gint64 maximum, gint64 default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_int64;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gint64) (minimum_to_c), (gint64) (maximum_to_c), (gint64) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GParamSpec* g_param_spec_long (const gchar* name, const gchar* nick, const gchar* blurb, glong minimum, glong maximum, glong default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_long (const char* name, const char* nick, const char* blurb, glong minimum, glong maximum, glong default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_long (const std::string & name, const std::string & nick, const std::string & blurb, glong minimum, glong maximum, glong default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, glong minimum, glong maximum, glong default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_long;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (glong) (minimum_to_c), (glong) (maximum_to_c), (glong) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GParamSpec* g_param_spec_object (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
// ::GParamSpec* g_param_spec_object (const char* name, const char* nick, const char* blurb, GType object_type, ::GParamFlags flags);
GObject::ParamSpec param_spec_object (const std::string & name, const std::string & nick, const std::string & blurb, GType object_type, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, GType object_type, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_object;
  auto flags_to_c = gi::unwrap (flags);
  auto object_type_to_c = object_type;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (GType) (object_type_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// FAILURE on g_param_spec_override; No such node (<xmlattr>.transfer-ownership)
// GParamSpec* g_param_spec_param (const gchar* name, const gchar* nick, const gchar* blurb, GType param_type, GParamFlags flags);
// ::GParamSpec* g_param_spec_param (const char* name, const char* nick, const char* blurb, GType param_type, ::GParamFlags flags);
GObject::ParamSpec param_spec_param (const std::string & name, const std::string & nick, const std::string & blurb, GType param_type, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, GType param_type, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_param;
  auto flags_to_c = gi::unwrap (flags);
  auto param_type_to_c = param_type;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (GType) (param_type_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GParamSpec* g_param_spec_pointer (const gchar* name, const gchar* nick, const gchar* blurb, GParamFlags flags);
// ::GParamSpec* g_param_spec_pointer (const char* name, const char* nick, const char* blurb, ::GParamFlags flags);
GObject::ParamSpec param_spec_pointer (const std::string & name, const std::string & nick, const std::string & blurb, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_pointer;
  auto flags_to_c = gi::unwrap (flags);
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GParamSpec* g_param_spec_string (const gchar* name, const gchar* nick, const gchar* blurb, const gchar* default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_string (const char* name, const char* nick, const char* blurb, const char* default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_string (const std::string & name, const std::string & nick, const std::string & blurb, const std::string & default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, const char* default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_string;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = gi::unwrap (default_value, gi::transfer_none, gi::direction_in);
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (const char*) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GObject::ParamSpec param_spec_string (const std::string & name, const std::string & nick, const std::string & blurb, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, const char* default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_string;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = nullptr;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (const char*) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GParamSpec* g_param_spec_uchar (const gchar* name, const gchar* nick, const gchar* blurb, guint8 minimum, guint8 maximum, guint8 default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_uchar (const char* name, const char* nick, const char* blurb, guint8 minimum, guint8 maximum, guint8 default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_uchar (const std::string & name, const std::string & nick, const std::string & blurb, guint8 minimum, guint8 maximum, guint8 default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, guint8 minimum, guint8 maximum, guint8 default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_uchar;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (guint8) (minimum_to_c), (guint8) (maximum_to_c), (guint8) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GParamSpec* g_param_spec_uint (const gchar* name, const gchar* nick, const gchar* blurb, guint minimum, guint maximum, guint default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_uint (const char* name, const char* nick, const char* blurb, guint minimum, guint maximum, guint default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_uint (const std::string & name, const std::string & nick, const std::string & blurb, guint minimum, guint maximum, guint default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, guint minimum, guint maximum, guint default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_uint;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (guint) (minimum_to_c), (guint) (maximum_to_c), (guint) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GParamSpec* g_param_spec_uint64 (const gchar* name, const gchar* nick, const gchar* blurb, guint64 minimum, guint64 maximum, guint64 default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_uint64 (const char* name, const char* nick, const char* blurb, guint64 minimum, guint64 maximum, guint64 default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_uint64 (const std::string & name, const std::string & nick, const std::string & blurb, guint64 minimum, guint64 maximum, guint64 default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, guint64 minimum, guint64 maximum, guint64 default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_uint64;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (guint64) (minimum_to_c), (guint64) (maximum_to_c), (guint64) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GParamSpec* g_param_spec_ulong (const gchar* name, const gchar* nick, const gchar* blurb, gulong minimum, gulong maximum, gulong default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_ulong (const char* name, const char* nick, const char* blurb, gulong minimum, gulong maximum, gulong default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_ulong (const std::string & name, const std::string & nick, const std::string & blurb, gulong minimum, gulong maximum, gulong default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gulong minimum, gulong maximum, gulong default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_ulong;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto maximum_to_c = maximum;
  auto minimum_to_c = minimum;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gulong) (minimum_to_c), (gulong) (maximum_to_c), (gulong) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GParamSpec* g_param_spec_unichar (const gchar* name, const gchar* nick, const gchar* blurb, gunichar default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_unichar (const char* name, const char* nick, const char* blurb, gunichar default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_unichar (const std::string & name, const std::string & nick, const std::string & blurb, gunichar default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, gunichar default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_unichar;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = default_value;
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (gunichar) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// FAILURE on g_param_spec_value_array; No such node (<xmlattr>.transfer-ownership)
// GParamSpec* g_param_spec_variant (const gchar* name, const gchar* nick, const gchar* blurb, const GVariantType* type, GVariant* default_value, GParamFlags flags);
// ::GParamSpec* g_param_spec_variant (const char* name, const char* nick, const char* blurb, const ::GVariantType* type, ::GVariant* default_value, ::GParamFlags flags);
GObject::ParamSpec param_spec_variant (const std::string & name, const std::string & nick, const std::string & blurb, const GLib::VariantType & type, GLib::Variant default_value, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, const ::GVariantType* type, ::GVariant* default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_variant;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = gi::unwrap (default_value, gi::transfer_full, gi::direction_in);
  auto type_to_c = gi::unwrap (type, gi::transfer_none, gi::direction_in);
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (const ::GVariantType*) (type_to_c), (::GVariant*) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GObject::ParamSpec param_spec_variant (const std::string & name, const std::string & nick, const std::string & blurb, const GLib::VariantType & type, GObject::ParamFlags flags) noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const char* name, const char* nick, const char* blurb, const ::GVariantType* type, ::GVariant* default_value, ::GParamFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_spec_variant;
  auto flags_to_c = gi::unwrap (flags);
  auto default_value_to_c = nullptr;
  auto type_to_c = gi::unwrap (type, gi::transfer_none, gi::direction_in);
  auto blurb_to_c = gi::unwrap (blurb, gi::transfer_none, gi::direction_in);
  auto nick_to_c = gi::unwrap (nick, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (nick_to_c), (const char*) (blurb_to_c), (const ::GVariantType*) (type_to_c), (::GVariant*) (default_value_to_c), (::GParamFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GType g_param_type_register_static (const gchar* name, const GParamSpecTypeInfo* pspec_info);
// GType g_param_type_register_static (const char* name, const ::GParamSpecTypeInfo* pspec_info);
GType param_type_register_static (const std::string & name, const GObject::ParamSpecTypeInfo & pspec_info) noexcept
{
  typedef GType (*call_wrap_t) (const char* name, const ::GParamSpecTypeInfo* pspec_info);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_type_register_static;
  auto pspec_info_to_c = gi::unwrap (pspec_info, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const ::GParamSpecTypeInfo*) (pspec_info_to_c));
  return _temp_ret;
}

// gboolean g_param_value_convert (GParamSpec* pspec, const GValue* src_value, GValue* dest_value, gboolean strict_validation);
// gboolean g_param_value_convert (::GParamSpec* pspec, const ::GValue* src_value, ::GValue* dest_value, gboolean strict_validation);
bool param_value_convert (GObject::ParamSpec pspec, const GObject::Value & src_value, GObject::Value dest_value, gboolean strict_validation) noexcept
{
  typedef gboolean (*call_wrap_t) (::GParamSpec* pspec, const ::GValue* src_value, ::GValue* dest_value, gboolean strict_validation);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_value_convert;
  auto strict_validation_to_c = strict_validation;
  auto dest_value_to_c = gi::unwrap (dest_value, gi::transfer_none, gi::direction_in);
  auto src_value_to_c = gi::unwrap (src_value, gi::transfer_none, gi::direction_in);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GParamSpec*) (pspec_to_c), (const ::GValue*) (src_value_to_c), (::GValue*) (dest_value_to_c), (gboolean) (strict_validation_to_c));
  return _temp_ret;
}

// gboolean g_param_value_defaults (GParamSpec* pspec, const GValue* value);
// gboolean g_param_value_defaults (::GParamSpec* pspec, const ::GValue* value);
bool param_value_defaults (GObject::ParamSpec pspec, const GObject::Value & value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GParamSpec* pspec, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_value_defaults;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GParamSpec*) (pspec_to_c), (const ::GValue*) (value_to_c));
  return _temp_ret;
}

// void g_param_value_set_default (GParamSpec* pspec, GValue* value);
// void g_param_value_set_default (::GParamSpec* pspec, ::GValue* value);
void param_value_set_default (GObject::ParamSpec pspec, GObject::Value value) noexcept
{
  typedef void (*call_wrap_t) (::GParamSpec* pspec, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_value_set_default;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GParamSpec*) (pspec_to_c), (::GValue*) (value_to_c));
}

// gboolean g_param_value_validate (GParamSpec* pspec, GValue* value);
// gboolean g_param_value_validate (::GParamSpec* pspec, ::GValue* value);
bool param_value_validate (GObject::ParamSpec pspec, GObject::Value value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GParamSpec* pspec, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_value_validate;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GParamSpec*) (pspec_to_c), (::GValue*) (value_to_c));
  return _temp_ret;
}

// gint g_param_values_cmp (GParamSpec* pspec, const GValue* value1, const GValue* value2);
// gint g_param_values_cmp (::GParamSpec* pspec, const ::GValue* value1, const ::GValue* value2);
gint param_values_cmp (GObject::ParamSpec pspec, const GObject::Value & value1, const GObject::Value & value2) noexcept
{
  typedef gint (*call_wrap_t) (::GParamSpec* pspec, const ::GValue* value1, const ::GValue* value2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_param_values_cmp;
  auto value2_to_c = gi::unwrap (value2, gi::transfer_none, gi::direction_in);
  auto value1_to_c = gi::unwrap (value1, gi::transfer_none, gi::direction_in);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GParamSpec*) (pspec_to_c), (const ::GValue*) (value1_to_c), (const ::GValue*) (value2_to_c));
  return _temp_ret;
}

// GType g_pointer_type_register_static (const gchar* name);
// GType g_pointer_type_register_static (const char* name);
GType pointer_type_register_static (const std::string & name) noexcept
{
  typedef GType (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pointer_type_register_static;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return _temp_ret;
}

// gboolean g_signal_accumulator_first_wins (GSignalInvocationHint* ihint, GValue* return_accu, const GValue* handler_return, gpointer dummy);
// gboolean g_signal_accumulator_first_wins (::GSignalInvocationHint* ihint, ::GValue* return_accu, const ::GValue* handler_return, void* dummy);
bool signal_accumulator_first_wins (GObject::SignalInvocationHint ihint, GObject::Value return_accu, const GObject::Value & handler_return, void* dummy) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSignalInvocationHint* ihint, ::GValue* return_accu, const ::GValue* handler_return, void* dummy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_accumulator_first_wins;
  auto dummy_to_c = dummy;
  auto handler_return_to_c = gi::unwrap (handler_return, gi::transfer_none, gi::direction_in);
  auto return_accu_to_c = gi::unwrap (return_accu, gi::transfer_none, gi::direction_in);
  auto ihint_to_c = gi::unwrap (ihint, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSignalInvocationHint*) (ihint_to_c), (::GValue*) (return_accu_to_c), (const ::GValue*) (handler_return_to_c), (void*) (dummy_to_c));
  return _temp_ret;
}

// gboolean g_signal_accumulator_true_handled (GSignalInvocationHint* ihint, GValue* return_accu, const GValue* handler_return, gpointer dummy);
// gboolean g_signal_accumulator_true_handled (::GSignalInvocationHint* ihint, ::GValue* return_accu, const ::GValue* handler_return, void* dummy);
bool signal_accumulator_true_handled (GObject::SignalInvocationHint ihint, GObject::Value return_accu, const GObject::Value & handler_return, void* dummy) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSignalInvocationHint* ihint, ::GValue* return_accu, const ::GValue* handler_return, void* dummy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_accumulator_true_handled;
  auto dummy_to_c = dummy;
  auto handler_return_to_c = gi::unwrap (handler_return, gi::transfer_none, gi::direction_in);
  auto return_accu_to_c = gi::unwrap (return_accu, gi::transfer_none, gi::direction_in);
  auto ihint_to_c = gi::unwrap (ihint, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSignalInvocationHint*) (ihint_to_c), (::GValue*) (return_accu_to_c), (const ::GValue*) (handler_return_to_c), (void*) (dummy_to_c));
  return _temp_ret;
}

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
gulong signal_connect_closure (GObject::Object instance, const std::string & detailed_signal, GObject::Closure closure, gboolean after) noexcept
{
  typedef gulong (*call_wrap_t) (::GObject* instance, const char* detailed_signal, ::GClosure* closure, gboolean after);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_connect_closure;
  auto after_to_c = after;
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none, gi::direction_in);
  auto detailed_signal_to_c = gi::unwrap (detailed_signal, gi::transfer_none, gi::direction_in);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (const char*) (detailed_signal_to_c), (::GClosure*) (closure_to_c), (gboolean) (after_to_c));
  return _temp_ret;
}

// gulong g_signal_connect_closure_by_id (gpointer instance, guint signal_id, GQuark detail, GClosure* closure, gboolean after);
// gulong g_signal_connect_closure_by_id (::GObject* instance, guint signal_id, ::GQuark detail, ::GClosure* closure, gboolean after);
gulong signal_connect_closure_by_id (GObject::Object instance, guint signal_id, ::GQuark detail, GObject::Closure closure, gboolean after) noexcept
{
  typedef gulong (*call_wrap_t) (::GObject* instance, guint signal_id, ::GQuark detail, ::GClosure* closure, gboolean after);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_connect_closure_by_id;
  auto after_to_c = after;
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none, gi::direction_in);
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (::GClosure*) (closure_to_c), (gboolean) (after_to_c));
  return _temp_ret;
}

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
GObject::SignalInvocationHint signal_get_invocation_hint (GObject::Object instance) noexcept
{
  typedef ::GSignalInvocationHint* (*call_wrap_t) (::GObject* instance);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_get_invocation_hint;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_signal_handler_block (gpointer instance, gulong handler_id);
// void g_signal_handler_block (::GObject* instance, gulong handler_id);
void signal_handler_block (GObject::Object instance, gulong handler_id) noexcept
{
  typedef void (*call_wrap_t) (::GObject* instance, gulong handler_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_handler_block;
  auto handler_id_to_c = handler_id;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GObject*) (instance_to_c), (gulong) (handler_id_to_c));
}

// void g_signal_handler_disconnect (gpointer instance, gulong handler_id);
// void g_signal_handler_disconnect (::GObject* instance, gulong handler_id);
void signal_handler_disconnect (GObject::Object instance, gulong handler_id) noexcept
{
  typedef void (*call_wrap_t) (::GObject* instance, gulong handler_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_handler_disconnect;
  auto handler_id_to_c = handler_id;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GObject*) (instance_to_c), (gulong) (handler_id_to_c));
}

// gulong g_signal_handler_find (gpointer instance, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure* closure, gpointer func, gpointer data);
// gulong g_signal_handler_find (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
gulong signal_handler_find (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, GObject::Closure closure, void* func, void* data) noexcept
{
  typedef gulong (*call_wrap_t) (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_handler_find;
  auto data_to_c = data;
  auto func_to_c = func;
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none, gi::direction_in);
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto mask_to_c = gi::unwrap (mask);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (::GSignalMatchType) (mask_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (::GClosure*) (closure_to_c), (void*) (func_to_c), (void*) (data_to_c));
  return _temp_ret;
}
gulong signal_handler_find (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, void* func, void* data) noexcept
{
  typedef gulong (*call_wrap_t) (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_handler_find;
  auto data_to_c = data;
  auto func_to_c = func;
  auto closure_to_c = nullptr;
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto mask_to_c = gi::unwrap (mask);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (::GSignalMatchType) (mask_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (::GClosure*) (closure_to_c), (void*) (func_to_c), (void*) (data_to_c));
  return _temp_ret;
}

// gboolean g_signal_handler_is_connected (gpointer instance, gulong handler_id);
// gboolean g_signal_handler_is_connected (::GObject* instance, gulong handler_id);
bool signal_handler_is_connected (GObject::Object instance, gulong handler_id) noexcept
{
  typedef gboolean (*call_wrap_t) (::GObject* instance, gulong handler_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_handler_is_connected;
  auto handler_id_to_c = handler_id;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (gulong) (handler_id_to_c));
  return _temp_ret;
}

// void g_signal_handler_unblock (gpointer instance, gulong handler_id);
// void g_signal_handler_unblock (::GObject* instance, gulong handler_id);
void signal_handler_unblock (GObject::Object instance, gulong handler_id) noexcept
{
  typedef void (*call_wrap_t) (::GObject* instance, gulong handler_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_handler_unblock;
  auto handler_id_to_c = handler_id;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GObject*) (instance_to_c), (gulong) (handler_id_to_c));
}

// guint g_signal_handlers_block_matched (gpointer instance, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure* closure, gpointer func, gpointer data);
// guint g_signal_handlers_block_matched (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
guint signal_handlers_block_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, GObject::Closure closure, void* func, void* data) noexcept
{
  typedef guint (*call_wrap_t) (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_handlers_block_matched;
  auto data_to_c = data;
  auto func_to_c = func;
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none, gi::direction_in);
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto mask_to_c = gi::unwrap (mask);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (::GSignalMatchType) (mask_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (::GClosure*) (closure_to_c), (void*) (func_to_c), (void*) (data_to_c));
  return _temp_ret;
}
guint signal_handlers_block_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, void* func, void* data) noexcept
{
  typedef guint (*call_wrap_t) (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_handlers_block_matched;
  auto data_to_c = data;
  auto func_to_c = func;
  auto closure_to_c = nullptr;
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto mask_to_c = gi::unwrap (mask);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (::GSignalMatchType) (mask_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (::GClosure*) (closure_to_c), (void*) (func_to_c), (void*) (data_to_c));
  return _temp_ret;
}

// void g_signal_handlers_destroy (gpointer instance);
// void g_signal_handlers_destroy (::GObject* instance);
void signal_handlers_destroy (GObject::Object instance) noexcept
{
  typedef void (*call_wrap_t) (::GObject* instance);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_handlers_destroy;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GObject*) (instance_to_c));
}

// guint g_signal_handlers_disconnect_matched (gpointer instance, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure* closure, gpointer func, gpointer data);
// guint g_signal_handlers_disconnect_matched (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
guint signal_handlers_disconnect_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, GObject::Closure closure, void* func, void* data) noexcept
{
  typedef guint (*call_wrap_t) (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_handlers_disconnect_matched;
  auto data_to_c = data;
  auto func_to_c = func;
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none, gi::direction_in);
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto mask_to_c = gi::unwrap (mask);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (::GSignalMatchType) (mask_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (::GClosure*) (closure_to_c), (void*) (func_to_c), (void*) (data_to_c));
  return _temp_ret;
}
guint signal_handlers_disconnect_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, void* func, void* data) noexcept
{
  typedef guint (*call_wrap_t) (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_handlers_disconnect_matched;
  auto data_to_c = data;
  auto func_to_c = func;
  auto closure_to_c = nullptr;
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto mask_to_c = gi::unwrap (mask);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (::GSignalMatchType) (mask_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (::GClosure*) (closure_to_c), (void*) (func_to_c), (void*) (data_to_c));
  return _temp_ret;
}

// guint g_signal_handlers_unblock_matched (gpointer instance, GSignalMatchType mask, guint signal_id, GQuark detail, GClosure* closure, gpointer func, gpointer data);
// guint g_signal_handlers_unblock_matched (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
guint signal_handlers_unblock_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, GObject::Closure closure, void* func, void* data) noexcept
{
  typedef guint (*call_wrap_t) (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_handlers_unblock_matched;
  auto data_to_c = data;
  auto func_to_c = func;
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none, gi::direction_in);
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto mask_to_c = gi::unwrap (mask);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (::GSignalMatchType) (mask_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (::GClosure*) (closure_to_c), (void*) (func_to_c), (void*) (data_to_c));
  return _temp_ret;
}
guint signal_handlers_unblock_matched (GObject::Object instance, GObject::SignalMatchType mask, guint signal_id, ::GQuark detail, void* func, void* data) noexcept
{
  typedef guint (*call_wrap_t) (::GObject* instance, ::GSignalMatchType mask, guint signal_id, ::GQuark detail, ::GClosure* closure, void* func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_handlers_unblock_matched;
  auto data_to_c = data;
  auto func_to_c = func;
  auto closure_to_c = nullptr;
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto mask_to_c = gi::unwrap (mask);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (::GSignalMatchType) (mask_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (::GClosure*) (closure_to_c), (void*) (func_to_c), (void*) (data_to_c));
  return _temp_ret;
}

// gboolean g_signal_has_handler_pending (gpointer instance, guint signal_id, GQuark detail, gboolean may_be_blocked);
// gboolean g_signal_has_handler_pending (::GObject* instance, guint signal_id, ::GQuark detail, gboolean may_be_blocked);
bool signal_has_handler_pending (GObject::Object instance, guint signal_id, ::GQuark detail, gboolean may_be_blocked) noexcept
{
  typedef gboolean (*call_wrap_t) (::GObject* instance, guint signal_id, ::GQuark detail, gboolean may_be_blocked);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_has_handler_pending;
  auto may_be_blocked_to_c = may_be_blocked;
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (instance_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c), (gboolean) (may_be_blocked_to_c));
  return _temp_ret;
}

// gboolean g_signal_is_valid_name (const gchar* name);
// gboolean g_signal_is_valid_name (const char* name);
bool signal_is_valid_name (const std::string & name) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_is_valid_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return _temp_ret;
}

// guint* g_signal_list_ids (GType itype, guint* n_ids);
// guint* g_signal_list_ids (GType itype, guint* n_ids);
std::vector<guint> signal_list_ids (GType itype) noexcept
{
  typedef guint* (*call_wrap_t) (GType itype, guint* n_ids);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_list_ids;
  auto itype_to_c = itype;
  guint n_ids;
  std::vector<guint> _temp_ret;
  auto _ret_o = call_wrap_v ((GType) (itype_to_c), (guint*) (&n_ids));
  _temp_ret.resize(n_ids);
  detail::wrap_array (_ret_o, gi::transfer_full, n_ids, _temp_ret.data());
  g_free (_ret_o);
  return _temp_ret;
}

// guint g_signal_lookup (const gchar* name, GType itype);
// guint g_signal_lookup (const char* name, GType itype);
guint signal_lookup (const std::string & name, GType itype) noexcept
{
  typedef guint (*call_wrap_t) (const char* name, GType itype);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_lookup;
  auto itype_to_c = itype;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (GType) (itype_to_c));
  return _temp_ret;
}

// const gchar* g_signal_name (guint signal_id);
// const char* g_signal_name (guint signal_id);
std::string signal_name (guint signal_id) noexcept
{
  typedef const char* (*call_wrap_t) (guint signal_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_name;
  auto signal_id_to_c = signal_id;
  auto _temp_ret = call_wrap_v ((guint) (signal_id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

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
void signal_override_class_closure (guint signal_id, GType instance_type, GObject::Closure class_closure) noexcept
{
  typedef void (*call_wrap_t) (guint signal_id, GType instance_type, ::GClosure* class_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_override_class_closure;
  auto class_closure_to_c = gi::unwrap (class_closure, gi::transfer_none, gi::direction_in);
  auto instance_type_to_c = instance_type;
  auto signal_id_to_c = signal_id;
  call_wrap_v ((guint) (signal_id_to_c), (GType) (instance_type_to_c), (::GClosure*) (class_closure_to_c));
}

// void g_signal_override_class_handler (const gchar* signal_name, GType instance_type, GCallback class_handler);
// void g_signal_override_class_handler (const char* signal_name, GType instance_type,  class_handler);
// IGNORE; not introspectable, class_handler type  not supported

// gboolean g_signal_parse_name (const gchar* detailed_signal, GType itype, guint* signal_id_p, GQuark* detail_p, gboolean force_detail_quark);
// gboolean g_signal_parse_name (const char* detailed_signal, GType itype, guint* signal_id_p, ::GQuark* detail_p, gboolean force_detail_quark);
bool signal_parse_name (const std::string & detailed_signal, GType itype, guint & signal_id_p, GLib::Quark & detail_p, gboolean force_detail_quark) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* detailed_signal, GType itype, guint* signal_id_p, ::GQuark* detail_p, gboolean force_detail_quark);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_parse_name;
  auto force_detail_quark_to_c = force_detail_quark;
  ::GQuark detail_p_o {};
  guint signal_id_p_o {};
  auto itype_to_c = itype;
  auto detailed_signal_to_c = gi::unwrap (detailed_signal, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (detailed_signal_to_c), (GType) (itype_to_c), (guint*) (&signal_id_p_o), (::GQuark*) (&detail_p_o), (gboolean) (force_detail_quark_to_c));
  detail_p = detail_p_o;
  signal_id_p = signal_id_p_o;
  return _temp_ret;
}
std::tuple<bool, guint, GLib::Quark> signal_parse_name (const std::string & detailed_signal, GType itype, gboolean force_detail_quark) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* detailed_signal, GType itype, guint* signal_id_p, ::GQuark* detail_p, gboolean force_detail_quark);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_parse_name;
  auto force_detail_quark_to_c = force_detail_quark;
  ::GQuark detail_p_o {};
  guint signal_id_p_o {};
  auto itype_to_c = itype;
  auto detailed_signal_to_c = gi::unwrap (detailed_signal, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (detailed_signal_to_c), (GType) (itype_to_c), (guint*) (&signal_id_p_o), (::GQuark*) (&detail_p_o), (gboolean) (force_detail_quark_to_c));
  return std::make_tuple (_temp_ret, signal_id_p_o, detail_p_o);
}

// void g_signal_query (guint signal_id, GSignalQuery* query);
// void g_signal_query (guint signal_id, ::GSignalQuery* query);
void signal_query (guint signal_id, GObject::SignalQuery & query) noexcept
{
  typedef void (*call_wrap_t) (guint signal_id, ::GSignalQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_query;
  traits::unset_wrapper<::GSignalQuery>::type query_c;
  auto signal_id_to_c = signal_id;
  call_wrap_v ((guint) (signal_id_to_c), (::GSignalQuery*) ((::GSignalQuery*) &query_c));
  query = gi::wrap ((::GSignalQuery*) &query_c, gi::transfer_none, gi::direction_out);
}
GObject::SignalQuery signal_query (guint signal_id) noexcept
{
  typedef void (*call_wrap_t) (guint signal_id, ::GSignalQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_query;
  traits::unset_wrapper<::GSignalQuery>::type query_c;
  auto signal_id_to_c = signal_id;
  call_wrap_v ((guint) (signal_id_to_c), (::GSignalQuery*) ((::GSignalQuery*) &query_c));
  return gi::wrap ((::GSignalQuery*) &query_c, gi::transfer_none, gi::direction_out);
}

// void g_signal_remove_emission_hook (guint signal_id, gulong hook_id);
// void g_signal_remove_emission_hook (guint signal_id, gulong hook_id);
void signal_remove_emission_hook (guint signal_id, gulong hook_id) noexcept
{
  typedef void (*call_wrap_t) (guint signal_id, gulong hook_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_remove_emission_hook;
  auto hook_id_to_c = hook_id;
  auto signal_id_to_c = signal_id;
  call_wrap_v ((guint) (signal_id_to_c), (gulong) (hook_id_to_c));
}

// void g_signal_set_va_marshaller (guint signal_id, GType instance_type, GSignalCVaMarshaller va_marshaller);
// void g_signal_set_va_marshaller (guint signal_id, GType instance_type,  va_marshaller);
// SKIP; va_marshaller type  not supported

// void g_signal_stop_emission (gpointer instance, guint signal_id, GQuark detail);
// void g_signal_stop_emission (::GObject* instance, guint signal_id, ::GQuark detail);
void signal_stop_emission (GObject::Object instance, guint signal_id, ::GQuark detail) noexcept
{
  typedef void (*call_wrap_t) (::GObject* instance, guint signal_id, ::GQuark detail);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_stop_emission;
  auto detail_to_c = detail;
  auto signal_id_to_c = signal_id;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GObject*) (instance_to_c), (guint) (signal_id_to_c), (::GQuark) (detail_to_c));
}

// void g_signal_stop_emission_by_name (gpointer instance, const gchar* detailed_signal);
// void g_signal_stop_emission_by_name (::GObject* instance, const char* detailed_signal);
void signal_stop_emission_by_name (GObject::Object instance, const std::string & detailed_signal) noexcept
{
  typedef void (*call_wrap_t) (::GObject* instance, const char* detailed_signal);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_stop_emission_by_name;
  auto detailed_signal_to_c = gi::unwrap (detailed_signal, gi::transfer_none, gi::direction_in);
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GObject*) (instance_to_c), (const char*) (detailed_signal_to_c));
}

// GClosure* g_signal_type_cclosure_new (GType itype, guint struct_offset);
// ::GClosure* g_signal_type_cclosure_new (GType itype, guint struct_offset);
GObject::Closure signal_type_cclosure_new (GType itype, guint struct_offset) noexcept
{
  typedef ::GClosure* (*call_wrap_t) (GType itype, guint struct_offset);
  call_wrap_t call_wrap_v = (call_wrap_t) g_signal_type_cclosure_new;
  auto struct_offset_to_c = struct_offset;
  auto itype_to_c = itype;
  auto _temp_ret = call_wrap_v ((GType) (itype_to_c), (guint) (struct_offset_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_source_set_closure (GSource* source, GClosure* closure);
// void g_source_set_closure (::GSource* source, ::GClosure* closure);
void source_set_closure (GLib::Source source, GObject::Closure closure) noexcept
{
  typedef void (*call_wrap_t) (::GSource* source, ::GClosure* closure);
  call_wrap_t call_wrap_v = (call_wrap_t) g_source_set_closure;
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none, gi::direction_in);
  auto source_to_c = gi::unwrap (source, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSource*) (source_to_c), (::GClosure*) (closure_to_c));
}

// void g_source_set_dummy_callback (GSource* source);
// void g_source_set_dummy_callback (::GSource* source);
void source_set_dummy_callback (GLib::Source source) noexcept
{
  typedef void (*call_wrap_t) (::GSource* source);
  call_wrap_t call_wrap_v = (call_wrap_t) g_source_set_dummy_callback;
  auto source_to_c = gi::unwrap (source, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSource*) (source_to_c));
}

// gchar* g_strdup_value_contents (const GValue* value);
// char* g_strdup_value_contents (const ::GValue* value);
std::string strdup_value_contents (const GObject::Value & value) noexcept
{
  typedef char* (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_strdup_value_contents;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_type_add_class_cache_func (gpointer cache_data, GTypeClassCacheFunc cache_func);
// void g_type_add_class_cache_func (void* cache_data,  cache_func);
// IGNORE; not introspectable, cache_func type  not supported

// void g_type_add_class_private (GType class_type, gsize private_size);
// void g_type_add_class_private (GType class_type, gsize private_size);
void type_add_class_private (GType class_type, gsize private_size) noexcept
{
  typedef void (*call_wrap_t) (GType class_type, gsize private_size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_add_class_private;
  auto private_size_to_c = private_size;
  auto class_type_to_c = class_type;
  call_wrap_v ((GType) (class_type_to_c), (gsize) (private_size_to_c));
}

// gint g_type_add_instance_private (GType class_type, gsize private_size);
// gint g_type_add_instance_private (GType class_type, gsize private_size);
gint type_add_instance_private (GType class_type, gsize private_size) noexcept
{
  typedef gint (*call_wrap_t) (GType class_type, gsize private_size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_add_instance_private;
  auto private_size_to_c = private_size;
  auto class_type_to_c = class_type;
  auto _temp_ret = call_wrap_v ((GType) (class_type_to_c), (gsize) (private_size_to_c));
  return _temp_ret;
}

// void g_type_add_interface_check (gpointer check_data, GTypeInterfaceCheckFunc check_func);
// void g_type_add_interface_check (void* check_data,  check_func);
// IGNORE; not introspectable, check_func type  not supported

// void g_type_add_interface_dynamic (GType instance_type, GType interface_type, GTypePlugin* plugin);
// void g_type_add_interface_dynamic (GType instance_type, GType interface_type, ::GTypePlugin* plugin);
void type_add_interface_dynamic (GType instance_type, GType interface_type, GObject::TypePlugin plugin) noexcept
{
  typedef void (*call_wrap_t) (GType instance_type, GType interface_type, ::GTypePlugin* plugin);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_add_interface_dynamic;
  auto plugin_to_c = gi::unwrap (plugin, gi::transfer_none, gi::direction_in);
  auto interface_type_to_c = interface_type;
  auto instance_type_to_c = instance_type;
  call_wrap_v ((GType) (instance_type_to_c), (GType) (interface_type_to_c), (::GTypePlugin*) (plugin_to_c));
}

// void g_type_add_interface_static (GType instance_type, GType interface_type, const GInterfaceInfo* info);
// void g_type_add_interface_static (GType instance_type, GType interface_type, const ::GInterfaceInfo* info);
void type_add_interface_static (GType instance_type, GType interface_type, const GObject::InterfaceInfo & info) noexcept
{
  typedef void (*call_wrap_t) (GType instance_type, GType interface_type, const ::GInterfaceInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_add_interface_static;
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  auto interface_type_to_c = interface_type;
  auto instance_type_to_c = instance_type;
  call_wrap_v ((GType) (instance_type_to_c), (GType) (interface_type_to_c), (const ::GInterfaceInfo*) (info_to_c));
}

// FAILURE on g_type_check_class_cast; No such node (<xmlattr>.transfer-ownership)
// gboolean g_type_check_class_is_a (GTypeClass* g_class, GType is_a_type);
// gboolean g_type_check_class_is_a (::GTypeClass* g_class, GType is_a_type);
bool type_check_class_is_a (GObject::TypeClass g_class, GType is_a_type) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTypeClass* g_class, GType is_a_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_check_class_is_a;
  auto is_a_type_to_c = is_a_type;
  auto g_class_to_c = gi::unwrap (g_class, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GTypeClass*) (g_class_to_c), (GType) (is_a_type_to_c));
  return _temp_ret;
}

// gboolean g_type_check_instance (GTypeInstance* instance);
// gboolean g_type_check_instance (::GTypeInstance* instance);
bool type_check_instance (GObject::TypeInstance instance) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTypeInstance* instance);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_check_instance;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GTypeInstance*) (instance_to_c));
  return _temp_ret;
}

// FAILURE on g_type_check_instance_cast; No such node (<xmlattr>.transfer-ownership)
// gboolean g_type_check_instance_is_a (GTypeInstance* instance, GType iface_type);
// gboolean g_type_check_instance_is_a (::GTypeInstance* instance, GType iface_type);
bool type_check_instance_is_a (GObject::TypeInstance instance, GType iface_type) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTypeInstance* instance, GType iface_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_check_instance_is_a;
  auto iface_type_to_c = iface_type;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GTypeInstance*) (instance_to_c), (GType) (iface_type_to_c));
  return _temp_ret;
}

// gboolean g_type_check_instance_is_fundamentally_a (GTypeInstance* instance, GType fundamental_type);
// gboolean g_type_check_instance_is_fundamentally_a (::GTypeInstance* instance, GType fundamental_type);
bool type_check_instance_is_fundamentally_a (GObject::TypeInstance instance, GType fundamental_type) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTypeInstance* instance, GType fundamental_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_check_instance_is_fundamentally_a;
  auto fundamental_type_to_c = fundamental_type;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GTypeInstance*) (instance_to_c), (GType) (fundamental_type_to_c));
  return _temp_ret;
}

// gboolean g_type_check_is_value_type (GType type);
// gboolean g_type_check_is_value_type (GType type);
bool type_check_is_value_type (GType type) noexcept
{
  typedef gboolean (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_check_is_value_type;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c));
  return _temp_ret;
}

// gboolean g_type_check_value (const GValue* value);
// gboolean g_type_check_value (const ::GValue* value);
bool type_check_value (const GObject::Value & value) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_check_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c));
  return _temp_ret;
}

// gboolean g_type_check_value_holds (const GValue* value, GType type);
// gboolean g_type_check_value_holds (const ::GValue* value, GType type);
bool type_check_value_holds (const GObject::Value & value, GType type) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GValue* value, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_check_value_holds;
  auto type_to_c = type;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (value_to_c), (GType) (type_to_c));
  return _temp_ret;
}

// GType* g_type_children (GType type, guint* n_children);
// GType* g_type_children (GType type, guint* n_children);
std::vector<GType> type_children (GType type) noexcept
{
  typedef GType* (*call_wrap_t) (GType type, guint* n_children);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_children;
  auto type_to_c = type;
  guint n_children;
  std::vector<GType> _temp_ret;
  auto _ret_o = call_wrap_v ((GType) (type_to_c), (guint*) (&n_children));
  _temp_ret.resize(n_children);
  detail::wrap_array (_ret_o, gi::transfer_full, n_children, _temp_ret.data());
  g_free (_ret_o);
  return _temp_ret;
}

// FAILURE on g_type_create_instance; No such node (<xmlattr>.transfer-ownership)
// gpointer g_type_default_interface_peek (GType g_type);
// ::GTypeInterface* g_type_default_interface_peek (GType g_type);
GObject::TypeInterface type_default_interface_peek (GType g_type) noexcept
{
  typedef ::GTypeInterface* (*call_wrap_t) (GType g_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_default_interface_peek;
  auto g_type_to_c = g_type;
  auto _temp_ret = call_wrap_v ((GType) (g_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint g_type_depth (GType type);
// guint g_type_depth (GType type);
guint type_depth (GType type) noexcept
{
  typedef guint (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_depth;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c));
  return _temp_ret;
}

// void g_type_ensure (GType type);
// void g_type_ensure (GType type);
void type_ensure (GType type) noexcept
{
  typedef void (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_ensure;
  auto type_to_c = type;
  call_wrap_v ((GType) (type_to_c));
}

// void g_type_free_instance (GTypeInstance* instance);
// void g_type_free_instance (::GTypeInstance* instance);
void type_free_instance (GObject::TypeInstance instance) noexcept
{
  typedef void (*call_wrap_t) (::GTypeInstance* instance);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_free_instance;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTypeInstance*) (instance_to_c));
}

// GType g_type_from_name (const gchar* name);
// GType g_type_from_name (const char* name);
GType type_from_name (const std::string & name) noexcept
{
  typedef GType (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_from_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return _temp_ret;
}

// GType g_type_fundamental (GType type_id);
// GType g_type_fundamental (GType type_id);
GType type_fundamental (GType type_id) noexcept
{
  typedef GType (*call_wrap_t) (GType type_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_fundamental;
  auto type_id_to_c = type_id;
  auto _temp_ret = call_wrap_v ((GType) (type_id_to_c));
  return _temp_ret;
}

// GType g_type_fundamental_next ();
// GType g_type_fundamental_next ();
GType type_fundamental_next () noexcept
{
  typedef GType (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_fundamental_next;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// int g_type_get_instance_count (GType type);
// gint g_type_get_instance_count (GType type);
gint type_get_instance_count (GType type) noexcept
{
  typedef gint (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_get_instance_count;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c));
  return _temp_ret;
}

// GTypePlugin* g_type_get_plugin (GType type);
// ::GTypePlugin* g_type_get_plugin (GType type);
GObject::TypePlugin type_get_plugin (GType type) noexcept
{
  typedef ::GTypePlugin* (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_get_plugin;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gpointer g_type_get_qdata (GType type, GQuark quark);
// void* g_type_get_qdata (GType type, ::GQuark quark);
gpointer type_get_qdata (GType type, ::GQuark quark) noexcept
{
  typedef void* (*call_wrap_t) (GType type, ::GQuark quark);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_get_qdata;
  auto quark_to_c = quark;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c), (::GQuark) (quark_to_c));
  return _temp_ret;
}

// guint g_type_get_type_registration_serial ();
// guint g_type_get_type_registration_serial ();
guint type_get_type_registration_serial () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_get_type_registration_serial;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GType* g_type_interfaces (GType type, guint* n_interfaces);
// GType* g_type_interfaces (GType type, guint* n_interfaces);
std::vector<GType> type_interfaces (GType type) noexcept
{
  typedef GType* (*call_wrap_t) (GType type, guint* n_interfaces);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_interfaces;
  auto type_to_c = type;
  guint n_interfaces;
  std::vector<GType> _temp_ret;
  auto _ret_o = call_wrap_v ((GType) (type_to_c), (guint*) (&n_interfaces));
  _temp_ret.resize(n_interfaces);
  detail::wrap_array (_ret_o, gi::transfer_full, n_interfaces, _temp_ret.data());
  g_free (_ret_o);
  return _temp_ret;
}

// gboolean g_type_is_a (GType type, GType is_a_type);
// gboolean g_type_is_a (GType type, GType is_a_type);
bool type_is_a (GType type, GType is_a_type) noexcept
{
  typedef gboolean (*call_wrap_t) (GType type, GType is_a_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_is_a;
  auto is_a_type_to_c = is_a_type;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c), (GType) (is_a_type_to_c));
  return _temp_ret;
}

// const gchar* g_type_name (GType type);
// const char* g_type_name (GType type);
std::string type_name (GType type) noexcept
{
  typedef const char* (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_name;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_type_name_from_class (GTypeClass* g_class);
// const char* g_type_name_from_class (::GTypeClass* g_class);
std::string type_name_from_class (GObject::TypeClass g_class) noexcept
{
  typedef const char* (*call_wrap_t) (::GTypeClass* g_class);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_name_from_class;
  auto g_class_to_c = gi::unwrap (g_class, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GTypeClass*) (g_class_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_type_name_from_instance (GTypeInstance* instance);
// const char* g_type_name_from_instance (::GTypeInstance* instance);
std::string type_name_from_instance (GObject::TypeInstance instance) noexcept
{
  typedef const char* (*call_wrap_t) (::GTypeInstance* instance);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_name_from_instance;
  auto instance_to_c = gi::unwrap (instance, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GTypeInstance*) (instance_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GType g_type_next_base (GType leaf_type, GType root_type);
// GType g_type_next_base (GType leaf_type, GType root_type);
GType type_next_base (GType leaf_type, GType root_type) noexcept
{
  typedef GType (*call_wrap_t) (GType leaf_type, GType root_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_next_base;
  auto root_type_to_c = root_type;
  auto leaf_type_to_c = leaf_type;
  auto _temp_ret = call_wrap_v ((GType) (leaf_type_to_c), (GType) (root_type_to_c));
  return _temp_ret;
}

// GType g_type_parent (GType type);
// GType g_type_parent (GType type);
GType type_parent (GType type) noexcept
{
  typedef GType (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_parent;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c));
  return _temp_ret;
}

// GQuark g_type_qname (GType type);
// ::GQuark g_type_qname (GType type);
GLib::Quark type_qname (GType type) noexcept
{
  typedef ::GQuark (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_qname;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c));
  return _temp_ret;
}

// void g_type_query (GType type, GTypeQuery* query);
// void g_type_query (GType type, ::GTypeQuery* query);
void type_query (GType type, GObject::TypeQuery & query) noexcept
{
  typedef void (*call_wrap_t) (GType type, ::GTypeQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_query;
  traits::unset_wrapper<::GTypeQuery>::type query_c;
  auto type_to_c = type;
  call_wrap_v ((GType) (type_to_c), (::GTypeQuery*) ((::GTypeQuery*) &query_c));
  query = gi::wrap ((::GTypeQuery*) &query_c, gi::transfer_none, gi::direction_out);
}
GObject::TypeQuery type_query (GType type) noexcept
{
  typedef void (*call_wrap_t) (GType type, ::GTypeQuery* query);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_query;
  traits::unset_wrapper<::GTypeQuery>::type query_c;
  auto type_to_c = type;
  call_wrap_v ((GType) (type_to_c), (::GTypeQuery*) ((::GTypeQuery*) &query_c));
  return gi::wrap ((::GTypeQuery*) &query_c, gi::transfer_none, gi::direction_out);
}

// GType g_type_register_dynamic (GType parent_type, const gchar* type_name, GTypePlugin* plugin, GTypeFlags flags);
// GType g_type_register_dynamic (GType parent_type, const char* type_name, ::GTypePlugin* plugin, ::GTypeFlags flags);
GType type_register_dynamic (GType parent_type, const std::string & type_name, GObject::TypePlugin plugin, GObject::TypeFlags flags) noexcept
{
  typedef GType (*call_wrap_t) (GType parent_type, const char* type_name, ::GTypePlugin* plugin, ::GTypeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_register_dynamic;
  auto flags_to_c = gi::unwrap (flags);
  auto plugin_to_c = gi::unwrap (plugin, gi::transfer_none, gi::direction_in);
  auto type_name_to_c = gi::unwrap (type_name, gi::transfer_none, gi::direction_in);
  auto parent_type_to_c = parent_type;
  auto _temp_ret = call_wrap_v ((GType) (parent_type_to_c), (const char*) (type_name_to_c), (::GTypePlugin*) (plugin_to_c), (::GTypeFlags) (flags_to_c));
  return _temp_ret;
}

// GType g_type_register_fundamental (GType type_id, const gchar* type_name, const GTypeInfo* info, const GTypeFundamentalInfo* finfo, GTypeFlags flags);
// GType g_type_register_fundamental (GType type_id, const char* type_name, const ::GTypeInfo* info, const ::GTypeFundamentalInfo* finfo, ::GTypeFlags flags);
GType type_register_fundamental (GType type_id, const std::string & type_name, const GObject::TypeInfo & info, const GObject::TypeFundamentalInfo & finfo, GObject::TypeFlags flags) noexcept
{
  typedef GType (*call_wrap_t) (GType type_id, const char* type_name, const ::GTypeInfo* info, const ::GTypeFundamentalInfo* finfo, ::GTypeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_register_fundamental;
  auto flags_to_c = gi::unwrap (flags);
  auto finfo_to_c = gi::unwrap (finfo, gi::transfer_none, gi::direction_in);
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  auto type_name_to_c = gi::unwrap (type_name, gi::transfer_none, gi::direction_in);
  auto type_id_to_c = type_id;
  auto _temp_ret = call_wrap_v ((GType) (type_id_to_c), (const char*) (type_name_to_c), (const ::GTypeInfo*) (info_to_c), (const ::GTypeFundamentalInfo*) (finfo_to_c), (::GTypeFlags) (flags_to_c));
  return _temp_ret;
}

// GType g_type_register_static (GType parent_type, const gchar* type_name, const GTypeInfo* info, GTypeFlags flags);
// GType g_type_register_static (GType parent_type, const char* type_name, const ::GTypeInfo* info, ::GTypeFlags flags);
GType type_register_static (GType parent_type, const std::string & type_name, const GObject::TypeInfo & info, GObject::TypeFlags flags) noexcept
{
  typedef GType (*call_wrap_t) (GType parent_type, const char* type_name, const ::GTypeInfo* info, ::GTypeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_register_static;
  auto flags_to_c = gi::unwrap (flags);
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  auto type_name_to_c = gi::unwrap (type_name, gi::transfer_none, gi::direction_in);
  auto parent_type_to_c = parent_type;
  auto _temp_ret = call_wrap_v ((GType) (parent_type_to_c), (const char*) (type_name_to_c), (const ::GTypeInfo*) (info_to_c), (::GTypeFlags) (flags_to_c));
  return _temp_ret;
}

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
void type_set_qdata (GType type, ::GQuark quark, void* data) noexcept
{
  typedef void (*call_wrap_t) (GType type, ::GQuark quark, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_set_qdata;
  auto data_to_c = data;
  auto quark_to_c = quark;
  auto type_to_c = type;
  call_wrap_v ((GType) (type_to_c), (::GQuark) (quark_to_c), (void*) (data_to_c));
}

// gboolean g_type_test_flags (GType type, guint flags);
// gboolean g_type_test_flags (GType type, guint flags);
bool type_test_flags (GType type, guint flags) noexcept
{
  typedef gboolean (*call_wrap_t) (GType type, guint flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_test_flags;
  auto flags_to_c = flags;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c), (guint) (flags_to_c));
  return _temp_ret;
}

} // namespace GObject

} // namespace repository

} // namespace gi

#endif
