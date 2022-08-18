// AUTO-GENERATED

#ifndef _GI_GTK_IMAGECELLACCESSIBLE_HPP_
#define _GI_GTK_IMAGECELLACCESSIBLE_HPP_

#include "renderercellaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ImageCellAccessible;

namespace base {


#define GI_GTK_IMAGECELLACCESSIBLE_BASE base::ImageCellAccessibleBase
class ImageCellAccessibleBase : public Gtk::RendererCellAccessible
{
typedef Gtk::RendererCellAccessible super_type;
public:
typedef ::GtkImageCellAccessible BaseObjectType;

ImageCellAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_image_cell_accessible_get_type(); } 

GI_INLINE_DECL Atk::Image interface_ (gi::interface_tag<Atk::Image>);

GI_INLINE_DECL operator Atk::Image ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/imagecellaccessible_extra_def.hpp>)
#include <gtk/imagecellaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/imagecellaccessible_extra.hpp>)
#include <gtk/imagecellaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ImageCellAccessible : public GI_GTK_IMAGECELLACCESSIBLE_BASE
{ typedef GI_GTK_IMAGECELLACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkImageCellAccessible>
{ typedef Gtk::ImageCellAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ImageCellAccessibleClassDef
{
typedef ImageCellAccessibleClassDef self;
public:
typedef Gtk::ImageCellAccessible instance_type;
typedef ::GtkImageCellAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ImageCellAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::ImageCellAccessibleClassDef, Gtk::impl::internal::RendererCellAccessibleClass, Atk::impl::internal::ImageIfaceClassImpl>
{
typedef ImageCellAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ImageCellAccessibleClassDef, Gtk::impl::internal::RendererCellAccessibleClass, Atk::impl::internal::ImageIfaceClassImpl> super;

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

using ImageCellAccessibleImpl = detail::ObjectImpl<ImageCellAccessible, internal::ImageCellAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
