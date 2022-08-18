// AUTO-GENERATED

#ifndef _GI_GTK_FILECHOOSERWIDGETACCESSIBLE_HPP_
#define _GI_GTK_FILECHOOSERWIDGETACCESSIBLE_HPP_

#include "containeraccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class FileChooserWidgetAccessible;

namespace base {


#define GI_GTK_FILECHOOSERWIDGETACCESSIBLE_BASE base::FileChooserWidgetAccessibleBase
class FileChooserWidgetAccessibleBase : public Gtk::ContainerAccessible
{
typedef Gtk::ContainerAccessible super_type;
public:
typedef ::GtkFileChooserWidgetAccessible BaseObjectType;

FileChooserWidgetAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_file_chooser_widget_accessible_get_type(); } 

GI_INLINE_DECL Atk::Action interface_ (gi::interface_tag<Atk::Action>);

GI_INLINE_DECL operator Atk::Action ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filechooserwidgetaccessible_extra_def.hpp>)
#include <gtk/filechooserwidgetaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filechooserwidgetaccessible_extra.hpp>)
#include <gtk/filechooserwidgetaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FileChooserWidgetAccessible : public GI_GTK_FILECHOOSERWIDGETACCESSIBLE_BASE
{ typedef GI_GTK_FILECHOOSERWIDGETACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFileChooserWidgetAccessible>
{ typedef Gtk::FileChooserWidgetAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FileChooserWidgetAccessibleClassDef
{
typedef FileChooserWidgetAccessibleClassDef self;
public:
typedef Gtk::FileChooserWidgetAccessible instance_type;
typedef ::GtkFileChooserWidgetAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FileChooserWidgetAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::FileChooserWidgetAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::ActionIfaceClassImpl>
{
typedef FileChooserWidgetAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FileChooserWidgetAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::ActionIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::ActionIfaceClassImpl AtkActionIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using FileChooserWidgetAccessibleImpl = detail::ObjectImpl<FileChooserWidgetAccessible, internal::FileChooserWidgetAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
