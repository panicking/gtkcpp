// AUTO-GENERATED

#ifndef _GI_GST_STREAMCOLLECTION_HPP_
#define _GI_GST_STREAMCOLLECTION_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Stream;

class StreamCollection;

namespace base {


#define GI_GST_STREAMCOLLECTION_BASE base::StreamCollectionBase
class StreamCollectionBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstStreamCollection BaseObjectType;

StreamCollectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_stream_collection_get_type(); } 

// GstStreamCollection* gst_stream_collection_new (const gchar* upstream_id);
// ::GstStreamCollection* gst_stream_collection_new (const char* upstream_id);
static GI_INLINE_DECL Gst::StreamCollection new_ (const std::string & upstream_id) noexcept;
static GI_INLINE_DECL Gst::StreamCollection new_ () noexcept;

// gboolean gst_stream_collection_add_stream (GstStreamCollection* collection, GstStream* stream);
// gboolean gst_stream_collection_add_stream (::GstStreamCollection* collection, ::GstStream* stream);
GI_INLINE_DECL bool add_stream (Gst::Stream stream) noexcept;

// guint gst_stream_collection_get_size (GstStreamCollection* collection);
// guint gst_stream_collection_get_size (::GstStreamCollection* collection);
GI_INLINE_DECL guint get_size () noexcept;

// GstStream* gst_stream_collection_get_stream (GstStreamCollection* collection, guint index);
// ::GstStream* gst_stream_collection_get_stream (::GstStreamCollection* collection, guint index);
GI_INLINE_DECL Gst::Stream get_stream (guint index) noexcept;

// const gchar* gst_stream_collection_get_upstream_id (GstStreamCollection* collection);
// const char* gst_stream_collection_get_upstream_id (::GstStreamCollection* collection);
GI_INLINE_DECL std::string get_upstream_id () noexcept;

gi::property_proxy<std::string, base::StreamCollectionBase> property_upstream_id()
{ return gi::property_proxy<std::string, base::StreamCollectionBase> (*this, "upstream-id"); }
const gi::property_proxy<std::string, base::StreamCollectionBase> property_upstream_id() const
{ return gi::property_proxy<std::string, base::StreamCollectionBase> (*this, "upstream-id"); }

// signal stream-notify
gi::signal_proxy<void(Gst::StreamCollection, Gst::Stream object, GObject::ParamSpec p0)> signal_stream_notify()
{ return gi::signal_proxy<void(Gst::StreamCollection, Gst::Stream object, GObject::ParamSpec p0)> (*this, "stream-notify"); }

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/streamcollection_extra_def.hpp>)
#include <gst/streamcollection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/streamcollection_extra.hpp>)
#include <gst/streamcollection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class StreamCollection : public GI_GST_STREAMCOLLECTION_BASE
{ typedef GI_GST_STREAMCOLLECTION_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstStreamCollection>
{ typedef Gst::StreamCollection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class StreamCollectionClassDef
{
typedef StreamCollectionClassDef self;
public:
typedef Gst::StreamCollection instance_type;
typedef ::GstStreamCollectionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void StreamCollection::stream_notify (GstStreamCollection* collection, GstStream* stream, GParamSpec* pspec);
// void StreamCollection::stream_notify (::GstStreamCollection* collection, ::GstStream* stream, ::GParamSpec* pspec);
virtual void stream_notify_ (Gst::Stream stream, GObject::ParamSpec pspec) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class StreamCollectionClass: public detail::ClassTemplate<Gst::impl::internal::StreamCollectionClassDef, Gst::impl::internal::ObjectClass>
{
typedef StreamCollectionClass self;
typedef detail::ClassTemplate<Gst::impl::internal::StreamCollectionClassDef, Gst::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void StreamCollection::stream_notify (GstStreamCollection* collection, GstStream* stream, GParamSpec* pspec);
// void StreamCollection::stream_notify (::GstStreamCollection* collection, ::GstStream* stream, ::GParamSpec* pspec);
GI_INLINE_DECL void stream_notify_ (Gst::Stream stream, GObject::ParamSpec pspec) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using StreamCollectionImpl = detail::ObjectImpl<StreamCollection, internal::StreamCollectionClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
