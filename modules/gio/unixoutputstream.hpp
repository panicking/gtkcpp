// AUTO-GENERATED

#ifndef _GI_GIO_UNIXOUTPUTSTREAM_HPP_
#define _GI_GIO_UNIXOUTPUTSTREAM_HPP_

#include "outputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class FileDescriptorBased;
class PollableOutputStream;

class UnixOutputStream;

namespace base {


#define GI_GIO_UNIXOUTPUTSTREAM_BASE base::UnixOutputStreamBase
class UnixOutputStreamBase : public Gio::OutputStream
{
typedef Gio::OutputStream super_type;
public:
typedef ::GUnixOutputStream BaseObjectType;

UnixOutputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_unix_output_stream_get_type(); } 

GI_INLINE_DECL Gio::FileDescriptorBased interface_ (gi::interface_tag<Gio::FileDescriptorBased>);

GI_INLINE_DECL operator Gio::FileDescriptorBased ();

GI_INLINE_DECL Gio::PollableOutputStream interface_ (gi::interface_tag<Gio::PollableOutputStream>);

GI_INLINE_DECL operator Gio::PollableOutputStream ();

// GOutputStream* g_unix_output_stream_new (gint fd, gboolean close_fd);
// ::GUnixOutputStream* g_unix_output_stream_new (gint fd, gboolean close_fd);
static GI_INLINE_DECL Gio::UnixOutputStream new_ (gint fd, gboolean close_fd) noexcept;

// gboolean g_unix_output_stream_get_close_fd (GUnixOutputStream* stream);
// gboolean g_unix_output_stream_get_close_fd (::GUnixOutputStream* stream);
GI_INLINE_DECL bool get_close_fd () noexcept;

// gint g_unix_output_stream_get_fd (GUnixOutputStream* stream);
// gint g_unix_output_stream_get_fd (::GUnixOutputStream* stream);
GI_INLINE_DECL gint get_fd () noexcept;

// void g_unix_output_stream_set_close_fd (GUnixOutputStream* stream, gboolean close_fd);
// void g_unix_output_stream_set_close_fd (::GUnixOutputStream* stream, gboolean close_fd);
GI_INLINE_DECL void set_close_fd (gboolean close_fd) noexcept;

gi::property_proxy<bool, base::UnixOutputStreamBase> property_close_fd()
{ return gi::property_proxy<bool, base::UnixOutputStreamBase> (*this, "close-fd"); }
const gi::property_proxy<bool, base::UnixOutputStreamBase> property_close_fd() const
{ return gi::property_proxy<bool, base::UnixOutputStreamBase> (*this, "close-fd"); }

gi::property_proxy<gint, base::UnixOutputStreamBase> property_fd()
{ return gi::property_proxy<gint, base::UnixOutputStreamBase> (*this, "fd"); }
const gi::property_proxy<gint, base::UnixOutputStreamBase> property_fd() const
{ return gi::property_proxy<gint, base::UnixOutputStreamBase> (*this, "fd"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixoutputstream_extra_def.hpp>)
#include <gio/unixoutputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixoutputstream_extra.hpp>)
#include <gio/unixoutputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class UnixOutputStream : public GI_GIO_UNIXOUTPUTSTREAM_BASE
{ typedef GI_GIO_UNIXOUTPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GUnixOutputStream>
{ typedef Gio::UnixOutputStream type; }; 

} // namespace repository

} // namespace gi

#include "filedescriptorbased.hpp"
#include "pollableoutputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class UnixOutputStreamClassDef
{
typedef UnixOutputStreamClassDef self;
public:
typedef Gio::UnixOutputStream instance_type;
typedef ::GUnixOutputStreamClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class UnixOutputStreamClass: public detail::ClassTemplate<Gio::impl::internal::UnixOutputStreamClassDef, Gio::impl::internal::OutputStreamClass, Gio::impl::internal::FileDescriptorBasedIfaceClassImpl, Gio::impl::internal::PollableOutputStreamInterfaceClassImpl>
{
typedef UnixOutputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::UnixOutputStreamClassDef, Gio::impl::internal::OutputStreamClass, Gio::impl::internal::FileDescriptorBasedIfaceClassImpl, Gio::impl::internal::PollableOutputStreamInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::FileDescriptorBasedIfaceClassImpl GFileDescriptorBasedIface_type;
typedef Gio::impl::internal::PollableOutputStreamInterfaceClassImpl GPollableOutputStreamInterface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using UnixOutputStreamImpl = detail::ObjectImpl<UnixOutputStream, internal::UnixOutputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
