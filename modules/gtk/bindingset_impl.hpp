// AUTO-GENERATED

#ifndef _GI_GTK_BINDINGSET_IMPL_HPP_
#define _GI_GTK_BINDINGSET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static char* _field_set_name_get (const ::GtkBindingSet* obj) { return (char*) obj->set_name; }
// char* BindingSet::set_name (const ::GtkBindingSet* obj);
// char* BindingSet::set_name (const ::GtkBindingSet* obj);
std::string base::BindingSetBase::set_name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GtkBindingSet* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_set_name_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBindingSet*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint _field_priority_get (const ::GtkBindingSet* obj) { return (gint) obj->priority; }
// gint BindingSet::priority (const ::GtkBindingSet* obj);
// gint BindingSet::priority (const ::GtkBindingSet* obj);
gint base::BindingSetBase::priority_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkBindingSet* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_priority_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBindingSet*) (gobj_()));
  return _temp_ret;
}

static void _field_priority_set (::GtkBindingSet* obj, gint _value) { obj->priority = (decltype(obj->priority)) _value; }
//  BindingSet::priority (::GtkBindingSet* obj, gint _value);
// void BindingSet::priority (::GtkBindingSet* obj, gint _value);
void base::BindingSetBase::priority_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkBindingSet* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_priority_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkBindingSet*) (gobj_()), (gint) (_value_to_c));
}

static ::GtkBindingEntry* _field_entries_get (const ::GtkBindingSet* obj) { return (::GtkBindingEntry*) obj->entries; }
// ::GtkBindingEntry* BindingSet::entries (const ::GtkBindingSet* obj);
// ::GtkBindingEntry* BindingSet::entries (const ::GtkBindingSet* obj);
Gtk::BindingEntry base::BindingSetBase::entries_ () const noexcept
{
  typedef ::GtkBindingEntry* (*call_wrap_t) (const ::GtkBindingSet* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_entries_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBindingSet*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GtkBindingEntry* _field_current_get (const ::GtkBindingSet* obj) { return (::GtkBindingEntry*) obj->current; }
// ::GtkBindingEntry* BindingSet::current (const ::GtkBindingSet* obj);
// ::GtkBindingEntry* BindingSet::current (const ::GtkBindingSet* obj);
Gtk::BindingEntry base::BindingSetBase::current_ () const noexcept
{
  typedef ::GtkBindingEntry* (*call_wrap_t) (const ::GtkBindingSet* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_current_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBindingSet*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static guint _field_parsed_get (const ::GtkBindingSet* obj) { return (guint) obj->parsed; }
// guint BindingSet::parsed (const ::GtkBindingSet* obj);
// guint BindingSet::parsed (const ::GtkBindingSet* obj);
guint base::BindingSetBase::parsed_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkBindingSet* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_parsed_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBindingSet*) (gobj_()));
  return _temp_ret;
}

static void _field_parsed_set (::GtkBindingSet* obj, guint _value) { obj->parsed = (decltype(obj->parsed)) _value; }
//  BindingSet::parsed (::GtkBindingSet* obj, guint _value);
// void BindingSet::parsed (::GtkBindingSet* obj, guint _value);
void base::BindingSetBase::parsed_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkBindingSet* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_parsed_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkBindingSet*) (gobj_()), (guint) (_value_to_c));
}

// gboolean gtk_binding_set_activate (GtkBindingSet* binding_set, guint keyval, GdkModifierType modifiers, GObject* object);
// gboolean gtk_binding_set_activate (::GtkBindingSet* binding_set, guint keyval, ::GdkModifierType modifiers, ::GObject* object);
bool base::BindingSetBase::activate (guint keyval, Gdk::ModifierType modifiers, GObject::Object object) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBindingSet* binding_set, guint keyval, ::GdkModifierType modifiers, ::GObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_binding_set_activate;
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  auto modifiers_to_c = gi::unwrap (modifiers);
  auto keyval_to_c = keyval;
  auto _temp_ret = call_wrap_v ((::GtkBindingSet*) (gobj_()), (guint) (keyval_to_c), (::GdkModifierType) (modifiers_to_c), (::GObject*) (object_to_c));
  return _temp_ret;
}

// void gtk_binding_set_add_path (GtkBindingSet* binding_set, GtkPathType path_type, const gchar* path_pattern, GtkPathPriorityType priority);
// void gtk_binding_set_add_path (::GtkBindingSet* binding_set,  path_type, const char* path_pattern,  priority);
// IGNORE; deprecated

// GtkBindingSet* gtk_binding_set_by_class (gpointer object_class);
// ::GtkBindingSet* gtk_binding_set_by_class (void* object_class);
Gtk::BindingSet base::BindingSetBase::by_class (void* object_class) noexcept
{
  typedef ::GtkBindingSet* (*call_wrap_t) (void* object_class);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_binding_set_by_class;
  auto object_class_to_c = object_class;
  auto _temp_ret = call_wrap_v ((void*) (object_class_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkBindingSet* gtk_binding_set_find (const gchar* set_name);
// ::GtkBindingSet* gtk_binding_set_find (const char* set_name);
Gtk::BindingSet base::BindingSetBase::find (const std::string & set_name) noexcept
{
  typedef ::GtkBindingSet* (*call_wrap_t) (const char* set_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_binding_set_find;
  auto set_name_to_c = gi::unwrap (set_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (set_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkBindingSet* gtk_binding_set_new (const gchar* set_name);
// ::GtkBindingSet* gtk_binding_set_new (const char* set_name);
Gtk::BindingSet base::BindingSetBase::new_ (const std::string & set_name) noexcept
{
  typedef ::GtkBindingSet* (*call_wrap_t) (const char* set_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_binding_set_new;
  auto set_name_to_c = gi::unwrap (set_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (set_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/bindingset_extra_def_impl.hpp>)
#include <gtk/bindingset_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/bindingset_extra_impl.hpp>)
#include <gtk/bindingset_extra_impl.hpp>
#endif
#endif

#endif
