// AUTO-GENERATED

#ifndef _GI_GST_PROXYPAD_HPP_
#define _GI_GST_PROXYPAD_HPP_

#include "pad.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Buffer;
class BufferList;
class Iterator;
class Object;
class Pad;

class ProxyPad;

namespace base {


#define GI_GST_PROXYPAD_BASE base::ProxyPadBase
class ProxyPadBase : public Gst::Pad
{
typedef Gst::Pad super_type;
public:
typedef ::GstProxyPad BaseObjectType;

ProxyPadBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_proxy_pad_get_type(); } 

// GstFlowReturn gst_proxy_pad_chain_default (GstPad* pad, GstObject* parent, GstBuffer* buffer);
// ::GstFlowReturn gst_proxy_pad_chain_default (::GstPad* pad, ::GstObject* parent, ::GstBuffer* buffer);
static GI_INLINE_DECL Gst::FlowReturn chain_default (Gst::Pad pad, Gst::Object parent, Gst::Buffer buffer) noexcept;
static GI_INLINE_DECL Gst::FlowReturn chain_default (Gst::Pad pad, Gst::Buffer buffer) noexcept;

// GstFlowReturn gst_proxy_pad_chain_list_default (GstPad* pad, GstObject* parent, GstBufferList* list);
// ::GstFlowReturn gst_proxy_pad_chain_list_default (::GstPad* pad, ::GstObject* parent, ::GstBufferList* list);
static GI_INLINE_DECL Gst::FlowReturn chain_list_default (Gst::Pad pad, Gst::Object parent, Gst::BufferList list) noexcept;
static GI_INLINE_DECL Gst::FlowReturn chain_list_default (Gst::Pad pad, Gst::BufferList list) noexcept;

// GstFlowReturn gst_proxy_pad_getrange_default (GstPad* pad, GstObject* parent, guint64 offset, guint size, GstBuffer** buffer);
// ::GstFlowReturn gst_proxy_pad_getrange_default (::GstPad* pad, ::GstObject* parent, guint64 offset, guint size, ::GstBuffer** buffer);
static GI_INLINE_DECL Gst::FlowReturn getrange_default (Gst::Pad pad, Gst::Object parent, guint64 offset, guint size, Gst::Buffer & buffer) noexcept;
static GI_INLINE_DECL std::tuple<Gst::FlowReturn, Gst::Buffer> getrange_default (Gst::Pad pad, Gst::Object parent, guint64 offset, guint size) noexcept;

// GstIterator* gst_proxy_pad_iterate_internal_links_default (GstPad* pad, GstObject* parent);
// ::GstIterator* gst_proxy_pad_iterate_internal_links_default (::GstPad* pad, ::GstObject* parent);
static GI_INLINE_DECL Gst::Iterator iterate_internal_links_default (Gst::Pad pad, Gst::Object parent) noexcept;
static GI_INLINE_DECL Gst::Iterator iterate_internal_links_default (Gst::Pad pad) noexcept;

// GstProxyPad* gst_proxy_pad_get_internal (GstProxyPad* pad);
// ::GstProxyPad* gst_proxy_pad_get_internal (::GstProxyPad* pad);
GI_INLINE_DECL Gst::ProxyPad get_internal () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/proxypad_extra_def.hpp>)
#include <gst/proxypad_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/proxypad_extra.hpp>)
#include <gst/proxypad_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class ProxyPad : public GI_GST_PROXYPAD_BASE
{ typedef GI_GST_PROXYPAD_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstProxyPad>
{ typedef Gst::ProxyPad type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class ProxyPadClassDef
{
typedef ProxyPadClassDef self;
public:
typedef Gst::ProxyPad instance_type;
typedef ::GstProxyPadClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ProxyPadClass: public detail::ClassTemplate<Gst::impl::internal::ProxyPadClassDef, Gst::impl::internal::PadClass>
{
typedef ProxyPadClass self;
typedef detail::ClassTemplate<Gst::impl::internal::ProxyPadClassDef, Gst::impl::internal::PadClass> super;

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

using ProxyPadImpl = detail::ObjectImpl<ProxyPad, internal::ProxyPadClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
