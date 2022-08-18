// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEPLUGIN_IMPL_HPP_
#define _GI_GOBJECT_TYPEPLUGIN_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

// void g_type_plugin_complete_interface_info (GTypePlugin* plugin, GType instance_type, GType interface_type, GInterfaceInfo* info);
// void g_type_plugin_complete_interface_info (::GTypePlugin* plugin, GType instance_type, GType interface_type, ::GInterfaceInfo* info);
void base::TypePluginBase::complete_interface_info (GType instance_type, GType interface_type, GObject::InterfaceInfo info) noexcept
{
  typedef void (*call_wrap_t) (::GTypePlugin* plugin, GType instance_type, GType interface_type, ::GInterfaceInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_plugin_complete_interface_info;
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  auto interface_type_to_c = interface_type;
  auto instance_type_to_c = instance_type;
  call_wrap_v ((::GTypePlugin*) (gobj_()), (GType) (instance_type_to_c), (GType) (interface_type_to_c), (::GInterfaceInfo*) (info_to_c));
}

// void g_type_plugin_complete_type_info (GTypePlugin* plugin, GType g_type, GTypeInfo* info, GTypeValueTable* value_table);
// void g_type_plugin_complete_type_info (::GTypePlugin* plugin, GType g_type, ::GTypeInfo* info, ::GTypeValueTable* value_table);
void base::TypePluginBase::complete_type_info (GType g_type, GObject::TypeInfo info, GObject::TypeValueTable value_table) noexcept
{
  typedef void (*call_wrap_t) (::GTypePlugin* plugin, GType g_type, ::GTypeInfo* info, ::GTypeValueTable* value_table);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_plugin_complete_type_info;
  auto value_table_to_c = gi::unwrap (value_table, gi::transfer_none, gi::direction_in);
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  auto g_type_to_c = g_type;
  call_wrap_v ((::GTypePlugin*) (gobj_()), (GType) (g_type_to_c), (::GTypeInfo*) (info_to_c), (::GTypeValueTable*) (value_table_to_c));
}

// void g_type_plugin_unuse (GTypePlugin* plugin);
// void g_type_plugin_unuse (::GTypePlugin* plugin);
void base::TypePluginBase::unuse () noexcept
{
  typedef void (*call_wrap_t) (::GTypePlugin* plugin);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_plugin_unuse;
  call_wrap_v ((::GTypePlugin*) (gobj_()));
}

// void g_type_plugin_use (GTypePlugin* plugin);
// void g_type_plugin_use (::GTypePlugin* plugin);
void base::TypePluginBase::use () noexcept
{
  typedef void (*call_wrap_t) (::GTypePlugin* plugin);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_plugin_use;
  call_wrap_v ((::GTypePlugin*) (gobj_()));
}


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typeplugin_extra_def_impl.hpp>)
#include <gobject/typeplugin_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typeplugin_extra_impl.hpp>)
#include <gobject/typeplugin_extra_impl.hpp>
#endif
#endif

#endif
