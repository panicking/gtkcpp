// AUTO-GENERATED

#ifndef _GI_GTK_TEXTCELLACCESSIBLE_IMPL_HPP_
#define _GI_GTK_TEXTCELLACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::Text TextCellAccessibleBase::interface_ (gi::interface_tag<Atk::Text>)
{ return gi::wrap ((Atk::Text::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TextCellAccessibleBase::operator Atk::Text ()
{ return interface_ (gi::interface_tag<Atk::Text>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textcellaccessible_extra_def_impl.hpp>)
#include <gtk/textcellaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textcellaccessible_extra_impl.hpp>)
#include <gtk/textcellaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TextCellAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkTextCellAccessibleClass *methods = (::GtkTextCellAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
