// AUTO-GENERATED

#ifndef _GI_GTK_ENTRYACCESSIBLE_IMPL_HPP_
#define _GI_GTK_ENTRYACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::Action EntryAccessibleBase::interface_ (gi::interface_tag<Atk::Action>)
{ return gi::wrap ((Atk::Action::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

EntryAccessibleBase::operator Atk::Action ()
{ return interface_ (gi::interface_tag<Atk::Action>()); }

Atk::EditableText EntryAccessibleBase::interface_ (gi::interface_tag<Atk::EditableText>)
{ return gi::wrap ((Atk::EditableText::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

EntryAccessibleBase::operator Atk::EditableText ()
{ return interface_ (gi::interface_tag<Atk::EditableText>()); }

Atk::Text EntryAccessibleBase::interface_ (gi::interface_tag<Atk::Text>)
{ return gi::wrap ((Atk::Text::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

EntryAccessibleBase::operator Atk::Text ()
{ return interface_ (gi::interface_tag<Atk::Text>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/entryaccessible_extra_def_impl.hpp>)
#include <gtk/entryaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/entryaccessible_extra_impl.hpp>)
#include <gtk/entryaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void EntryAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkEntryAccessibleClass *methods = (::GtkEntryAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
