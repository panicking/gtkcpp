// AUTO-GENERATED

#ifndef _GI_GTK_IMAGECELLACCESSIBLE_IMPL_HPP_
#define _GI_GTK_IMAGECELLACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::Image ImageCellAccessibleBase::interface_ (gi::interface_tag<Atk::Image>)
{ return gi::wrap ((Atk::Image::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ImageCellAccessibleBase::operator Atk::Image ()
{ return interface_ (gi::interface_tag<Atk::Image>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/imagecellaccessible_extra_def_impl.hpp>)
#include <gtk/imagecellaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/imagecellaccessible_extra_impl.hpp>)
#include <gtk/imagecellaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ImageCellAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkImageCellAccessibleClass *methods = (::GtkImageCellAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
