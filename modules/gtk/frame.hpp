// AUTO-GENERATED

#ifndef _GI_GTK_FRAME_HPP_
#define _GI_GTK_FRAME_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class Frame;

namespace base {


#define GI_GTK_FRAME_BASE base::FrameBase
class FrameBase : public Gtk::Bin
{
typedef Gtk::Bin super_type;
public:
typedef ::GtkFrame BaseObjectType;

FrameBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_frame_get_type(); } 

// GtkWidget* gtk_frame_new (const gchar* label);
// ::GtkFrame* gtk_frame_new (const char* label);
static GI_INLINE_DECL Gtk::Frame new_ (const std::string & label) noexcept;
static GI_INLINE_DECL Gtk::Frame new_ () noexcept;

// const gchar* gtk_frame_get_label (GtkFrame* frame);
// const char* gtk_frame_get_label (::GtkFrame* frame);
GI_INLINE_DECL std::string get_label () noexcept;

// void gtk_frame_get_label_align (GtkFrame* frame, gfloat* xalign, gfloat* yalign);
// void gtk_frame_get_label_align (::GtkFrame* frame, gfloat* xalign, gfloat* yalign);
GI_INLINE_DECL void get_label_align (gfloat * xalign = nullptr, gfloat * yalign = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gfloat, gfloat> get_label_align () noexcept;

// GtkWidget* gtk_frame_get_label_widget (GtkFrame* frame);
// ::GtkWidget* gtk_frame_get_label_widget (::GtkFrame* frame);
GI_INLINE_DECL Gtk::Widget get_label_widget () noexcept;

// GtkShadowType gtk_frame_get_shadow_type (GtkFrame* frame);
// ::GtkShadowType gtk_frame_get_shadow_type (::GtkFrame* frame);
GI_INLINE_DECL Gtk::ShadowType get_shadow_type () noexcept;

// void gtk_frame_set_label (GtkFrame* frame, const gchar* label);
// void gtk_frame_set_label (::GtkFrame* frame, const char* label);
GI_INLINE_DECL void set_label (const std::string & label) noexcept;
GI_INLINE_DECL void set_label () noexcept;

// void gtk_frame_set_label_align (GtkFrame* frame, gfloat xalign, gfloat yalign);
// void gtk_frame_set_label_align (::GtkFrame* frame, gfloat xalign, gfloat yalign);
GI_INLINE_DECL void set_label_align (gfloat xalign, gfloat yalign) noexcept;

// void gtk_frame_set_label_widget (GtkFrame* frame, GtkWidget* label_widget);
// void gtk_frame_set_label_widget (::GtkFrame* frame, ::GtkWidget* label_widget);
GI_INLINE_DECL void set_label_widget (Gtk::Widget label_widget) noexcept;
GI_INLINE_DECL void set_label_widget () noexcept;

// void gtk_frame_set_shadow_type (GtkFrame* frame, GtkShadowType type);
// void gtk_frame_set_shadow_type (::GtkFrame* frame, ::GtkShadowType type);
GI_INLINE_DECL void set_shadow_type (Gtk::ShadowType type) noexcept;

gi::property_proxy<std::string, base::FrameBase> property_label()
{ return gi::property_proxy<std::string, base::FrameBase> (*this, "label"); }
const gi::property_proxy<std::string, base::FrameBase> property_label() const
{ return gi::property_proxy<std::string, base::FrameBase> (*this, "label"); }

gi::property_proxy<Gtk::Widget, base::FrameBase> property_label_widget()
{ return gi::property_proxy<Gtk::Widget, base::FrameBase> (*this, "label-widget"); }
const gi::property_proxy<Gtk::Widget, base::FrameBase> property_label_widget() const
{ return gi::property_proxy<Gtk::Widget, base::FrameBase> (*this, "label-widget"); }

gi::property_proxy<gfloat, base::FrameBase> property_label_xalign()
{ return gi::property_proxy<gfloat, base::FrameBase> (*this, "label-xalign"); }
const gi::property_proxy<gfloat, base::FrameBase> property_label_xalign() const
{ return gi::property_proxy<gfloat, base::FrameBase> (*this, "label-xalign"); }

gi::property_proxy<gfloat, base::FrameBase> property_label_yalign()
{ return gi::property_proxy<gfloat, base::FrameBase> (*this, "label-yalign"); }
const gi::property_proxy<gfloat, base::FrameBase> property_label_yalign() const
{ return gi::property_proxy<gfloat, base::FrameBase> (*this, "label-yalign"); }

gi::property_proxy<Gtk::ShadowType, base::FrameBase> property_shadow_type()
{ return gi::property_proxy<Gtk::ShadowType, base::FrameBase> (*this, "shadow-type"); }
const gi::property_proxy<Gtk::ShadowType, base::FrameBase> property_shadow_type() const
{ return gi::property_proxy<Gtk::ShadowType, base::FrameBase> (*this, "shadow-type"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/frame_extra_def.hpp>)
#include <gtk/frame_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/frame_extra.hpp>)
#include <gtk/frame_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Frame : public GI_GTK_FRAME_BASE
{ typedef GI_GTK_FRAME_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFrame>
{ typedef Gtk::Frame type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FrameClassDef
{
typedef FrameClassDef self;
public:
typedef Gtk::Frame instance_type;
typedef ::GtkFrameClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Frame::compute_child_allocation (GtkFrame* frame, GtkAllocation* allocation);
// void Frame::compute_child_allocation (::GtkFrame* frame, ::GtkAllocation* allocation);
virtual void compute_child_allocation_ (Gtk::Allocation allocation) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class FrameClass: public detail::ClassTemplate<Gtk::impl::internal::FrameClassDef, Gtk::impl::internal::BinClass>
{
typedef FrameClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FrameClassDef, Gtk::impl::internal::BinClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Frame::compute_child_allocation (GtkFrame* frame, GtkAllocation* allocation);
// void Frame::compute_child_allocation (::GtkFrame* frame, ::GtkAllocation* allocation);
GI_INLINE_DECL void compute_child_allocation_ (Gtk::Allocation allocation) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using FrameImpl = detail::ObjectImpl<Frame, internal::FrameClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
