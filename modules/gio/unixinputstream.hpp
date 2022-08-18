// AUTO-GENERATED

#ifndef _GI_GIO_UNIXINPUTSTREAM_HPP_
#define _GI_GIO_UNIXINPUTSTREAM_HPP_

#include "inputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class FileDescriptorBased;
class PollableInputStream;

class UnixInputStream;

namespace base {


#define GI_GIO_UNIXINPUTSTREAM_BASE base::UnixInputStreamBase
class UnixInputStreamBase : public Gio::InputStream
{
typedef Gio::InputStream super_type;
public:
typedef ::GUnixInputStream BaseObjectType;

UnixInputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_unix_input_stream_get_type(); } 

GI_INLINE_DECL Gio::FileDescriptorBased interface_ (gi::interface_tag<Gio::FileDescriptorBased>);

GI_INLINE_DECL operator Gio::FileDescriptorBased ();

GI_INLINE_DECL Gio::PollableInputStream interface_ (gi::interface_tag<Gio::PollableInputStream>);

GI_INLINE_DECL operator Gio::PollableInputStream ();

// GInputStream* g_unix_input_stream_new (gint fd, gboolean close_fd);
// ::GUnixInputStream* g_unix_input_stream_new (gint fd, gboolean close_fd);
static GI_INLINE_DECL Gio::UnixInputStream new_ (gint fd, gboolean close_fd) noexcept;

// gboolean g_unix_input_stream_get_close_fd (GUnixInputStream* stream);
// gboolean g_unix_input_stream_get_close_fd (::GUnixInputStream* stream);
GI_INLINE_DECL bool get_close_fd () noexcept;

// gint g_unix_input_stream_get_fd (GUnixInputStream* stream);
// gint g_unix_input_stream_get_fd (::GUnixInputStream* stream);
GI_INLINE_DECL gint get_fd () noexcept;

// void g_unix_input_stream_set_close_fd (GUnixInputStream* stream, gboolean close_fd);
// void g_unix_input_stream_set_close_fd (::GUnixInputStream* stream, gboolean close_fd);
GI_INLINE_DECL void set_close_fd (gboolean close_fd) noexcept;

gi::property_proxy<bool, base::UnixInputStreamBase> property_close_fd()
{ return gi::property_proxy<bool, base::UnixInputStreamBase> (*this, "close-fd"); }
const gi::property_proxy<bool, base::UnixInputStreamBase> property_close_fd() const
{ return gi::property_proxy<bool, base::UnixInputStreamBase> (*this, "close-fd"); }

gi::property_proxy<gint, base::UnixInputStreamBase> property_fd()
{ return gi::property_proxy<gint, base::UnixInputStreamBase> (*this, "fd"); }
const gi::property_proxy<gint, base::UnixInputStreamBase> property_fd() const
{ return gi::property_proxy<gint, base::UnixInputStreamBase> (*this, "fd"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixinputstream_extra_def.hpp>)
#include <gio/unixinputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixinputstream_extra.hpp>)
#include <gio/unixinputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class UnixInputStream : public GI_GIO_UNIXINPUTSTREAM_BASE
{ typedef GI_GIO_UNIXINPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GUnixInputStream>
{ typedef Gio::UnixInputStream type; }; 

} // namespace repository

} // namespace gi

#include "filedescriptorbased.hpp"
#include "pollableinputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class UnixInputStreamClassDef
{
typedef UnixInputStreamClassDef self;
public:
typedef Gio::UnixInputStream instance_type;
typedef ::GUnixInputStreamClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class UnixInputStreamClass: public detail::ClassTemplate<Gio::impl::internal::UnixInputStreamClassDef, Gio::impl::internal::InputStreamClass, Gio::impl::internal::FileDescriptorBasedIfaceClassImpl, Gio::impl::internal::PollableInputStreamInterfaceClassImpl>
{
typedef UnixInputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::UnixInputStreamClassDef, Gio::impl::internal::InputStreamClass, Gio::impl::internal::FileDescriptorBasedIfaceClassImpl, Gio::impl::internal::PollableInputStreamInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::FileDescriptorBasedIfaceClassImpl GFileDescriptorBasedIface_type;
typedef Gio::impl::internal::PollableInputStreamInterfaceClassImpl GPollableInputStreamInterface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using UnixInputStreamImpl = detail::ObjectImpl<UnixInputStream, internal::UnixInputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
