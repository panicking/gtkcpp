// AUTO-GENERATED

#ifndef _GI_WEBKIT2_FAVICONDATABASE_HPP_
#define _GI_WEBKIT2_FAVICONDATABASE_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class FaviconDatabase;

namespace base {


#define GI_WEBKIT2_FAVICONDATABASE_BASE base::FaviconDatabaseBase
class FaviconDatabaseBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitFaviconDatabase BaseObjectType;

FaviconDatabaseBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_favicon_database_get_type(); } 

// void webkit_favicon_database_clear (WebKitFaviconDatabase* database);
// void webkit_favicon_database_clear (::WebKitFaviconDatabase* database);
GI_INLINE_DECL void clear () noexcept;

// void webkit_favicon_database_get_favicon (WebKitFaviconDatabase* database, const gchar* page_uri, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_favicon_database_get_favicon (::WebKitFaviconDatabase* database, const char* page_uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void get_favicon (const std::string & page_uri, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void get_favicon (const std::string & page_uri, Gio::AsyncReadyCallback callback) noexcept;

// cairo_surface_t* webkit_favicon_database_get_favicon_finish (WebKitFaviconDatabase* database, GAsyncResult* result, GError ** error);
// ::cairo_surface_t* webkit_favicon_database_get_favicon_finish (::WebKitFaviconDatabase* database, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL cairo::Surface get_favicon_finish (Gio::AsyncResult result);
GI_INLINE_DECL cairo::Surface get_favicon_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gchar* webkit_favicon_database_get_favicon_uri (WebKitFaviconDatabase* database, const gchar* page_uri);
// char* webkit_favicon_database_get_favicon_uri (::WebKitFaviconDatabase* database, const char* page_uri);
GI_INLINE_DECL std::string get_favicon_uri (const std::string & page_uri) noexcept;

// signal favicon-changed
gi::signal_proxy<void(WebKit2::FaviconDatabase, const std::string & page_uri, const std::string & favicon_uri)> signal_favicon_changed()
{ return gi::signal_proxy<void(WebKit2::FaviconDatabase, const std::string & page_uri, const std::string & favicon_uri)> (*this, "favicon-changed"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/favicondatabase_extra_def.hpp>)
#include <webkit2/favicondatabase_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/favicondatabase_extra.hpp>)
#include <webkit2/favicondatabase_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class FaviconDatabase : public GI_WEBKIT2_FAVICONDATABASE_BASE
{ typedef GI_WEBKIT2_FAVICONDATABASE_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitFaviconDatabase>
{ typedef WebKit2::FaviconDatabase type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class FaviconDatabaseClassDef
{
typedef FaviconDatabaseClassDef self;
public:
typedef WebKit2::FaviconDatabase instance_type;
typedef ::WebKitFaviconDatabaseClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FaviconDatabaseClass: public detail::ClassTemplate<WebKit2::impl::internal::FaviconDatabaseClassDef, GObject::impl::internal::ObjectClass>
{
typedef FaviconDatabaseClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::FaviconDatabaseClassDef, GObject::impl::internal::ObjectClass> super;

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

using FaviconDatabaseImpl = detail::ObjectImpl<FaviconDatabase, internal::FaviconDatabaseClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
