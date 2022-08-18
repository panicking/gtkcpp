// AUTO-GENERATED

#ifndef _GI_GST_BIN_HPP_
#define _GI_GST_BIN_HPP_

#include "element.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Bus;
class ChildProxy;
class Clock;
class Element;
class Iterator;
class Message;
class Pad;

class Bin;

namespace base {


#define GI_GST_BIN_BASE base::BinBase
class BinBase : public Gst::Element
{
typedef Gst::Element super_type;
public:
typedef ::GstBin BaseObjectType;

BinBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_bin_get_type(); } 

GI_INLINE_DECL Gst::ChildProxy interface_ (gi::interface_tag<Gst::ChildProxy>);

GI_INLINE_DECL operator Gst::ChildProxy ();

// GstElement* gst_bin_new (const gchar* name);
// ::GstBin* gst_bin_new (const char* name);
static GI_INLINE_DECL Gst::Bin new_ (const std::string & name) noexcept;
static GI_INLINE_DECL Gst::Bin new_ () noexcept;

// gboolean gst_bin_add (GstBin* bin, GstElement* element);
// gboolean gst_bin_add (::GstBin* bin, ::GstElement* element);
GI_INLINE_DECL bool add (Gst::Element element) noexcept;

// void gst_bin_add_many (GstBin* bin, GstElement* element_1);
// void gst_bin_add_many (::GstBin* bin, ::GstElement* element_1);
// IGNORE; not introspectable, varargs not supported

// GstPad* gst_bin_find_unlinked_pad (GstBin* bin, GstPadDirection direction);
// ::GstPad* gst_bin_find_unlinked_pad (::GstBin* bin, ::GstPadDirection direction);
GI_INLINE_DECL Gst::Pad find_unlinked_pad (Gst::PadDirection direction) noexcept;

// GstElement* gst_bin_get_by_interface (GstBin* bin, GType iface);
// ::GstElement* gst_bin_get_by_interface (::GstBin* bin, GType iface);
GI_INLINE_DECL Gst::Element get_by_interface (GType iface) noexcept;

// GstElement* gst_bin_get_by_name (GstBin* bin, const gchar* name);
// ::GstElement* gst_bin_get_by_name (::GstBin* bin, const char* name);
GI_INLINE_DECL Gst::Element get_by_name (const std::string & name) noexcept;

// GstElement* gst_bin_get_by_name_recurse_up (GstBin* bin, const gchar* name);
// ::GstElement* gst_bin_get_by_name_recurse_up (::GstBin* bin, const char* name);
GI_INLINE_DECL Gst::Element get_by_name_recurse_up (const std::string & name) noexcept;

// GstElementFlags gst_bin_get_suppressed_flags (GstBin* bin);
// ::GstElementFlags gst_bin_get_suppressed_flags (::GstBin* bin);
GI_INLINE_DECL Gst::ElementFlags get_suppressed_flags () noexcept;

// GstIterator* gst_bin_iterate_all_by_element_factory_name (GstBin* bin, const gchar* factory_name);
// ::GstIterator* gst_bin_iterate_all_by_element_factory_name (::GstBin* bin, const char* factory_name);
GI_INLINE_DECL Gst::Iterator iterate_all_by_element_factory_name (const std::string & factory_name) noexcept;

// GstIterator* gst_bin_iterate_all_by_interface (GstBin* bin, GType iface);
// ::GstIterator* gst_bin_iterate_all_by_interface (::GstBin* bin, GType iface);
GI_INLINE_DECL Gst::Iterator iterate_all_by_interface (GType iface) noexcept;

// GstIterator* gst_bin_iterate_elements (GstBin* bin);
// ::GstIterator* gst_bin_iterate_elements (::GstBin* bin);
GI_INLINE_DECL Gst::Iterator iterate_elements () noexcept;

// GstIterator* gst_bin_iterate_recurse (GstBin* bin);
// ::GstIterator* gst_bin_iterate_recurse (::GstBin* bin);
GI_INLINE_DECL Gst::Iterator iterate_recurse () noexcept;

// GstIterator* gst_bin_iterate_sinks (GstBin* bin);
// ::GstIterator* gst_bin_iterate_sinks (::GstBin* bin);
GI_INLINE_DECL Gst::Iterator iterate_sinks () noexcept;

// GstIterator* gst_bin_iterate_sorted (GstBin* bin);
// ::GstIterator* gst_bin_iterate_sorted (::GstBin* bin);
GI_INLINE_DECL Gst::Iterator iterate_sorted () noexcept;

// GstIterator* gst_bin_iterate_sources (GstBin* bin);
// ::GstIterator* gst_bin_iterate_sources (::GstBin* bin);
GI_INLINE_DECL Gst::Iterator iterate_sources () noexcept;

// gboolean gst_bin_recalculate_latency (GstBin* bin);
// gboolean gst_bin_recalculate_latency (::GstBin* bin);
GI_INLINE_DECL bool recalculate_latency () noexcept;

// gboolean gst_bin_remove (GstBin* bin, GstElement* element);
// gboolean gst_bin_remove (::GstBin* bin, ::GstElement* element);
GI_INLINE_DECL bool remove (Gst::Element element) noexcept;

// void gst_bin_remove_many (GstBin* bin, GstElement* element_1);
// void gst_bin_remove_many (::GstBin* bin, ::GstElement* element_1);
// IGNORE; not introspectable, varargs not supported

// void gst_bin_set_suppressed_flags (GstBin* bin, GstElementFlags flags);
// void gst_bin_set_suppressed_flags (::GstBin* bin, ::GstElementFlags flags);
GI_INLINE_DECL void set_suppressed_flags (Gst::ElementFlags flags) noexcept;

// gboolean gst_bin_sync_children_states (GstBin* bin);
// gboolean gst_bin_sync_children_states (::GstBin* bin);
GI_INLINE_DECL bool sync_children_states () noexcept;

gi::property_proxy<bool, base::BinBase> property_async_handling()
{ return gi::property_proxy<bool, base::BinBase> (*this, "async-handling"); }
const gi::property_proxy<bool, base::BinBase> property_async_handling() const
{ return gi::property_proxy<bool, base::BinBase> (*this, "async-handling"); }

gi::property_proxy<bool, base::BinBase> property_message_forward()
{ return gi::property_proxy<bool, base::BinBase> (*this, "message-forward"); }
const gi::property_proxy<bool, base::BinBase> property_message_forward() const
{ return gi::property_proxy<bool, base::BinBase> (*this, "message-forward"); }

// gint Bin::numchildren (const ::GstBin* obj);
// gint Bin::numchildren (const ::GstBin* obj);
GI_INLINE_DECL gint numchildren_ () const noexcept;

//  Bin::numchildren (::GstBin* obj, gint _value);
// void Bin::numchildren (::GstBin* obj, gint _value);
GI_INLINE_DECL void numchildren_ (gint _value) noexcept;

// guint32 Bin::children_cookie (const ::GstBin* obj);
// guint32 Bin::children_cookie (const ::GstBin* obj);
GI_INLINE_DECL guint32 children_cookie_ () const noexcept;

//  Bin::children_cookie (::GstBin* obj, guint32 _value);
// void Bin::children_cookie (::GstBin* obj, guint32 _value);
GI_INLINE_DECL void children_cookie_ (guint32 _value) noexcept;

// ::GstBus* Bin::child_bus (const ::GstBin* obj);
// ::GstBus* Bin::child_bus (const ::GstBin* obj);
GI_INLINE_DECL Gst::Bus child_bus_ () const noexcept;

// gboolean Bin::polling (const ::GstBin* obj);
// gboolean Bin::polling (const ::GstBin* obj);
GI_INLINE_DECL bool polling_ () const noexcept;

//  Bin::polling (::GstBin* obj, gboolean _value);
// void Bin::polling (::GstBin* obj, gboolean _value);
GI_INLINE_DECL void polling_ (gboolean _value) noexcept;

// gboolean Bin::state_dirty (const ::GstBin* obj);
// gboolean Bin::state_dirty (const ::GstBin* obj);
GI_INLINE_DECL bool state_dirty_ () const noexcept;

//  Bin::state_dirty (::GstBin* obj, gboolean _value);
// void Bin::state_dirty (::GstBin* obj, gboolean _value);
GI_INLINE_DECL void state_dirty_ (gboolean _value) noexcept;

// gboolean Bin::clock_dirty (const ::GstBin* obj);
// gboolean Bin::clock_dirty (const ::GstBin* obj);
GI_INLINE_DECL bool clock_dirty_ () const noexcept;

//  Bin::clock_dirty (::GstBin* obj, gboolean _value);
// void Bin::clock_dirty (::GstBin* obj, gboolean _value);
GI_INLINE_DECL void clock_dirty_ (gboolean _value) noexcept;

// ::GstClock* Bin::provided_clock (const ::GstBin* obj);
// ::GstClock* Bin::provided_clock (const ::GstBin* obj);
GI_INLINE_DECL Gst::Clock provided_clock_ () const noexcept;

// ::GstElement* Bin::clock_provider (const ::GstBin* obj);
// ::GstElement* Bin::clock_provider (const ::GstBin* obj);
GI_INLINE_DECL Gst::Element clock_provider_ () const noexcept;

// signal deep-element-added
gi::signal_proxy<void(Gst::Bin, Gst::Bin sub_bin, Gst::Element element)> signal_deep_element_added()
{ return gi::signal_proxy<void(Gst::Bin, Gst::Bin sub_bin, Gst::Element element)> (*this, "deep-element-added"); }

// signal deep-element-removed
gi::signal_proxy<void(Gst::Bin, Gst::Bin sub_bin, Gst::Element element)> signal_deep_element_removed()
{ return gi::signal_proxy<void(Gst::Bin, Gst::Bin sub_bin, Gst::Element element)> (*this, "deep-element-removed"); }

// signal do-latency
gi::signal_proxy<bool(Gst::Bin)> signal_do_latency()
{ return gi::signal_proxy<bool(Gst::Bin)> (*this, "do-latency"); }

// signal element-added
gi::signal_proxy<void(Gst::Bin, Gst::Element element)> signal_element_added()
{ return gi::signal_proxy<void(Gst::Bin, Gst::Element element)> (*this, "element-added"); }

// signal element-removed
gi::signal_proxy<void(Gst::Bin, Gst::Element element)> signal_element_removed()
{ return gi::signal_proxy<void(Gst::Bin, Gst::Element element)> (*this, "element-removed"); }

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/bin_extra_def.hpp>)
#include <gst/bin_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/bin_extra.hpp>)
#include <gst/bin_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Bin : public GI_GST_BIN_BASE
{ typedef GI_GST_BIN_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstBin>
{ typedef Gst::Bin type; }; 

} // namespace repository

} // namespace gi

#include "childproxy.hpp"

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class BinClassDef
{
typedef BinClassDef self;
public:
typedef Gst::Bin instance_type;
typedef ::GstBinClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean Bin::add_element (GstBin* bin, GstElement* element);
// gboolean Bin::add_element (::GstBin* bin, ::GstElement* element);
virtual bool add_element_ (Gst::Element element) noexcept = 0;

// void Bin::deep_element_added (GstBin* bin, GstBin* sub_bin, GstElement* child);
// void Bin::deep_element_added (::GstBin* bin, ::GstBin* sub_bin, ::GstElement* child);
virtual void deep_element_added_ (Gst::Bin sub_bin, Gst::Element child) noexcept = 0;

// void Bin::deep_element_removed (GstBin* bin, GstBin* sub_bin, GstElement* child);
// void Bin::deep_element_removed (::GstBin* bin, ::GstBin* sub_bin, ::GstElement* child);
virtual void deep_element_removed_ (Gst::Bin sub_bin, Gst::Element child) noexcept = 0;

// gboolean Bin::do_latency (GstBin* bin);
// gboolean Bin::do_latency (::GstBin* bin);
virtual bool do_latency_ () noexcept = 0;

// void Bin::element_added (GstBin* bin, GstElement* child);
// void Bin::element_added (::GstBin* bin, ::GstElement* child);
virtual void element_added_ (Gst::Element child) noexcept = 0;

// void Bin::element_removed (GstBin* bin, GstElement* child);
// void Bin::element_removed (::GstBin* bin, ::GstElement* child);
virtual void element_removed_ (Gst::Element child) noexcept = 0;

// void Bin::handle_message (GstBin* bin, GstMessage* message);
// void Bin::handle_message (::GstBin* bin, ::GstMessage* message);
virtual void handle_message_ (Gst::Message message) noexcept = 0;

// gboolean Bin::remove_element (GstBin* bin, GstElement* element);
// gboolean Bin::remove_element (::GstBin* bin, ::GstElement* element);
virtual bool remove_element_ (Gst::Element element) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class BinClass: public detail::ClassTemplate<Gst::impl::internal::BinClassDef, Gst::impl::internal::ElementClass, Gst::impl::internal::ChildProxyInterfaceClassImpl>
{
typedef BinClass self;
typedef detail::ClassTemplate<Gst::impl::internal::BinClassDef, Gst::impl::internal::ElementClass, Gst::impl::internal::ChildProxyInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gst::impl::internal::ChildProxyInterfaceClassImpl GstChildProxyInterface_type;


// gboolean Bin::add_element (GstBin* bin, GstElement* element);
// gboolean Bin::add_element (::GstBin* bin, ::GstElement* element);
GI_INLINE_DECL bool add_element_ (Gst::Element element) noexcept override;

// void Bin::deep_element_added (GstBin* bin, GstBin* sub_bin, GstElement* child);
// void Bin::deep_element_added (::GstBin* bin, ::GstBin* sub_bin, ::GstElement* child);
GI_INLINE_DECL void deep_element_added_ (Gst::Bin sub_bin, Gst::Element child) noexcept override;

// void Bin::deep_element_removed (GstBin* bin, GstBin* sub_bin, GstElement* child);
// void Bin::deep_element_removed (::GstBin* bin, ::GstBin* sub_bin, ::GstElement* child);
GI_INLINE_DECL void deep_element_removed_ (Gst::Bin sub_bin, Gst::Element child) noexcept override;

// gboolean Bin::do_latency (GstBin* bin);
// gboolean Bin::do_latency (::GstBin* bin);
GI_INLINE_DECL bool do_latency_ () noexcept override;

// void Bin::element_added (GstBin* bin, GstElement* child);
// void Bin::element_added (::GstBin* bin, ::GstElement* child);
GI_INLINE_DECL void element_added_ (Gst::Element child) noexcept override;

// void Bin::element_removed (GstBin* bin, GstElement* child);
// void Bin::element_removed (::GstBin* bin, ::GstElement* child);
GI_INLINE_DECL void element_removed_ (Gst::Element child) noexcept override;

// void Bin::handle_message (GstBin* bin, GstMessage* message);
// void Bin::handle_message (::GstBin* bin, ::GstMessage* message);
GI_INLINE_DECL void handle_message_ (Gst::Message message) noexcept override;

// gboolean Bin::remove_element (GstBin* bin, GstElement* element);
// gboolean Bin::remove_element (::GstBin* bin, ::GstElement* element);
GI_INLINE_DECL bool remove_element_ (Gst::Element element) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using BinImpl = detail::ObjectImpl<Bin, internal::BinClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
