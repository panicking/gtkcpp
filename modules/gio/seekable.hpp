// AUTO-GENERATED

#ifndef _GI_GIO_SEEKABLE_HPP_
#define _GI_GIO_SEEKABLE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Cancellable;

class Seekable;

namespace base {


#define GI_GIO_SEEKABLE_BASE base::SeekableBase
class SeekableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GSeekable BaseObjectType;

SeekableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_seekable_get_type(); } 

// gboolean g_seekable_can_seek (GSeekable* seekable);
// gboolean g_seekable_can_seek (::GSeekable* seekable);
GI_INLINE_DECL bool can_seek () noexcept;

// gboolean g_seekable_can_truncate (GSeekable* seekable);
// gboolean g_seekable_can_truncate (::GSeekable* seekable);
GI_INLINE_DECL bool can_truncate () noexcept;

// gboolean g_seekable_seek (GSeekable* seekable, goffset offset, GSeekType type, GCancellable* cancellable, GError ** error);
// gboolean g_seekable_seek (::GSeekable* seekable, gint64 offset, ::GSeekType type, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool seek (gint64 offset, GLib::SeekType type, Gio::Cancellable cancellable);
GI_INLINE_DECL bool seek (gint64 offset, GLib::SeekType type);
GI_INLINE_DECL bool seek (gint64 offset, GLib::SeekType type, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool seek (gint64 offset, GLib::SeekType type, GLib::Error * _error) noexcept;

// goffset g_seekable_tell (GSeekable* seekable);
// gint64 g_seekable_tell (::GSeekable* seekable);
GI_INLINE_DECL gint64 tell () noexcept;

// gboolean g_seekable_truncate (GSeekable* seekable, goffset offset, GCancellable* cancellable, GError ** error);
// gboolean g_seekable_truncate (::GSeekable* seekable, gint64 offset, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool truncate (gint64 offset, Gio::Cancellable cancellable);
GI_INLINE_DECL bool truncate (gint64 offset);
GI_INLINE_DECL bool truncate (gint64 offset, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool truncate (gint64 offset, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/seekable_extra_def.hpp>)
#include <gio/seekable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/seekable_extra.hpp>)
#include <gio/seekable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Seekable : public GI_GIO_SEEKABLE_BASE
{ typedef GI_GIO_SEEKABLE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSeekable>
{ typedef Gio::Seekable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SeekableIfaceDef
{
typedef SeekableIfaceDef self;
public:
typedef Gio::Seekable instance_type;
typedef ::GSeekableIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Seekable::can_seek (GSeekable* seekable);
// gboolean Seekable::can_seek (::GSeekable* seekable);
virtual bool can_seek_ () noexcept = 0;

// gboolean Seekable::can_truncate (GSeekable* seekable);
// gboolean Seekable::can_truncate (::GSeekable* seekable);
virtual bool can_truncate_ () noexcept = 0;

// gboolean Seekable::seek (GSeekable* seekable, goffset offset, GSeekType type, GCancellable* cancellable, GError ** error);
// gboolean Seekable::seek (::GSeekable* seekable, gint64 offset, ::GSeekType type, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// goffset Seekable::tell (GSeekable* seekable);
// gint64 Seekable::tell (::GSeekable* seekable);
virtual gint64 tell_ () noexcept = 0;

// gboolean Seekable::truncate_fn (GSeekable* seekable, goffset offset, GCancellable* cancellable, GError ** error);
// gboolean Seekable::truncate_fn (::GSeekable* seekable, gint64 offset, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported


};

using SeekableImpl = detail::InterfaceImpl<SeekableIfaceDef>;

class SeekableIfaceClassImpl: public detail::InterfaceClassImpl<SeekableImpl>
{
typedef SeekableIfaceClassImpl self;
typedef detail::InterfaceClassImpl<SeekableImpl> super;

protected:
using super::super;

// gboolean Seekable::can_seek (GSeekable* seekable);
// gboolean Seekable::can_seek (::GSeekable* seekable);
GI_INLINE_DECL bool can_seek_ () noexcept override;

// gboolean Seekable::can_truncate (GSeekable* seekable);
// gboolean Seekable::can_truncate (::GSeekable* seekable);
GI_INLINE_DECL bool can_truncate_ () noexcept override;

// gboolean Seekable::seek (GSeekable* seekable, goffset offset, GSeekType type, GCancellable* cancellable, GError ** error);
// gboolean Seekable::seek (::GSeekable* seekable, gint64 offset, ::GSeekType type, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// goffset Seekable::tell (GSeekable* seekable);
// gint64 Seekable::tell (::GSeekable* seekable);
GI_INLINE_DECL gint64 tell_ () noexcept override;

// gboolean Seekable::truncate_fn (GSeekable* seekable, goffset offset, GCancellable* cancellable, GError ** error);
// gboolean Seekable::truncate_fn (::GSeekable* seekable, gint64 offset, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
