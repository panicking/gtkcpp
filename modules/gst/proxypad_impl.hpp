// AUTO-GENERATED

#ifndef _GI_GST_PROXYPAD_IMPL_HPP_
#define _GI_GST_PROXYPAD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstFlowReturn gst_proxy_pad_chain_default (GstPad* pad, GstObject* parent, GstBuffer* buffer);
// ::GstFlowReturn gst_proxy_pad_chain_default (::GstPad* pad, ::GstObject* parent, ::GstBuffer* buffer);
Gst::FlowReturn base::ProxyPadBase::chain_default (Gst::Pad pad, Gst::Object parent, Gst::Buffer buffer) noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstPad* pad, ::GstObject* parent, ::GstBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_proxy_pad_chain_default;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_full, gi::direction_in);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (pad_to_c), (::GstObject*) (parent_to_c), (::GstBuffer*) (buffer_to_c));
  return gi::wrap (_temp_ret);
}
Gst::FlowReturn base::ProxyPadBase::chain_default (Gst::Pad pad, Gst::Buffer buffer) noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstPad* pad, ::GstObject* parent, ::GstBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_proxy_pad_chain_default;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_full, gi::direction_in);
  auto parent_to_c = nullptr;
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (pad_to_c), (::GstObject*) (parent_to_c), (::GstBuffer*) (buffer_to_c));
  return gi::wrap (_temp_ret);
}

// GstFlowReturn gst_proxy_pad_chain_list_default (GstPad* pad, GstObject* parent, GstBufferList* list);
// ::GstFlowReturn gst_proxy_pad_chain_list_default (::GstPad* pad, ::GstObject* parent, ::GstBufferList* list);
Gst::FlowReturn base::ProxyPadBase::chain_list_default (Gst::Pad pad, Gst::Object parent, Gst::BufferList list) noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstPad* pad, ::GstObject* parent, ::GstBufferList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_proxy_pad_chain_list_default;
  auto list_to_c = gi::unwrap (list, gi::transfer_full, gi::direction_in);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (pad_to_c), (::GstObject*) (parent_to_c), (::GstBufferList*) (list_to_c));
  return gi::wrap (_temp_ret);
}
Gst::FlowReturn base::ProxyPadBase::chain_list_default (Gst::Pad pad, Gst::BufferList list) noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstPad* pad, ::GstObject* parent, ::GstBufferList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_proxy_pad_chain_list_default;
  auto list_to_c = gi::unwrap (list, gi::transfer_full, gi::direction_in);
  auto parent_to_c = nullptr;
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (pad_to_c), (::GstObject*) (parent_to_c), (::GstBufferList*) (list_to_c));
  return gi::wrap (_temp_ret);
}

// GstFlowReturn gst_proxy_pad_getrange_default (GstPad* pad, GstObject* parent, guint64 offset, guint size, GstBuffer** buffer);
// ::GstFlowReturn gst_proxy_pad_getrange_default (::GstPad* pad, ::GstObject* parent, guint64 offset, guint size, ::GstBuffer** buffer);
Gst::FlowReturn base::ProxyPadBase::getrange_default (Gst::Pad pad, Gst::Object parent, guint64 offset, guint size, Gst::Buffer & buffer) noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstPad* pad, ::GstObject* parent, guint64 offset, guint size, ::GstBuffer** buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_proxy_pad_getrange_default;
  ::GstBuffer* buffer_o {};
  auto size_to_c = size;
  auto offset_to_c = offset;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (pad_to_c), (::GstObject*) (parent_to_c), (guint64) (offset_to_c), (guint) (size_to_c), (::GstBuffer**) (&buffer_o));
  buffer = gi::wrap (buffer_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
std::tuple<Gst::FlowReturn, Gst::Buffer> base::ProxyPadBase::getrange_default (Gst::Pad pad, Gst::Object parent, guint64 offset, guint size) noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstPad* pad, ::GstObject* parent, guint64 offset, guint size, ::GstBuffer** buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_proxy_pad_getrange_default;
  ::GstBuffer* buffer_o {};
  auto size_to_c = size;
  auto offset_to_c = offset;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (pad_to_c), (::GstObject*) (parent_to_c), (guint64) (offset_to_c), (guint) (size_to_c), (::GstBuffer**) (&buffer_o));
  return std::make_tuple (gi::wrap (_temp_ret), gi::wrap (buffer_o, gi::transfer_full, gi::direction_out));
}

// GstIterator* gst_proxy_pad_iterate_internal_links_default (GstPad* pad, GstObject* parent);
// ::GstIterator* gst_proxy_pad_iterate_internal_links_default (::GstPad* pad, ::GstObject* parent);
Gst::Iterator base::ProxyPadBase::iterate_internal_links_default (Gst::Pad pad, Gst::Object parent) noexcept
{
  typedef ::GstIterator* (*call_wrap_t) (::GstPad* pad, ::GstObject* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_proxy_pad_iterate_internal_links_default;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (pad_to_c), (::GstObject*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Iterator base::ProxyPadBase::iterate_internal_links_default (Gst::Pad pad) noexcept
{
  typedef ::GstIterator* (*call_wrap_t) (::GstPad* pad, ::GstObject* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_proxy_pad_iterate_internal_links_default;
  auto parent_to_c = nullptr;
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPad*) (pad_to_c), (::GstObject*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstProxyPad* gst_proxy_pad_get_internal (GstProxyPad* pad);
// ::GstProxyPad* gst_proxy_pad_get_internal (::GstProxyPad* pad);
Gst::ProxyPad base::ProxyPadBase::get_internal () noexcept
{
  typedef ::GstProxyPad* (*call_wrap_t) (::GstProxyPad* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_proxy_pad_get_internal;
  auto _temp_ret = call_wrap_v ((::GstProxyPad*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/proxypad_extra_def_impl.hpp>)
#include <gst/proxypad_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/proxypad_extra_impl.hpp>)
#include <gst/proxypad_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void ProxyPadClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstProxyPadClass *methods = (::GstProxyPadClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
