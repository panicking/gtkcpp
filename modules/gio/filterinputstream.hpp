// AUTO-GENERATED

#ifndef _GI_GIO_FILTERINPUTSTREAM_HPP_
#define _GI_GIO_FILTERINPUTSTREAM_HPP_

#include "inputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class InputStream;

class FilterInputStream;

namespace base {


#define GI_GIO_FILTERINPUTSTREAM_BASE base::FilterInputStreamBase
class FilterInputStreamBase : public Gio::InputStream
{
typedef Gio::InputStream super_type;
public:
typedef ::GFilterInputStream BaseObjectType;

FilterInputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_filter_input_stream_get_type(); } 

// GInputStream* g_filter_input_stream_get_base_stream (GFilterInputStream* stream);
// ::GInputStream* g_filter_input_stream_get_base_stream (::GFilterInputStream* stream);
GI_INLINE_DECL Gio::InputStream get_base_stream () noexcept;

// gboolean g_filter_input_stream_get_close_base_stream (GFilterInputStream* stream);
// gboolean g_filter_input_stream_get_close_base_stream (::GFilterInputStream* stream);
GI_INLINE_DECL bool get_close_base_stream () noexcept;

// void g_filter_input_stream_set_close_base_stream (GFilterInputStream* stream, gboolean close_base);
// void g_filter_input_stream_set_close_base_stream (::GFilterInputStream* stream, gboolean close_base);
GI_INLINE_DECL void set_close_base_stream (gboolean close_base) noexcept;

gi::property_proxy<Gio::InputStream, base::FilterInputStreamBase> property_base_stream()
{ return gi::property_proxy<Gio::InputStream, base::FilterInputStreamBase> (*this, "base-stream"); }
const gi::property_proxy<Gio::InputStream, base::FilterInputStreamBase> property_base_stream() const
{ return gi::property_proxy<Gio::InputStream, base::FilterInputStreamBase> (*this, "base-stream"); }

gi::property_proxy<bool, base::FilterInputStreamBase> property_close_base_stream()
{ return gi::property_proxy<bool, base::FilterInputStreamBase> (*this, "close-base-stream"); }
const gi::property_proxy<bool, base::FilterInputStreamBase> property_close_base_stream() const
{ return gi::property_proxy<bool, base::FilterInputStreamBase> (*this, "close-base-stream"); }

// ::GInputStream* FilterInputStream::base_stream (const ::GFilterInputStream* obj);
// ::GInputStream* FilterInputStream::base_stream (const ::GFilterInputStream* obj);
GI_INLINE_DECL Gio::InputStream base_stream_ () const noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/filterinputstream_extra_def.hpp>)
#include <gio/filterinputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/filterinputstream_extra.hpp>)
#include <gio/filterinputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FilterInputStream : public GI_GIO_FILTERINPUTSTREAM_BASE
{ typedef GI_GIO_FILTERINPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFilterInputStream>
{ typedef Gio::FilterInputStream type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class FilterInputStreamClassDef
{
typedef FilterInputStreamClassDef self;
public:
typedef Gio::FilterInputStream instance_type;
typedef ::GFilterInputStreamClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FilterInputStreamClass: public detail::ClassTemplate<Gio::impl::internal::FilterInputStreamClassDef, Gio::impl::internal::InputStreamClass>
{
typedef FilterInputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::FilterInputStreamClassDef, Gio::impl::internal::InputStreamClass> super;

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

using FilterInputStreamImpl = detail::ObjectImpl<FilterInputStream, internal::FilterInputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
