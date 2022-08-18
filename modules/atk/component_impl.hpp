// AUTO-GENERATED

#ifndef _GI_ATK_COMPONENT_IMPL_HPP_
#define _GI_ATK_COMPONENT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// guint atk_component_add_focus_handler (AtkComponent* component, AtkFocusHandler handler);
// guint atk_component_add_focus_handler (::AtkComponent* component,  handler);
// IGNORE; deprecated

// gboolean atk_component_contains (AtkComponent* component, gint x, gint y, AtkCoordType coord_type);
// gboolean atk_component_contains (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
bool base::ComponentBase::contains (gint x, gint y, Atk::CoordType coord_type) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_component_contains;
  auto coord_type_to_c = gi::unwrap (coord_type);
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (::AtkCoordType) (coord_type_to_c));
  return _temp_ret;
}

// gdouble atk_component_get_alpha (AtkComponent* component);
// gdouble atk_component_get_alpha (::AtkComponent* component);
gdouble base::ComponentBase::get_alpha () noexcept
{
  typedef gdouble (*call_wrap_t) (::AtkComponent* component);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_component_get_alpha;
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()));
  return _temp_ret;
}

// void atk_component_get_extents (AtkComponent* component, gint* x, gint* y, gint* width, gint* height, AtkCoordType coord_type);
// void atk_component_get_extents (::AtkComponent* component, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coord_type);
void base::ComponentBase::get_extents (gint * x, gint * y, gint * width, gint * height, Atk::CoordType coord_type) noexcept
{
  typedef void (*call_wrap_t) (::AtkComponent* component, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coord_type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_component_get_extents;
  auto coord_type_to_c = gi::unwrap (coord_type);
  gint height_o {};
  gint width_o {};
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::AtkComponent*) (gobj_()), (gint*) (x ? &x_o : nullptr), (gint*) (y ? &y_o : nullptr), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr), (::AtkCoordType) (coord_type_to_c));
  if (height) *height = height_o;
  if (width) *width = width_o;
  if (y) *y = y_o;
  if (x) *x = x_o;
}
std::tuple<gint, gint, gint, gint> base::ComponentBase::get_extents (Atk::CoordType coord_type) noexcept
{
  typedef void (*call_wrap_t) (::AtkComponent* component, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coord_type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_component_get_extents;
  auto coord_type_to_c = gi::unwrap (coord_type);
  gint height_o {};
  gint width_o {};
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::AtkComponent*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o), (gint*) (&width_o), (gint*) (&height_o), (::AtkCoordType) (coord_type_to_c));
  return std::make_tuple (x_o, y_o, width_o, height_o);
}

// AtkLayer atk_component_get_layer (AtkComponent* component);
// ::AtkLayer atk_component_get_layer (::AtkComponent* component);
Atk::Layer base::ComponentBase::get_layer () noexcept
{
  typedef ::AtkLayer (*call_wrap_t) (::AtkComponent* component);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_component_get_layer;
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint atk_component_get_mdi_zorder (AtkComponent* component);
// gint atk_component_get_mdi_zorder (::AtkComponent* component);
gint base::ComponentBase::get_mdi_zorder () noexcept
{
  typedef gint (*call_wrap_t) (::AtkComponent* component);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_component_get_mdi_zorder;
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()));
  return _temp_ret;
}

// void atk_component_get_position (AtkComponent* component, gint* x, gint* y, AtkCoordType coord_type);
// void atk_component_get_position (::AtkComponent* component, gint* x, gint* y, ::AtkCoordType coord_type);
// IGNORE; deprecated

// void atk_component_get_size (AtkComponent* component, gint* width, gint* height);
// void atk_component_get_size (::AtkComponent* component, gint* width, gint* height);
// IGNORE; deprecated

// gboolean atk_component_grab_focus (AtkComponent* component);
// gboolean atk_component_grab_focus (::AtkComponent* component);
bool base::ComponentBase::grab_focus () noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkComponent* component);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_component_grab_focus;
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()));
  return _temp_ret;
}

// AtkObject* atk_component_ref_accessible_at_point (AtkComponent* component, gint x, gint y, AtkCoordType coord_type);
// ::AtkObject* atk_component_ref_accessible_at_point (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
Atk::Object base::ComponentBase::ref_accessible_at_point (gint x, gint y, Atk::CoordType coord_type) noexcept
{
  typedef ::AtkObject* (*call_wrap_t) (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_component_ref_accessible_at_point;
  auto coord_type_to_c = gi::unwrap (coord_type);
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (::AtkCoordType) (coord_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void atk_component_remove_focus_handler (AtkComponent* component, guint handler_id);
// void atk_component_remove_focus_handler (::AtkComponent* component, guint handler_id);
// IGNORE; deprecated

// gboolean atk_component_scroll_to (AtkComponent* component, AtkScrollType type);
// gboolean atk_component_scroll_to (::AtkComponent* component, ::AtkScrollType type);
bool base::ComponentBase::scroll_to (Atk::ScrollType type) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkComponent* component, ::AtkScrollType type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_component_scroll_to;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()), (::AtkScrollType) (type_to_c));
  return _temp_ret;
}

// gboolean atk_component_scroll_to_point (AtkComponent* component, AtkCoordType coords, gint x, gint y);
// gboolean atk_component_scroll_to_point (::AtkComponent* component, ::AtkCoordType coords, gint x, gint y);
bool base::ComponentBase::scroll_to_point (Atk::CoordType coords, gint x, gint y) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkComponent* component, ::AtkCoordType coords, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_component_scroll_to_point;
  auto y_to_c = y;
  auto x_to_c = x;
  auto coords_to_c = gi::unwrap (coords);
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()), (::AtkCoordType) (coords_to_c), (gint) (x_to_c), (gint) (y_to_c));
  return _temp_ret;
}

// gboolean atk_component_set_extents (AtkComponent* component, gint x, gint y, gint width, gint height, AtkCoordType coord_type);
// gboolean atk_component_set_extents (::AtkComponent* component, gint x, gint y, gint width, gint height, ::AtkCoordType coord_type);
bool base::ComponentBase::set_extents (gint x, gint y, gint width, gint height, Atk::CoordType coord_type) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkComponent* component, gint x, gint y, gint width, gint height, ::AtkCoordType coord_type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_component_set_extents;
  auto coord_type_to_c = gi::unwrap (coord_type);
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (gint) (width_to_c), (gint) (height_to_c), (::AtkCoordType) (coord_type_to_c));
  return _temp_ret;
}

// gboolean atk_component_set_position (AtkComponent* component, gint x, gint y, AtkCoordType coord_type);
// gboolean atk_component_set_position (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
bool base::ComponentBase::set_position (gint x, gint y, Atk::CoordType coord_type) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_component_set_position;
  auto coord_type_to_c = gi::unwrap (coord_type);
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (::AtkCoordType) (coord_type_to_c));
  return _temp_ret;
}

// gboolean atk_component_set_size (AtkComponent* component, gint width, gint height);
// gboolean atk_component_set_size (::AtkComponent* component, gint width, gint height);
bool base::ComponentBase::set_size (gint width, gint height) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkComponent* component, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_component_set_size;
  auto height_to_c = height;
  auto width_to_c = width;
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
  return _temp_ret;
}



} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/component_extra_def_impl.hpp>)
#include <atk/component_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/component_extra_impl.hpp>)
#include <atk/component_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void ComponentIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::AtkComponentIface *methods = (::AtkComponentIface *) interface_struct;
  (void) methods;

  methods->bounds_changed = (decltype (methods->bounds_changed)) detail::method_wrapper<self, void (*) (Atk::Rectangle bounds), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::bounds_changed_>;
  methods->contains = (decltype (methods->contains)) detail::method_wrapper<self, bool (*) (gint x, gint y, Atk::CoordType coord_type), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::contains_>;
  methods->get_alpha = (decltype (methods->get_alpha)) detail::method_wrapper<self, gdouble (*) (), gi::transfer_none_t>::wrapper<&self::get_alpha_>;
  methods->get_layer = (decltype (methods->get_layer)) detail::method_wrapper<self, Atk::Layer (*) (), gi::transfer_none_t>::wrapper<&self::get_layer_>;
  methods->get_mdi_zorder = (decltype (methods->get_mdi_zorder)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_mdi_zorder_>;
  methods->grab_focus = (decltype (methods->grab_focus)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::grab_focus_>;
  methods->ref_accessible_at_point = (decltype (methods->ref_accessible_at_point)) detail::method_wrapper<self, Atk::Object (*) (gint x, gint y, Atk::CoordType coord_type), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::ref_accessible_at_point_>;
  methods->scroll_to = (decltype (methods->scroll_to)) detail::method_wrapper<self, bool (*) (Atk::ScrollType type), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::scroll_to_>;
  methods->scroll_to_point = (decltype (methods->scroll_to_point)) detail::method_wrapper<self, bool (*) (Atk::CoordType coords, gint x, gint y), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::scroll_to_point_>;
  methods->set_extents = (decltype (methods->set_extents)) detail::method_wrapper<self, bool (*) (gint x, gint y, gint width, gint height, Atk::CoordType coord_type), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_extents_>;
  methods->set_position = (decltype (methods->set_position)) detail::method_wrapper<self, bool (*) (gint x, gint y, Atk::CoordType coord_type), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_position_>;
  methods->set_size = (decltype (methods->set_size)) detail::method_wrapper<self, bool (*) (gint width, gint height), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_size_>;
}

// void Component::bounds_changed (AtkComponent* component, AtkRectangle* bounds);
// void Component::bounds_changed (::AtkComponent* component, ::AtkRectangle* bounds);
void ComponentIfaceClassImpl::bounds_changed_ (Atk::Rectangle bounds) noexcept
{
  if (!get_struct_()->bounds_changed) return ;
  typedef void (*call_wrap_t) (::AtkComponent* component, ::AtkRectangle* bounds);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->bounds_changed;
  auto bounds_to_c = gi::unwrap (bounds, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkComponent*) (gobj_()), (::AtkRectangle*) (bounds_to_c));
}

// gboolean Component::contains (AtkComponent* component, gint x, gint y, AtkCoordType coord_type);
// gboolean Component::contains (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
bool ComponentIfaceClassImpl::contains_ (gint x, gint y, Atk::CoordType coord_type) noexcept
{
  if (!get_struct_()->contains) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->contains;
  auto coord_type_to_c = gi::unwrap (coord_type);
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (::AtkCoordType) (coord_type_to_c));
  return _temp_ret;
}

// gdouble Component::get_alpha (AtkComponent* component);
// gdouble Component::get_alpha (::AtkComponent* component);
gdouble ComponentIfaceClassImpl::get_alpha_ () noexcept
{
  if (!get_struct_()->get_alpha) return gdouble{};
  typedef gdouble (*call_wrap_t) (::AtkComponent* component);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_alpha;
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()));
  return _temp_ret;
}

// void Component::get_extents (AtkComponent* component, gint* x, gint* y, gint* width, gint* height, AtkCoordType coord_type);
// void Component::get_extents (::AtkComponent* component, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coord_type);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// AtkLayer Component::get_layer (AtkComponent* component);
// ::AtkLayer Component::get_layer (::AtkComponent* component);
Atk::Layer ComponentIfaceClassImpl::get_layer_ () noexcept
{
  if (!get_struct_()->get_layer) return Atk::Layer{};
  typedef ::AtkLayer (*call_wrap_t) (::AtkComponent* component);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_layer;
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint Component::get_mdi_zorder (AtkComponent* component);
// gint Component::get_mdi_zorder (::AtkComponent* component);
gint ComponentIfaceClassImpl::get_mdi_zorder_ () noexcept
{
  if (!get_struct_()->get_mdi_zorder) return gint{};
  typedef gint (*call_wrap_t) (::AtkComponent* component);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_mdi_zorder;
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()));
  return _temp_ret;
}

// void Component::get_position (AtkComponent* component, gint* x, gint* y, AtkCoordType coord_type);
// void Component::get_position (::AtkComponent* component, gint* x, gint* y, ::AtkCoordType coord_type);
// IGNORE; deprecated, virtual-method out parameter not supported, virtual-method out parameter not supported

// void Component::get_size (AtkComponent* component, gint* width, gint* height);
// void Component::get_size (::AtkComponent* component, gint* width, gint* height);
// IGNORE; deprecated, virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean Component::grab_focus (AtkComponent* component);
// gboolean Component::grab_focus (::AtkComponent* component);
bool ComponentIfaceClassImpl::grab_focus_ () noexcept
{
  if (!get_struct_()->grab_focus) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkComponent* component);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->grab_focus;
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()));
  return _temp_ret;
}

// AtkObject* Component::ref_accessible_at_point (AtkComponent* component, gint x, gint y, AtkCoordType coord_type);
// ::AtkObject* Component::ref_accessible_at_point (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
Atk::Object ComponentIfaceClassImpl::ref_accessible_at_point_ (gint x, gint y, Atk::CoordType coord_type) noexcept
{
  if (!get_struct_()->ref_accessible_at_point) return Atk::Object{};
  typedef ::AtkObject* (*call_wrap_t) (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->ref_accessible_at_point;
  auto coord_type_to_c = gi::unwrap (coord_type);
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (::AtkCoordType) (coord_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void Component::remove_focus_handler (AtkComponent* component, guint handler_id);
// void Component::remove_focus_handler (::AtkComponent* component, guint handler_id);
// IGNORE; deprecated

// gboolean Component::scroll_to (AtkComponent* component, AtkScrollType type);
// gboolean Component::scroll_to (::AtkComponent* component, ::AtkScrollType type);
bool ComponentIfaceClassImpl::scroll_to_ (Atk::ScrollType type) noexcept
{
  if (!get_struct_()->scroll_to) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkComponent* component, ::AtkScrollType type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->scroll_to;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()), (::AtkScrollType) (type_to_c));
  return _temp_ret;
}

// gboolean Component::scroll_to_point (AtkComponent* component, AtkCoordType coords, gint x, gint y);
// gboolean Component::scroll_to_point (::AtkComponent* component, ::AtkCoordType coords, gint x, gint y);
bool ComponentIfaceClassImpl::scroll_to_point_ (Atk::CoordType coords, gint x, gint y) noexcept
{
  if (!get_struct_()->scroll_to_point) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkComponent* component, ::AtkCoordType coords, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->scroll_to_point;
  auto y_to_c = y;
  auto x_to_c = x;
  auto coords_to_c = gi::unwrap (coords);
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()), (::AtkCoordType) (coords_to_c), (gint) (x_to_c), (gint) (y_to_c));
  return _temp_ret;
}

// gboolean Component::set_extents (AtkComponent* component, gint x, gint y, gint width, gint height, AtkCoordType coord_type);
// gboolean Component::set_extents (::AtkComponent* component, gint x, gint y, gint width, gint height, ::AtkCoordType coord_type);
bool ComponentIfaceClassImpl::set_extents_ (gint x, gint y, gint width, gint height, Atk::CoordType coord_type) noexcept
{
  if (!get_struct_()->set_extents) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkComponent* component, gint x, gint y, gint width, gint height, ::AtkCoordType coord_type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_extents;
  auto coord_type_to_c = gi::unwrap (coord_type);
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (gint) (width_to_c), (gint) (height_to_c), (::AtkCoordType) (coord_type_to_c));
  return _temp_ret;
}

// gboolean Component::set_position (AtkComponent* component, gint x, gint y, AtkCoordType coord_type);
// gboolean Component::set_position (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
bool ComponentIfaceClassImpl::set_position_ (gint x, gint y, Atk::CoordType coord_type) noexcept
{
  if (!get_struct_()->set_position) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkComponent* component, gint x, gint y, ::AtkCoordType coord_type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_position;
  auto coord_type_to_c = gi::unwrap (coord_type);
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (::AtkCoordType) (coord_type_to_c));
  return _temp_ret;
}

// gboolean Component::set_size (AtkComponent* component, gint width, gint height);
// gboolean Component::set_size (::AtkComponent* component, gint width, gint height);
bool ComponentIfaceClassImpl::set_size_ (gint width, gint height) noexcept
{
  if (!get_struct_()->set_size) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkComponent* component, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_size;
  auto height_to_c = height;
  auto width_to_c = width;
  auto _temp_ret = call_wrap_v ((::AtkComponent*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
