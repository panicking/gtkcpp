// AUTO-GENERATED

#ifndef _GI_ATK_OBJECT_IMPL_HPP_
#define _GI_ATK_OBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// gboolean atk_object_add_relationship (AtkObject* object, AtkRelationType relationship, AtkObject* target);
// gboolean atk_object_add_relationship (::AtkObject* object, ::AtkRelationType relationship, ::AtkObject* target);
bool base::ObjectBase::add_relationship (Atk::RelationType relationship, Atk::Object target) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkObject* object, ::AtkRelationType relationship, ::AtkObject* target);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_add_relationship;
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  auto relationship_to_c = gi::unwrap (relationship);
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()), (::AtkRelationType) (relationship_to_c), (::AtkObject*) (target_to_c));
  return _temp_ret;
}

// guint atk_object_connect_property_change_handler (AtkObject* accessible, AtkPropertyChangeHandler* handler);
// guint atk_object_connect_property_change_handler (::AtkObject* accessible,  handler);
// IGNORE; deprecated

// const gchar* atk_object_get_accessible_id (AtkObject* accessible);
// const char* atk_object_get_accessible_id (::AtkObject* accessible);
std::string base::ObjectBase::get_accessible_id () noexcept
{
  typedef const char* (*call_wrap_t) (::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_get_accessible_id;
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

//  atk_object_get_attributes (AtkObject* accessible);
//  atk_object_get_attributes (::AtkObject* accessible);
// SKIP; inconsistent list element info

// const gchar* atk_object_get_description (AtkObject* accessible);
// const char* atk_object_get_description (::AtkObject* accessible);
std::string base::ObjectBase::get_description () noexcept
{
  typedef const char* (*call_wrap_t) (::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_get_description;
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint atk_object_get_index_in_parent (AtkObject* accessible);
// gint atk_object_get_index_in_parent (::AtkObject* accessible);
gint base::ObjectBase::get_index_in_parent () noexcept
{
  typedef gint (*call_wrap_t) (::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_get_index_in_parent;
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()));
  return _temp_ret;
}

// AtkLayer atk_object_get_layer (AtkObject* accessible);
// ::AtkLayer atk_object_get_layer (::AtkObject* accessible);
// IGNORE; deprecated

// gint atk_object_get_mdi_zorder (AtkObject* accessible);
// gint atk_object_get_mdi_zorder (::AtkObject* accessible);
// IGNORE; deprecated

// gint atk_object_get_n_accessible_children (AtkObject* accessible);
// gint atk_object_get_n_accessible_children (::AtkObject* accessible);
gint base::ObjectBase::get_n_accessible_children () noexcept
{
  typedef gint (*call_wrap_t) (::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_get_n_accessible_children;
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()));
  return _temp_ret;
}

// const gchar* atk_object_get_name (AtkObject* accessible);
// const char* atk_object_get_name (::AtkObject* accessible);
std::string base::ObjectBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_get_name;
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* atk_object_get_object_locale (AtkObject* accessible);
// const char* atk_object_get_object_locale (::AtkObject* accessible);
std::string base::ObjectBase::get_object_locale () noexcept
{
  typedef const char* (*call_wrap_t) (::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_get_object_locale;
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// AtkObject* atk_object_get_parent (AtkObject* accessible);
// ::AtkObject* atk_object_get_parent (::AtkObject* accessible);
Atk::Object base::ObjectBase::get_parent () noexcept
{
  typedef ::AtkObject* (*call_wrap_t) (::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_get_parent;
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// AtkRole atk_object_get_role (AtkObject* accessible);
// ::AtkRole atk_object_get_role (::AtkObject* accessible);
Atk::Role base::ObjectBase::get_role () noexcept
{
  typedef ::AtkRole (*call_wrap_t) (::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_get_role;
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void atk_object_initialize (AtkObject* accessible, gpointer data);
// void atk_object_initialize (::AtkObject* accessible, void* data);
void base::ObjectBase::initialize (void* data) noexcept
{
  typedef void (*call_wrap_t) (::AtkObject* accessible, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_initialize;
  auto data_to_c = data;
  call_wrap_v ((::AtkObject*) (gobj_()), (void*) (data_to_c));
}

// void atk_object_notify_state_change (AtkObject* accessible, AtkState state, gboolean value);
// void atk_object_notify_state_change (::AtkObject* accessible, ::AtkState state, gboolean value);
void base::ObjectBase::notify_state_change (::AtkState state, gboolean value) noexcept
{
  typedef void (*call_wrap_t) (::AtkObject* accessible, ::AtkState state, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_notify_state_change;
  auto value_to_c = value;
  auto state_to_c = state;
  call_wrap_v ((::AtkObject*) (gobj_()), (::AtkState) (state_to_c), (gboolean) (value_to_c));
}

// AtkObject* atk_object_peek_parent (AtkObject* accessible);
// ::AtkObject* atk_object_peek_parent (::AtkObject* accessible);
Atk::Object base::ObjectBase::peek_parent () noexcept
{
  typedef ::AtkObject* (*call_wrap_t) (::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_peek_parent;
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// AtkObject* atk_object_ref_accessible_child (AtkObject* accessible, gint i);
// ::AtkObject* atk_object_ref_accessible_child (::AtkObject* accessible, gint i);
Atk::Object base::ObjectBase::ref_accessible_child (gint i) noexcept
{
  typedef ::AtkObject* (*call_wrap_t) (::AtkObject* accessible, gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_ref_accessible_child;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()), (gint) (i_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// AtkRelationSet* atk_object_ref_relation_set (AtkObject* accessible);
// ::AtkRelationSet* atk_object_ref_relation_set (::AtkObject* accessible);
Atk::RelationSet base::ObjectBase::ref_relation_set () noexcept
{
  typedef ::AtkRelationSet* (*call_wrap_t) (::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_ref_relation_set;
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// AtkStateSet* atk_object_ref_state_set (AtkObject* accessible);
// ::AtkStateSet* atk_object_ref_state_set (::AtkObject* accessible);
Atk::StateSet base::ObjectBase::ref_state_set () noexcept
{
  typedef ::AtkStateSet* (*call_wrap_t) (::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_ref_state_set;
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void atk_object_remove_property_change_handler (AtkObject* accessible, guint handler_id);
// void atk_object_remove_property_change_handler (::AtkObject* accessible, guint handler_id);
// IGNORE; deprecated

// gboolean atk_object_remove_relationship (AtkObject* object, AtkRelationType relationship, AtkObject* target);
// gboolean atk_object_remove_relationship (::AtkObject* object, ::AtkRelationType relationship, ::AtkObject* target);
bool base::ObjectBase::remove_relationship (Atk::RelationType relationship, Atk::Object target) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkObject* object, ::AtkRelationType relationship, ::AtkObject* target);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_remove_relationship;
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  auto relationship_to_c = gi::unwrap (relationship);
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()), (::AtkRelationType) (relationship_to_c), (::AtkObject*) (target_to_c));
  return _temp_ret;
}

// void atk_object_set_accessible_id (AtkObject* accessible, const gchar* name);
// void atk_object_set_accessible_id (::AtkObject* accessible, const char* name);
void base::ObjectBase::set_accessible_id (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::AtkObject* accessible, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_set_accessible_id;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkObject*) (gobj_()), (const char*) (name_to_c));
}

// void atk_object_set_description (AtkObject* accessible, const gchar* description);
// void atk_object_set_description (::AtkObject* accessible, const char* description);
void base::ObjectBase::set_description (const std::string & description) noexcept
{
  typedef void (*call_wrap_t) (::AtkObject* accessible, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_set_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkObject*) (gobj_()), (const char*) (description_to_c));
}

// void atk_object_set_name (AtkObject* accessible, const gchar* name);
// void atk_object_set_name (::AtkObject* accessible, const char* name);
void base::ObjectBase::set_name (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::AtkObject* accessible, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkObject*) (gobj_()), (const char*) (name_to_c));
}

// void atk_object_set_parent (AtkObject* accessible, AtkObject* parent);
// void atk_object_set_parent (::AtkObject* accessible, ::AtkObject* parent);
void base::ObjectBase::set_parent (Atk::Object parent) noexcept
{
  typedef void (*call_wrap_t) (::AtkObject* accessible, ::AtkObject* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_set_parent;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkObject*) (gobj_()), (::AtkObject*) (parent_to_c));
}

// void atk_object_set_role (AtkObject* accessible, AtkRole role);
// void atk_object_set_role (::AtkObject* accessible, ::AtkRole role);
void base::ObjectBase::set_role (Atk::Role role) noexcept
{
  typedef void (*call_wrap_t) (::AtkObject* accessible, ::AtkRole role);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_set_role;
  auto role_to_c = gi::unwrap (role);
  call_wrap_v ((::AtkObject*) (gobj_()), (::AtkRole) (role_to_c));
}

static char* _field_description_get (const ::AtkObject* obj) { return (char*) obj->description; }
// char* Object::description (const ::AtkObject* obj);
// char* Object::description (const ::AtkObject* obj);
std::string base::ObjectBase::description_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::AtkObject* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_description_get;
  auto _temp_ret = call_wrap_v ((const ::AtkObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_name_get (const ::AtkObject* obj) { return (char*) obj->name; }
// char* Object::name (const ::AtkObject* obj);
// char* Object::name (const ::AtkObject* obj);
std::string base::ObjectBase::name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::AtkObject* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_get;
  auto _temp_ret = call_wrap_v ((const ::AtkObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::AtkObject* _field_accessible_parent_get (const ::AtkObject* obj) { return (::AtkObject*) obj->accessible_parent; }
// ::AtkObject* Object::accessible_parent (const ::AtkObject* obj);
// ::AtkObject* Object::accessible_parent (const ::AtkObject* obj);
Atk::Object base::ObjectBase::accessible_parent_ () const noexcept
{
  typedef ::AtkObject* (*call_wrap_t) (const ::AtkObject* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_accessible_parent_get;
  auto _temp_ret = call_wrap_v ((const ::AtkObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::AtkRole _field_role_get (const ::AtkObject* obj) { return (::AtkRole) obj->role; }
// ::AtkRole Object::role (const ::AtkObject* obj);
// ::AtkRole Object::role (const ::AtkObject* obj);
Atk::Role base::ObjectBase::role_ () const noexcept
{
  typedef ::AtkRole (*call_wrap_t) (const ::AtkObject* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_role_get;
  auto _temp_ret = call_wrap_v ((const ::AtkObject*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_role_set (::AtkObject* obj, ::AtkRole _value) { obj->role = (decltype(obj->role)) _value; }
//  Object::role (::AtkObject* obj, ::AtkRole _value);
// void Object::role (::AtkObject* obj, ::AtkRole _value);
void base::ObjectBase::role_ (Atk::Role _value) noexcept
{
  typedef void (*call_wrap_t) (::AtkObject* obj, ::AtkRole _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_role_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::AtkObject*) (gobj_()), (::AtkRole) (_value_to_c));
}

static ::AtkRelationSet* _field_relation_set_get (const ::AtkObject* obj) { return (::AtkRelationSet*) obj->relation_set; }
// ::AtkRelationSet* Object::relation_set (const ::AtkObject* obj);
// ::AtkRelationSet* Object::relation_set (const ::AtkObject* obj);
Atk::RelationSet base::ObjectBase::relation_set_ () const noexcept
{
  typedef ::AtkRelationSet* (*call_wrap_t) (const ::AtkObject* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_relation_set_get;
  auto _temp_ret = call_wrap_v ((const ::AtkObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::AtkLayer _field_layer_get (const ::AtkObject* obj) { return (::AtkLayer) obj->layer; }
// ::AtkLayer Object::layer (const ::AtkObject* obj);
// ::AtkLayer Object::layer (const ::AtkObject* obj);
Atk::Layer base::ObjectBase::layer_ () const noexcept
{
  typedef ::AtkLayer (*call_wrap_t) (const ::AtkObject* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_layer_get;
  auto _temp_ret = call_wrap_v ((const ::AtkObject*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_layer_set (::AtkObject* obj, ::AtkLayer _value) { obj->layer = (decltype(obj->layer)) _value; }
//  Object::layer (::AtkObject* obj, ::AtkLayer _value);
// void Object::layer (::AtkObject* obj, ::AtkLayer _value);
void base::ObjectBase::layer_ (Atk::Layer _value) noexcept
{
  typedef void (*call_wrap_t) (::AtkObject* obj, ::AtkLayer _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_layer_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::AtkObject*) (gobj_()), (::AtkLayer) (_value_to_c));
}



// IGNORE; deprecated





} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/object_extra_def_impl.hpp>)
#include <atk/object_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/object_extra_impl.hpp>)
#include <atk/object_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void ObjectClassDef::class_init (gpointer class_struct, gpointer )
{
  ::AtkObjectClass *methods = (::AtkObjectClass *) class_struct;
  (void) methods;

  methods->children_changed = (decltype (methods->children_changed)) detail::method_wrapper<self, void (*) (guint change_index, void* changed_child), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::children_changed_>;
  methods->focus_event = (decltype (methods->focus_event)) detail::method_wrapper<self, void (*) (gboolean focus_in), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::focus_event_>;
  methods->get_index_in_parent = (decltype (methods->get_index_in_parent)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_index_in_parent_>;
  methods->get_n_children = (decltype (methods->get_n_children)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_n_children_>;
  methods->get_parent = (decltype (methods->get_parent)) detail::method_wrapper<self, Atk::Object (*) (), gi::transfer_none_t>::wrapper<&self::get_parent_>;
  methods->get_role = (decltype (methods->get_role)) detail::method_wrapper<self, Atk::Role (*) (), gi::transfer_none_t>::wrapper<&self::get_role_>;
  methods->initialize = (decltype (methods->initialize)) detail::method_wrapper<self, void (*) (void* data), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::initialize_>;
  methods->property_change = (decltype (methods->property_change)) detail::method_wrapper<self, void (*) (Atk::PropertyValues values), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::property_change_>;
  methods->ref_relation_set = (decltype (methods->ref_relation_set)) detail::method_wrapper<self, Atk::RelationSet (*) (), gi::transfer_full_t>::wrapper<&self::ref_relation_set_>;
  methods->ref_state_set = (decltype (methods->ref_state_set)) detail::method_wrapper<self, Atk::StateSet (*) (), gi::transfer_full_t>::wrapper<&self::ref_state_set_>;
  methods->set_description = (decltype (methods->set_description)) detail::method_wrapper<self, void (*) (const std::string & description), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_description_>;
  methods->set_name = (decltype (methods->set_name)) detail::method_wrapper<self, void (*) (const std::string & name), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_name_>;
  methods->set_parent = (decltype (methods->set_parent)) detail::method_wrapper<self, void (*) (Atk::Object parent), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_parent_>;
  methods->set_role = (decltype (methods->set_role)) detail::method_wrapper<self, void (*) (Atk::Role role), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_role_>;
  methods->state_change = (decltype (methods->state_change)) detail::method_wrapper<self, void (*) (const std::string & name, gboolean state_set), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::state_change_>;
  methods->visible_data_changed = (decltype (methods->visible_data_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::visible_data_changed_>;
}

// void Object::active_descendant_changed (AtkObject* accessible, gpointer* child);
// void Object::active_descendant_changed (::AtkObject* accessible, void* child);
// SKIP; inconsistent in child pointer depth (2 vs 1)

// void Object::children_changed (AtkObject* accessible, guint change_index, gpointer changed_child);
// void Object::children_changed (::AtkObject* accessible, guint change_index, void* changed_child);
void ObjectClass::children_changed_ (guint change_index, void* changed_child) noexcept
{
  if (!get_struct_()->children_changed) return ;
  typedef void (*call_wrap_t) (::AtkObject* accessible, guint change_index, void* changed_child);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->children_changed;
  auto changed_child_to_c = changed_child;
  auto change_index_to_c = change_index;
  call_wrap_v ((::AtkObject*) (gobj_()), (guint) (change_index_to_c), (void*) (changed_child_to_c));
}

// void Object::focus_event (AtkObject* accessible, gboolean focus_in);
// void Object::focus_event (::AtkObject* accessible, gboolean focus_in);
void ObjectClass::focus_event_ (gboolean focus_in) noexcept
{
  if (!get_struct_()->focus_event) return ;
  typedef void (*call_wrap_t) (::AtkObject* accessible, gboolean focus_in);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->focus_event;
  auto focus_in_to_c = focus_in;
  call_wrap_v ((::AtkObject*) (gobj_()), (gboolean) (focus_in_to_c));
}

//  Object::get_attributes (AtkObject* accessible);
//  Object::get_attributes (::AtkObject* accessible);
// SKIP; inconsistent list element info

// const gchar* Object::get_description (AtkObject* accessible);
// const char* Object::get_description (::AtkObject* accessible);
// SKIP; invalid callback return transfer none

// gint Object::get_index_in_parent (AtkObject* accessible);
// gint Object::get_index_in_parent (::AtkObject* accessible);
gint ObjectClass::get_index_in_parent_ () noexcept
{
  if (!get_struct_()->get_index_in_parent) return gint{};
  typedef gint (*call_wrap_t) (::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_index_in_parent;
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()));
  return _temp_ret;
}

// AtkLayer Object::get_layer (AtkObject* accessible);
// ::AtkLayer Object::get_layer (::AtkObject* accessible);
// IGNORE; deprecated

// gint Object::get_mdi_zorder (AtkObject* accessible);
// gint Object::get_mdi_zorder (::AtkObject* accessible);
// IGNORE; deprecated

// gint Object::get_n_children (AtkObject* accessible);
// gint Object::get_n_children (::AtkObject* accessible);
gint ObjectClass::get_n_children_ () noexcept
{
  if (!get_struct_()->get_n_children) return gint{};
  typedef gint (*call_wrap_t) (::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_n_children;
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()));
  return _temp_ret;
}

// const gchar* Object::get_name (AtkObject* accessible);
// const char* Object::get_name (::AtkObject* accessible);
// SKIP; invalid callback return transfer none

// const gchar* Object::get_object_locale (AtkObject* accessible);
// const char* Object::get_object_locale (::AtkObject* accessible);
// SKIP; invalid callback return transfer none

// AtkObject* Object::get_parent (AtkObject* accessible);
// ::AtkObject* Object::get_parent (::AtkObject* accessible);
Atk::Object ObjectClass::get_parent_ () noexcept
{
  if (!get_struct_()->get_parent) return Atk::Object{};
  typedef ::AtkObject* (*call_wrap_t) (::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_parent;
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// AtkRole Object::get_role (AtkObject* accessible);
// ::AtkRole Object::get_role (::AtkObject* accessible);
Atk::Role ObjectClass::get_role_ () noexcept
{
  if (!get_struct_()->get_role) return Atk::Role{};
  typedef ::AtkRole (*call_wrap_t) (::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_role;
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void Object::initialize (AtkObject* accessible, gpointer data);
// void Object::initialize (::AtkObject* accessible, void* data);
void ObjectClass::initialize_ (void* data) noexcept
{
  if (!get_struct_()->initialize) return ;
  typedef void (*call_wrap_t) (::AtkObject* accessible, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->initialize;
  auto data_to_c = data;
  call_wrap_v ((::AtkObject*) (gobj_()), (void*) (data_to_c));
}

// void Object::property_change (AtkObject* accessible, AtkPropertyValues* values);
// void Object::property_change (::AtkObject* accessible, ::AtkPropertyValues* values);
void ObjectClass::property_change_ (Atk::PropertyValues values) noexcept
{
  if (!get_struct_()->property_change) return ;
  typedef void (*call_wrap_t) (::AtkObject* accessible, ::AtkPropertyValues* values);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->property_change;
  auto values_to_c = gi::unwrap (values, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkObject*) (gobj_()), (::AtkPropertyValues*) (values_to_c));
}

// AtkRelationSet* Object::ref_relation_set (AtkObject* accessible);
// ::AtkRelationSet* Object::ref_relation_set (::AtkObject* accessible);
Atk::RelationSet ObjectClass::ref_relation_set_ () noexcept
{
  if (!get_struct_()->ref_relation_set) return Atk::RelationSet{};
  typedef ::AtkRelationSet* (*call_wrap_t) (::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->ref_relation_set;
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// AtkStateSet* Object::ref_state_set (AtkObject* accessible);
// ::AtkStateSet* Object::ref_state_set (::AtkObject* accessible);
Atk::StateSet ObjectClass::ref_state_set_ () noexcept
{
  if (!get_struct_()->ref_state_set) return Atk::StateSet{};
  typedef ::AtkStateSet* (*call_wrap_t) (::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->ref_state_set;
  auto _temp_ret = call_wrap_v ((::AtkObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void Object::remove_property_change_handler (AtkObject* accessible, guint handler_id);
// void Object::remove_property_change_handler (::AtkObject* accessible, guint handler_id);
// IGNORE; deprecated

// void Object::set_description (AtkObject* accessible, const gchar* description);
// void Object::set_description (::AtkObject* accessible, const char* description);
void ObjectClass::set_description_ (const std::string & description) noexcept
{
  if (!get_struct_()->set_description) return ;
  typedef void (*call_wrap_t) (::AtkObject* accessible, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkObject*) (gobj_()), (const char*) (description_to_c));
}

// void Object::set_name (AtkObject* accessible, const gchar* name);
// void Object::set_name (::AtkObject* accessible, const char* name);
void ObjectClass::set_name_ (const std::string & name) noexcept
{
  if (!get_struct_()->set_name) return ;
  typedef void (*call_wrap_t) (::AtkObject* accessible, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkObject*) (gobj_()), (const char*) (name_to_c));
}

// void Object::set_parent (AtkObject* accessible, AtkObject* parent);
// void Object::set_parent (::AtkObject* accessible, ::AtkObject* parent);
void ObjectClass::set_parent_ (Atk::Object parent) noexcept
{
  if (!get_struct_()->set_parent) return ;
  typedef void (*call_wrap_t) (::AtkObject* accessible, ::AtkObject* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_parent;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkObject*) (gobj_()), (::AtkObject*) (parent_to_c));
}

// void Object::set_role (AtkObject* accessible, AtkRole role);
// void Object::set_role (::AtkObject* accessible, ::AtkRole role);
void ObjectClass::set_role_ (Atk::Role role) noexcept
{
  if (!get_struct_()->set_role) return ;
  typedef void (*call_wrap_t) (::AtkObject* accessible, ::AtkRole role);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_role;
  auto role_to_c = gi::unwrap (role);
  call_wrap_v ((::AtkObject*) (gobj_()), (::AtkRole) (role_to_c));
}

// void Object::state_change (AtkObject* accessible, const gchar* name, gboolean state_set);
// void Object::state_change (::AtkObject* accessible, const char* name, gboolean state_set);
void ObjectClass::state_change_ (const std::string & name, gboolean state_set) noexcept
{
  if (!get_struct_()->state_change) return ;
  typedef void (*call_wrap_t) (::AtkObject* accessible, const char* name, gboolean state_set);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->state_change;
  auto state_set_to_c = state_set;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkObject*) (gobj_()), (const char*) (name_to_c), (gboolean) (state_set_to_c));
}

// void Object::visible_data_changed (AtkObject* accessible);
// void Object::visible_data_changed (::AtkObject* accessible);
void ObjectClass::visible_data_changed_ () noexcept
{
  if (!get_struct_()->visible_data_changed) return ;
  typedef void (*call_wrap_t) (::AtkObject* accessible);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->visible_data_changed;
  call_wrap_v ((::AtkObject*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
