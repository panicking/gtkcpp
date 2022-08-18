// AUTO-GENERATED

#ifndef _GI_GST_OBJECT_IMPL_HPP_
#define _GI_GST_OBJECT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// gboolean gst_object_check_uniqueness (GList* list, const gchar* name);
// gboolean gst_object_check_uniqueness (::GList* list, const char* name);
bool base::ObjectBase::check_uniqueness (const std::vector<Gst::Object> & list, const std::string & name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GList* list, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_check_uniqueness;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto list_i = detail::make_list_unwrap_range<::GList> (list);
  auto list_w = unwrap (list_i, gi::transfer_none, direction_in);
  auto list_to_c = list_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GList*) (list_to_c), (const char*) (name_to_c));
  return _temp_ret;
}

// void gst_object_default_deep_notify (GObject* object, GstObject* orig, GParamSpec* pspec, gchar** excluded_props);
// void gst_object_default_deep_notify (::GObject* object, ::GstObject* orig, ::GParamSpec* pspec, char** excluded_props);
void base::ObjectBase::default_deep_notify (GObject::Object object, Gst::Object orig, GObject::ParamSpec pspec, const std::vector<std::string> & excluded_props) noexcept
{
  typedef void (*call_wrap_t) (::GObject* object, ::GstObject* orig, ::GParamSpec* pspec, char** excluded_props);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_default_deep_notify;
  auto excluded_props_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (excluded_props);
  auto excluded_props_w = unwrap (excluded_props_i, gi::transfer_none, direction_in);
  auto excluded_props_to_c = excluded_props_w.gobj_(false);
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto orig_to_c = gi::unwrap (orig, gi::transfer_none, gi::direction_in);
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GObject*) (object_to_c), (::GstObject*) (orig_to_c), (::GParamSpec*) (pspec_to_c), (char**) (excluded_props_to_c));
}

// gpointer gst_object_ref_sink (gpointer object);
// void* gst_object_ref_sink (void* object);
// IGNORE; marked ignore

// gboolean gst_object_replace (GstObject** oldobj, GstObject* newobj);
// gboolean gst_object_replace (::GstObject** oldobj, ::GstObject* newobj);
bool base::ObjectBase::replace (Gst::Object * oldobj, Gst::Object newobj) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstObject** oldobj, ::GstObject* newobj);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_replace;
  auto newobj_to_c = gi::unwrap (newobj, gi::transfer_none, gi::direction_in);
  auto oldobj_to_c = gi::unwrap (*oldobj, gi::transfer_full, gi::direction_in);
  ::GstObject* oldobj_o = oldobj_to_c;
  auto _temp_ret = call_wrap_v ((::GstObject**) (oldobj ? &oldobj_o : nullptr), (::GstObject*) (newobj_to_c));
  if (oldobj) *oldobj = gi::wrap (oldobj_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::ObjectBase::replace (Gst::Object * oldobj) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstObject** oldobj, ::GstObject* newobj);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_replace;
  auto newobj_to_c = nullptr;
  auto oldobj_to_c = nullptr;
  ::GstObject* oldobj_o = oldobj_to_c;
  auto _temp_ret = call_wrap_v ((::GstObject**) (oldobj ? &oldobj_o : nullptr), (::GstObject*) (newobj_to_c));
  if (oldobj) *oldobj = gi::wrap (oldobj_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean gst_object_add_control_binding (GstObject* object, GstControlBinding* binding);
// gboolean gst_object_add_control_binding (::GstObject* object, ::GstControlBinding* binding);
bool base::ObjectBase::add_control_binding (Gst::ControlBinding binding) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstObject* object, ::GstControlBinding* binding);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_add_control_binding;
  auto binding_to_c = gi::unwrap (binding, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (gobj_()), (::GstControlBinding*) (binding_to_c));
  return _temp_ret;
}

// void gst_object_default_error (GstObject* source, const GError* error, const gchar* debug);
// void gst_object_default_error (::GstObject* source, const ::GError* error, const char* debug);
void base::ObjectBase::default_error (const GLib::Error & error, const std::string & debug) noexcept
{
  typedef void (*call_wrap_t) (::GstObject* source, const ::GError* error, const char* debug);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_default_error;
  auto debug_to_c = gi::unwrap (debug, gi::transfer_none, gi::direction_in);
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstObject*) (gobj_()), (const ::GError*) (error_to_c), (const char*) (debug_to_c));
}
void base::ObjectBase::default_error (const GLib::Error & error) noexcept
{
  typedef void (*call_wrap_t) (::GstObject* source, const ::GError* error, const char* debug);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_default_error;
  auto debug_to_c = nullptr;
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstObject*) (gobj_()), (const ::GError*) (error_to_c), (const char*) (debug_to_c));
}

// GstControlBinding* gst_object_get_control_binding (GstObject* object, const gchar* property_name);
// ::GstControlBinding* gst_object_get_control_binding (::GstObject* object, const char* property_name);
Gst::ControlBinding base::ObjectBase::get_control_binding (const std::string & property_name) noexcept
{
  typedef ::GstControlBinding* (*call_wrap_t) (::GstObject* object, const char* property_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_get_control_binding;
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (gobj_()), (const char*) (property_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstClockTime gst_object_get_control_rate (GstObject* object);
// ::GstClockTime gst_object_get_control_rate (::GstObject* object);
Gst::ClockTime base::ObjectBase::get_control_rate () noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (::GstObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_get_control_rate;
  auto _temp_ret = call_wrap_v ((::GstObject*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_object_get_g_value_array (GstObject* object, const gchar* property_name, GstClockTime timestamp, GstClockTime interval, guint n_values, GValue* values);
// gboolean gst_object_get_g_value_array (::GstObject* object, const char* property_name, ::GstClockTime timestamp, ::GstClockTime interval, guint n_values, ::GValue** values);
// SKIP; inconsistent in values pointer depth (1 vs 2)

// gchar* gst_object_get_name (GstObject* object);
// char* gst_object_get_name (::GstObject* object);
std::string base::ObjectBase::get_name () noexcept
{
  typedef char* (*call_wrap_t) (::GstObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_get_name;
  auto _temp_ret = call_wrap_v ((::GstObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstObject* gst_object_get_parent (GstObject* object);
// ::GstObject* gst_object_get_parent (::GstObject* object);
Gst::Object base::ObjectBase::get_parent () noexcept
{
  typedef ::GstObject* (*call_wrap_t) (::GstObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_get_parent;
  auto _temp_ret = call_wrap_v ((::GstObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gst_object_get_path_string (GstObject* object);
// char* gst_object_get_path_string (::GstObject* object);
std::string base::ObjectBase::get_path_string () noexcept
{
  typedef char* (*call_wrap_t) (::GstObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_get_path_string;
  auto _temp_ret = call_wrap_v ((::GstObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GValue* gst_object_get_value (GstObject* object, const gchar* property_name, GstClockTime timestamp);
// ::GValue* gst_object_get_value (::GstObject* object, const char* property_name, ::GstClockTime timestamp);
GObject::Value base::ObjectBase::get_value (const std::string & property_name, ::GstClockTime timestamp) noexcept
{
  typedef ::GValue* (*call_wrap_t) (::GstObject* object, const char* property_name, ::GstClockTime timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_get_value;
  auto timestamp_to_c = timestamp;
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (gobj_()), (const char*) (property_name_to_c), (::GstClockTime) (timestamp_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_object_get_value_array (GstObject* object, const gchar* property_name, GstClockTime timestamp, GstClockTime interval, guint n_values, gpointer values);
// gboolean gst_object_get_value_array (::GstObject* object, const char* property_name, ::GstClockTime timestamp, ::GstClockTime interval, guint n_values, void* values);
bool base::ObjectBase::get_value_array (const std::string & property_name, ::GstClockTime timestamp, ::GstClockTime interval, guint n_values, void* values) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstObject* object, const char* property_name, ::GstClockTime timestamp, ::GstClockTime interval, guint n_values, void* values);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_get_value_array;
  auto values_to_c = values;
  auto n_values_to_c = n_values;
  auto interval_to_c = interval;
  auto timestamp_to_c = timestamp;
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (gobj_()), (const char*) (property_name_to_c), (::GstClockTime) (timestamp_to_c), (::GstClockTime) (interval_to_c), (guint) (n_values_to_c), (void*) (values_to_c));
  return _temp_ret;
}

// gboolean gst_object_has_active_control_bindings (GstObject* object);
// gboolean gst_object_has_active_control_bindings (::GstObject* object);
bool base::ObjectBase::has_active_control_bindings () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_has_active_control_bindings;
  auto _temp_ret = call_wrap_v ((::GstObject*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_object_has_ancestor (GstObject* object, GstObject* ancestor);
// gboolean gst_object_has_ancestor (::GstObject* object, ::GstObject* ancestor);
// IGNORE; deprecated

// gboolean gst_object_has_as_ancestor (GstObject* object, GstObject* ancestor);
// gboolean gst_object_has_as_ancestor (::GstObject* object, ::GstObject* ancestor);
bool base::ObjectBase::has_as_ancestor (Gst::Object ancestor) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstObject* object, ::GstObject* ancestor);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_has_as_ancestor;
  auto ancestor_to_c = gi::unwrap (ancestor, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (gobj_()), (::GstObject*) (ancestor_to_c));
  return _temp_ret;
}

// gboolean gst_object_has_as_parent (GstObject* object, GstObject* parent);
// gboolean gst_object_has_as_parent (::GstObject* object, ::GstObject* parent);
bool base::ObjectBase::has_as_parent (Gst::Object parent) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstObject* object, ::GstObject* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_has_as_parent;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (gobj_()), (::GstObject*) (parent_to_c));
  return _temp_ret;
}

// gpointer gst_object_ref (gpointer object);
// ::GstObject* gst_object_ref (::GstObject* object);
// IGNORE; marked ignore

// gboolean gst_object_remove_control_binding (GstObject* object, GstControlBinding* binding);
// gboolean gst_object_remove_control_binding (::GstObject* object, ::GstControlBinding* binding);
bool base::ObjectBase::remove_control_binding (Gst::ControlBinding binding) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstObject* object, ::GstControlBinding* binding);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_remove_control_binding;
  auto binding_to_c = gi::unwrap (binding, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (gobj_()), (::GstControlBinding*) (binding_to_c));
  return _temp_ret;
}

// void gst_object_set_control_binding_disabled (GstObject* object, const gchar* property_name, gboolean disabled);
// void gst_object_set_control_binding_disabled (::GstObject* object, const char* property_name, gboolean disabled);
void base::ObjectBase::set_control_binding_disabled (const std::string & property_name, gboolean disabled) noexcept
{
  typedef void (*call_wrap_t) (::GstObject* object, const char* property_name, gboolean disabled);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_set_control_binding_disabled;
  auto disabled_to_c = disabled;
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstObject*) (gobj_()), (const char*) (property_name_to_c), (gboolean) (disabled_to_c));
}

// void gst_object_set_control_bindings_disabled (GstObject* object, gboolean disabled);
// void gst_object_set_control_bindings_disabled (::GstObject* object, gboolean disabled);
void base::ObjectBase::set_control_bindings_disabled (gboolean disabled) noexcept
{
  typedef void (*call_wrap_t) (::GstObject* object, gboolean disabled);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_set_control_bindings_disabled;
  auto disabled_to_c = disabled;
  call_wrap_v ((::GstObject*) (gobj_()), (gboolean) (disabled_to_c));
}

// void gst_object_set_control_rate (GstObject* object, GstClockTime control_rate);
// void gst_object_set_control_rate (::GstObject* object, ::GstClockTime control_rate);
void base::ObjectBase::set_control_rate (::GstClockTime control_rate) noexcept
{
  typedef void (*call_wrap_t) (::GstObject* object, ::GstClockTime control_rate);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_set_control_rate;
  auto control_rate_to_c = control_rate;
  call_wrap_v ((::GstObject*) (gobj_()), (::GstClockTime) (control_rate_to_c));
}

// gboolean gst_object_set_name (GstObject* object, const gchar* name);
// gboolean gst_object_set_name (::GstObject* object, const char* name);
bool base::ObjectBase::set_name (const std::string & name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstObject* object, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}
bool base::ObjectBase::set_name () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstObject* object, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_set_name;
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstObject*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// gboolean gst_object_set_parent (GstObject* object, GstObject* parent);
// gboolean gst_object_set_parent (::GstObject* object, ::GstObject* parent);
bool base::ObjectBase::set_parent (Gst::Object parent) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstObject* object, ::GstObject* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_set_parent;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstObject*) (gobj_()), (::GstObject*) (parent_to_c));
  return _temp_ret;
}

// GstClockTime gst_object_suggest_next_sync (GstObject* object);
// ::GstClockTime gst_object_suggest_next_sync (::GstObject* object);
Gst::ClockTime base::ObjectBase::suggest_next_sync () noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (::GstObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_suggest_next_sync;
  auto _temp_ret = call_wrap_v ((::GstObject*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_object_sync_values (GstObject* object, GstClockTime timestamp);
// gboolean gst_object_sync_values (::GstObject* object, ::GstClockTime timestamp);
bool base::ObjectBase::sync_values (::GstClockTime timestamp) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstObject* object, ::GstClockTime timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_sync_values;
  auto timestamp_to_c = timestamp;
  auto _temp_ret = call_wrap_v ((::GstObject*) (gobj_()), (::GstClockTime) (timestamp_to_c));
  return _temp_ret;
}

// void gst_object_unparent (GstObject* object);
// void gst_object_unparent (::GstObject* object);
void base::ObjectBase::unparent () noexcept
{
  typedef void (*call_wrap_t) (::GstObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_object_unparent;
  call_wrap_v ((::GstObject*) (gobj_()));
}

// void gst_object_unref (gpointer object);
// void gst_object_unref (::GstObject* object);
// IGNORE; marked ignore

static char* _field_name_get (const ::GstObject* obj) { return (char*) obj->name; }
// char* Object::name (const ::GstObject* obj);
// char* Object::name (const ::GstObject* obj);
std::string base::ObjectBase::name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GstObject* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_get;
  auto _temp_ret = call_wrap_v ((const ::GstObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GstObject* _field_parent_get (const ::GstObject* obj) { return (::GstObject*) obj->parent; }
// ::GstObject* Object::parent (const ::GstObject* obj);
// ::GstObject* Object::parent (const ::GstObject* obj);
Gst::Object base::ObjectBase::parent_ () const noexcept
{
  typedef ::GstObject* (*call_wrap_t) (const ::GstObject* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_parent_get;
  auto _temp_ret = call_wrap_v ((const ::GstObject*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static guint32 _field_flags_get (const ::GstObject* obj) { return (guint32) obj->flags; }
// guint32 Object::flags (const ::GstObject* obj);
// guint32 Object::flags (const ::GstObject* obj);
guint32 base::ObjectBase::flags_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GstObject* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_get;
  auto _temp_ret = call_wrap_v ((const ::GstObject*) (gobj_()));
  return _temp_ret;
}

static void _field_flags_set (::GstObject* obj, guint32 _value) { obj->flags = (decltype(obj->flags)) _value; }
//  Object::flags (::GstObject* obj, guint32 _value);
// void Object::flags (::GstObject* obj, guint32 _value);
void base::ObjectBase::flags_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstObject* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstObject*) (gobj_()), (guint32) (_value_to_c));
}



} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/object_extra_def_impl.hpp>)
#include <gst/object_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/object_extra_impl.hpp>)
#include <gst/object_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void ObjectClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstObjectClass *methods = (::GstObjectClass *) class_struct;
  (void) methods;

  methods->deep_notify = (decltype (methods->deep_notify)) detail::method_wrapper<self, void (*) (Gst::Object orig, GObject::ParamSpec pspec), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::deep_notify_>;
}

// void Object::deep_notify (GstObject* object, GstObject* orig, GParamSpec* pspec);
// void Object::deep_notify (::GstObject* object, ::GstObject* orig, ::GParamSpec* pspec);
void ObjectClass::deep_notify_ (Gst::Object orig, GObject::ParamSpec pspec) noexcept
{
  if (!get_struct_()->deep_notify) return ;
  typedef void (*call_wrap_t) (::GstObject* object, ::GstObject* orig, ::GParamSpec* pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->deep_notify;
  auto pspec_to_c = gi::unwrap (pspec, gi::transfer_none, gi::direction_in);
  auto orig_to_c = gi::unwrap (orig, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstObject*) (gobj_()), (::GstObject*) (orig_to_c), (::GParamSpec*) (pspec_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
