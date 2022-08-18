// AUTO-GENERATED

#ifndef _GI_GTK_ASPECTFRAME_HPP_
#define _GI_GTK_ASPECTFRAME_HPP_

#include "frame.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class AspectFrame;

namespace base {


#define GI_GTK_ASPECTFRAME_BASE base::AspectFrameBase
class AspectFrameBase : public Gtk::Frame
{
typedef Gtk::Frame super_type;
public:
typedef ::GtkAspectFrame BaseObjectType;

AspectFrameBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_aspect_frame_get_type(); } 

// GtkWidget* gtk_aspect_frame_new (const gchar* label, gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child);
// ::GtkAspectFrame* gtk_aspect_frame_new (const char* label, gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child);
static GI_INLINE_DECL Gtk::AspectFrame new_ (const std::string & label, gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child) noexcept;
static GI_INLINE_DECL Gtk::AspectFrame new_ (gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child) noexcept;

// void gtk_aspect_frame_set (GtkAspectFrame* aspect_frame, gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child);
// void gtk_aspect_frame_set (::GtkAspectFrame* aspect_frame, gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child);
GI_INLINE_DECL void set (gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child) noexcept;

gi::property_proxy<bool, base::AspectFrameBase> property_obey_child()
{ return gi::property_proxy<bool, base::AspectFrameBase> (*this, "obey-child"); }
const gi::property_proxy<bool, base::AspectFrameBase> property_obey_child() const
{ return gi::property_proxy<bool, base::AspectFrameBase> (*this, "obey-child"); }

gi::property_proxy<gfloat, base::AspectFrameBase> property_ratio()
{ return gi::property_proxy<gfloat, base::AspectFrameBase> (*this, "ratio"); }
const gi::property_proxy<gfloat, base::AspectFrameBase> property_ratio() const
{ return gi::property_proxy<gfloat, base::AspectFrameBase> (*this, "ratio"); }

gi::property_proxy<gfloat, base::AspectFrameBase> property_xalign()
{ return gi::property_proxy<gfloat, base::AspectFrameBase> (*this, "xalign"); }
const gi::property_proxy<gfloat, base::AspectFrameBase> property_xalign() const
{ return gi::property_proxy<gfloat, base::AspectFrameBase> (*this, "xalign"); }

gi::property_proxy<gfloat, base::AspectFrameBase> property_yalign()
{ return gi::property_proxy<gfloat, base::AspectFrameBase> (*this, "yalign"); }
const gi::property_proxy<gfloat, base::AspectFrameBase> property_yalign() const
{ return gi::property_proxy<gfloat, base::AspectFrameBase> (*this, "yalign"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/aspectframe_extra_def.hpp>)
#include <gtk/aspectframe_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/aspectframe_extra.hpp>)
#include <gtk/aspectframe_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AspectFrame : public GI_GTK_ASPECTFRAME_BASE
{ typedef GI_GTK_ASPECTFRAME_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAspectFrame>
{ typedef Gtk::AspectFrame type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class AspectFrameClassDef
{
typedef AspectFrameClassDef self;
public:
typedef Gtk::AspectFrame instance_type;
typedef ::GtkAspectFrameClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class AspectFrameClass: public detail::ClassTemplate<Gtk::impl::internal::AspectFrameClassDef, Gtk::impl::internal::FrameClass>
{
typedef AspectFrameClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::AspectFrameClassDef, Gtk::impl::internal::FrameClass> super;

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

using AspectFrameImpl = detail::ObjectImpl<AspectFrame, internal::AspectFrameClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
