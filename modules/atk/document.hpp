// AUTO-GENERATED

#ifndef _GI_ATK_DOCUMENT_HPP_
#define _GI_ATK_DOCUMENT_HPP_


namespace gi {

namespace repository {

namespace Atk {


class Document;

namespace base {


#define GI_ATK_DOCUMENT_BASE base::DocumentBase
class DocumentBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::AtkDocument BaseObjectType;

DocumentBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_document_get_type(); } 

// const gchar* atk_document_get_attribute_value (AtkDocument* document, const gchar* attribute_name);
// const char* atk_document_get_attribute_value (::AtkDocument* document, const char* attribute_name);
GI_INLINE_DECL std::string get_attribute_value (const std::string & attribute_name) noexcept;

//  atk_document_get_attributes (AtkDocument* document);
//  atk_document_get_attributes (::AtkDocument* document);
// SKIP; inconsistent list element info

// gint atk_document_get_current_page_number (AtkDocument* document);
// gint atk_document_get_current_page_number (::AtkDocument* document);
GI_INLINE_DECL gint get_current_page_number () noexcept;

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
GI_INLINE_DECL gint get_page_count () noexcept;

// gboolean atk_document_set_attribute_value (AtkDocument* document, const gchar* attribute_name, const gchar* attribute_value);
// gboolean atk_document_set_attribute_value (::AtkDocument* document, const char* attribute_name, const char* attribute_value);
GI_INLINE_DECL bool set_attribute_value (const std::string & attribute_name, const std::string & attribute_value) noexcept;

// signal load-complete
gi::signal_proxy<void(Atk::Document)> signal_load_complete()
{ return gi::signal_proxy<void(Atk::Document)> (*this, "load-complete"); }

// signal load-stopped
gi::signal_proxy<void(Atk::Document)> signal_load_stopped()
{ return gi::signal_proxy<void(Atk::Document)> (*this, "load-stopped"); }

// signal page-changed
gi::signal_proxy<void(Atk::Document, gint page_number)> signal_page_changed()
{ return gi::signal_proxy<void(Atk::Document, gint page_number)> (*this, "page-changed"); }

// signal reload
gi::signal_proxy<void(Atk::Document)> signal_reload()
{ return gi::signal_proxy<void(Atk::Document)> (*this, "reload"); }

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/document_extra_def.hpp>)
#include <atk/document_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/document_extra.hpp>)
#include <atk/document_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Document : public GI_ATK_DOCUMENT_BASE
{ typedef GI_ATK_DOCUMENT_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkDocument>
{ typedef Atk::Document type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class DocumentIfaceDef
{
typedef DocumentIfaceDef self;
public:
typedef Atk::Document instance_type;
typedef ::AtkDocumentIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gint Document::get_current_page_number (AtkDocument* document);
// gint Document::get_current_page_number (::AtkDocument* document);
virtual gint get_current_page_number_ () noexcept = 0;

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
virtual gint get_page_count_ () noexcept = 0;

// gboolean Document::set_document_attribute (AtkDocument* document, const gchar* attribute_name, const gchar* attribute_value);
// gboolean Document::set_document_attribute (::AtkDocument* document, const char* attribute_name, const char* attribute_value);
virtual bool set_document_attribute_ (const std::string & attribute_name, const std::string & attribute_value) noexcept = 0;


};

using DocumentImpl = detail::InterfaceImpl<DocumentIfaceDef>;

class DocumentIfaceClassImpl: public detail::InterfaceClassImpl<DocumentImpl>
{
typedef DocumentIfaceClassImpl self;
typedef detail::InterfaceClassImpl<DocumentImpl> super;

protected:
using super::super;

// gint Document::get_current_page_number (AtkDocument* document);
// gint Document::get_current_page_number (::AtkDocument* document);
GI_INLINE_DECL gint get_current_page_number_ () noexcept override;

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
GI_INLINE_DECL gint get_page_count_ () noexcept override;

// gboolean Document::set_document_attribute (AtkDocument* document, const gchar* attribute_name, const gchar* attribute_value);
// gboolean Document::set_document_attribute (::AtkDocument* document, const char* attribute_name, const char* attribute_value);
GI_INLINE_DECL bool set_document_attribute_ (const std::string & attribute_name, const std::string & attribute_value) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
