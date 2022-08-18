// AUTO-GENERATED

#ifndef _GI_GTK_BINDINGENTRY_IMPL_HPP_
#define _GI_GTK_BINDINGENTRY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static guint _field_keyval_get (const ::GtkBindingEntry* obj) { return (guint) obj->keyval; }
// guint BindingEntry::keyval (const ::GtkBindingEntry* obj);
// guint BindingEntry::keyval (const ::GtkBindingEntry* obj);
guint base::BindingEntryBase::keyval_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkBindingEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_keyval_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBindingEntry*) (gobj_()));
  return _temp_ret;
}

static void _field_keyval_set (::GtkBindingEntry* obj, guint _value) { obj->keyval = (decltype(obj->keyval)) _value; }
//  BindingEntry::keyval (::GtkBindingEntry* obj, guint _value);
// void BindingEntry::keyval (::GtkBindingEntry* obj, guint _value);
void base::BindingEntryBase::keyval_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkBindingEntry* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_keyval_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkBindingEntry*) (gobj_()), (guint) (_value_to_c));
}

static ::GdkModifierType _field_modifiers_get (const ::GtkBindingEntry* obj) { return (::GdkModifierType) obj->modifiers; }
// ::GdkModifierType BindingEntry::modifiers (const ::GtkBindingEntry* obj);
// ::GdkModifierType BindingEntry::modifiers (const ::GtkBindingEntry* obj);
Gdk::ModifierType base::BindingEntryBase::modifiers_ () const noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) (const ::GtkBindingEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_modifiers_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBindingEntry*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_modifiers_set (::GtkBindingEntry* obj, ::GdkModifierType _value) { obj->modifiers = (decltype(obj->modifiers)) _value; }
//  BindingEntry::modifiers (::GtkBindingEntry* obj, ::GdkModifierType _value);
// void BindingEntry::modifiers (::GtkBindingEntry* obj, ::GdkModifierType _value);
void base::BindingEntryBase::modifiers_ (Gdk::ModifierType _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkBindingEntry* obj, ::GdkModifierType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_modifiers_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GtkBindingEntry*) (gobj_()), (::GdkModifierType) (_value_to_c));
}

static ::GtkBindingSet* _field_binding_set_get (const ::GtkBindingEntry* obj) { return (::GtkBindingSet*) obj->binding_set; }
// ::GtkBindingSet* BindingEntry::binding_set (const ::GtkBindingEntry* obj);
// ::GtkBindingSet* BindingEntry::binding_set (const ::GtkBindingEntry* obj);
Gtk::BindingSet base::BindingEntryBase::binding_set_ () const noexcept
{
  typedef ::GtkBindingSet* (*call_wrap_t) (const ::GtkBindingEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_binding_set_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBindingEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static guint _field_destroyed_get (const ::GtkBindingEntry* obj) { return (guint) obj->destroyed; }
// guint BindingEntry::destroyed (const ::GtkBindingEntry* obj);
// guint BindingEntry::destroyed (const ::GtkBindingEntry* obj);
guint base::BindingEntryBase::destroyed_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkBindingEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_destroyed_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBindingEntry*) (gobj_()));
  return _temp_ret;
}

static void _field_destroyed_set (::GtkBindingEntry* obj, guint _value) { obj->destroyed = (decltype(obj->destroyed)) _value; }
//  BindingEntry::destroyed (::GtkBindingEntry* obj, guint _value);
// void BindingEntry::destroyed (::GtkBindingEntry* obj, guint _value);
void base::BindingEntryBase::destroyed_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkBindingEntry* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_destroyed_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkBindingEntry*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_in_emission_get (const ::GtkBindingEntry* obj) { return (guint) obj->in_emission; }
// guint BindingEntry::in_emission (const ::GtkBindingEntry* obj);
// guint BindingEntry::in_emission (const ::GtkBindingEntry* obj);
guint base::BindingEntryBase::in_emission_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkBindingEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_in_emission_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBindingEntry*) (gobj_()));
  return _temp_ret;
}

static void _field_in_emission_set (::GtkBindingEntry* obj, guint _value) { obj->in_emission = (decltype(obj->in_emission)) _value; }
//  BindingEntry::in_emission (::GtkBindingEntry* obj, guint _value);
// void BindingEntry::in_emission (::GtkBindingEntry* obj, guint _value);
void base::BindingEntryBase::in_emission_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkBindingEntry* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_in_emission_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkBindingEntry*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_marks_unbound_get (const ::GtkBindingEntry* obj) { return (guint) obj->marks_unbound; }
// guint BindingEntry::marks_unbound (const ::GtkBindingEntry* obj);
// guint BindingEntry::marks_unbound (const ::GtkBindingEntry* obj);
guint base::BindingEntryBase::marks_unbound_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkBindingEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_marks_unbound_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBindingEntry*) (gobj_()));
  return _temp_ret;
}

static void _field_marks_unbound_set (::GtkBindingEntry* obj, guint _value) { obj->marks_unbound = (decltype(obj->marks_unbound)) _value; }
//  BindingEntry::marks_unbound (::GtkBindingEntry* obj, guint _value);
// void BindingEntry::marks_unbound (::GtkBindingEntry* obj, guint _value);
void base::BindingEntryBase::marks_unbound_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkBindingEntry* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_marks_unbound_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkBindingEntry*) (gobj_()), (guint) (_value_to_c));
}

static ::GtkBindingEntry* _field_set_next_get (const ::GtkBindingEntry* obj) { return (::GtkBindingEntry*) obj->set_next; }
// ::GtkBindingEntry* BindingEntry::set_next (const ::GtkBindingEntry* obj);
// ::GtkBindingEntry* BindingEntry::set_next (const ::GtkBindingEntry* obj);
Gtk::BindingEntry base::BindingEntryBase::set_next_ () const noexcept
{
  typedef ::GtkBindingEntry* (*call_wrap_t) (const ::GtkBindingEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_set_next_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBindingEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GtkBindingEntry* _field_hash_next_get (const ::GtkBindingEntry* obj) { return (::GtkBindingEntry*) obj->hash_next; }
// ::GtkBindingEntry* BindingEntry::hash_next (const ::GtkBindingEntry* obj);
// ::GtkBindingEntry* BindingEntry::hash_next (const ::GtkBindingEntry* obj);
Gtk::BindingEntry base::BindingEntryBase::hash_next_ () const noexcept
{
  typedef ::GtkBindingEntry* (*call_wrap_t) (const ::GtkBindingEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_hash_next_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBindingEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GtkBindingSignal* _field_signals_get (const ::GtkBindingEntry* obj) { return (::GtkBindingSignal*) obj->signals; }
// ::GtkBindingSignal* BindingEntry::signals (const ::GtkBindingEntry* obj);
// ::GtkBindingSignal* BindingEntry::signals (const ::GtkBindingEntry* obj);
Gtk::BindingSignal base::BindingEntryBase::signals_ () const noexcept
{
  typedef ::GtkBindingSignal* (*call_wrap_t) (const ::GtkBindingEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_signals_get;
  auto _temp_ret = call_wrap_v ((const ::GtkBindingEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_binding_entry_add_signal (GtkBindingSet* binding_set, guint keyval, GdkModifierType modifiers, const gchar* signal_name, guint n_args);
// void gtk_binding_entry_add_signal (::GtkBindingSet* binding_set, guint keyval, ::GdkModifierType modifiers, const char* signal_name, guint n_args);
// IGNORE; not introspectable, varargs not supported

// GTokenType gtk_binding_entry_add_signal_from_string (GtkBindingSet* binding_set, const gchar* signal_desc);
// ::GTokenType gtk_binding_entry_add_signal_from_string (::GtkBindingSet* binding_set, const char* signal_desc);
GLib::TokenType base::BindingEntryBase::add_signal_from_string (Gtk::BindingSet binding_set, const std::string & signal_desc) noexcept
{
  typedef ::GTokenType (*call_wrap_t) (::GtkBindingSet* binding_set, const char* signal_desc);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_binding_entry_add_signal_from_string;
  auto signal_desc_to_c = gi::unwrap (signal_desc, gi::transfer_none, gi::direction_in);
  auto binding_set_to_c = gi::unwrap (binding_set, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkBindingSet*) (binding_set_to_c), (const char*) (signal_desc_to_c));
  return gi::wrap (_temp_ret);
}

// void gtk_binding_entry_add_signall (GtkBindingSet* binding_set, guint keyval, GdkModifierType modifiers, const gchar* signal_name, GSList* binding_args);
// void gtk_binding_entry_add_signall (::GtkBindingSet* binding_set, guint keyval, ::GdkModifierType modifiers, const char* signal_name, ::GSList* binding_args);
void base::BindingEntryBase::add_signall (Gtk::BindingSet binding_set, guint keyval, Gdk::ModifierType modifiers, const std::string & signal_name, const std::vector<Gtk::BindingArg> & binding_args) noexcept
{
  typedef void (*call_wrap_t) (::GtkBindingSet* binding_set, guint keyval, ::GdkModifierType modifiers, const char* signal_name, ::GSList* binding_args);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_binding_entry_add_signall;
  auto binding_args_i = detail::make_list_unwrap_range<::GSList> (binding_args);
  auto binding_args_w = unwrap (binding_args_i, gi::transfer_none, direction_in);
  auto binding_args_to_c = binding_args_w.gobj_(false);
  auto signal_name_to_c = gi::unwrap (signal_name, gi::transfer_none, gi::direction_in);
  auto modifiers_to_c = gi::unwrap (modifiers);
  auto keyval_to_c = keyval;
  auto binding_set_to_c = gi::unwrap (binding_set, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBindingSet*) (binding_set_to_c), (guint) (keyval_to_c), (::GdkModifierType) (modifiers_to_c), (const char*) (signal_name_to_c), (::GSList*) (binding_args_to_c));
}

// void gtk_binding_entry_remove (GtkBindingSet* binding_set, guint keyval, GdkModifierType modifiers);
// void gtk_binding_entry_remove (::GtkBindingSet* binding_set, guint keyval, ::GdkModifierType modifiers);
void base::BindingEntryBase::remove (Gtk::BindingSet binding_set, guint keyval, Gdk::ModifierType modifiers) noexcept
{
  typedef void (*call_wrap_t) (::GtkBindingSet* binding_set, guint keyval, ::GdkModifierType modifiers);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_binding_entry_remove;
  auto modifiers_to_c = gi::unwrap (modifiers);
  auto keyval_to_c = keyval;
  auto binding_set_to_c = gi::unwrap (binding_set, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBindingSet*) (binding_set_to_c), (guint) (keyval_to_c), (::GdkModifierType) (modifiers_to_c));
}

// void gtk_binding_entry_skip (GtkBindingSet* binding_set, guint keyval, GdkModifierType modifiers);
// void gtk_binding_entry_skip (::GtkBindingSet* binding_set, guint keyval, ::GdkModifierType modifiers);
void base::BindingEntryBase::skip (Gtk::BindingSet binding_set, guint keyval, Gdk::ModifierType modifiers) noexcept
{
  typedef void (*call_wrap_t) (::GtkBindingSet* binding_set, guint keyval, ::GdkModifierType modifiers);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_binding_entry_skip;
  auto modifiers_to_c = gi::unwrap (modifiers);
  auto keyval_to_c = keyval;
  auto binding_set_to_c = gi::unwrap (binding_set, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBindingSet*) (binding_set_to_c), (guint) (keyval_to_c), (::GdkModifierType) (modifiers_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/bindingentry_extra_def_impl.hpp>)
#include <gtk/bindingentry_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/bindingentry_extra_impl.hpp>)
#include <gtk/bindingentry_extra_impl.hpp>
#endif
#endif

#endif
