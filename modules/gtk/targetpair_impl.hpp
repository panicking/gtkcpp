// AUTO-GENERATED

#ifndef _GI_GTK_TARGETPAIR_IMPL_HPP_
#define _GI_GTK_TARGETPAIR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static guint _field_flags_get (const ::GtkTargetPair* obj) { return (guint) obj->flags; }
// guint TargetPair::flags (const ::GtkTargetPair* obj);
// guint TargetPair::flags (const ::GtkTargetPair* obj);
guint base::TargetPairBase::flags_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkTargetPair* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTargetPair*) (gobj_()));
  return _temp_ret;
}

static void _field_flags_set (::GtkTargetPair* obj, guint _value) { obj->flags = (decltype(obj->flags)) _value; }
//  TargetPair::flags (::GtkTargetPair* obj, guint _value);
// void TargetPair::flags (::GtkTargetPair* obj, guint _value);
void base::TargetPairBase::flags_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTargetPair* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTargetPair*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_info_get (const ::GtkTargetPair* obj) { return (guint) obj->info; }
// guint TargetPair::info (const ::GtkTargetPair* obj);
// guint TargetPair::info (const ::GtkTargetPair* obj);
guint base::TargetPairBase::info_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GtkTargetPair* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_info_get;
  auto _temp_ret = call_wrap_v ((const ::GtkTargetPair*) (gobj_()));
  return _temp_ret;
}

static void _field_info_set (::GtkTargetPair* obj, guint _value) { obj->info = (decltype(obj->info)) _value; }
//  TargetPair::info (::GtkTargetPair* obj, guint _value);
// void TargetPair::info (::GtkTargetPair* obj, guint _value);
void base::TargetPairBase::info_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTargetPair* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_info_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkTargetPair*) (gobj_()), (guint) (_value_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/targetpair_extra_def_impl.hpp>)
#include <gtk/targetpair_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/targetpair_extra_impl.hpp>)
#include <gtk/targetpair_extra_impl.hpp>
#endif
#endif

#endif
