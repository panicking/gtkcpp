// AUTO-GENERATED

#ifndef _GI_GOBJECT__CALLBACKS_HPP_
#define _GI_GOBJECT__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace GObject {

class Binding;
class Closure;
class InterfaceInfo;
class Object;
class ParamSpec;
class SignalInvocationHint;
class TypeClass;
class TypeInfo;
class TypeInstance;
class TypeInterface;
class TypePlugin;
class TypeValueTable;
class Value;

// typedef void (*GBaseFinalizeFunc) (gpointer g_class);
// typedef void (*GBaseFinalizeFunc) (::GTypeClass* g_class);
// SKIP; not a callback since no user_data

// typedef void (*GBaseInitFunc) (gpointer g_class);
// typedef void (*GBaseInitFunc) (::GTypeClass* g_class);
// SKIP; not a callback since no user_data

// typedef gboolean (*GBindingTransformFunc) (GBinding* binding, const GValue* from_value, GValue* to_value, gpointer user_data);
// typedef gboolean (*GBindingTransformFunc) (::GBinding* binding, const ::GValue* from_value, ::GValue* to_value, void* user_data);
typedef gi::detail::callback<bool(GObject::Binding binding, const GObject::Value & from_value, GObject::Value to_value), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> BindingTransformFunc;

// typedef gpointer (*GBoxedCopyFunc) (gpointer boxed);
// typedef void* (*GBoxedCopyFunc) (void* boxed);
// SKIP; not a callback since no user_data

// typedef void (*GBoxedFreeFunc) (gpointer boxed);
// typedef void (*GBoxedFreeFunc) (void* boxed);
// SKIP; not a callback since no user_data

// typedef void (*GCallback) ();
// typedef void (*GCallback) ();
// SKIP; not a callback since no user_data

// typedef void (*GClassFinalizeFunc) (gpointer g_class, gpointer class_data);
// typedef void (*GClassFinalizeFunc) (::GTypeClass* g_class, void* class_data);
// SKIP; not a callback since no user_data

// typedef void (*GClassInitFunc) (gpointer g_class, gpointer class_data);
// typedef void (*GClassInitFunc) (::GTypeClass* g_class, void* class_data);
// SKIP; not a callback since no user_data

// typedef void (*GClosureMarshal) (GClosure* closure, GValue* return_value, guint n_param_values, const GValue* param_values, gpointer invocation_hint, gpointer marshal_data);
// typedef void (*GClosureMarshal) (::GClosure* closure, ::GValue* return_value, guint n_param_values, const ::GValue** param_values, void* invocation_hint, void* marshal_data);
// SKIP; callback container parameter not supported

// typedef void (*GClosureNotify) (gpointer data, GClosure* closure);
// typedef void (*GClosureNotify) (void* data, ::GClosure* closure);
// SKIP; not a callback since no user_data

// typedef void (*GInstanceInitFunc) (GTypeInstance* instance, gpointer g_class);
// typedef void (*GInstanceInitFunc) (::GTypeInstance* instance, ::GTypeClass* g_class);
// SKIP; not a callback since no user_data

// typedef void (*GInterfaceFinalizeFunc) (gpointer g_iface, gpointer iface_data);
// typedef void (*GInterfaceFinalizeFunc) (::GTypeInterface* g_iface, void* iface_data);
// SKIP; not a callback since no user_data

// typedef void (*GInterfaceInitFunc) (gpointer g_iface, gpointer iface_data);
// typedef void (*GInterfaceInitFunc) (::GTypeInterface* g_iface, void* iface_data);
// SKIP; not a callback since no user_data

// typedef void (*GObjectFinalizeFunc) (GObject* object);
// typedef void (*GObjectFinalizeFunc) (::GObject* object);
// SKIP; not a callback since no user_data

// typedef void (*GObjectGetPropertyFunc) (GObject* object, guint property_id, GValue* value, GParamSpec* pspec);
// typedef void (*GObjectGetPropertyFunc) (::GObject* object, guint property_id, ::GValue* value, ::GParamSpec* pspec);
// SKIP; not a callback since no user_data

// typedef void (*GObjectSetPropertyFunc) (GObject* object, guint property_id, const GValue* value, GParamSpec* pspec);
// typedef void (*GObjectSetPropertyFunc) (::GObject* object, guint property_id, const ::GValue* value, ::GParamSpec* pspec);
// SKIP; not a callback since no user_data

// typedef gboolean (*GSignalAccumulator) (GSignalInvocationHint* ihint, GValue* return_accu, const GValue* handler_return, gpointer data);
// typedef gboolean (*GSignalAccumulator) (::GSignalInvocationHint* ihint, ::GValue* return_accu, const ::GValue* handler_return, void* data);
// SKIP; not a callback since no user_data

// typedef gboolean (*GSignalEmissionHook) (GSignalInvocationHint* ihint, guint n_param_values, const GValue* param_values, gpointer data);
// typedef gboolean (*GSignalEmissionHook) (::GSignalInvocationHint* ihint, guint n_param_values, const ::GValue** param_values, void* data);
// SKIP; callback container parameter not supported

// typedef void (*GToggleNotify) (gpointer data, GObject* object, gboolean is_last_ref);
// typedef void (*GToggleNotify) (void* data, ::GObject* object, gboolean is_last_ref);
// SKIP; not a callback since no user_data

// typedef gboolean (*GTypeClassCacheFunc) (gpointer cache_data, GTypeClass* g_class);
// typedef gboolean (*GTypeClassCacheFunc) (void* cache_data, ::GTypeClass* g_class);
// SKIP; not a callback since no user_data

// typedef void (*GTypeInterfaceCheckFunc) (gpointer check_data, gpointer g_iface);
// typedef void (*GTypeInterfaceCheckFunc) (void* check_data, ::GTypeInterface* g_iface);
// SKIP; not a callback since no user_data

// typedef void (*GTypePluginCompleteInterfaceInfo) (GTypePlugin* plugin, GType instance_type, GType interface_type, GInterfaceInfo* info);
// typedef void (*GTypePluginCompleteInterfaceInfo) (::GTypePlugin* plugin, GType instance_type, GType interface_type, ::GInterfaceInfo* info);
// SKIP; not a callback since no user_data

// typedef void (*GTypePluginCompleteTypeInfo) (GTypePlugin* plugin, GType g_type, GTypeInfo* info, GTypeValueTable* value_table);
// typedef void (*GTypePluginCompleteTypeInfo) (::GTypePlugin* plugin, GType g_type, ::GTypeInfo* info, ::GTypeValueTable* value_table);
// SKIP; not a callback since no user_data

// typedef void (*GTypePluginUnuse) (GTypePlugin* plugin);
// typedef void (*GTypePluginUnuse) (::GTypePlugin* plugin);
// SKIP; not a callback since no user_data

// typedef void (*GTypePluginUse) (GTypePlugin* plugin);
// typedef void (*GTypePluginUse) (::GTypePlugin* plugin);
// SKIP; not a callback since no user_data

// typedef void (*GVaClosureMarshal) (GClosure* closure, GValue* return_value, gpointer instance, va_list args, gpointer marshal_data, int n_params, GType* param_types);
// typedef void (*GVaClosureMarshal) (::GClosure* closure, ::GValue* return_value, ::GTypeInstance* instance,  args, void* marshal_data, gint n_params, GType* param_types);
// IGNORE; not introspectable, callback container parameter not supported

// typedef void (*GValueTransform) (const GValue* src_value, GValue* dest_value);
// typedef void (*GValueTransform) (const ::GValue* src_value, ::GValue* dest_value);
// SKIP; not a callback since no user_data

// typedef void (*GWeakNotify) (gpointer data, GObject* where_the_object_was);
// typedef void (*GWeakNotify) (void* data, ::GObject* where_the_object_was);
// SKIP; not a callback since no user_data

} // namespace GObject

} // namespace repository

} // namespace gi

#endif
