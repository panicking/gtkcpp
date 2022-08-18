// AUTO-GENERATED

#ifndef _GI_GTK_ACCELGROUP_IMPL_HPP_
#define _GI_GTK_ACCELGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkAccelGroup* gtk_accel_group_new ();
// ::GtkAccelGroup* gtk_accel_group_new ();
Gtk::AccelGroup base::AccelGroupBase::new_ () noexcept
{
  typedef ::GtkAccelGroup* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_group_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkAccelGroup* gtk_accel_group_from_accel_closure (GClosure* closure);
// ::GtkAccelGroup* gtk_accel_group_from_accel_closure (::GClosure* closure);
Gtk::AccelGroup base::AccelGroupBase::from_accel_closure (GObject::Closure closure) noexcept
{
  typedef ::GtkAccelGroup* (*call_wrap_t) (::GClosure* closure);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_group_from_accel_closure;
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GClosure*) (closure_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_accel_group_activate (GtkAccelGroup* accel_group, GQuark accel_quark, GObject* acceleratable, guint accel_key, GdkModifierType accel_mods);
// gboolean gtk_accel_group_activate (::GtkAccelGroup* accel_group, ::GQuark accel_quark, ::GObject* acceleratable, guint accel_key, ::GdkModifierType accel_mods);
bool base::AccelGroupBase::activate (::GQuark accel_quark, GObject::Object acceleratable, guint accel_key, Gdk::ModifierType accel_mods) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAccelGroup* accel_group, ::GQuark accel_quark, ::GObject* acceleratable, guint accel_key, ::GdkModifierType accel_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_group_activate;
  auto accel_mods_to_c = gi::unwrap (accel_mods);
  auto accel_key_to_c = accel_key;
  auto acceleratable_to_c = gi::unwrap (acceleratable, gi::transfer_none, gi::direction_in);
  auto accel_quark_to_c = accel_quark;
  auto _temp_ret = call_wrap_v ((::GtkAccelGroup*) (gobj_()), (::GQuark) (accel_quark_to_c), (::GObject*) (acceleratable_to_c), (guint) (accel_key_to_c), (::GdkModifierType) (accel_mods_to_c));
  return _temp_ret;
}

// void gtk_accel_group_connect (GtkAccelGroup* accel_group, guint accel_key, GdkModifierType accel_mods, GtkAccelFlags accel_flags, GClosure* closure);
// void gtk_accel_group_connect (::GtkAccelGroup* accel_group, guint accel_key, ::GdkModifierType accel_mods, ::GtkAccelFlags accel_flags, ::GClosure* closure);
void base::AccelGroupBase::connect (guint accel_key, Gdk::ModifierType accel_mods, Gtk::AccelFlags accel_flags, GObject::Closure closure) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccelGroup* accel_group, guint accel_key, ::GdkModifierType accel_mods, ::GtkAccelFlags accel_flags, ::GClosure* closure);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_group_connect;
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none, gi::direction_in);
  auto accel_flags_to_c = gi::unwrap (accel_flags);
  auto accel_mods_to_c = gi::unwrap (accel_mods);
  auto accel_key_to_c = accel_key;
  call_wrap_v ((::GtkAccelGroup*) (gobj_()), (guint) (accel_key_to_c), (::GdkModifierType) (accel_mods_to_c), (::GtkAccelFlags) (accel_flags_to_c), (::GClosure*) (closure_to_c));
}

// void gtk_accel_group_connect_by_path (GtkAccelGroup* accel_group, const gchar* accel_path, GClosure* closure);
// void gtk_accel_group_connect_by_path (::GtkAccelGroup* accel_group, const char* accel_path, ::GClosure* closure);
void base::AccelGroupBase::connect_by_path (const std::string & accel_path, GObject::Closure closure) noexcept
{
  typedef void (*call_wrap_t) (::GtkAccelGroup* accel_group, const char* accel_path, ::GClosure* closure);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_group_connect_by_path;
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none, gi::direction_in);
  auto accel_path_to_c = gi::unwrap (accel_path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAccelGroup*) (gobj_()), (const char*) (accel_path_to_c), (::GClosure*) (closure_to_c));
}

// gboolean gtk_accel_group_disconnect (GtkAccelGroup* accel_group, GClosure* closure);
// gboolean gtk_accel_group_disconnect (::GtkAccelGroup* accel_group, ::GClosure* closure);
bool base::AccelGroupBase::disconnect (GObject::Closure closure) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAccelGroup* accel_group, ::GClosure* closure);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_group_disconnect;
  auto closure_to_c = gi::unwrap (closure, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkAccelGroup*) (gobj_()), (::GClosure*) (closure_to_c));
  return _temp_ret;
}
bool base::AccelGroupBase::disconnect () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAccelGroup* accel_group, ::GClosure* closure);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_group_disconnect;
  auto closure_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkAccelGroup*) (gobj_()), (::GClosure*) (closure_to_c));
  return _temp_ret;
}

// gboolean gtk_accel_group_disconnect_key (GtkAccelGroup* accel_group, guint accel_key, GdkModifierType accel_mods);
// gboolean gtk_accel_group_disconnect_key (::GtkAccelGroup* accel_group, guint accel_key, ::GdkModifierType accel_mods);
bool base::AccelGroupBase::disconnect_key (guint accel_key, Gdk::ModifierType accel_mods) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAccelGroup* accel_group, guint accel_key, ::GdkModifierType accel_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_group_disconnect_key;
  auto accel_mods_to_c = gi::unwrap (accel_mods);
  auto accel_key_to_c = accel_key;
  auto _temp_ret = call_wrap_v ((::GtkAccelGroup*) (gobj_()), (guint) (accel_key_to_c), (::GdkModifierType) (accel_mods_to_c));
  return _temp_ret;
}

// GtkAccelKey* gtk_accel_group_find (GtkAccelGroup* accel_group, GtkAccelGroupFindFunc find_func, gpointer data);
// ::GtkAccelKey* gtk_accel_group_find (::GtkAccelGroup* accel_group, Gtk::AccelGroupFindFunc::cfunction_type find_func, void* data);
Gtk::AccelKey base::AccelGroupBase::find (Gtk::AccelGroupFindFunc find_func) noexcept
{
  typedef ::GtkAccelKey* (*call_wrap_t) (::GtkAccelGroup* accel_group, Gtk::AccelGroupFindFunc::cfunction_type find_func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_group_find;
  auto find_func_wrap_ = find_func ? unwrap (std::move (find_func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(find_func_wrap_)>::type> find_func_wrap__sp (find_func_wrap_);
  auto _temp_ret = call_wrap_v ((::GtkAccelGroup*) (gobj_()), (Gtk::AccelGroupFindFunc::cfunction_type) (find_func_wrap_ ? &find_func_wrap_->wrapper : nullptr), (void*) (find_func_wrap_));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_accel_group_get_is_locked (GtkAccelGroup* accel_group);
// gboolean gtk_accel_group_get_is_locked (::GtkAccelGroup* accel_group);
bool base::AccelGroupBase::get_is_locked () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAccelGroup* accel_group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_group_get_is_locked;
  auto _temp_ret = call_wrap_v ((::GtkAccelGroup*) (gobj_()));
  return _temp_ret;
}

// GdkModifierType gtk_accel_group_get_modifier_mask (GtkAccelGroup* accel_group);
// ::GdkModifierType gtk_accel_group_get_modifier_mask (::GtkAccelGroup* accel_group);
Gdk::ModifierType base::AccelGroupBase::get_modifier_mask () noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) (::GtkAccelGroup* accel_group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_group_get_modifier_mask;
  auto _temp_ret = call_wrap_v ((::GtkAccelGroup*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_accel_group_lock (GtkAccelGroup* accel_group);
// void gtk_accel_group_lock (::GtkAccelGroup* accel_group);
void base::AccelGroupBase::lock () noexcept
{
  typedef void (*call_wrap_t) (::GtkAccelGroup* accel_group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_group_lock;
  call_wrap_v ((::GtkAccelGroup*) (gobj_()));
}

// GtkAccelGroupEntry* gtk_accel_group_query (GtkAccelGroup* accel_group, guint accel_key, GdkModifierType accel_mods, guint* n_entries);
// ::GtkAccelGroupEntry** gtk_accel_group_query (::GtkAccelGroup* accel_group, guint accel_key, ::GdkModifierType accel_mods, guint* n_entries);
// SKIP; inconsistent return  pointer depth (1 vs 2)

// void gtk_accel_group_unlock (GtkAccelGroup* accel_group);
// void gtk_accel_group_unlock (::GtkAccelGroup* accel_group);
void base::AccelGroupBase::unlock () noexcept
{
  typedef void (*call_wrap_t) (::GtkAccelGroup* accel_group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_group_unlock;
  call_wrap_v ((::GtkAccelGroup*) (gobj_()));
}




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accelgroup_extra_def_impl.hpp>)
#include <gtk/accelgroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accelgroup_extra_impl.hpp>)
#include <gtk/accelgroup_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void AccelGroupClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkAccelGroupClass *methods = (::GtkAccelGroupClass *) class_struct;
  (void) methods;

  methods->accel_changed = (decltype (methods->accel_changed)) detail::method_wrapper<self, void (*) (guint keyval, Gdk::ModifierType modifier, GObject::Closure accel_closure), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::accel_changed_>;
}

// void AccelGroup::accel_changed (GtkAccelGroup* accel_group, guint keyval, GdkModifierType modifier, GClosure* accel_closure);
// void AccelGroup::accel_changed (::GtkAccelGroup* accel_group, guint keyval, ::GdkModifierType modifier, ::GClosure* accel_closure);
void AccelGroupClass::accel_changed_ (guint keyval, Gdk::ModifierType modifier, GObject::Closure accel_closure) noexcept
{
  if (!get_struct_()->accel_changed) return ;
  typedef void (*call_wrap_t) (::GtkAccelGroup* accel_group, guint keyval, ::GdkModifierType modifier, ::GClosure* accel_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->accel_changed;
  auto accel_closure_to_c = gi::unwrap (accel_closure, gi::transfer_none, gi::direction_in);
  auto modifier_to_c = gi::unwrap (modifier);
  auto keyval_to_c = keyval;
  call_wrap_v ((::GtkAccelGroup*) (gobj_()), (guint) (keyval_to_c), (::GdkModifierType) (modifier_to_c), (::GClosure*) (accel_closure_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
