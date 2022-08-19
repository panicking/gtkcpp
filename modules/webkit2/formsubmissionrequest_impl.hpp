// AUTO-GENERATED

#ifndef _GI_WEBKIT2_FORMSUBMISSIONREQUEST_IMPL_HPP_
#define _GI_WEBKIT2_FORMSUBMISSIONREQUEST_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// GHashTable* webkit_form_submission_request_get_text_fields (WebKitFormSubmissionRequest* request);
// ::GHashTable* webkit_form_submission_request_get_text_fields (::WebKitFormSubmissionRequest* request);
// IGNORE; deprecated

// gboolean webkit_form_submission_request_list_text_fields (WebKitFormSubmissionRequest* request, GPtrArray** field_names, GPtrArray** field_values);
// gboolean webkit_form_submission_request_list_text_fields (::WebKitFormSubmissionRequest* request, * field_names, * field_values);
// SKIP; field_values type  not supported, field_names type  not supported

// void webkit_form_submission_request_submit (WebKitFormSubmissionRequest* request);
// void webkit_form_submission_request_submit (::WebKitFormSubmissionRequest* request);
void base::FormSubmissionRequestBase::submit () noexcept
{
  typedef void (*call_wrap_t) (::WebKitFormSubmissionRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_form_submission_request_submit;
  call_wrap_v ((::WebKitFormSubmissionRequest*) (gobj_()));
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/formsubmissionrequest_extra_def_impl.hpp>)
#include <webkit2/formsubmissionrequest_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/formsubmissionrequest_extra_impl.hpp>)
#include <webkit2/formsubmissionrequest_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void FormSubmissionRequestClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitFormSubmissionRequestClass *methods = (::WebKitFormSubmissionRequestClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
