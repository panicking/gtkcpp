// AUTO-GENERATED

#ifndef _GI_GTK_HANDLEBOX_HPP_
#define _GI_GTK_HANDLEBOX_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class HandleBox;

namespace base {


#define GI_GTK_HANDLEBOX_BASE base::HandleBoxBase
class HandleBoxBase : public Gtk::Bin
{
typedef Gtk::Bin super_type;
public:
typedef ::GtkHandleBox BaseObjectType;

HandleBoxBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_handle_box_get_type(); } 

// GtkWidget* gtk_handle_box_new ();
// ::GtkHandleBox* gtk_handle_box_new ();
// IGNORE; deprecated

// gboolean gtk_handle_box_get_child_detached (GtkHandleBox* handle_box);
// gboolean gtk_handle_box_get_child_detached (::GtkHandleBox* handle_box);
// IGNORE; deprecated

// GtkPositionType gtk_handle_box_get_handle_position (GtkHandleBox* handle_box);
// ::GtkPositionType gtk_handle_box_get_handle_position (::GtkHandleBox* handle_box);
// IGNORE; deprecated

// GtkShadowType gtk_handle_box_get_shadow_type (GtkHandleBox* handle_box);
// ::GtkShadowType gtk_handle_box_get_shadow_type (::GtkHandleBox* handle_box);
// IGNORE; deprecated

// GtkPositionType gtk_handle_box_get_snap_edge (GtkHandleBox* handle_box);
// ::GtkPositionType gtk_handle_box_get_snap_edge (::GtkHandleBox* handle_box);
// IGNORE; deprecated

// void gtk_handle_box_set_handle_position (GtkHandleBox* handle_box, GtkPositionType position);
// void gtk_handle_box_set_handle_position (::GtkHandleBox* handle_box, ::GtkPositionType position);
// IGNORE; deprecated

// void gtk_handle_box_set_shadow_type (GtkHandleBox* handle_box, GtkShadowType type);
// void gtk_handle_box_set_shadow_type (::GtkHandleBox* handle_box, ::GtkShadowType type);
// IGNORE; deprecated

// void gtk_handle_box_set_snap_edge (GtkHandleBox* handle_box, GtkPositionType edge);
// void gtk_handle_box_set_snap_edge (::GtkHandleBox* handle_box, ::GtkPositionType edge);
// IGNORE; deprecated

gi::property_proxy<bool, base::HandleBoxBase> property_child_detached()
{ return gi::property_proxy<bool, base::HandleBoxBase> (*this, "child-detached"); }
const gi::property_proxy<bool, base::HandleBoxBase> property_child_detached() const
{ return gi::property_proxy<bool, base::HandleBoxBase> (*this, "child-detached"); }

gi::property_proxy<Gtk::PositionType, base::HandleBoxBase> property_handle_position()
{ return gi::property_proxy<Gtk::PositionType, base::HandleBoxBase> (*this, "handle-position"); }
const gi::property_proxy<Gtk::PositionType, base::HandleBoxBase> property_handle_position() const
{ return gi::property_proxy<Gtk::PositionType, base::HandleBoxBase> (*this, "handle-position"); }

gi::property_proxy<Gtk::ShadowType, base::HandleBoxBase> property_shadow_type()
{ return gi::property_proxy<Gtk::ShadowType, base::HandleBoxBase> (*this, "shadow-type"); }
const gi::property_proxy<Gtk::ShadowType, base::HandleBoxBase> property_shadow_type() const
{ return gi::property_proxy<Gtk::ShadowType, base::HandleBoxBase> (*this, "shadow-type"); }

gi::property_proxy<Gtk::PositionType, base::HandleBoxBase> property_snap_edge()
{ return gi::property_proxy<Gtk::PositionType, base::HandleBoxBase> (*this, "snap-edge"); }
const gi::property_proxy<Gtk::PositionType, base::HandleBoxBase> property_snap_edge() const
{ return gi::property_proxy<Gtk::PositionType, base::HandleBoxBase> (*this, "snap-edge"); }

gi::property_proxy<bool, base::HandleBoxBase> property_snap_edge_set()
{ return gi::property_proxy<bool, base::HandleBoxBase> (*this, "snap-edge-set"); }
const gi::property_proxy<bool, base::HandleBoxBase> property_snap_edge_set() const
{ return gi::property_proxy<bool, base::HandleBoxBase> (*this, "snap-edge-set"); }

// signal child-attached
// IGNORE; deprecated

// signal child-detached
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/handlebox_extra_def.hpp>)
#include <gtk/handlebox_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/handlebox_extra.hpp>)
#include <gtk/handlebox_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class HandleBox : public GI_GTK_HANDLEBOX_BASE
{ typedef GI_GTK_HANDLEBOX_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkHandleBox>
{ typedef Gtk::HandleBox type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class HandleBoxClassDef
{
typedef HandleBoxClassDef self;
public:
typedef Gtk::HandleBox instance_type;
typedef ::GtkHandleBoxClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void HandleBox::child_attached (GtkHandleBox* handle_box, GtkWidget* child);
// void HandleBox::child_attached (::GtkHandleBox* handle_box, ::GtkWidget* child);
virtual void child_attached_ (Gtk::Widget child) noexcept = 0;

// void HandleBox::child_detached (GtkHandleBox* handle_box, GtkWidget* child);
// void HandleBox::child_detached (::GtkHandleBox* handle_box, ::GtkWidget* child);
virtual void child_detached_ (Gtk::Widget child) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class HandleBoxClass: public detail::ClassTemplate<Gtk::impl::internal::HandleBoxClassDef, Gtk::impl::internal::BinClass>
{
typedef HandleBoxClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::HandleBoxClassDef, Gtk::impl::internal::BinClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void HandleBox::child_attached (GtkHandleBox* handle_box, GtkWidget* child);
// void HandleBox::child_attached (::GtkHandleBox* handle_box, ::GtkWidget* child);
GI_INLINE_DECL void child_attached_ (Gtk::Widget child) noexcept override;

// void HandleBox::child_detached (GtkHandleBox* handle_box, GtkWidget* child);
// void HandleBox::child_detached (::GtkHandleBox* handle_box, ::GtkWidget* child);
GI_INLINE_DECL void child_detached_ (Gtk::Widget child) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using HandleBoxImpl = detail::ObjectImpl<HandleBox, internal::HandleBoxClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
