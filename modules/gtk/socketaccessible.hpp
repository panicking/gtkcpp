// AUTO-GENERATED

#ifndef _GI_GTK_SOCKETACCESSIBLE_HPP_
#define _GI_GTK_SOCKETACCESSIBLE_HPP_

#include "containeraccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class SocketAccessible;

namespace base {


#define GI_GTK_SOCKETACCESSIBLE_BASE base::SocketAccessibleBase
class SocketAccessibleBase : public Gtk::ContainerAccessible
{
typedef Gtk::ContainerAccessible super_type;
public:
typedef ::GtkSocketAccessible BaseObjectType;

SocketAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_socket_accessible_get_type(); } 

// void gtk_socket_accessible_embed (GtkSocketAccessible* socket, gchar* path);
// void gtk_socket_accessible_embed (::GtkSocketAccessible* socket, char* path);
GI_INLINE_DECL void embed (const std::string & path) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/socketaccessible_extra_def.hpp>)
#include <gtk/socketaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/socketaccessible_extra.hpp>)
#include <gtk/socketaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SocketAccessible : public GI_GTK_SOCKETACCESSIBLE_BASE
{ typedef GI_GTK_SOCKETACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSocketAccessible>
{ typedef Gtk::SocketAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SocketAccessibleClassDef
{
typedef SocketAccessibleClassDef self;
public:
typedef Gtk::SocketAccessible instance_type;
typedef ::GtkSocketAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SocketAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::SocketAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass>
{
typedef SocketAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SocketAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass> super;

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

using SocketAccessibleImpl = detail::ObjectImpl<SocketAccessible, internal::SocketAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
