// AUTO-GENERATED

#ifndef _GI_ATK_DOCUMENT_IMPL_HPP_
#define _GI_ATK_DOCUMENT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// const gchar* atk_document_get_attribute_value (AtkDocument* document, const gchar* attribute_name);
// const char* atk_document_get_attribute_value (::AtkDocument* document, const char* attribute_name);
std::string base::DocumentBase::get_attribute_value (const std::string & attribute_name) noexcept
{
  typedef const char* (*call_wrap_t) (::AtkDocument* document, const char* attribute_name);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_document_get_attribute_value;
  auto attribute_name_to_c = gi::unwrap (attribute_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::AtkDocument*) (gobj_()), (const char*) (attribute_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

//  atk_document_get_attributes (AtkDocument* document);
//  atk_document_get_attributes (::AtkDocument* document);
// SKIP; inconsistent list element info

// gint atk_document_get_current_page_number (AtkDocument* document);
// gint atk_document_get_current_page_number (::AtkDocument* document);
gint base::DocumentBase::get_current_page_number () noexcept
{
  typedef gint (*call_wrap_t) (::AtkDocument* document);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_document_get_current_page_number;
  auto _temp_ret = call_wrap_v ((::AtkDocument*) (gobj_()));
  return _temp_ret;
}

// gpointer atk_document_get_document (AtkDocument* document);
// void* atk_document_get_document (::AtkDocument* document);
// IGNORE; deprecated

// const gchar* atk_document_get_document_type (AtkDocument* document);
// const char* atk_document_get_document_type (::AtkDocument* document);
// IGNORE; deprecated

// const gchar* atk_document_get_locale (AtkDocument* document);
// const char* atk_document_get_locale (::AtkDocument* document);
// IGNORE; deprecated

// gint atk_document_get_page_count (AtkDocument* document);
// gint atk_document_get_page_count (::AtkDocument* document);
gint base::DocumentBase::get_page_count () noexcept
{
  typedef gint (*call_wrap_t) (::AtkDocument* document);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_document_get_page_count;
  auto _temp_ret = call_wrap_v ((::AtkDocument*) (gobj_()));
  return _temp_ret;
}

// gboolean atk_document_set_attribute_value (AtkDocument* document, const gchar* attribute_name, const gchar* attribute_value);
// gboolean atk_document_set_attribute_value (::AtkDocument* document, const char* attribute_name, const char* attribute_value);
bool base::DocumentBase::set_attribute_value (const std::string & attribute_name, const std::string & attribute_value) noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkDocument* document, const char* attribute_name, const char* attribute_value);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_document_set_attribute_value;
  auto attribute_value_to_c = gi::unwrap (attribute_value, gi::transfer_none, gi::direction_in);
  auto attribute_name_to_c = gi::unwrap (attribute_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::AtkDocument*) (gobj_()), (const char*) (attribute_name_to_c), (const char*) (attribute_value_to_c));
  return _temp_ret;
}






} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/document_extra_def_impl.hpp>)
#include <atk/document_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/document_extra_impl.hpp>)
#include <atk/document_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void DocumentIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::AtkDocumentIface *methods = (::AtkDocumentIface *) interface_struct;
  (void) methods;

  methods->get_current_page_number = (decltype (methods->get_current_page_number)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_current_page_number_>;
  methods->get_page_count = (decltype (methods->get_page_count)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_page_count_>;
  methods->set_document_attribute = (decltype (methods->set_document_attribute)) detail::method_wrapper<self, bool (*) (const std::string & attribute_name, const std::string & attribute_value), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_document_attribute_>;
}

// gint Document::get_current_page_number (AtkDocument* document);
// gint Document::get_current_page_number (::AtkDocument* document);
gint DocumentIfaceClassImpl::get_current_page_number_ () noexcept
{
  if (!get_struct_()->get_current_page_number) return gint{};
  typedef gint (*call_wrap_t) (::AtkDocument* document);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_current_page_number;
  auto _temp_ret = call_wrap_v ((::AtkDocument*) (gobj_()));
  return _temp_ret;
}

// gpointer Document::get_document (AtkDocument* document);
// void* Document::get_document (::AtkDocument* document);
// IGNORE; deprecated

// const gchar* Document::get_document_attribute_value (AtkDocument* document, const gchar* attribute_name);
// const char* Document::get_document_attribute_value (::AtkDocument* document, const char* attribute_name);
// SKIP; invalid callback return transfer none

//  Document::get_document_attributes (AtkDocument* document);
//  Document::get_document_attributes (::AtkDocument* document);
// SKIP; inconsistent list element info

// const gchar* Document::get_document_locale (AtkDocument* document);
// const char* Document::get_document_locale (::AtkDocument* document);
// IGNORE; deprecated, invalid callback return transfer none

// const gchar* Document::get_document_type (AtkDocument* document);
// const char* Document::get_document_type (::AtkDocument* document);
// IGNORE; deprecated, invalid callback return transfer none

// gint Document::get_page_count (AtkDocument* document);
// gint Document::get_page_count (::AtkDocument* document);
gint DocumentIfaceClassImpl::get_page_count_ () noexcept
{
  if (!get_struct_()->get_page_count) return gint{};
  typedef gint (*call_wrap_t) (::AtkDocument* document);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_page_count;
  auto _temp_ret = call_wrap_v ((::AtkDocument*) (gobj_()));
  return _temp_ret;
}

// gboolean Document::set_document_attribute (AtkDocument* document, const gchar* attribute_name, const gchar* attribute_value);
// gboolean Document::set_document_attribute (::AtkDocument* document, const char* attribute_name, const char* attribute_value);
bool DocumentIfaceClassImpl::set_document_attribute_ (const std::string & attribute_name, const std::string & attribute_value) noexcept
{
  if (!get_struct_()->set_document_attribute) return bool{};
  typedef gboolean (*call_wrap_t) (::AtkDocument* document, const char* attribute_name, const char* attribute_value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_document_attribute;
  auto attribute_value_to_c = gi::unwrap (attribute_value, gi::transfer_none, gi::direction_in);
  auto attribute_name_to_c = gi::unwrap (attribute_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::AtkDocument*) (gobj_()), (const char*) (attribute_name_to_c), (const char*) (attribute_value_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
