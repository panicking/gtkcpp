// AUTO-GENERATED

#ifndef _GI_GST_STREAM_HPP_
#define _GI_GST_STREAM_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Caps;
class TagList;

class Stream;

namespace base {


#define GI_GST_STREAM_BASE base::StreamBase
class StreamBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstStream BaseObjectType;

StreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_stream_get_type(); } 

// GstStream* gst_stream_new (const gchar* stream_id, GstCaps* caps, GstStreamType type, GstStreamFlags flags);
// ::GstStream* gst_stream_new (const char* stream_id, ::GstCaps* caps, ::GstStreamType type, ::GstStreamFlags flags);
static GI_INLINE_DECL Gst::Stream new_ (const std::string & stream_id, Gst::Caps caps, Gst::StreamType type, Gst::StreamFlags flags) noexcept;
static GI_INLINE_DECL Gst::Stream new_ (Gst::StreamType type, Gst::StreamFlags flags) noexcept;

// GstCaps* gst_stream_get_caps (GstStream* stream);
// ::GstCaps* gst_stream_get_caps (::GstStream* stream);
GI_INLINE_DECL Gst::Caps get_caps () noexcept;

// GstStreamFlags gst_stream_get_stream_flags (GstStream* stream);
// ::GstStreamFlags gst_stream_get_stream_flags (::GstStream* stream);
GI_INLINE_DECL Gst::StreamFlags get_stream_flags () noexcept;

// const gchar* gst_stream_get_stream_id (GstStream* stream);
// const char* gst_stream_get_stream_id (::GstStream* stream);
GI_INLINE_DECL std::string get_stream_id () noexcept;

// GstStreamType gst_stream_get_stream_type (GstStream* stream);
// ::GstStreamType gst_stream_get_stream_type (::GstStream* stream);
GI_INLINE_DECL Gst::StreamType get_stream_type () noexcept;

// GstTagList* gst_stream_get_tags (GstStream* stream);
// ::GstTagList* gst_stream_get_tags (::GstStream* stream);
GI_INLINE_DECL Gst::TagList get_tags () noexcept;

// void gst_stream_set_caps (GstStream* stream, GstCaps* caps);
// void gst_stream_set_caps (::GstStream* stream, ::GstCaps* caps);
GI_INLINE_DECL void set_caps (Gst::Caps caps) noexcept;
GI_INLINE_DECL void set_caps () noexcept;

// void gst_stream_set_stream_flags (GstStream* stream, GstStreamFlags flags);
// void gst_stream_set_stream_flags (::GstStream* stream, ::GstStreamFlags flags);
GI_INLINE_DECL void set_stream_flags (Gst::StreamFlags flags) noexcept;

// void gst_stream_set_stream_type (GstStream* stream, GstStreamType stream_type);
// void gst_stream_set_stream_type (::GstStream* stream, ::GstStreamType stream_type);
GI_INLINE_DECL void set_stream_type (Gst::StreamType stream_type) noexcept;

// void gst_stream_set_tags (GstStream* stream, GstTagList* tags);
// void gst_stream_set_tags (::GstStream* stream, ::GstTagList* tags);
GI_INLINE_DECL void set_tags (Gst::TagList tags) noexcept;
GI_INLINE_DECL void set_tags () noexcept;

gi::property_proxy<Gst::Caps, base::StreamBase> property_caps()
{ return gi::property_proxy<Gst::Caps, base::StreamBase> (*this, "caps"); }
const gi::property_proxy<Gst::Caps, base::StreamBase> property_caps() const
{ return gi::property_proxy<Gst::Caps, base::StreamBase> (*this, "caps"); }

gi::property_proxy<Gst::StreamFlags, base::StreamBase> property_stream_flags()
{ return gi::property_proxy<Gst::StreamFlags, base::StreamBase> (*this, "stream-flags"); }
const gi::property_proxy<Gst::StreamFlags, base::StreamBase> property_stream_flags() const
{ return gi::property_proxy<Gst::StreamFlags, base::StreamBase> (*this, "stream-flags"); }

gi::property_proxy<std::string, base::StreamBase> property_stream_id()
{ return gi::property_proxy<std::string, base::StreamBase> (*this, "stream-id"); }
const gi::property_proxy<std::string, base::StreamBase> property_stream_id() const
{ return gi::property_proxy<std::string, base::StreamBase> (*this, "stream-id"); }

gi::property_proxy<Gst::StreamType, base::StreamBase> property_stream_type()
{ return gi::property_proxy<Gst::StreamType, base::StreamBase> (*this, "stream-type"); }
const gi::property_proxy<Gst::StreamType, base::StreamBase> property_stream_type() const
{ return gi::property_proxy<Gst::StreamType, base::StreamBase> (*this, "stream-type"); }

gi::property_proxy<Gst::TagList, base::StreamBase> property_tags()
{ return gi::property_proxy<Gst::TagList, base::StreamBase> (*this, "tags"); }
const gi::property_proxy<Gst::TagList, base::StreamBase> property_tags() const
{ return gi::property_proxy<Gst::TagList, base::StreamBase> (*this, "tags"); }

// const char* Stream::stream_id (const ::GstStream* obj);
// const char* Stream::stream_id (const ::GstStream* obj);
GI_INLINE_DECL std::string stream_id_ () const noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/stream_extra_def.hpp>)
#include <gst/stream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/stream_extra.hpp>)
#include <gst/stream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Stream : public GI_GST_STREAM_BASE
{ typedef GI_GST_STREAM_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstStream>
{ typedef Gst::Stream type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class StreamClassDef
{
typedef StreamClassDef self;
public:
typedef Gst::Stream instance_type;
typedef ::GstStreamClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class StreamClass: public detail::ClassTemplate<Gst::impl::internal::StreamClassDef, Gst::impl::internal::ObjectClass>
{
typedef StreamClass self;
typedef detail::ClassTemplate<Gst::impl::internal::StreamClassDef, Gst::impl::internal::ObjectClass> super;

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

using StreamImpl = detail::ObjectImpl<Stream, internal::StreamClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
