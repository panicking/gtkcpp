// AUTO-GENERATED

#ifndef _GI_GTK_IMAGEACCESSIBLE_HPP_
#define _GI_GTK_IMAGEACCESSIBLE_HPP_

#include "widgetaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ImageAccessible;

namespace base {


#define GI_GTK_IMAGEACCESSIBLE_BASE base::ImageAccessibleBase
class ImageAccessibleBase : public Gtk::WidgetAccessible
{
typedef Gtk::WidgetAccessible super_type;
public:
typedef ::GtkImageAccessible BaseObjectType;

ImageAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_image_accessible_get_type(); } 

GI_INLINE_DECL Atk::Image interface_ (gi::interface_tag<Atk::Image>);

GI_INLINE_DECL operator Atk::Image ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/imageaccessible_extra_def.hpp>)
#include <gtk/imageaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/imageaccessible_extra.hpp>)
#include <gtk/imageaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ImageAccessible : public GI_GTK_IMAGEACCESSIBLE_BASE
{ typedef GI_GTK_IMAGEACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkImageAccessible>
{ typedef Gtk::ImageAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ImageAccessibleClassDef
{
typedef ImageAccessibleClassDef self;
public:
typedef Gtk::ImageAccessible instance_type;
typedef ::GtkImageAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ImageAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::ImageAccessibleClassDef, Gtk::impl::internal::WidgetAccessibleClass, Atk::impl::internal::ImageIfaceClassImpl>
{
typedef ImageAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ImageAccessibleClassDef, Gtk::impl::internal::WidgetAccessibleClass, Atk::impl::internal::ImageIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::ImageIfaceClassImpl AtkImageIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using ImageAccessibleImpl = detail::ObjectImpl<ImageAccessible, internal::ImageAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
