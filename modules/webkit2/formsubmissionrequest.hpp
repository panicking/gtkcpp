// AUTO-GENERATED

#ifndef _GI_WEBKIT2_FORMSUBMISSIONREQUEST_HPP_
#define _GI_WEBKIT2_FORMSUBMISSIONREQUEST_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class FormSubmissionRequest;

namespace base {


#define GI_WEBKIT2_FORMSUBMISSIONREQUEST_BASE base::FormSubmissionRequestBase
class FormSubmissionRequestBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitFormSubmissionRequest BaseObjectType;

FormSubmissionRequestBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_form_submission_request_get_type(); } 

// GHashTable* webkit_form_submission_request_get_text_fields (WebKitFormSubmissionRequest* request);
// ::GHashTable* webkit_form_submission_request_get_text_fields (::WebKitFormSubmissionRequest* request);
// IGNORE; deprecated

// gboolean webkit_form_submission_request_list_text_fields (WebKitFormSubmissionRequest* request, GPtrArray** field_names, GPtrArray** field_values);
// gboolean webkit_form_submission_request_list_text_fields (::WebKitFormSubmissionRequest* request, * field_names, * field_values);
// SKIP; field_values type  not supported, field_names type  not supported

// void webkit_form_submission_request_submit (WebKitFormSubmissionRequest* request);
// void webkit_form_submission_request_submit (::WebKitFormSubmissionRequest* request);
GI_INLINE_DECL void submit () noexcept;

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/formsubmissionrequest_extra_def.hpp>)
#include <webkit2/formsubmissionrequest_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/formsubmissionrequest_extra.hpp>)
#include <webkit2/formsubmissionrequest_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class FormSubmissionRequest : public GI_WEBKIT2_FORMSUBMISSIONREQUEST_BASE
{ typedef GI_WEBKIT2_FORMSUBMISSIONREQUEST_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitFormSubmissionRequest>
{ typedef WebKit2::FormSubmissionRequest type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class FormSubmissionRequestClassDef
{
typedef FormSubmissionRequestClassDef self;
public:
typedef WebKit2::FormSubmissionRequest instance_type;
typedef ::WebKitFormSubmissionRequestClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FormSubmissionRequestClass: public detail::ClassTemplate<WebKit2::impl::internal::FormSubmissionRequestClassDef, GObject::impl::internal::ObjectClass>
{
typedef FormSubmissionRequestClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::FormSubmissionRequestClassDef, GObject::impl::internal::ObjectClass> super;

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

using FormSubmissionRequestImpl = detail::ObjectImpl<FormSubmissionRequest, internal::FormSubmissionRequestClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
