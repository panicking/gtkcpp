// AUTO-GENERATED

#ifndef _GI_GTK_LINKBUTTONACCESSIBLE_IMPL_HPP_
#define _GI_GTK_LINKBUTTONACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::HyperlinkImpl LinkButtonAccessibleBase::interface_ (gi::interface_tag<Atk::HyperlinkImpl>)
{ return gi::wrap ((Atk::HyperlinkImpl::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

LinkButtonAccessibleBase::operator Atk::HyperlinkImpl ()
{ return interface_ (gi::interface_tag<Atk::HyperlinkImpl>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/linkbuttonaccessible_extra_def_impl.hpp>)
#include <gtk/linkbuttonaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/linkbuttonaccessible_extra_impl.hpp>)
#include <gtk/linkbuttonaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void LinkButtonAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkLinkButtonAccessibleClass *methods = (::GtkLinkButtonAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
