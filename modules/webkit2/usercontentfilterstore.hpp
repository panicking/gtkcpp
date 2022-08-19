// AUTO-GENERATED

#ifndef _GI_WEBKIT2_USERCONTENTFILTERSTORE_HPP_
#define _GI_WEBKIT2_USERCONTENTFILTERSTORE_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class UserContentFilter;

class UserContentFilterStore;

namespace base {


#define GI_WEBKIT2_USERCONTENTFILTERSTORE_BASE base::UserContentFilterStoreBase
class UserContentFilterStoreBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitUserContentFilterStore BaseObjectType;

UserContentFilterStoreBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_user_content_filter_store_get_type(); } 

// WebKitUserContentFilterStore* webkit_user_content_filter_store_new (const gchar* storage_path);
// ::WebKitUserContentFilterStore* webkit_user_content_filter_store_new (const char* storage_path);
static GI_INLINE_DECL WebKit2::UserContentFilterStore new_ (const std::string & storage_path) noexcept;

// void webkit_user_content_filter_store_fetch_identifiers (WebKitUserContentFilterStore* store, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_user_content_filter_store_fetch_identifiers (::WebKitUserContentFilterStore* store, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void fetch_identifiers (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void fetch_identifiers (Gio::AsyncReadyCallback callback) noexcept;

// gchar** webkit_user_content_filter_store_fetch_identifiers_finish (WebKitUserContentFilterStore* store, GAsyncResult* result);
// char** webkit_user_content_filter_store_fetch_identifiers_finish (::WebKitUserContentFilterStore* store, ::GAsyncResult* result);
GI_INLINE_DECL std::vector<std::string> fetch_identifiers_finish (Gio::AsyncResult result) noexcept;

// const gchar* webkit_user_content_filter_store_get_path (WebKitUserContentFilterStore* store);
// const char* webkit_user_content_filter_store_get_path (::WebKitUserContentFilterStore* store);
GI_INLINE_DECL std::string get_path () noexcept;

// void webkit_user_content_filter_store_load (WebKitUserContentFilterStore* store, const gchar* identifier, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_user_content_filter_store_load (::WebKitUserContentFilterStore* store, const char* identifier, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void load (const std::string & identifier, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void load (const std::string & identifier, Gio::AsyncReadyCallback callback) noexcept;

// WebKitUserContentFilter* webkit_user_content_filter_store_load_finish (WebKitUserContentFilterStore* store, GAsyncResult* result, GError ** error);
// ::WebKitUserContentFilter* webkit_user_content_filter_store_load_finish (::WebKitUserContentFilterStore* store, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL WebKit2::UserContentFilter load_finish (Gio::AsyncResult result);
GI_INLINE_DECL WebKit2::UserContentFilter load_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void webkit_user_content_filter_store_remove (WebKitUserContentFilterStore* store, const gchar* identifier, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_user_content_filter_store_remove (::WebKitUserContentFilterStore* store, const char* identifier, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void remove (const std::string & identifier, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void remove (const std::string & identifier, Gio::AsyncReadyCallback callback) noexcept;

// gboolean webkit_user_content_filter_store_remove_finish (WebKitUserContentFilterStore* store, GAsyncResult* result, GError ** error);
// gboolean webkit_user_content_filter_store_remove_finish (::WebKitUserContentFilterStore* store, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool remove_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool remove_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void webkit_user_content_filter_store_save (WebKitUserContentFilterStore* store, const gchar* identifier, GBytes* source, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_user_content_filter_store_save (::WebKitUserContentFilterStore* store, const char* identifier, ::GBytes* source, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void save (const std::string & identifier, GLib::Bytes source, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void save (const std::string & identifier, GLib::Bytes source, Gio::AsyncReadyCallback callback) noexcept;

// WebKitUserContentFilter* webkit_user_content_filter_store_save_finish (WebKitUserContentFilterStore* store, GAsyncResult* result, GError ** error);
// ::WebKitUserContentFilter* webkit_user_content_filter_store_save_finish (::WebKitUserContentFilterStore* store, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL WebKit2::UserContentFilter save_finish (Gio::AsyncResult result);
GI_INLINE_DECL WebKit2::UserContentFilter save_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void webkit_user_content_filter_store_save_from_file (WebKitUserContentFilterStore* store, const gchar* identifier, GFile* file, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_user_content_filter_store_save_from_file (::WebKitUserContentFilterStore* store, const char* identifier, ::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void save_from_file (const std::string & identifier, Gio::File file, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void save_from_file (const std::string & identifier, Gio::File file, Gio::AsyncReadyCallback callback) noexcept;

// WebKitUserContentFilter* webkit_user_content_filter_store_save_from_file_finish (WebKitUserContentFilterStore* store, GAsyncResult* result, GError ** error);
// ::WebKitUserContentFilter* webkit_user_content_filter_store_save_from_file_finish (::WebKitUserContentFilterStore* store, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL WebKit2::UserContentFilter save_from_file_finish (Gio::AsyncResult result);
GI_INLINE_DECL WebKit2::UserContentFilter save_from_file_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

gi::property_proxy<std::string, base::UserContentFilterStoreBase> property_path()
{ return gi::property_proxy<std::string, base::UserContentFilterStoreBase> (*this, "path"); }
const gi::property_proxy<std::string, base::UserContentFilterStoreBase> property_path() const
{ return gi::property_proxy<std::string, base::UserContentFilterStoreBase> (*this, "path"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/usercontentfilterstore_extra_def.hpp>)
#include <webkit2/usercontentfilterstore_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/usercontentfilterstore_extra.hpp>)
#include <webkit2/usercontentfilterstore_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class UserContentFilterStore : public GI_WEBKIT2_USERCONTENTFILTERSTORE_BASE
{ typedef GI_WEBKIT2_USERCONTENTFILTERSTORE_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitUserContentFilterStore>
{ typedef WebKit2::UserContentFilterStore type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class UserContentFilterStoreClassDef
{
typedef UserContentFilterStoreClassDef self;
public:
typedef WebKit2::UserContentFilterStore instance_type;
typedef ::WebKitUserContentFilterStoreClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class UserContentFilterStoreClass: public detail::ClassTemplate<WebKit2::impl::internal::UserContentFilterStoreClassDef, GObject::impl::internal::ObjectClass>
{
typedef UserContentFilterStoreClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::UserContentFilterStoreClassDef, GObject::impl::internal::ObjectClass> super;

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

using UserContentFilterStoreImpl = detail::ObjectImpl<UserContentFilterStore, internal::UserContentFilterStoreClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
