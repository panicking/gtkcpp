// AUTO-GENERATED

#ifndef _GI_GTK_ALIGNMENT_HPP_
#define _GI_GTK_ALIGNMENT_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class Alignment;

namespace base {


#define GI_GTK_ALIGNMENT_BASE base::AlignmentBase
class AlignmentBase : public Gtk::Bin
{
typedef Gtk::Bin super_type;
public:
typedef ::GtkAlignment BaseObjectType;

AlignmentBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_alignment_get_type(); } 

// GtkWidget* gtk_alignment_new (gfloat xalign, gfloat yalign, gfloat xscale, gfloat yscale);
// ::GtkAlignment* gtk_alignment_new (gfloat xalign, gfloat yalign, gfloat xscale, gfloat yscale);
// IGNORE; deprecated

// void gtk_alignment_get_padding (GtkAlignment* alignment, guint* padding_top, guint* padding_bottom, guint* padding_left, guint* padding_right);
// void gtk_alignment_get_padding (::GtkAlignment* alignment, guint* padding_top, guint* padding_bottom, guint* padding_left, guint* padding_right);
// IGNORE; deprecated

// void gtk_alignment_set (GtkAlignment* alignment, gfloat xalign, gfloat yalign, gfloat xscale, gfloat yscale);
// void gtk_alignment_set (::GtkAlignment* alignment, gfloat xalign, gfloat yalign, gfloat xscale, gfloat yscale);
// IGNORE; deprecated

// void gtk_alignment_set_padding (GtkAlignment* alignment, guint padding_top, guint padding_bottom, guint padding_left, guint padding_right);
// void gtk_alignment_set_padding (::GtkAlignment* alignment, guint padding_top, guint padding_bottom, guint padding_left, guint padding_right);
// IGNORE; deprecated

gi::property_proxy<guint, base::AlignmentBase> property_bottom_padding()
{ return gi::property_proxy<guint, base::AlignmentBase> (*this, "bottom-padding"); }
const gi::property_proxy<guint, base::AlignmentBase> property_bottom_padding() const
{ return gi::property_proxy<guint, base::AlignmentBase> (*this, "bottom-padding"); }

gi::property_proxy<guint, base::AlignmentBase> property_left_padding()
{ return gi::property_proxy<guint, base::AlignmentBase> (*this, "left-padding"); }
const gi::property_proxy<guint, base::AlignmentBase> property_left_padding() const
{ return gi::property_proxy<guint, base::AlignmentBase> (*this, "left-padding"); }

gi::property_proxy<guint, base::AlignmentBase> property_right_padding()
{ return gi::property_proxy<guint, base::AlignmentBase> (*this, "right-padding"); }
const gi::property_proxy<guint, base::AlignmentBase> property_right_padding() const
{ return gi::property_proxy<guint, base::AlignmentBase> (*this, "right-padding"); }

gi::property_proxy<guint, base::AlignmentBase> property_top_padding()
{ return gi::property_proxy<guint, base::AlignmentBase> (*this, "top-padding"); }
const gi::property_proxy<guint, base::AlignmentBase> property_top_padding() const
{ return gi::property_proxy<guint, base::AlignmentBase> (*this, "top-padding"); }

gi::property_proxy<gfloat, base::AlignmentBase> property_xalign()
{ return gi::property_proxy<gfloat, base::AlignmentBase> (*this, "xalign"); }
const gi::property_proxy<gfloat, base::AlignmentBase> property_xalign() const
{ return gi::property_proxy<gfloat, base::AlignmentBase> (*this, "xalign"); }

gi::property_proxy<gfloat, base::AlignmentBase> property_xscale()
{ return gi::property_proxy<gfloat, base::AlignmentBase> (*this, "xscale"); }
const gi::property_proxy<gfloat, base::AlignmentBase> property_xscale() const
{ return gi::property_proxy<gfloat, base::AlignmentBase> (*this, "xscale"); }

gi::property_proxy<gfloat, base::AlignmentBase> property_yalign()
{ return gi::property_proxy<gfloat, base::AlignmentBase> (*this, "yalign"); }
const gi::property_proxy<gfloat, base::AlignmentBase> property_yalign() const
{ return gi::property_proxy<gfloat, base::AlignmentBase> (*this, "yalign"); }

gi::property_proxy<gfloat, base::AlignmentBase> property_yscale()
{ return gi::property_proxy<gfloat, base::AlignmentBase> (*this, "yscale"); }
const gi::property_proxy<gfloat, base::AlignmentBase> property_yscale() const
{ return gi::property_proxy<gfloat, base::AlignmentBase> (*this, "yscale"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/alignment_extra_def.hpp>)
#include <gtk/alignment_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/alignment_extra.hpp>)
#include <gtk/alignment_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Alignment : public GI_GTK_ALIGNMENT_BASE
{ typedef GI_GTK_ALIGNMENT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAlignment>
{ typedef Gtk::Alignment type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class AlignmentClassDef
{
typedef AlignmentClassDef self;
public:
typedef Gtk::Alignment instance_type;
typedef ::GtkAlignmentClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class AlignmentClass: public detail::ClassTemplate<Gtk::impl::internal::AlignmentClassDef, Gtk::impl::internal::BinClass>
{
typedef AlignmentClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::AlignmentClassDef, Gtk::impl::internal::BinClass> super;

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

using AlignmentImpl = detail::ObjectImpl<Alignment, internal::AlignmentClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
