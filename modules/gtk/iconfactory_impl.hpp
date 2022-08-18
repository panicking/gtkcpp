// AUTO-GENERATED

#ifndef _GI_GTK_ICONFACTORY_IMPL_HPP_
#define _GI_GTK_ICONFACTORY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable IconFactoryBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

IconFactoryBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// GtkIconFactory* gtk_icon_factory_new ();
// ::GtkIconFactory* gtk_icon_factory_new ();
// IGNORE; deprecated

// GtkIconSet* gtk_icon_factory_lookup_default (const gchar* stock_id);
// ::GtkIconSet* gtk_icon_factory_lookup_default (const char* stock_id);
// IGNORE; deprecated

// void gtk_icon_factory_add (GtkIconFactory* factory, const gchar* stock_id, GtkIconSet* icon_set);
// void gtk_icon_factory_add (::GtkIconFactory* factory, const char* stock_id, ::GtkIconSet* icon_set);
// IGNORE; deprecated

// void gtk_icon_factory_add_default (GtkIconFactory* factory);
// void gtk_icon_factory_add_default (::GtkIconFactory* factory);
// IGNORE; deprecated

// GtkIconSet* gtk_icon_factory_lookup (GtkIconFactory* factory, const gchar* stock_id);
// ::GtkIconSet* gtk_icon_factory_lookup (::GtkIconFactory* factory, const char* stock_id);
// IGNORE; deprecated

// void gtk_icon_factory_remove_default (GtkIconFactory* factory);
// void gtk_icon_factory_remove_default (::GtkIconFactory* factory);
// IGNORE; deprecated


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/iconfactory_extra_def_impl.hpp>)
#include <gtk/iconfactory_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/iconfactory_extra_impl.hpp>)
#include <gtk/iconfactory_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void IconFactoryClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkIconFactoryClass *methods = (::GtkIconFactoryClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
