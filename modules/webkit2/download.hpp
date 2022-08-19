// AUTO-GENERATED

#ifndef _GI_WEBKIT2_DOWNLOAD_HPP_
#define _GI_WEBKIT2_DOWNLOAD_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class URIRequest;
class URIResponse;
class WebView;

class Download;

namespace base {


#define GI_WEBKIT2_DOWNLOAD_BASE base::DownloadBase
class DownloadBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitDownload BaseObjectType;

DownloadBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_download_get_type(); } 

// void webkit_download_cancel (WebKitDownload* download);
// void webkit_download_cancel (::WebKitDownload* download);
GI_INLINE_DECL void cancel () noexcept;

// gboolean webkit_download_get_allow_overwrite (WebKitDownload* download);
// gboolean webkit_download_get_allow_overwrite (::WebKitDownload* download);
GI_INLINE_DECL bool get_allow_overwrite () noexcept;

// const gchar* webkit_download_get_destination (WebKitDownload* download);
// const char* webkit_download_get_destination (::WebKitDownload* download);
GI_INLINE_DECL std::string get_destination () noexcept;

// gdouble webkit_download_get_elapsed_time (WebKitDownload* download);
// gdouble webkit_download_get_elapsed_time (::WebKitDownload* download);
GI_INLINE_DECL gdouble get_elapsed_time () noexcept;

// gdouble webkit_download_get_estimated_progress (WebKitDownload* download);
// gdouble webkit_download_get_estimated_progress (::WebKitDownload* download);
GI_INLINE_DECL gdouble get_estimated_progress () noexcept;

// guint64 webkit_download_get_received_data_length (WebKitDownload* download);
// guint64 webkit_download_get_received_data_length (::WebKitDownload* download);
GI_INLINE_DECL guint64 get_received_data_length () noexcept;

// WebKitURIRequest* webkit_download_get_request (WebKitDownload* download);
// ::WebKitURIRequest* webkit_download_get_request (::WebKitDownload* download);
GI_INLINE_DECL WebKit2::URIRequest get_request () noexcept;

// WebKitURIResponse* webkit_download_get_response (WebKitDownload* download);
// ::WebKitURIResponse* webkit_download_get_response (::WebKitDownload* download);
GI_INLINE_DECL WebKit2::URIResponse get_response () noexcept;

// WebKitWebView* webkit_download_get_web_view (WebKitDownload* download);
// ::WebKitWebView* webkit_download_get_web_view (::WebKitDownload* download);
GI_INLINE_DECL WebKit2::WebView get_web_view () noexcept;

// void webkit_download_set_allow_overwrite (WebKitDownload* download, gboolean allowed);
// void webkit_download_set_allow_overwrite (::WebKitDownload* download, gboolean allowed);
GI_INLINE_DECL void set_allow_overwrite (gboolean allowed) noexcept;

// void webkit_download_set_destination (WebKitDownload* download, const gchar* uri);
// void webkit_download_set_destination (::WebKitDownload* download, const char* uri);
GI_INLINE_DECL void set_destination (const std::string & uri) noexcept;

gi::property_proxy<bool, base::DownloadBase> property_allow_overwrite()
{ return gi::property_proxy<bool, base::DownloadBase> (*this, "allow-overwrite"); }
const gi::property_proxy<bool, base::DownloadBase> property_allow_overwrite() const
{ return gi::property_proxy<bool, base::DownloadBase> (*this, "allow-overwrite"); }

gi::property_proxy<std::string, base::DownloadBase> property_destination()
{ return gi::property_proxy<std::string, base::DownloadBase> (*this, "destination"); }
const gi::property_proxy<std::string, base::DownloadBase> property_destination() const
{ return gi::property_proxy<std::string, base::DownloadBase> (*this, "destination"); }

gi::property_proxy<gdouble, base::DownloadBase> property_estimated_progress()
{ return gi::property_proxy<gdouble, base::DownloadBase> (*this, "estimated-progress"); }
const gi::property_proxy<gdouble, base::DownloadBase> property_estimated_progress() const
{ return gi::property_proxy<gdouble, base::DownloadBase> (*this, "estimated-progress"); }

gi::property_proxy<WebKit2::URIResponse, base::DownloadBase> property_response()
{ return gi::property_proxy<WebKit2::URIResponse, base::DownloadBase> (*this, "response"); }
const gi::property_proxy<WebKit2::URIResponse, base::DownloadBase> property_response() const
{ return gi::property_proxy<WebKit2::URIResponse, base::DownloadBase> (*this, "response"); }

// signal created-destination
gi::signal_proxy<void(WebKit2::Download, const std::string & destination)> signal_created_destination()
{ return gi::signal_proxy<void(WebKit2::Download, const std::string & destination)> (*this, "created-destination"); }

// signal decide-destination
gi::signal_proxy<bool(WebKit2::Download, const std::string & suggested_filename)> signal_decide_destination()
{ return gi::signal_proxy<bool(WebKit2::Download, const std::string & suggested_filename)> (*this, "decide-destination"); }

// signal failed
gi::signal_proxy<void(WebKit2::Download, GLib::Error error)> signal_failed()
{ return gi::signal_proxy<void(WebKit2::Download, GLib::Error error)> (*this, "failed"); }

// signal finished
gi::signal_proxy<void(WebKit2::Download)> signal_finished()
{ return gi::signal_proxy<void(WebKit2::Download)> (*this, "finished"); }

// signal received-data
gi::signal_proxy<void(WebKit2::Download, guint64 data_length)> signal_received_data()
{ return gi::signal_proxy<void(WebKit2::Download, guint64 data_length)> (*this, "received-data"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/download_extra_def.hpp>)
#include <webkit2/download_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/download_extra.hpp>)
#include <webkit2/download_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class Download : public GI_WEBKIT2_DOWNLOAD_BASE
{ typedef GI_WEBKIT2_DOWNLOAD_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitDownload>
{ typedef WebKit2::Download type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class DownloadClassDef
{
typedef DownloadClassDef self;
public:
typedef WebKit2::Download instance_type;
typedef ::WebKitDownloadClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean Download::decide_destination (WebKitDownload* download, const gchar* suggested_filename);
// gboolean Download::decide_destination (::WebKitDownload* download, const char* suggested_filename);
virtual bool decide_destination_ (const std::string & suggested_filename) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class DownloadClass: public detail::ClassTemplate<WebKit2::impl::internal::DownloadClassDef, GObject::impl::internal::ObjectClass>
{
typedef DownloadClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::DownloadClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean Download::decide_destination (WebKitDownload* download, const gchar* suggested_filename);
// gboolean Download::decide_destination (::WebKitDownload* download, const char* suggested_filename);
GI_INLINE_DECL bool decide_destination_ (const std::string & suggested_filename) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using DownloadImpl = detail::ObjectImpl<Download, internal::DownloadClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
