// AUTO-GENERATED

#ifndef _GI_GIO_FILTEROUTPUTSTREAM_HPP_
#define _GI_GIO_FILTEROUTPUTSTREAM_HPP_

#include "outputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class OutputStream;

class FilterOutputStream;

namespace base {


#define GI_GIO_FILTEROUTPUTSTREAM_BASE base::FilterOutputStreamBase
class FilterOutputStreamBase : public Gio::OutputStream
{
typedef Gio::OutputStream super_type;
public:
typedef ::GFilterOutputStream BaseObjectType;

FilterOutputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_filter_output_stream_get_type(); } 

// GOutputStream* g_filter_output_stream_get_base_stream (GFilterOutputStream* stream);
// ::GOutputStream* g_filter_output_stream_get_base_stream (::GFilterOutputStream* stream);
GI_INLINE_DECL Gio::OutputStream get_base_stream () noexcept;

// gboolean g_filter_output_stream_get_close_base_stream (GFilterOutputStream* stream);
// gboolean g_filter_output_stream_get_close_base_stream (::GFilterOutputStream* stream);
GI_INLINE_DECL bool get_close_base_stream () noexcept;

// void g_filter_output_stream_set_close_base_stream (GFilterOutputStream* stream, gboolean close_base);
// void g_filter_output_stream_set_close_base_stream (::GFilterOutputStream* stream, gboolean close_base);
GI_INLINE_DECL void set_close_base_stream (gboolean close_base) noexcept;

gi::property_proxy<Gio::OutputStream, base::FilterOutputStreamBase> property_base_stream()
{ return gi::property_proxy<Gio::OutputStream, base::FilterOutputStreamBase> (*this, "base-stream"); }
const gi::property_proxy<Gio::OutputStream, base::FilterOutputStreamBase> property_base_stream() const
{ return gi::property_proxy<Gio::OutputStream, base::FilterOutputStreamBase> (*this, "base-stream"); }

gi::property_proxy<bool, base::FilterOutputStreamBase> property_close_base_stream()
{ return gi::property_proxy<bool, base::FilterOutputStreamBase> (*this, "close-base-stream"); }
const gi::property_proxy<bool, base::FilterOutputStreamBase> property_close_base_stream() const
{ return gi::property_proxy<bool, base::FilterOutputStreamBase> (*this, "close-base-stream"); }

// ::GOutputStream* FilterOutputStream::base_stream (const ::GFilterOutputStream* obj);
// ::GOutputStream* FilterOutputStream::base_stream (const ::GFilterOutputStream* obj);
GI_INLINE_DECL Gio::OutputStream base_stream_ () const noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/filteroutputstream_extra_def.hpp>)
#include <gio/filteroutputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/filteroutputstream_extra.hpp>)
#include <gio/filteroutputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FilterOutputStream : public GI_GIO_FILTEROUTPUTSTREAM_BASE
{ typedef GI_GIO_FILTEROUTPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFilterOutputStream>
{ typedef Gio::FilterOutputStream type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class FilterOutputStreamClassDef
{
typedef FilterOutputStreamClassDef self;
public:
typedef Gio::FilterOutputStream instance_type;
typedef ::GFilterOutputStreamClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FilterOutputStreamClass: public detail::ClassTemplate<Gio::impl::internal::FilterOutputStreamClassDef, Gio::impl::internal::OutputStreamClass>
{
typedef FilterOutputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::FilterOutputStreamClassDef, Gio::impl::internal::OutputStreamClass> super;

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

using FilterOutputStreamImpl = detail::ObjectImpl<FilterOutputStream, internal::FilterOutputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
