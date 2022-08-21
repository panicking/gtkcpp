// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEMODULE_IMPL_HPP_
#define _GI_GOBJECT_TYPEMODULE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

GObject::TypePlugin TypeModuleBase::interface_ (gi::interface_tag<GObject::TypePlugin>)
{ return gi::wrap ((GObject::TypePlugin::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TypeModuleBase::operator GObject::TypePlugin ()
{ return interface_ (gi::interface_tag<GObject::TypePlugin>()); }

// void g_type_module_add_interface (GTypeModule* module_, GType instance_type, GType interface_type, const GInterfaceInfo* interface_info);
// void g_type_module_add_interface (::GTypeModule* module_, GType instance_type, GType interface_type, const ::GInterfaceInfo* interface_info);
void base::TypeModuleBase::add_interface (GType instance_type, GType interface_type, const GObject::InterfaceInfo & interface_info) noexcept
{
  typedef void (*call_wrap_t) (::GTypeModule* module_, GType instance_type, GType interface_type, const ::GInterfaceInfo* interface_info);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_module_add_interface;
  auto interface_info_to_c = gi::unwrap (interface_info, gi::transfer_none, gi::direction_in);
  auto interface_type_to_c = interface_type;
  auto instance_type_to_c = instance_type;
  call_wrap_v ((::GTypeModule*) (gobj_()), (GType) (instance_type_to_c), (GType) (interface_type_to_c), (const ::GInterfaceInfo*) (interface_info_to_c));
}

// GType g_type_module_register_enum (GTypeModule* module_, const gchar* name, const GEnumValue* const_static_values);
// GType g_type_module_register_enum (::GTypeModule* module_, const char* name, const ::GEnumValue* const_static_values);
GType base::TypeModuleBase::register_enum (const std::string & name, const GObject::EnumValue & const_static_values) noexcept
{
  typedef GType (*call_wrap_t) (::GTypeModule* module_, const char* name, const ::GEnumValue* const_static_values);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_module_register_enum;
  auto const_static_values_to_c = gi::unwrap (const_static_values, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GTypeModule*) (gobj_()), (const char*) (name_to_c), (const ::GEnumValue*) (const_static_values_to_c));
  return _temp_ret;
}

// GType g_type_module_register_flags (GTypeModule* module_, const gchar* name, const GFlagsValue* const_static_values);
// GType g_type_module_register_flags (::GTypeModule* module_, const char* name, const ::GFlagsValue* const_static_values);
GType base::TypeModuleBase::register_flags (const std::string & name, const GObject::FlagsValue & const_static_values) noexcept
{
  typedef GType (*call_wrap_t) (::GTypeModule* module_, const char* name, const ::GFlagsValue* const_static_values);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_module_register_flags;
  auto const_static_values_to_c = gi::unwrap (const_static_values, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GTypeModule*) (gobj_()), (const char*) (name_to_c), (const ::GFlagsValue*) (const_static_values_to_c));
  return _temp_ret;
}

// GType g_type_module_register_type (GTypeModule* module_, GType parent_type, const gchar* type_name, const GTypeInfo* type_info, GTypeFlags flags);
// GType g_type_module_register_type (::GTypeModule* module_, GType parent_type, const char* type_name, const ::GTypeInfo* type_info, ::GTypeFlags flags);
GType base::TypeModuleBase::register_type (GType parent_type, const std::string & type_name, const GObject::TypeInfo & type_info, GObject::TypeFlags flags) noexcept
{
  typedef GType (*call_wrap_t) (::GTypeModule* module_, GType parent_type, const char* type_name, const ::GTypeInfo* type_info, ::GTypeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_module_register_type;
  auto flags_to_c = gi::unwrap (flags);
  auto type_info_to_c = gi::unwrap (type_info, gi::transfer_none, gi::direction_in);
  auto type_name_to_c = gi::unwrap (type_name, gi::transfer_none, gi::direction_in);
  auto parent_type_to_c = parent_type;
  auto _temp_ret = call_wrap_v ((::GTypeModule*) (gobj_()), (GType) (parent_type_to_c), (const char*) (type_name_to_c), (const ::GTypeInfo*) (type_info_to_c), (::GTypeFlags) (flags_to_c));
  return _temp_ret;
}

// void g_type_module_set_name (GTypeModule* module_, const gchar* name);
// void g_type_module_set_name (::GTypeModule* module_, const char* name);
void base::TypeModuleBase::set_name (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GTypeModule* module_, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_module_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTypeModule*) (gobj_()), (const char*) (name_to_c));
}

// void g_type_module_unuse (GTypeModule* module_);
// void g_type_module_unuse (::GTypeModule* module_);
void base::TypeModuleBase::unuse () noexcept
{
  typedef void (*call_wrap_t) (::GTypeModule* module_);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_module_unuse;
  call_wrap_v ((::GTypeModule*) (gobj_()));
}

// gboolean g_type_module_use (GTypeModule* module_);
// gboolean g_type_module_use (::GTypeModule* module_);
bool base::TypeModuleBase::use () noexcept
{
  typedef gboolean (*call_wrap_t) (::GTypeModule* module_);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_module_use;
  auto _temp_ret = call_wrap_v ((::GTypeModule*) (gobj_()));
  return _temp_ret;
}

static guint _field_use_count_get (const ::GTypeModule* obj) { return (guint) obj->use_count; }
// guint TypeModule::use_count (const ::GTypeModule* obj);
// guint TypeModule::use_count (const ::GTypeModule* obj);
guint base::TypeModuleBase::use_count_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GTypeModule* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_use_count_get;
  auto _temp_ret = call_wrap_v ((const ::GTypeModule*) (gobj_()));
  return _temp_ret;
}

static void _field_use_count_set (::GTypeModule* obj, guint _value) { obj->use_count = (decltype(obj->use_count)) _value; }
//  TypeModule::use_count (::GTypeModule* obj, guint _value);
// void TypeModule::use_count (::GTypeModule* obj, guint _value);
void base::TypeModuleBase::use_count_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GTypeModule* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_use_count_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GTypeModule*) (gobj_()), (guint) (_value_to_c));
}

static char* _field_name_get (const ::GTypeModule* obj) { return (char*) obj->name; }
// char* TypeModule::name (const ::GTypeModule* obj);
// char* TypeModule::name (const ::GTypeModule* obj);
std::string base::TypeModuleBase::name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GTypeModule* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_get;
  auto _temp_ret = call_wrap_v ((const ::GTypeModule*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typemodule_extra_def_impl.hpp>)
#include <gobject/typemodule_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typemodule_extra_impl.hpp>)
#include <gobject/typemodule_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

namespace impl {

namespace internal {

void TypeModuleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GTypeModuleClass *methods = (::GTypeModuleClass *) class_struct;
  (void) methods;

  methods->load = (decltype (methods->load)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::load_>;
  methods->unload = (decltype (methods->unload)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::unload_>;
}

// gboolean TypeModule::load (GTypeModule* module_);
// gboolean TypeModule::load (::GTypeModule* module_);
bool TypeModuleClass::load_ () noexcept
{
  if (!get_struct_()->load) return bool{};
  typedef gboolean (*call_wrap_t) (::GTypeModule* module_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->load;
  auto _temp_ret = call_wrap_v ((::GTypeModule*) (gobj_()));
  return _temp_ret;
}

// void TypeModule::unload (GTypeModule* module_);
// void TypeModule::unload (::GTypeModule* module_);
void TypeModuleClass::unload_ () noexcept
{
  if (!get_struct_()->unload) return ;
  typedef void (*call_wrap_t) (::GTypeModule* module_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unload;
  call_wrap_v ((::GTypeModule*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace GObject

} // namespace repository

} // namespace gi

#endif
