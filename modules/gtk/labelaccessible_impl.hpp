// AUTO-GENERATED

#ifndef _GI_GTK_LABELACCESSIBLE_IMPL_HPP_
#define _GI_GTK_LABELACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::Hypertext LabelAccessibleBase::interface_ (gi::interface_tag<Atk::Hypertext>)
{ return gi::wrap ((Atk::Hypertext::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

LabelAccessibleBase::operator Atk::Hypertext ()
{ return interface_ (gi::interface_tag<Atk::Hypertext>()); }

Atk::Text LabelAccessibleBase::interface_ (gi::interface_tag<Atk::Text>)
{ return gi::wrap ((Atk::Text::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

LabelAccessibleBase::operator Atk::Text ()
{ return interface_ (gi::interface_tag<Atk::Text>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/labelaccessible_extra_def_impl.hpp>)
#include <gtk/labelaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/labelaccessible_extra_impl.hpp>)
#include <gtk/labelaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void LabelAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkLabelAccessibleClass *methods = (::GtkLabelAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
