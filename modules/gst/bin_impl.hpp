// AUTO-GENERATED

#ifndef _GI_GST_BIN_IMPL_HPP_
#define _GI_GST_BIN_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

Gst::ChildProxy BinBase::interface_ (gi::interface_tag<Gst::ChildProxy>)
{ return gi::wrap ((Gst::ChildProxy::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

BinBase::operator Gst::ChildProxy ()
{ return interface_ (gi::interface_tag<Gst::ChildProxy>()); }

// GstElement* gst_bin_new (const gchar* name);
// ::GstBin* gst_bin_new (const char* name);
Gst::Bin base::BinBase::new_ (const std::string & name) noexcept
{
  typedef ::GstBin* (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bin_new;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Bin base::BinBase::new_ () noexcept
{
  typedef ::GstBin* (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bin_new;
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_bin_add (GstBin* bin, GstElement* element);
// gboolean gst_bin_add (::GstBin* bin, ::GstElement* element);
bool base::BinBase::add (Gst::Element element) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBin* bin, ::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bin_add;
  auto element_to_c = gi::unwrap (element, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBin*) (gobj_()), (::GstElement*) (element_to_c));
  return _temp_ret;
}

// void gst_bin_add_many (GstBin* bin, GstElement* element_1);
// void gst_bin_add_many (::GstBin* bin, ::GstElement* element_1);
// IGNORE; not introspectable, varargs not supported

// GstPad* gst_bin_find_unlinked_pad (GstBin* bin, GstPadDirection direction);
// ::GstPad* gst_bin_find_unlinked_pad (::GstBin* bin, ::GstPadDirection direction);
Gst::Pad base::BinBase::find_unlinked_pad (Gst::PadDirection direction) noexcept
{
  typedef ::GstPad* (*call_wrap_t) (::GstBin* bin, ::GstPadDirection direction);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bin_find_unlinked_pad;
  auto direction_to_c = gi::unwrap (direction);
  auto _temp_ret = call_wrap_v ((::GstBin*) (gobj_()), (::GstPadDirection) (direction_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstElement* gst_bin_get_by_interface (GstBin* bin, GType iface);
// ::GstElement* gst_bin_get_by_interface (::GstBin* bin, GType iface);
Gst::Element base::BinBase::get_by_interface (GType iface) noexcept
{
  typedef ::GstElement* (*call_wrap_t) (::GstBin* bin, GType iface);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bin_get_by_interface;
  auto iface_to_c = iface;
  auto _temp_ret = call_wrap_v ((::GstBin*) (gobj_()), (GType) (iface_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstElement* gst_bin_get_by_name (GstBin* bin, const gchar* name);
// ::GstElement* gst_bin_get_by_name (::GstBin* bin, const char* name);
Gst::Element base::BinBase::get_by_name (const std::string & name) noexcept
{
  typedef ::GstElement* (*call_wrap_t) (::GstBin* bin, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bin_get_by_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBin*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstElement* gst_bin_get_by_name_recurse_up (GstBin* bin, const gchar* name);
// ::GstElement* gst_bin_get_by_name_recurse_up (::GstBin* bin, const char* name);
Gst::Element base::BinBase::get_by_name_recurse_up (const std::string & name) noexcept
{
  typedef ::GstElement* (*call_wrap_t) (::GstBin* bin, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bin_get_by_name_recurse_up;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBin*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstElementFlags gst_bin_get_suppressed_flags (GstBin* bin);
// ::GstElementFlags gst_bin_get_suppressed_flags (::GstBin* bin);
Gst::ElementFlags base::BinBase::get_suppressed_flags () noexcept
{
  typedef ::GstElementFlags (*call_wrap_t) (::GstBin* bin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bin_get_suppressed_flags;
  auto _temp_ret = call_wrap_v ((::GstBin*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GstIterator* gst_bin_iterate_all_by_element_factory_name (GstBin* bin, const gchar* factory_name);
// ::GstIterator* gst_bin_iterate_all_by_element_factory_name (::GstBin* bin, const char* factory_name);
Gst::Iterator base::BinBase::iterate_all_by_element_factory_name (const std::string & factory_name) noexcept
{
  typedef ::GstIterator* (*call_wrap_t) (::GstBin* bin, const char* factory_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bin_iterate_all_by_element_factory_name;
  auto factory_name_to_c = gi::unwrap (factory_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBin*) (gobj_()), (const char*) (factory_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstIterator* gst_bin_iterate_all_by_interface (GstBin* bin, GType iface);
// ::GstIterator* gst_bin_iterate_all_by_interface (::GstBin* bin, GType iface);
Gst::Iterator base::BinBase::iterate_all_by_interface (GType iface) noexcept
{
  typedef ::GstIterator* (*call_wrap_t) (::GstBin* bin, GType iface);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bin_iterate_all_by_interface;
  auto iface_to_c = iface;
  auto _temp_ret = call_wrap_v ((::GstBin*) (gobj_()), (GType) (iface_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstIterator* gst_bin_iterate_elements (GstBin* bin);
// ::GstIterator* gst_bin_iterate_elements (::GstBin* bin);
Gst::Iterator base::BinBase::iterate_elements () noexcept
{
  typedef ::GstIterator* (*call_wrap_t) (::GstBin* bin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bin_iterate_elements;
  auto _temp_ret = call_wrap_v ((::GstBin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstIterator* gst_bin_iterate_recurse (GstBin* bin);
// ::GstIterator* gst_bin_iterate_recurse (::GstBin* bin);
Gst::Iterator base::BinBase::iterate_recurse () noexcept
{
  typedef ::GstIterator* (*call_wrap_t) (::GstBin* bin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bin_iterate_recurse;
  auto _temp_ret = call_wrap_v ((::GstBin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstIterator* gst_bin_iterate_sinks (GstBin* bin);
// ::GstIterator* gst_bin_iterate_sinks (::GstBin* bin);
Gst::Iterator base::BinBase::iterate_sinks () noexcept
{
  typedef ::GstIterator* (*call_wrap_t) (::GstBin* bin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bin_iterate_sinks;
  auto _temp_ret = call_wrap_v ((::GstBin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstIterator* gst_bin_iterate_sorted (GstBin* bin);
// ::GstIterator* gst_bin_iterate_sorted (::GstBin* bin);
Gst::Iterator base::BinBase::iterate_sorted () noexcept
{
  typedef ::GstIterator* (*call_wrap_t) (::GstBin* bin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bin_iterate_sorted;
  auto _temp_ret = call_wrap_v ((::GstBin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstIterator* gst_bin_iterate_sources (GstBin* bin);
// ::GstIterator* gst_bin_iterate_sources (::GstBin* bin);
Gst::Iterator base::BinBase::iterate_sources () noexcept
{
  typedef ::GstIterator* (*call_wrap_t) (::GstBin* bin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bin_iterate_sources;
  auto _temp_ret = call_wrap_v ((::GstBin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_bin_recalculate_latency (GstBin* bin);
// gboolean gst_bin_recalculate_latency (::GstBin* bin);
bool base::BinBase::recalculate_latency () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBin* bin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bin_recalculate_latency;
  auto _temp_ret = call_wrap_v ((::GstBin*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_bin_remove (GstBin* bin, GstElement* element);
// gboolean gst_bin_remove (::GstBin* bin, ::GstElement* element);
bool base::BinBase::remove (Gst::Element element) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBin* bin, ::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bin_remove;
  auto element_to_c = gi::unwrap (element, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBin*) (gobj_()), (::GstElement*) (element_to_c));
  return _temp_ret;
}

// void gst_bin_remove_many (GstBin* bin, GstElement* element_1);
// void gst_bin_remove_many (::GstBin* bin, ::GstElement* element_1);
// IGNORE; not introspectable, varargs not supported

// void gst_bin_set_suppressed_flags (GstBin* bin, GstElementFlags flags);
// void gst_bin_set_suppressed_flags (::GstBin* bin, ::GstElementFlags flags);
void base::BinBase::set_suppressed_flags (Gst::ElementFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GstBin* bin, ::GstElementFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bin_set_suppressed_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GstBin*) (gobj_()), (::GstElementFlags) (flags_to_c));
}

// gboolean gst_bin_sync_children_states (GstBin* bin);
// gboolean gst_bin_sync_children_states (::GstBin* bin);
bool base::BinBase::sync_children_states () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBin* bin);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_bin_sync_children_states;
  auto _temp_ret = call_wrap_v ((::GstBin*) (gobj_()));
  return _temp_ret;
}

static gint _field_numchildren_get (const ::GstBin* obj) { return (gint) obj->numchildren; }
// gint Bin::numchildren (const ::GstBin* obj);
// gint Bin::numchildren (const ::GstBin* obj);
gint base::BinBase::numchildren_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstBin* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_numchildren_get;
  auto _temp_ret = call_wrap_v ((const ::GstBin*) (gobj_()));
  return _temp_ret;
}

static void _field_numchildren_set (::GstBin* obj, gint _value) { obj->numchildren = (decltype(obj->numchildren)) _value; }
//  Bin::numchildren (::GstBin* obj, gint _value);
// void Bin::numchildren (::GstBin* obj, gint _value);
void base::BinBase::numchildren_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GstBin* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_numchildren_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstBin*) (gobj_()), (gint) (_value_to_c));
}

static guint32 _field_children_cookie_get (const ::GstBin* obj) { return (guint32) obj->children_cookie; }
// guint32 Bin::children_cookie (const ::GstBin* obj);
// guint32 Bin::children_cookie (const ::GstBin* obj);
guint32 base::BinBase::children_cookie_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GstBin* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_children_cookie_get;
  auto _temp_ret = call_wrap_v ((const ::GstBin*) (gobj_()));
  return _temp_ret;
}

static void _field_children_cookie_set (::GstBin* obj, guint32 _value) { obj->children_cookie = (decltype(obj->children_cookie)) _value; }
//  Bin::children_cookie (::GstBin* obj, guint32 _value);
// void Bin::children_cookie (::GstBin* obj, guint32 _value);
void base::BinBase::children_cookie_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GstBin* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_children_cookie_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstBin*) (gobj_()), (guint32) (_value_to_c));
}

static ::GstBus* _field_child_bus_get (const ::GstBin* obj) { return (::GstBus*) obj->child_bus; }
// ::GstBus* Bin::child_bus (const ::GstBin* obj);
// ::GstBus* Bin::child_bus (const ::GstBin* obj);
Gst::Bus base::BinBase::child_bus_ () const noexcept
{
  typedef ::GstBus* (*call_wrap_t) (const ::GstBin* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_child_bus_get;
  auto _temp_ret = call_wrap_v ((const ::GstBin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gboolean _field_polling_get (const ::GstBin* obj) { return (gboolean) obj->polling; }
// gboolean Bin::polling (const ::GstBin* obj);
// gboolean Bin::polling (const ::GstBin* obj);
bool base::BinBase::polling_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstBin* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_polling_get;
  auto _temp_ret = call_wrap_v ((const ::GstBin*) (gobj_()));
  return _temp_ret;
}

static void _field_polling_set (::GstBin* obj, gboolean _value) { obj->polling = (decltype(obj->polling)) _value; }
//  Bin::polling (::GstBin* obj, gboolean _value);
// void Bin::polling (::GstBin* obj, gboolean _value);
void base::BinBase::polling_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::GstBin* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_polling_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstBin*) (gobj_()), (gboolean) (_value_to_c));
}

static gboolean _field_state_dirty_get (const ::GstBin* obj) { return (gboolean) obj->state_dirty; }
// gboolean Bin::state_dirty (const ::GstBin* obj);
// gboolean Bin::state_dirty (const ::GstBin* obj);
bool base::BinBase::state_dirty_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstBin* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_dirty_get;
  auto _temp_ret = call_wrap_v ((const ::GstBin*) (gobj_()));
  return _temp_ret;
}

static void _field_state_dirty_set (::GstBin* obj, gboolean _value) { obj->state_dirty = (decltype(obj->state_dirty)) _value; }
//  Bin::state_dirty (::GstBin* obj, gboolean _value);
// void Bin::state_dirty (::GstBin* obj, gboolean _value);
void base::BinBase::state_dirty_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::GstBin* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_dirty_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstBin*) (gobj_()), (gboolean) (_value_to_c));
}

static gboolean _field_clock_dirty_get (const ::GstBin* obj) { return (gboolean) obj->clock_dirty; }
// gboolean Bin::clock_dirty (const ::GstBin* obj);
// gboolean Bin::clock_dirty (const ::GstBin* obj);
bool base::BinBase::clock_dirty_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstBin* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_clock_dirty_get;
  auto _temp_ret = call_wrap_v ((const ::GstBin*) (gobj_()));
  return _temp_ret;
}

static void _field_clock_dirty_set (::GstBin* obj, gboolean _value) { obj->clock_dirty = (decltype(obj->clock_dirty)) _value; }
//  Bin::clock_dirty (::GstBin* obj, gboolean _value);
// void Bin::clock_dirty (::GstBin* obj, gboolean _value);
void base::BinBase::clock_dirty_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::GstBin* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_clock_dirty_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstBin*) (gobj_()), (gboolean) (_value_to_c));
}

static ::GstClock* _field_provided_clock_get (const ::GstBin* obj) { return (::GstClock*) obj->provided_clock; }
// ::GstClock* Bin::provided_clock (const ::GstBin* obj);
// ::GstClock* Bin::provided_clock (const ::GstBin* obj);
Gst::Clock base::BinBase::provided_clock_ () const noexcept
{
  typedef ::GstClock* (*call_wrap_t) (const ::GstBin* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_provided_clock_get;
  auto _temp_ret = call_wrap_v ((const ::GstBin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GstElement* _field_clock_provider_get (const ::GstBin* obj) { return (::GstElement*) obj->clock_provider; }
// ::GstElement* Bin::clock_provider (const ::GstBin* obj);
// ::GstElement* Bin::clock_provider (const ::GstBin* obj);
Gst::Element base::BinBase::clock_provider_ () const noexcept
{
  typedef ::GstElement* (*call_wrap_t) (const ::GstBin* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_clock_provider_get;
  auto _temp_ret = call_wrap_v ((const ::GstBin*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}







} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/bin_extra_def_impl.hpp>)
#include <gst/bin_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/bin_extra_impl.hpp>)
#include <gst/bin_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void BinClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstBinClass *methods = (::GstBinClass *) class_struct;
  (void) methods;

  methods->add_element = (decltype (methods->add_element)) detail::method_wrapper<self, bool (*) (Gst::Element element), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::add_element_>;
  methods->deep_element_added = (decltype (methods->deep_element_added)) detail::method_wrapper<self, void (*) (Gst::Bin sub_bin, Gst::Element child), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::deep_element_added_>;
  methods->deep_element_removed = (decltype (methods->deep_element_removed)) detail::method_wrapper<self, void (*) (Gst::Bin sub_bin, Gst::Element child), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::deep_element_removed_>;
  methods->do_latency = (decltype (methods->do_latency)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::do_latency_>;
  methods->element_added = (decltype (methods->element_added)) detail::method_wrapper<self, void (*) (Gst::Element child), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::element_added_>;
  methods->element_removed = (decltype (methods->element_removed)) detail::method_wrapper<self, void (*) (Gst::Element child), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::element_removed_>;
  methods->handle_message = (decltype (methods->handle_message)) detail::method_wrapper<self, void (*) (Gst::Message message), gi::transfer_full_t, gi::transfer_full_t>::wrapper<&self::handle_message_>;
  methods->remove_element = (decltype (methods->remove_element)) detail::method_wrapper<self, bool (*) (Gst::Element element), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::remove_element_>;
}

// gboolean Bin::add_element (GstBin* bin, GstElement* element);
// gboolean Bin::add_element (::GstBin* bin, ::GstElement* element);
bool BinClass::add_element_ (Gst::Element element) noexcept
{
  if (!get_struct_()->add_element) return bool{};
  typedef gboolean (*call_wrap_t) (::GstBin* bin, ::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add_element;
  auto element_to_c = gi::unwrap (element, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBin*) (gobj_()), (::GstElement*) (element_to_c));
  return _temp_ret;
}

// void Bin::deep_element_added (GstBin* bin, GstBin* sub_bin, GstElement* child);
// void Bin::deep_element_added (::GstBin* bin, ::GstBin* sub_bin, ::GstElement* child);
void BinClass::deep_element_added_ (Gst::Bin sub_bin, Gst::Element child) noexcept
{
  if (!get_struct_()->deep_element_added) return ;
  typedef void (*call_wrap_t) (::GstBin* bin, ::GstBin* sub_bin, ::GstElement* child);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->deep_element_added;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto sub_bin_to_c = gi::unwrap (sub_bin, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstBin*) (gobj_()), (::GstBin*) (sub_bin_to_c), (::GstElement*) (child_to_c));
}

// void Bin::deep_element_removed (GstBin* bin, GstBin* sub_bin, GstElement* child);
// void Bin::deep_element_removed (::GstBin* bin, ::GstBin* sub_bin, ::GstElement* child);
void BinClass::deep_element_removed_ (Gst::Bin sub_bin, Gst::Element child) noexcept
{
  if (!get_struct_()->deep_element_removed) return ;
  typedef void (*call_wrap_t) (::GstBin* bin, ::GstBin* sub_bin, ::GstElement* child);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->deep_element_removed;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto sub_bin_to_c = gi::unwrap (sub_bin, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstBin*) (gobj_()), (::GstBin*) (sub_bin_to_c), (::GstElement*) (child_to_c));
}

// gboolean Bin::do_latency (GstBin* bin);
// gboolean Bin::do_latency (::GstBin* bin);
bool BinClass::do_latency_ () noexcept
{
  if (!get_struct_()->do_latency) return bool{};
  typedef gboolean (*call_wrap_t) (::GstBin* bin);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->do_latency;
  auto _temp_ret = call_wrap_v ((::GstBin*) (gobj_()));
  return _temp_ret;
}

// void Bin::element_added (GstBin* bin, GstElement* child);
// void Bin::element_added (::GstBin* bin, ::GstElement* child);
void BinClass::element_added_ (Gst::Element child) noexcept
{
  if (!get_struct_()->element_added) return ;
  typedef void (*call_wrap_t) (::GstBin* bin, ::GstElement* child);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->element_added;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstBin*) (gobj_()), (::GstElement*) (child_to_c));
}

// void Bin::element_removed (GstBin* bin, GstElement* child);
// void Bin::element_removed (::GstBin* bin, ::GstElement* child);
void BinClass::element_removed_ (Gst::Element child) noexcept
{
  if (!get_struct_()->element_removed) return ;
  typedef void (*call_wrap_t) (::GstBin* bin, ::GstElement* child);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->element_removed;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstBin*) (gobj_()), (::GstElement*) (child_to_c));
}

// void Bin::handle_message (GstBin* bin, GstMessage* message);
// void Bin::handle_message (::GstBin* bin, ::GstMessage* message);
void BinClass::handle_message_ (Gst::Message message) noexcept
{
  if (!get_struct_()->handle_message) return ;
  typedef void (*call_wrap_t) (::GstBin* bin, ::GstMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_message;
  auto message_to_c = gi::unwrap (message, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GstBin*) (gobj_()), (::GstMessage*) (message_to_c));
}

// gboolean Bin::remove_element (GstBin* bin, GstElement* element);
// gboolean Bin::remove_element (::GstBin* bin, ::GstElement* element);
bool BinClass::remove_element_ (Gst::Element element) noexcept
{
  if (!get_struct_()->remove_element) return bool{};
  typedef gboolean (*call_wrap_t) (::GstBin* bin, ::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remove_element;
  auto element_to_c = gi::unwrap (element, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBin*) (gobj_()), (::GstElement*) (element_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
