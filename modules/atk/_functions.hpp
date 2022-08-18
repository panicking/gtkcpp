// AUTO-GENERATED

#ifndef _GI_ATK__FUNCTIONS_HPP_
#define _GI_ATK__FUNCTIONS_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace RelationTypeNS_ {

// AtkRelationType atk_relation_type_for_name (const gchar* name);
// ::AtkRelationType atk_relation_type_for_name (const char* name);
GI_INLINE_DECL Atk::RelationType for_name (const std::string & name) noexcept;

// const gchar* atk_relation_type_get_name (AtkRelationType type);
// const char* atk_relation_type_get_name (::AtkRelationType type);
GI_INLINE_DECL std::string get_name (Atk::RelationType type) noexcept;

// AtkRelationType atk_relation_type_register (const gchar* name);
// ::AtkRelationType atk_relation_type_register (const char* name);
GI_INLINE_DECL Atk::RelationType register_ (const std::string & name) noexcept;

} // namespace RelationTypeNS_

namespace RoleNS_ {

// AtkRole atk_role_for_name (const gchar* name);
// ::AtkRole atk_role_for_name (const char* name);
GI_INLINE_DECL Atk::Role for_name (const std::string & name) noexcept;

// const gchar* atk_role_get_localized_name (AtkRole role);
// const char* atk_role_get_localized_name (::AtkRole role);
GI_INLINE_DECL std::string get_localized_name (Atk::Role role) noexcept;

// const gchar* atk_role_get_name (AtkRole role);
// const char* atk_role_get_name (::AtkRole role);
GI_INLINE_DECL std::string get_name (Atk::Role role) noexcept;

// AtkRole atk_role_register (const gchar* name);
// ::AtkRole atk_role_register (const char* name);
// IGNORE; deprecated

} // namespace RoleNS_

namespace StateTypeNS_ {

// AtkStateType atk_state_type_for_name (const gchar* name);
// ::AtkStateType atk_state_type_for_name (const char* name);
GI_INLINE_DECL Atk::StateType for_name (const std::string & name) noexcept;

// const gchar* atk_state_type_get_name (AtkStateType type);
// const char* atk_state_type_get_name (::AtkStateType type);
GI_INLINE_DECL std::string get_name (Atk::StateType type) noexcept;

// AtkStateType atk_state_type_register (const gchar* name);
// ::AtkStateType atk_state_type_register (const char* name);
GI_INLINE_DECL Atk::StateType register_ (const std::string & name) noexcept;

} // namespace StateTypeNS_

namespace TextAttributeNS_ {

// AtkTextAttribute atk_text_attribute_for_name (const gchar* name);
// ::AtkTextAttribute atk_text_attribute_for_name (const char* name);
GI_INLINE_DECL Atk::TextAttribute for_name (const std::string & name) noexcept;

// const gchar* atk_text_attribute_get_name (AtkTextAttribute attr);
// const char* atk_text_attribute_get_name (::AtkTextAttribute attr);
GI_INLINE_DECL std::string get_name (Atk::TextAttribute attr) noexcept;

// const gchar* atk_text_attribute_get_value (AtkTextAttribute attr, gint index_);
// const char* atk_text_attribute_get_value (::AtkTextAttribute attr, gint index_);
GI_INLINE_DECL std::string get_value (Atk::TextAttribute attr, gint index_) noexcept;

// AtkTextAttribute atk_text_attribute_register (const gchar* name);
// ::AtkTextAttribute atk_text_attribute_register (const char* name);
GI_INLINE_DECL Atk::TextAttribute register_ (const std::string & name) noexcept;

} // namespace TextAttributeNS_

namespace ValueTypeNS_ {

// const gchar* atk_value_type_get_localized_name (AtkValueType value_type);
// const char* atk_value_type_get_localized_name (::AtkValueType value_type);
GI_INLINE_DECL std::string get_localized_name (Atk::ValueType value_type) noexcept;

// const gchar* atk_value_type_get_name (AtkValueType value_type);
// const char* atk_value_type_get_name (::AtkValueType value_type);
GI_INLINE_DECL std::string get_name (Atk::ValueType value_type) noexcept;

} // namespace ValueTypeNS_

// guint atk_add_global_event_listener (GSignalEmissionHook listener, const gchar* event_type);
// guint atk_add_global_event_listener ( listener, const char* event_type);
// IGNORE; not introspectable, listener type  not supported

// guint atk_add_key_event_listener (AtkKeySnoopFunc listener, gpointer data);
// guint atk_add_key_event_listener (Atk::KeySnoopFunc::cfunction_type listener, void* data);
// IGNORE; not introspectable, callback misses scope info

// AtkRegistry* atk_get_default_registry ();
// ::AtkRegistry* atk_get_default_registry ();
GI_INLINE_DECL Atk::Registry get_default_registry () noexcept;

// AtkObject* atk_get_focus_object ();
// ::AtkObject* atk_get_focus_object ();
GI_INLINE_DECL Atk::Object get_focus_object () noexcept;

// AtkObject* atk_get_root ();
// ::AtkObject* atk_get_root ();
GI_INLINE_DECL Atk::Object get_root () noexcept;

// const gchar* atk_get_toolkit_name ();
// const char* atk_get_toolkit_name ();
GI_INLINE_DECL std::string get_toolkit_name () noexcept;

// const gchar* atk_get_toolkit_version ();
// const char* atk_get_toolkit_version ();
GI_INLINE_DECL std::string get_toolkit_version () noexcept;

// const gchar* atk_get_version ();
// const char* atk_get_version ();
GI_INLINE_DECL std::string get_version () noexcept;

// void atk_remove_global_event_listener (guint listener_id);
// void atk_remove_global_event_listener (guint listener_id);
GI_INLINE_DECL void remove_global_event_listener (guint listener_id) noexcept;

// void atk_remove_key_event_listener (guint listener_id);
// void atk_remove_key_event_listener (guint listener_id);
GI_INLINE_DECL void remove_key_event_listener (guint listener_id) noexcept;

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
