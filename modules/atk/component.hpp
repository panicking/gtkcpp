// AUTO-GENERATED

#ifndef _GI_ATK_COMPONENT_HPP_
#define _GI_ATK_COMPONENT_HPP_


namespace gi {

namespace repository {

namespace Atk {

class Object;
class Rectangle;

class Component;

namespace base {


#define GI_ATK_COMPONENT_BASE base::ComponentBase
class ComponentBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::AtkComponent BaseObjectType;

ComponentBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_component_get_type(); } 

// guint atk_component_add_focus_handler (AtkComponent* component, AtkFocusHandler handler);
// guint atk_component_add_focus_handler (::AtkComponent* component,  handler);
// IGNORE; deprecated

// gboolean atk_component_contains (AtkComponent* component, gint x, gint y, AtkCoordType coord_type);
// gboolean atk_component_contains (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
GI_INLINE_DECL bool contains (gint x, gint y, Atk::CoordType coord_type) noexcept;

// gdouble atk_component_get_alpha (AtkComponent* component);
// gdouble atk_component_get_alpha (::AtkComponent* component);
GI_INLINE_DECL gdouble get_alpha () noexcept;

// void atk_component_get_extents (AtkComponent* component, gint* x, gint* y, gint* width, gint* height, AtkCoordType coord_type);
// void atk_component_get_extents (::AtkComponent* component, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coord_type);
GI_INLINE_DECL void get_extents (gint * x, gint * y, gint * width, gint * height, Atk::CoordType coord_type) noexcept;
GI_INLINE_DECL std::tuple<gint, gint, gint, gint> get_extents (Atk::CoordType coord_type) noexcept;

// AtkLayer atk_component_get_layer (AtkComponent* component);
// ::AtkLayer atk_component_get_layer (::AtkComponent* component);
GI_INLINE_DECL Atk::Layer get_layer () noexcept;

// gint atk_component_get_mdi_zorder (AtkComponent* component);
// gint atk_component_get_mdi_zorder (::AtkComponent* component);
GI_INLINE_DECL gint get_mdi_zorder () noexcept;

// void atk_component_get_position (AtkComponent* component, gint* x, gint* y, AtkCoordType coord_type);
// void atk_component_get_position (::AtkComponent* component, gint* x, gint* y, ::AtkCoordType coord_type);
// IGNORE; deprecated

// void atk_component_get_size (AtkComponent* component, gint* width, gint* height);
// void atk_component_get_size (::AtkComponent* component, gint* width, gint* height);
// IGNORE; deprecated

// gboolean atk_component_grab_focus (AtkComponent* component);
// gboolean atk_component_grab_focus (::AtkComponent* component);
GI_INLINE_DECL bool grab_focus () noexcept;

// AtkObject* atk_component_ref_accessible_at_point (AtkComponent* component, gint x, gint y, AtkCoordType coord_type);
// ::AtkObject* atk_component_ref_accessible_at_point (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
GI_INLINE_DECL Atk::Object ref_accessible_at_point (gint x, gint y, Atk::CoordType coord_type) noexcept;

// void atk_component_remove_focus_handler (AtkComponent* component, guint handler_id);
// void atk_component_remove_focus_handler (::AtkComponent* component, guint handler_id);
// IGNORE; deprecated

// gboolean atk_component_scroll_to (AtkComponent* component, AtkScrollType type);
// gboolean atk_component_scroll_to (::AtkComponent* component, ::AtkScrollType type);
GI_INLINE_DECL bool scroll_to (Atk::ScrollType type) noexcept;

// gboolean atk_component_scroll_to_point (AtkComponent* component, AtkCoordType coords, gint x, gint y);
// gboolean atk_component_scroll_to_point (::AtkComponent* component, ::AtkCoordType coords, gint x, gint y);
GI_INLINE_DECL bool scroll_to_point (Atk::CoordType coords, gint x, gint y) noexcept;

// gboolean atk_component_set_extents (AtkComponent* component, gint x, gint y, gint width, gint height, AtkCoordType coord_type);
// gboolean atk_component_set_extents (::AtkComponent* component, gint x, gint y, gint width, gint height, ::AtkCoordType coord_type);
GI_INLINE_DECL bool set_extents (gint x, gint y, gint width, gint height, Atk::CoordType coord_type) noexcept;

// gboolean atk_component_set_position (AtkComponent* component, gint x, gint y, AtkCoordType coord_type);
// gboolean atk_component_set_position (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
GI_INLINE_DECL bool set_position (gint x, gint y, Atk::CoordType coord_type) noexcept;

// gboolean atk_component_set_size (AtkComponent* component, gint width, gint height);
// gboolean atk_component_set_size (::AtkComponent* component, gint width, gint height);
GI_INLINE_DECL bool set_size (gint width, gint height) noexcept;

// signal bounds-changed
gi::signal_proxy<void(Atk::Component, Atk::Rectangle arg1)> signal_bounds_changed()
{ return gi::signal_proxy<void(Atk::Component, Atk::Rectangle arg1)> (*this, "bounds-changed"); }

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/component_extra_def.hpp>)
#include <atk/component_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/component_extra.hpp>)
#include <atk/component_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Component : public GI_ATK_COMPONENT_BASE
{ typedef GI_ATK_COMPONENT_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkComponent>
{ typedef Atk::Component type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class ComponentIfaceDef
{
typedef ComponentIfaceDef self;
public:
typedef Atk::Component instance_type;
typedef ::AtkComponentIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void Component::bounds_changed (AtkComponent* component, AtkRectangle* bounds);
// void Component::bounds_changed (::AtkComponent* component, ::AtkRectangle* bounds);
virtual void bounds_changed_ (Atk::Rectangle bounds) noexcept = 0;

// gboolean Component::contains (AtkComponent* component, gint x, gint y, AtkCoordType coord_type);
// gboolean Component::contains (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
virtual bool contains_ (gint x, gint y, Atk::CoordType coord_type) noexcept = 0;

// gdouble Component::get_alpha (AtkComponent* component);
// gdouble Component::get_alpha (::AtkComponent* component);
virtual gdouble get_alpha_ () noexcept = 0;

// void Component::get_extents (AtkComponent* component, gint* x, gint* y, gint* width, gint* height, AtkCoordType coord_type);
// void Component::get_extents (::AtkComponent* component, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coord_type);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// AtkLayer Component::get_layer (AtkComponent* component);
// ::AtkLayer Component::get_layer (::AtkComponent* component);
virtual Atk::Layer get_layer_ () noexcept = 0;

// gint Component::get_mdi_zorder (AtkComponent* component);
// gint Component::get_mdi_zorder (::AtkComponent* component);
virtual gint get_mdi_zorder_ () noexcept = 0;

// void Component::get_position (AtkComponent* component, gint* x, gint* y, AtkCoordType coord_type);
// void Component::get_position (::AtkComponent* component, gint* x, gint* y, ::AtkCoordType coord_type);
// IGNORE; deprecated, virtual-method out parameter not supported, virtual-method out parameter not supported

// void Component::get_size (AtkComponent* component, gint* width, gint* height);
// void Component::get_size (::AtkComponent* component, gint* width, gint* height);
// IGNORE; deprecated, virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean Component::grab_focus (AtkComponent* component);
// gboolean Component::grab_focus (::AtkComponent* component);
virtual bool grab_focus_ () noexcept = 0;

// AtkObject* Component::ref_accessible_at_point (AtkComponent* component, gint x, gint y, AtkCoordType coord_type);
// ::AtkObject* Component::ref_accessible_at_point (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
virtual Atk::Object ref_accessible_at_point_ (gint x, gint y, Atk::CoordType coord_type) noexcept = 0;

// void Component::remove_focus_handler (AtkComponent* component, guint handler_id);
// void Component::remove_focus_handler (::AtkComponent* component, guint handler_id);
// IGNORE; deprecated

// gboolean Component::scroll_to (AtkComponent* component, AtkScrollType type);
// gboolean Component::scroll_to (::AtkComponent* component, ::AtkScrollType type);
virtual bool scroll_to_ (Atk::ScrollType type) noexcept = 0;

// gboolean Component::scroll_to_point (AtkComponent* component, AtkCoordType coords, gint x, gint y);
// gboolean Component::scroll_to_point (::AtkComponent* component, ::AtkCoordType coords, gint x, gint y);
virtual bool scroll_to_point_ (Atk::CoordType coords, gint x, gint y) noexcept = 0;

// gboolean Component::set_extents (AtkComponent* component, gint x, gint y, gint width, gint height, AtkCoordType coord_type);
// gboolean Component::set_extents (::AtkComponent* component, gint x, gint y, gint width, gint height, ::AtkCoordType coord_type);
virtual bool set_extents_ (gint x, gint y, gint width, gint height, Atk::CoordType coord_type) noexcept = 0;

// gboolean Component::set_position (AtkComponent* component, gint x, gint y, AtkCoordType coord_type);
// gboolean Component::set_position (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
virtual bool set_position_ (gint x, gint y, Atk::CoordType coord_type) noexcept = 0;

// gboolean Component::set_size (AtkComponent* component, gint width, gint height);
// gboolean Component::set_size (::AtkComponent* component, gint width, gint height);
virtual bool set_size_ (gint width, gint height) noexcept = 0;


};

using ComponentImpl = detail::InterfaceImpl<ComponentIfaceDef>;

class ComponentIfaceClassImpl: public detail::InterfaceClassImpl<ComponentImpl>
{
typedef ComponentIfaceClassImpl self;
typedef detail::InterfaceClassImpl<ComponentImpl> super;

protected:
using super::super;

// void Component::bounds_changed (AtkComponent* component, AtkRectangle* bounds);
// void Component::bounds_changed (::AtkComponent* component, ::AtkRectangle* bounds);
GI_INLINE_DECL void bounds_changed_ (Atk::Rectangle bounds) noexcept override;

// gboolean Component::contains (AtkComponent* component, gint x, gint y, AtkCoordType coord_type);
// gboolean Component::contains (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
GI_INLINE_DECL bool contains_ (gint x, gint y, Atk::CoordType coord_type) noexcept override;

// gdouble Component::get_alpha (AtkComponent* component);
// gdouble Component::get_alpha (::AtkComponent* component);
GI_INLINE_DECL gdouble get_alpha_ () noexcept override;

// void Component::get_extents (AtkComponent* component, gint* x, gint* y, gint* width, gint* height, AtkCoordType coord_type);
// void Component::get_extents (::AtkComponent* component, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coord_type);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// AtkLayer Component::get_layer (AtkComponent* component);
// ::AtkLayer Component::get_layer (::AtkComponent* component);
GI_INLINE_DECL Atk::Layer get_layer_ () noexcept override;

// gint Component::get_mdi_zorder (AtkComponent* component);
// gint Component::get_mdi_zorder (::AtkComponent* component);
GI_INLINE_DECL gint get_mdi_zorder_ () noexcept override;

// void Component::get_position (AtkComponent* component, gint* x, gint* y, AtkCoordType coord_type);
// void Component::get_position (::AtkComponent* component, gint* x, gint* y, ::AtkCoordType coord_type);
// IGNORE; deprecated, virtual-method out parameter not supported, virtual-method out parameter not supported

// void Component::get_size (AtkComponent* component, gint* width, gint* height);
// void Component::get_size (::AtkComponent* component, gint* width, gint* height);
// IGNORE; deprecated, virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean Component::grab_focus (AtkComponent* component);
// gboolean Component::grab_focus (::AtkComponent* component);
GI_INLINE_DECL bool grab_focus_ () noexcept override;

// AtkObject* Component::ref_accessible_at_point (AtkComponent* component, gint x, gint y, AtkCoordType coord_type);
// ::AtkObject* Component::ref_accessible_at_point (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
GI_INLINE_DECL Atk::Object ref_accessible_at_point_ (gint x, gint y, Atk::CoordType coord_type) noexcept override;

// void Component::remove_focus_handler (AtkComponent* component, guint handler_id);
// void Component::remove_focus_handler (::AtkComponent* component, guint handler_id);
// IGNORE; deprecated

// gboolean Component::scroll_to (AtkComponent* component, AtkScrollType type);
// gboolean Component::scroll_to (::AtkComponent* component, ::AtkScrollType type);
GI_INLINE_DECL bool scroll_to_ (Atk::ScrollType type) noexcept override;

// gboolean Component::scroll_to_point (AtkComponent* component, AtkCoordType coords, gint x, gint y);
// gboolean Component::scroll_to_point (::AtkComponent* component, ::AtkCoordType coords, gint x, gint y);
GI_INLINE_DECL bool scroll_to_point_ (Atk::CoordType coords, gint x, gint y) noexcept override;

// gboolean Component::set_extents (AtkComponent* component, gint x, gint y, gint width, gint height, AtkCoordType coord_type);
// gboolean Component::set_extents (::AtkComponent* component, gint x, gint y, gint width, gint height, ::AtkCoordType coord_type);
GI_INLINE_DECL bool set_extents_ (gint x, gint y, gint width, gint height, Atk::CoordType coord_type) noexcept override;

// gboolean Component::set_position (AtkComponent* component, gint x, gint y, AtkCoordType coord_type);
// gboolean Component::set_position (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
GI_INLINE_DECL bool set_position_ (gint x, gint y, Atk::CoordType coord_type) noexcept override;

// gboolean Component::set_size (AtkComponent* component, gint width, gint height);
// gboolean Component::set_size (::AtkComponent* component, gint width, gint height);
GI_INLINE_DECL bool set_size_ (gint width, gint height) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
