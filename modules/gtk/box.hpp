// AUTO-GENERATED

#ifndef _GI_GTK_BOX_HPP_
#define _GI_GTK_BOX_HPP_

#include "container.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Orientable;
class Widget;

class Box;

namespace base {


#define GI_GTK_BOX_BASE base::BoxBase
class BoxBase : public Gtk::Container
{
typedef Gtk::Container super_type;
public:
typedef ::GtkBox BaseObjectType;

BoxBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_box_get_type(); } 

GI_INLINE_DECL Gtk::Orientable interface_ (gi::interface_tag<Gtk::Orientable>);

GI_INLINE_DECL operator Gtk::Orientable ();

// GtkWidget* gtk_box_new (GtkOrientation orientation, gint spacing);
// ::GtkBox* gtk_box_new (::GtkOrientation orientation, gint spacing);
static GI_INLINE_DECL Gtk::Box new_ (Gtk::Orientation orientation, gint spacing) noexcept;

// GtkBaselinePosition gtk_box_get_baseline_position (GtkBox* box);
// ::GtkBaselinePosition gtk_box_get_baseline_position (::GtkBox* box);
GI_INLINE_DECL Gtk::BaselinePosition get_baseline_position () noexcept;

// GtkWidget* gtk_box_get_center_widget (GtkBox* box);
// ::GtkWidget* gtk_box_get_center_widget (::GtkBox* box);
GI_INLINE_DECL Gtk::Widget get_center_widget () noexcept;

// gboolean gtk_box_get_homogeneous (GtkBox* box);
// gboolean gtk_box_get_homogeneous (::GtkBox* box);
GI_INLINE_DECL bool get_homogeneous () noexcept;

// gint gtk_box_get_spacing (GtkBox* box);
// gint gtk_box_get_spacing (::GtkBox* box);
GI_INLINE_DECL gint get_spacing () noexcept;

// void gtk_box_pack_end (GtkBox* box, GtkWidget* child, gboolean expand, gboolean fill, guint padding);
// void gtk_box_pack_end (::GtkBox* box, ::GtkWidget* child, gboolean expand, gboolean fill, guint padding);
GI_INLINE_DECL void pack_end (Gtk::Widget child, gboolean expand, gboolean fill, guint padding) noexcept;

// void gtk_box_pack_start (GtkBox* box, GtkWidget* child, gboolean expand, gboolean fill, guint padding);
// void gtk_box_pack_start (::GtkBox* box, ::GtkWidget* child, gboolean expand, gboolean fill, guint padding);
GI_INLINE_DECL void pack_start (Gtk::Widget child, gboolean expand, gboolean fill, guint padding) noexcept;

// void gtk_box_query_child_packing (GtkBox* box, GtkWidget* child, gboolean* expand, gboolean* fill, guint* padding, GtkPackType* pack_type);
// void gtk_box_query_child_packing (::GtkBox* box, ::GtkWidget* child, gboolean* expand, gboolean* fill, guint* padding, ::GtkPackType* pack_type);
GI_INLINE_DECL void query_child_packing (Gtk::Widget child, bool & expand, bool & fill, guint & padding, Gtk::PackType & pack_type) noexcept;
GI_INLINE_DECL std::tuple<bool, bool, guint, Gtk::PackType> query_child_packing (Gtk::Widget child) noexcept;

// void gtk_box_reorder_child (GtkBox* box, GtkWidget* child, gint position);
// void gtk_box_reorder_child (::GtkBox* box, ::GtkWidget* child, gint position);
GI_INLINE_DECL void reorder_child (Gtk::Widget child, gint position) noexcept;

// void gtk_box_set_baseline_position (GtkBox* box, GtkBaselinePosition position);
// void gtk_box_set_baseline_position (::GtkBox* box, ::GtkBaselinePosition position);
GI_INLINE_DECL void set_baseline_position (Gtk::BaselinePosition position) noexcept;

// void gtk_box_set_center_widget (GtkBox* box, GtkWidget* widget);
// void gtk_box_set_center_widget (::GtkBox* box, ::GtkWidget* widget);
GI_INLINE_DECL void set_center_widget (Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_center_widget () noexcept;

// void gtk_box_set_child_packing (GtkBox* box, GtkWidget* child, gboolean expand, gboolean fill, guint padding, GtkPackType pack_type);
// void gtk_box_set_child_packing (::GtkBox* box, ::GtkWidget* child, gboolean expand, gboolean fill, guint padding, ::GtkPackType pack_type);
GI_INLINE_DECL void set_child_packing (Gtk::Widget child, gboolean expand, gboolean fill, guint padding, Gtk::PackType pack_type) noexcept;

// void gtk_box_set_homogeneous (GtkBox* box, gboolean homogeneous);
// void gtk_box_set_homogeneous (::GtkBox* box, gboolean homogeneous);
GI_INLINE_DECL void set_homogeneous (gboolean homogeneous) noexcept;

// void gtk_box_set_spacing (GtkBox* box, gint spacing);
// void gtk_box_set_spacing (::GtkBox* box, gint spacing);
GI_INLINE_DECL void set_spacing (gint spacing) noexcept;

gi::property_proxy<Gtk::BaselinePosition, base::BoxBase> property_baseline_position()
{ return gi::property_proxy<Gtk::BaselinePosition, base::BoxBase> (*this, "baseline-position"); }
const gi::property_proxy<Gtk::BaselinePosition, base::BoxBase> property_baseline_position() const
{ return gi::property_proxy<Gtk::BaselinePosition, base::BoxBase> (*this, "baseline-position"); }

gi::property_proxy<bool, base::BoxBase> property_homogeneous()
{ return gi::property_proxy<bool, base::BoxBase> (*this, "homogeneous"); }
const gi::property_proxy<bool, base::BoxBase> property_homogeneous() const
{ return gi::property_proxy<bool, base::BoxBase> (*this, "homogeneous"); }

gi::property_proxy<gint, base::BoxBase> property_spacing()
{ return gi::property_proxy<gint, base::BoxBase> (*this, "spacing"); }
const gi::property_proxy<gint, base::BoxBase> property_spacing() const
{ return gi::property_proxy<gint, base::BoxBase> (*this, "spacing"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/box_extra_def.hpp>)
#include <gtk/box_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/box_extra.hpp>)
#include <gtk/box_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Box : public GI_GTK_BOX_BASE
{ typedef GI_GTK_BOX_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBox>
{ typedef Gtk::Box type; }; 

} // namespace repository

} // namespace gi

#include "orientable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class BoxClassDef
{
typedef BoxClassDef self;
public:
typedef Gtk::Box instance_type;
typedef ::GtkBoxClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class BoxClass: public detail::ClassTemplate<Gtk::impl::internal::BoxClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::OrientableIfaceClassImpl>
{
typedef BoxClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::BoxClassDef, Gtk::impl::internal::ContainerClass, Gtk::impl::internal::OrientableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::OrientableIfaceClassImpl GtkOrientableIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using BoxImpl = detail::ObjectImpl<Box, internal::BoxClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
