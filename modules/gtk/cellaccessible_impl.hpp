// AUTO-GENERATED

#ifndef _GI_GTK_CELLACCESSIBLE_IMPL_HPP_
#define _GI_GTK_CELLACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::Action CellAccessibleBase::interface_ (gi::interface_tag<Atk::Action>)
{ return gi::wrap ((Atk::Action::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

CellAccessibleBase::operator Atk::Action ()
{ return interface_ (gi::interface_tag<Atk::Action>()); }

Atk::Component CellAccessibleBase::interface_ (gi::interface_tag<Atk::Component>)
{ return gi::wrap ((Atk::Component::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

CellAccessibleBase::operator Atk::Component ()
{ return interface_ (gi::interface_tag<Atk::Component>()); }

Atk::TableCell CellAccessibleBase::interface_ (gi::interface_tag<Atk::TableCell>)
{ return gi::wrap ((Atk::TableCell::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

CellAccessibleBase::operator Atk::TableCell ()
{ return interface_ (gi::interface_tag<Atk::TableCell>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellaccessible_extra_def_impl.hpp>)
#include <gtk/cellaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellaccessible_extra_impl.hpp>)
#include <gtk/cellaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CellAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkCellAccessibleClass *methods = (::GtkCellAccessibleClass *) class_struct;
  (void) methods;

  methods->update_cache = (decltype (methods->update_cache)) detail::method_wrapper<self, void (*) (gboolean emit_signal), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::update_cache_>;
}

// void CellAccessible::update_cache (GtkCellAccessible* cell, gboolean emit_signal);
// void CellAccessible::update_cache (::GtkCellAccessible* cell, gboolean emit_signal);
void CellAccessibleClass::update_cache_ (gboolean emit_signal) noexcept
{
  if (!get_struct_()->update_cache) return ;
  typedef void (*call_wrap_t) (::GtkCellAccessible* cell, gboolean emit_signal);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->update_cache;
  auto emit_signal_to_c = emit_signal;
  call_wrap_v ((::GtkCellAccessible*) (gobj_()), (gboolean) (emit_signal_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
