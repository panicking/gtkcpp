// AUTO-GENERATED

#ifndef _GI_GTK_MOUNTOPERATION_HPP_
#define _GI_GTK_MOUNTOPERATION_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Window;

class MountOperation;

namespace base {


#define GI_GTK_MOUNTOPERATION_BASE base::MountOperationBase
class MountOperationBase : public Gio::MountOperation
{
typedef Gio::MountOperation super_type;
public:
typedef ::GtkMountOperation BaseObjectType;

MountOperationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_mount_operation_get_type(); } 

// GMountOperation* gtk_mount_operation_new (GtkWindow* parent);
// ::GtkMountOperation* gtk_mount_operation_new (::GtkWindow* parent);
static GI_INLINE_DECL Gtk::MountOperation new_ (Gtk::Window parent) noexcept;
static GI_INLINE_DECL Gtk::MountOperation new_ () noexcept;

// GtkWindow* gtk_mount_operation_get_parent (GtkMountOperation* op);
// ::GtkWindow* gtk_mount_operation_get_parent (::GtkMountOperation* op);
GI_INLINE_DECL Gtk::Window get_parent () noexcept;

// GdkScreen* gtk_mount_operation_get_screen (GtkMountOperation* op);
// ::GdkScreen* gtk_mount_operation_get_screen (::GtkMountOperation* op);
GI_INLINE_DECL Gdk::Screen get_screen () noexcept;

// gboolean gtk_mount_operation_is_showing (GtkMountOperation* op);
// gboolean gtk_mount_operation_is_showing (::GtkMountOperation* op);
GI_INLINE_DECL bool is_showing () noexcept;

// void gtk_mount_operation_set_parent (GtkMountOperation* op, GtkWindow* parent);
// void gtk_mount_operation_set_parent (::GtkMountOperation* op, ::GtkWindow* parent);
GI_INLINE_DECL void set_parent (Gtk::Window parent) noexcept;
GI_INLINE_DECL void set_parent () noexcept;

// void gtk_mount_operation_set_screen (GtkMountOperation* op, GdkScreen* screen);
// void gtk_mount_operation_set_screen (::GtkMountOperation* op, ::GdkScreen* screen);
GI_INLINE_DECL void set_screen (Gdk::Screen screen) noexcept;

gi::property_proxy<bool, base::MountOperationBase> property_is_showing()
{ return gi::property_proxy<bool, base::MountOperationBase> (*this, "is-showing"); }
const gi::property_proxy<bool, base::MountOperationBase> property_is_showing() const
{ return gi::property_proxy<bool, base::MountOperationBase> (*this, "is-showing"); }

gi::property_proxy<Gtk::Window, base::MountOperationBase> property_parent()
{ return gi::property_proxy<Gtk::Window, base::MountOperationBase> (*this, "parent"); }
const gi::property_proxy<Gtk::Window, base::MountOperationBase> property_parent() const
{ return gi::property_proxy<Gtk::Window, base::MountOperationBase> (*this, "parent"); }

gi::property_proxy<Gdk::Screen, base::MountOperationBase> property_screen()
{ return gi::property_proxy<Gdk::Screen, base::MountOperationBase> (*this, "screen"); }
const gi::property_proxy<Gdk::Screen, base::MountOperationBase> property_screen() const
{ return gi::property_proxy<Gdk::Screen, base::MountOperationBase> (*this, "screen"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/mountoperation_extra_def.hpp>)
#include <gtk/mountoperation_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/mountoperation_extra.hpp>)
#include <gtk/mountoperation_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MountOperation : public GI_GTK_MOUNTOPERATION_BASE
{ typedef GI_GTK_MOUNTOPERATION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMountOperation>
{ typedef Gtk::MountOperation type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class MountOperationClassDef
{
typedef MountOperationClassDef self;
public:
typedef Gtk::MountOperation instance_type;
typedef ::GtkMountOperationClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MountOperationClass: public detail::ClassTemplate<Gtk::impl::internal::MountOperationClassDef, Gio::impl::internal::MountOperationClass>
{
typedef MountOperationClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::MountOperationClassDef, Gio::impl::internal::MountOperationClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using MountOperationImpl = detail::ObjectImpl<MountOperation, internal::MountOperationClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
