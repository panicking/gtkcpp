// AUTO-GENERATED

#ifndef _GI_GST_TOCSETTER_IMPL_HPP_
#define _GI_GST_TOCSETTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstToc* gst_toc_setter_get_toc (GstTocSetter* setter);
// ::GstToc* gst_toc_setter_get_toc (::GstTocSetter* setter);
Gst::Toc base::TocSetterBase::get_toc () noexcept
{
  typedef ::GstToc* (*call_wrap_t) (::GstTocSetter* setter);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_setter_get_toc;
  auto _temp_ret = call_wrap_v ((::GstTocSetter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_toc_setter_reset (GstTocSetter* setter);
// void gst_toc_setter_reset (::GstTocSetter* setter);
void base::TocSetterBase::reset () noexcept
{
  typedef void (*call_wrap_t) (::GstTocSetter* setter);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_setter_reset;
  call_wrap_v ((::GstTocSetter*) (gobj_()));
}

// void gst_toc_setter_set_toc (GstTocSetter* setter, GstToc* toc);
// void gst_toc_setter_set_toc (::GstTocSetter* setter, ::GstToc* toc);
void base::TocSetterBase::set_toc (Gst::Toc toc) noexcept
{
  typedef void (*call_wrap_t) (::GstTocSetter* setter, ::GstToc* toc);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_setter_set_toc;
  auto toc_to_c = gi::unwrap (toc, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstTocSetter*) (gobj_()), (::GstToc*) (toc_to_c));
}
void base::TocSetterBase::set_toc () noexcept
{
  typedef void (*call_wrap_t) (::GstTocSetter* setter, ::GstToc* toc);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_setter_set_toc;
  auto toc_to_c = nullptr;
  call_wrap_v ((::GstTocSetter*) (gobj_()), (::GstToc*) (toc_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/tocsetter_extra_def_impl.hpp>)
#include <gst/tocsetter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/tocsetter_extra_impl.hpp>)
#include <gst/tocsetter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void TocSetterInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GstTocSetterInterface *methods = (::GstTocSetterInterface *) interface_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
