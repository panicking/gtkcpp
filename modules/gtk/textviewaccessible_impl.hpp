// AUTO-GENERATED

#ifndef _GI_GTK_TEXTVIEWACCESSIBLE_IMPL_HPP_
#define _GI_GTK_TEXTVIEWACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::EditableText TextViewAccessibleBase::interface_ (gi::interface_tag<Atk::EditableText>)
{ return gi::wrap ((Atk::EditableText::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TextViewAccessibleBase::operator Atk::EditableText ()
{ return interface_ (gi::interface_tag<Atk::EditableText>()); }

Atk::StreamableContent TextViewAccessibleBase::interface_ (gi::interface_tag<Atk::StreamableContent>)
{ return gi::wrap ((Atk::StreamableContent::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TextViewAccessibleBase::operator Atk::StreamableContent ()
{ return interface_ (gi::interface_tag<Atk::StreamableContent>()); }

Atk::Text TextViewAccessibleBase::interface_ (gi::interface_tag<Atk::Text>)
{ return gi::wrap ((Atk::Text::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TextViewAccessibleBase::operator Atk::Text ()
{ return interface_ (gi::interface_tag<Atk::Text>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textviewaccessible_extra_def_impl.hpp>)
#include <gtk/textviewaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textviewaccessible_extra_impl.hpp>)
#include <gtk/textviewaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TextViewAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkTextViewAccessibleClass *methods = (::GtkTextViewAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
