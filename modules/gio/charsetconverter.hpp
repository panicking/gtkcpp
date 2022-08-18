// AUTO-GENERATED

#ifndef _GI_GIO_CHARSETCONVERTER_HPP_
#define _GI_GIO_CHARSETCONVERTER_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Converter;
class Initable;

class CharsetConverter;

namespace base {


#define GI_GIO_CHARSETCONVERTER_BASE base::CharsetConverterBase
class CharsetConverterBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GCharsetConverter BaseObjectType;

CharsetConverterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_charset_converter_get_type(); } 

GI_INLINE_DECL Gio::Converter interface_ (gi::interface_tag<Gio::Converter>);

GI_INLINE_DECL operator Gio::Converter ();

GI_INLINE_DECL Gio::Initable interface_ (gi::interface_tag<Gio::Initable>);

GI_INLINE_DECL operator Gio::Initable ();

// GCharsetConverter* g_charset_converter_new (const gchar* to_charset, const gchar* from_charset, GError ** error);
// ::GCharsetConverter* g_charset_converter_new (const char* to_charset, const char* from_charset, GError ** error);
static GI_INLINE_DECL Gio::CharsetConverter new_ (const std::string & to_charset, const std::string & from_charset);
static GI_INLINE_DECL Gio::CharsetConverter new_ (const std::string & to_charset, const std::string & from_charset, GLib::Error * _error) noexcept;

// guint g_charset_converter_get_num_fallbacks (GCharsetConverter* converter);
// guint g_charset_converter_get_num_fallbacks (::GCharsetConverter* converter);
GI_INLINE_DECL guint get_num_fallbacks () noexcept;

// gboolean g_charset_converter_get_use_fallback (GCharsetConverter* converter);
// gboolean g_charset_converter_get_use_fallback (::GCharsetConverter* converter);
GI_INLINE_DECL bool get_use_fallback () noexcept;

// void g_charset_converter_set_use_fallback (GCharsetConverter* converter, gboolean use_fallback);
// void g_charset_converter_set_use_fallback (::GCharsetConverter* converter, gboolean use_fallback);
GI_INLINE_DECL void set_use_fallback (gboolean use_fallback) noexcept;

gi::property_proxy<std::string, base::CharsetConverterBase> property_from_charset()
{ return gi::property_proxy<std::string, base::CharsetConverterBase> (*this, "from-charset"); }
const gi::property_proxy<std::string, base::CharsetConverterBase> property_from_charset() const
{ return gi::property_proxy<std::string, base::CharsetConverterBase> (*this, "from-charset"); }

gi::property_proxy<std::string, base::CharsetConverterBase> property_to_charset()
{ return gi::property_proxy<std::string, base::CharsetConverterBase> (*this, "to-charset"); }
const gi::property_proxy<std::string, base::CharsetConverterBase> property_to_charset() const
{ return gi::property_proxy<std::string, base::CharsetConverterBase> (*this, "to-charset"); }

gi::property_proxy<bool, base::CharsetConverterBase> property_use_fallback()
{ return gi::property_proxy<bool, base::CharsetConverterBase> (*this, "use-fallback"); }
const gi::property_proxy<bool, base::CharsetConverterBase> property_use_fallback() const
{ return gi::property_proxy<bool, base::CharsetConverterBase> (*this, "use-fallback"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/charsetconverter_extra_def.hpp>)
#include <gio/charsetconverter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/charsetconverter_extra.hpp>)
#include <gio/charsetconverter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class CharsetConverter : public GI_GIO_CHARSETCONVERTER_BASE
{ typedef GI_GIO_CHARSETCONVERTER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GCharsetConverter>
{ typedef Gio::CharsetConverter type; }; 

} // namespace repository

} // namespace gi

#include "converter.hpp"
#include "initable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class CharsetConverterClassDef
{
typedef CharsetConverterClassDef self;
public:
typedef Gio::CharsetConverter instance_type;
typedef ::GCharsetConverterClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class CharsetConverterClass: public detail::ClassTemplate<Gio::impl::internal::CharsetConverterClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ConverterIfaceClassImpl, Gio::impl::internal::InitableIfaceClassImpl>
{
typedef CharsetConverterClass self;
typedef detail::ClassTemplate<Gio::impl::internal::CharsetConverterClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ConverterIfaceClassImpl, Gio::impl::internal::InitableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ConverterIfaceClassImpl GConverterIface_type;
typedef Gio::impl::internal::InitableIfaceClassImpl GInitableIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using CharsetConverterImpl = detail::ObjectImpl<CharsetConverter, internal::CharsetConverterClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
