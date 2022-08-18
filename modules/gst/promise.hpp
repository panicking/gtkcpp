// AUTO-GENERATED

#ifndef _GI_GST_PROMISE_HPP_
#define _GI_GST_PROMISE_HPP_


namespace gi {

namespace repository {

namespace Gst {

class Structure;

class Promise;

namespace base {


#define GI_GST_PROMISE_BASE base::PromiseBase
class PromiseBase : public gi::detail::GBoxedWrapper<PromiseBase, ::GstPromise>
{
typedef gi::detail::GBoxedWrapper<PromiseBase, ::GstPromise> super_type;
public:

PromiseBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_promise_get_type(); } 

// GstPromise* gst_promise_new ();
// ::GstPromise* gst_promise_new ();
static GI_INLINE_DECL Gst::Promise new_ () noexcept;

// GstPromise* gst_promise_new_with_change_func (GstPromiseChangeFunc func, gpointer user_data, GDestroyNotify notify);
// ::GstPromise* gst_promise_new_with_change_func (Gst::PromiseChangeFunc::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type notify);
static GI_INLINE_DECL Gst::Promise new_with_change_func (Gst::PromiseChangeFunc func) noexcept;

// void gst_promise_expire (GstPromise* promise);
// void gst_promise_expire (::GstPromise* promise);
GI_INLINE_DECL void expire () noexcept;

// const GstStructure* gst_promise_get_reply (GstPromise* promise);
// const ::GstStructure* gst_promise_get_reply (::GstPromise* promise);
GI_INLINE_DECL Gst::Structure get_reply () noexcept;

// void gst_promise_interrupt (GstPromise* promise);
// void gst_promise_interrupt (::GstPromise* promise);
GI_INLINE_DECL void interrupt () noexcept;

// void gst_promise_reply (GstPromise* promise, GstStructure* s);
// void gst_promise_reply (::GstPromise* promise, ::GstStructure* s);
GI_INLINE_DECL void reply (Gst::Structure s) noexcept;
GI_INLINE_DECL void reply () noexcept;

// GstPromiseResult gst_promise_wait (GstPromise* promise);
// ::GstPromiseResult gst_promise_wait (::GstPromise* promise);
GI_INLINE_DECL Gst::PromiseResult wait () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/promise_extra_def.hpp>)
#include <gst/promise_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/promise_extra.hpp>)
#include <gst/promise_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Promise : public GI_GST_PROMISE_BASE
{ typedef GI_GST_PROMISE_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstPromise>
{ typedef Gst::Promise type; }; 

} // namespace repository

} // namespace gi

#endif
