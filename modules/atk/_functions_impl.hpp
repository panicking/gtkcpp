// AUTO-GENERATED

#ifndef _GI_ATK__FUNCTIONS_IMPL_HPP_
#define _GI_ATK__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace RelationTypeNS_ {

// AtkRelationType atk_relation_type_for_name (const gchar* name);
// ::AtkRelationType atk_relation_type_for_name (const char* name);
Atk::RelationType for_name (const std::string & name) noexcept
{
  typedef ::AtkRelationType (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_relation_type_for_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret);
}

// const gchar* atk_relation_type_get_name (AtkRelationType type);
// const char* atk_relation_type_get_name (::AtkRelationType type);
std::string get_name (Atk::RelationType type) noexcept
{
  typedef const char* (*call_wrap_t) (::AtkRelationType type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_relation_type_get_name;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::AtkRelationType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// AtkRelationType atk_relation_type_register (const gchar* name);
// ::AtkRelationType atk_relation_type_register (const char* name);
Atk::RelationType register_ (const std::string & name) noexcept
{
  typedef ::AtkRelationType (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_relation_type_register;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret);
}

} // namespace RelationTypeNS_

namespace RoleNS_ {

// AtkRole atk_role_for_name (const gchar* name);
// ::AtkRole atk_role_for_name (const char* name);
Atk::Role for_name (const std::string & name) noexcept
{
  typedef ::AtkRole (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_role_for_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret);
}

// const gchar* atk_role_get_localized_name (AtkRole role);
// const char* atk_role_get_localized_name (::AtkRole role);
std::string get_localized_name (Atk::Role role) noexcept
{
  typedef const char* (*call_wrap_t) (::AtkRole role);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_role_get_localized_name;
  auto role_to_c = gi::unwrap (role);
  auto _temp_ret = call_wrap_v ((::AtkRole) (role_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* atk_role_get_name (AtkRole role);
// const char* atk_role_get_name (::AtkRole role);
std::string get_name (Atk::Role role) noexcept
{
  typedef const char* (*call_wrap_t) (::AtkRole role);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_role_get_name;
  auto role_to_c = gi::unwrap (role);
  auto _temp_ret = call_wrap_v ((::AtkRole) (role_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// AtkRole atk_role_register (const gchar* name);
// ::AtkRole atk_role_register (const char* name);
// IGNORE; deprecated

} // namespace RoleNS_

namespace StateTypeNS_ {

// AtkStateType atk_state_type_for_name (const gchar* name);
// ::AtkStateType atk_state_type_for_name (const char* name);
Atk::StateType for_name (const std::string & name) noexcept
{
  typedef ::AtkStateType (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_state_type_for_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret);
}

// const gchar* atk_state_type_get_name (AtkStateType type);
// const char* atk_state_type_get_name (::AtkStateType type);
std::string get_name (Atk::StateType type) noexcept
{
  typedef const char* (*call_wrap_t) (::AtkStateType type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_state_type_get_name;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::AtkStateType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// AtkStateType atk_state_type_register (const gchar* name);
// ::AtkStateType atk_state_type_register (const char* name);
Atk::StateType register_ (const std::string & name) noexcept
{
  typedef ::AtkStateType (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_state_type_register;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret);
}

} // namespace StateTypeNS_

namespace TextAttributeNS_ {

// AtkTextAttribute atk_text_attribute_for_name (const gchar* name);
// ::AtkTextAttribute atk_text_attribute_for_name (const char* name);
Atk::TextAttribute for_name (const std::string & name) noexcept
{
  typedef ::AtkTextAttribute (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_attribute_for_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret);
}

// const gchar* atk_text_attribute_get_name (AtkTextAttribute attr);
// const char* atk_text_attribute_get_name (::AtkTextAttribute attr);
std::string get_name (Atk::TextAttribute attr) noexcept
{
  typedef const char* (*call_wrap_t) (::AtkTextAttribute attr);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_attribute_get_name;
  auto attr_to_c = gi::unwrap (attr);
  auto _temp_ret = call_wrap_v ((::AtkTextAttribute) (attr_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* atk_text_attribute_get_value (AtkTextAttribute attr, gint index_);
// const char* atk_text_attribute_get_value (::AtkTextAttribute attr, gint index_);
std::string get_value (Atk::TextAttribute attr, gint index_) noexcept
{
  typedef const char* (*call_wrap_t) (::AtkTextAttribute attr, gint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_attribute_get_value;
  auto index__to_c = index_;
  auto attr_to_c = gi::unwrap (attr);
  auto _temp_ret = call_wrap_v ((::AtkTextAttribute) (attr_to_c), (gint) (index__to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// AtkTextAttribute atk_text_attribute_register (const gchar* name);
// ::AtkTextAttribute atk_text_attribute_register (const char* name);
Atk::TextAttribute register_ (const std::string & name) noexcept
{
  typedef ::AtkTextAttribute (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_text_attribute_register;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret);
}

} // namespace TextAttributeNS_

namespace ValueTypeNS_ {

// const gchar* atk_value_type_get_localized_name (AtkValueType value_type);
// const char* atk_value_type_get_localized_name (::AtkValueType value_type);
std::string get_localized_name (Atk::ValueType value_type) noexcept
{
  typedef const char* (*call_wrap_t) (::AtkValueType value_type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_value_type_get_localized_name;
  auto value_type_to_c = gi::unwrap (value_type);
  auto _temp_ret = call_wrap_v ((::AtkValueType) (value_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* atk_value_type_get_name (AtkValueType value_type);
// const char* atk_value_type_get_name (::AtkValueType value_type);
std::string get_name (Atk::ValueType value_type) noexcept
{
  typedef const char* (*call_wrap_t) (::AtkValueType value_type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_value_type_get_name;
  auto value_type_to_c = gi::unwrap (value_type);
  auto _temp_ret = call_wrap_v ((::AtkValueType) (value_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

} // namespace ValueTypeNS_

// guint atk_add_global_event_listener (GSignalEmissionHook listener, const gchar* event_type);
// guint atk_add_global_event_listener ( listener, const char* event_type);
// IGNORE; not introspectable, listener type  not supported

// guint atk_add_key_event_listener (AtkKeySnoopFunc listener, gpointer data);
// guint atk_add_key_event_listener (Atk::KeySnoopFunc::cfunction_type listener, void* data);
// IGNORE; not introspectable, callback misses scope info

// AtkRegistry* atk_get_default_registry ();
// ::AtkRegistry* atk_get_default_registry ();
Atk::Registry get_default_registry () noexcept
{
  typedef ::AtkRegistry* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) atk_get_default_registry;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// AtkObject* atk_get_focus_object ();
// ::AtkObject* atk_get_focus_object ();
Atk::Object get_focus_object () noexcept
{
  typedef ::AtkObject* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) atk_get_focus_object;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// AtkObject* atk_get_root ();
// ::AtkObject* atk_get_root ();
Atk::Object get_root () noexcept
{
  typedef ::AtkObject* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) atk_get_root;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* atk_get_toolkit_name ();
// const char* atk_get_toolkit_name ();
std::string get_toolkit_name () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) atk_get_toolkit_name;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* atk_get_toolkit_version ();
// const char* atk_get_toolkit_version ();
std::string get_toolkit_version () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) atk_get_toolkit_version;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* atk_get_version ();
// const char* atk_get_version ();
std::string get_version () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) atk_get_version;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void atk_remove_global_event_listener (guint listener_id);
// void atk_remove_global_event_listener (guint listener_id);
void remove_global_event_listener (guint listener_id) noexcept
{
  typedef void (*call_wrap_t) (guint listener_id);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_remove_global_event_listener;
  auto listener_id_to_c = listener_id;
  call_wrap_v ((guint) (listener_id_to_c));
}

// void atk_remove_key_event_listener (guint listener_id);
// void atk_remove_key_event_listener (guint listener_id);
void remove_key_event_listener (guint listener_id) noexcept
{
  typedef void (*call_wrap_t) (guint listener_id);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_remove_key_event_listener;
  auto listener_id_to_c = listener_id;
  call_wrap_v ((guint) (listener_id_to_c));
}

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
