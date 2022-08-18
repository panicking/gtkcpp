// AUTO-GENERATED

#ifndef _GI_GTK_ICONFACTORY_HPP_
#define _GI_GTK_ICONFACTORY_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Buildable;
class IconSet;

class IconFactory;

namespace base {


#define GI_GTK_ICONFACTORY_BASE base::IconFactoryBase
class IconFactoryBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkIconFactory BaseObjectType;

IconFactoryBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_icon_factory_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

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

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/iconfactory_extra_def.hpp>)
#include <gtk/iconfactory_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/iconfactory_extra.hpp>)
#include <gtk/iconfactory_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class IconFactory : public GI_GTK_ICONFACTORY_BASE
{ typedef GI_GTK_ICONFACTORY_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkIconFactory>
{ typedef Gtk::IconFactory type; }; 

} // namespace repository

} // namespace gi

#include "buildable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class IconFactoryClassDef
{
typedef IconFactoryClassDef self;
public:
typedef Gtk::IconFactory instance_type;
typedef ::GtkIconFactoryClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class IconFactoryClass: public detail::ClassTemplate<Gtk::impl::internal::IconFactoryClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl>
{
typedef IconFactoryClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::IconFactoryClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::BuildableIfaceClassImpl GtkBuildableIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using IconFactoryImpl = detail::ObjectImpl<IconFactory, internal::IconFactoryClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
