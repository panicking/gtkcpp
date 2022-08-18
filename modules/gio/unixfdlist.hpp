// AUTO-GENERATED

#ifndef _GI_GIO_UNIXFDLIST_HPP_
#define _GI_GIO_UNIXFDLIST_HPP_


namespace gi {

namespace repository {

namespace Gio {


class UnixFDList;

namespace base {


#define GI_GIO_UNIXFDLIST_BASE base::UnixFDListBase
class UnixFDListBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GUnixFDList BaseObjectType;

UnixFDListBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_unix_fd_list_get_type(); } 

// GUnixFDList* g_unix_fd_list_new ();
// ::GUnixFDList* g_unix_fd_list_new ();
static GI_INLINE_DECL Gio::UnixFDList new_ () noexcept;

// GUnixFDList* g_unix_fd_list_new_from_array (const gint* fds, gint n_fds);
// ::GUnixFDList* g_unix_fd_list_new_from_array (const gint* fds, gint n_fds);
static GI_INLINE_DECL Gio::UnixFDList new_from_array (gint * fds, gint n_fds) noexcept;

// gint g_unix_fd_list_append (GUnixFDList* list, gint fd, GError ** error);
// gint g_unix_fd_list_append (::GUnixFDList* list, gint fd, GError ** error);
GI_INLINE_DECL gint append (gint fd);
GI_INLINE_DECL gint append (gint fd, GLib::Error * _error) noexcept;

// gint g_unix_fd_list_get (GUnixFDList* list, gint index_, GError ** error);
// gint g_unix_fd_list_get (::GUnixFDList* list, gint index_, GError ** error);
GI_INLINE_DECL gint get (gint index_);
GI_INLINE_DECL gint get (gint index_, GLib::Error * _error) noexcept;

// gint g_unix_fd_list_get_length (GUnixFDList* list);
// gint g_unix_fd_list_get_length (::GUnixFDList* list);
GI_INLINE_DECL gint get_length () noexcept;

// const gint* g_unix_fd_list_peek_fds (GUnixFDList* list, gint* length);
// const gint* g_unix_fd_list_peek_fds (::GUnixFDList* list, gint* length);
GI_INLINE_DECL std::vector<gint> peek_fds () noexcept;

// gint* g_unix_fd_list_steal_fds (GUnixFDList* list, gint* length);
// gint* g_unix_fd_list_steal_fds (::GUnixFDList* list, gint* length);
GI_INLINE_DECL std::vector<gint> steal_fds () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixfdlist_extra_def.hpp>)
#include <gio/unixfdlist_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixfdlist_extra.hpp>)
#include <gio/unixfdlist_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class UnixFDList : public GI_GIO_UNIXFDLIST_BASE
{ typedef GI_GIO_UNIXFDLIST_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GUnixFDList>
{ typedef Gio::UnixFDList type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class UnixFDListClassDef
{
typedef UnixFDListClassDef self;
public:
typedef Gio::UnixFDList instance_type;
typedef ::GUnixFDListClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class UnixFDListClass: public detail::ClassTemplate<Gio::impl::internal::UnixFDListClassDef, GObject::impl::internal::ObjectClass>
{
typedef UnixFDListClass self;
typedef detail::ClassTemplate<Gio::impl::internal::UnixFDListClassDef, GObject::impl::internal::ObjectClass> super;

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

using UnixFDListImpl = detail::ObjectImpl<UnixFDList, internal::UnixFDListClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
