// AUTO-GENERATED

#ifndef _GI_WEBKIT2_FILECHOOSERREQUEST_HPP_
#define _GI_WEBKIT2_FILECHOOSERREQUEST_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class FileChooserRequest;

namespace base {


#define GI_WEBKIT2_FILECHOOSERREQUEST_BASE base::FileChooserRequestBase
class FileChooserRequestBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitFileChooserRequest BaseObjectType;

FileChooserRequestBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_file_chooser_request_get_type(); } 

// void webkit_file_chooser_request_cancel (WebKitFileChooserRequest* request);
// void webkit_file_chooser_request_cancel (::WebKitFileChooserRequest* request);
GI_INLINE_DECL void cancel () noexcept;

// const gchar* const* webkit_file_chooser_request_get_mime_types (WebKitFileChooserRequest* request);
// const char** webkit_file_chooser_request_get_mime_types (::WebKitFileChooserRequest* request);
GI_INLINE_DECL std::vector<std::string> get_mime_types () noexcept;

// GtkFileFilter* webkit_file_chooser_request_get_mime_types_filter (WebKitFileChooserRequest* request);
// ::GtkFileFilter* webkit_file_chooser_request_get_mime_types_filter (::WebKitFileChooserRequest* request);
GI_INLINE_DECL Gtk::FileFilter get_mime_types_filter () noexcept;

// gboolean webkit_file_chooser_request_get_select_multiple (WebKitFileChooserRequest* request);
// gboolean webkit_file_chooser_request_get_select_multiple (::WebKitFileChooserRequest* request);
GI_INLINE_DECL bool get_select_multiple () noexcept;

// const gchar* const* webkit_file_chooser_request_get_selected_files (WebKitFileChooserRequest* request);
// const char** webkit_file_chooser_request_get_selected_files (::WebKitFileChooserRequest* request);
GI_INLINE_DECL std::vector<std::string> get_selected_files () noexcept;

// void webkit_file_chooser_request_select_files (WebKitFileChooserRequest* request, const gchar* const* files);
// void webkit_file_chooser_request_select_files (::WebKitFileChooserRequest* request, const char** files);
GI_INLINE_DECL void select_files (const std::vector<std::string> & files) noexcept;

gi::property_proxy<Gtk::FileFilter, base::FileChooserRequestBase> property_filter()
{ return gi::property_proxy<Gtk::FileFilter, base::FileChooserRequestBase> (*this, "filter"); }
const gi::property_proxy<Gtk::FileFilter, base::FileChooserRequestBase> property_filter() const
{ return gi::property_proxy<Gtk::FileFilter, base::FileChooserRequestBase> (*this, "filter"); }

gi::property_proxy<bool, base::FileChooserRequestBase> property_select_multiple()
{ return gi::property_proxy<bool, base::FileChooserRequestBase> (*this, "select-multiple"); }
const gi::property_proxy<bool, base::FileChooserRequestBase> property_select_multiple() const
{ return gi::property_proxy<bool, base::FileChooserRequestBase> (*this, "select-multiple"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/filechooserrequest_extra_def.hpp>)
#include <webkit2/filechooserrequest_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/filechooserrequest_extra.hpp>)
#include <webkit2/filechooserrequest_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class FileChooserRequest : public GI_WEBKIT2_FILECHOOSERREQUEST_BASE
{ typedef GI_WEBKIT2_FILECHOOSERREQUEST_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitFileChooserRequest>
{ typedef WebKit2::FileChooserRequest type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class FileChooserRequestClassDef
{
typedef FileChooserRequestClassDef self;
public:
typedef WebKit2::FileChooserRequest instance_type;
typedef ::WebKitFileChooserRequestClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FileChooserRequestClass: public detail::ClassTemplate<WebKit2::impl::internal::FileChooserRequestClassDef, GObject::impl::internal::ObjectClass>
{
typedef FileChooserRequestClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::FileChooserRequestClassDef, GObject::impl::internal::ObjectClass> super;

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

using FileChooserRequestImpl = detail::ObjectImpl<FileChooserRequest, internal::FileChooserRequestClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
