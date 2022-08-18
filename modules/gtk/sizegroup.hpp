// AUTO-GENERATED

#ifndef _GI_GTK_SIZEGROUP_HPP_
#define _GI_GTK_SIZEGROUP_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Buildable;
class Widget;

class SizeGroup;

namespace base {


#define GI_GTK_SIZEGROUP_BASE base::SizeGroupBase
class SizeGroupBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkSizeGroup BaseObjectType;

SizeGroupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_size_group_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

// GtkSizeGroup* gtk_size_group_new (GtkSizeGroupMode mode);
// ::GtkSizeGroup* gtk_size_group_new (::GtkSizeGroupMode mode);
static GI_INLINE_DECL Gtk::SizeGroup new_ (Gtk::SizeGroupMode mode) noexcept;

// void gtk_size_group_add_widget (GtkSizeGroup* size_group, GtkWidget* widget);
// void gtk_size_group_add_widget (::GtkSizeGroup* size_group, ::GtkWidget* widget);
GI_INLINE_DECL void add_widget (Gtk::Widget widget) noexcept;

// gboolean gtk_size_group_get_ignore_hidden (GtkSizeGroup* size_group);
// gboolean gtk_size_group_get_ignore_hidden (::GtkSizeGroup* size_group);
// IGNORE; deprecated

// GtkSizeGroupMode gtk_size_group_get_mode (GtkSizeGroup* size_group);
// ::GtkSizeGroupMode gtk_size_group_get_mode (::GtkSizeGroup* size_group);
GI_INLINE_DECL Gtk::SizeGroupMode get_mode () noexcept;

// GSList* gtk_size_group_get_widgets (GtkSizeGroup* size_group);
// ::GSList* gtk_size_group_get_widgets (::GtkSizeGroup* size_group);
GI_INLINE_DECL std::vector<Gtk::Widget> get_widgets () noexcept;

// void gtk_size_group_remove_widget (GtkSizeGroup* size_group, GtkWidget* widget);
// void gtk_size_group_remove_widget (::GtkSizeGroup* size_group, ::GtkWidget* widget);
GI_INLINE_DECL void remove_widget (Gtk::Widget widget) noexcept;

// void gtk_size_group_set_ignore_hidden (GtkSizeGroup* size_group, gboolean ignore_hidden);
// void gtk_size_group_set_ignore_hidden (::GtkSizeGroup* size_group, gboolean ignore_hidden);
// IGNORE; deprecated

// void gtk_size_group_set_mode (GtkSizeGroup* size_group, GtkSizeGroupMode mode);
// void gtk_size_group_set_mode (::GtkSizeGroup* size_group, ::GtkSizeGroupMode mode);
GI_INLINE_DECL void set_mode (Gtk::SizeGroupMode mode) noexcept;

gi::property_proxy<bool, base::SizeGroupBase> property_ignore_hidden()
{ return gi::property_proxy<bool, base::SizeGroupBase> (*this, "ignore-hidden"); }
const gi::property_proxy<bool, base::SizeGroupBase> property_ignore_hidden() const
{ return gi::property_proxy<bool, base::SizeGroupBase> (*this, "ignore-hidden"); }

gi::property_proxy<Gtk::SizeGroupMode, base::SizeGroupBase> property_mode()
{ return gi::property_proxy<Gtk::SizeGroupMode, base::SizeGroupBase> (*this, "mode"); }
const gi::property_proxy<Gtk::SizeGroupMode, base::SizeGroupBase> property_mode() const
{ return gi::property_proxy<Gtk::SizeGroupMode, base::SizeGroupBase> (*this, "mode"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/sizegroup_extra_def.hpp>)
#include <gtk/sizegroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/sizegroup_extra.hpp>)
#include <gtk/sizegroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SizeGroup : public GI_GTK_SIZEGROUP_BASE
{ typedef GI_GTK_SIZEGROUP_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSizeGroup>
{ typedef Gtk::SizeGroup type; }; 

} // namespace repository

} // namespace gi

#include "buildable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SizeGroupClassDef
{
typedef SizeGroupClassDef self;
public:
typedef Gtk::SizeGroup instance_type;
typedef ::GtkSizeGroupClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SizeGroupClass: public detail::ClassTemplate<Gtk::impl::internal::SizeGroupClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl>
{
typedef SizeGroupClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SizeGroupClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl> super;

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

using SizeGroupImpl = detail::ObjectImpl<SizeGroup, internal::SizeGroupClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
