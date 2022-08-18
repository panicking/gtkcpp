// AUTO-GENERATED

#ifndef _GI_ATK_STREAMABLECONTENT_HPP_
#define _GI_ATK_STREAMABLECONTENT_HPP_


namespace gi {

namespace repository {

namespace Atk {


class StreamableContent;

namespace base {


#define GI_ATK_STREAMABLECONTENT_BASE base::StreamableContentBase
class StreamableContentBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::AtkStreamableContent BaseObjectType;

StreamableContentBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_streamable_content_get_type(); } 

// const gchar* atk_streamable_content_get_mime_type (AtkStreamableContent* streamable, gint i);
// const char* atk_streamable_content_get_mime_type (::AtkStreamableContent* streamable, gint i);
GI_INLINE_DECL std::string get_mime_type (gint i) noexcept;

// gint atk_streamable_content_get_n_mime_types (AtkStreamableContent* streamable);
// gint atk_streamable_content_get_n_mime_types (::AtkStreamableContent* streamable);
GI_INLINE_DECL gint get_n_mime_types () noexcept;

// GIOChannel* atk_streamable_content_get_stream (AtkStreamableContent* streamable, const gchar* mime_type);
// ::GIOChannel* atk_streamable_content_get_stream (::AtkStreamableContent* streamable, const char* mime_type);
GI_INLINE_DECL GLib::IOChannel get_stream (const std::string & mime_type) noexcept;

// const gchar* atk_streamable_content_get_uri (AtkStreamableContent* streamable, const gchar* mime_type);
// const char* atk_streamable_content_get_uri (::AtkStreamableContent* streamable, const char* mime_type);
GI_INLINE_DECL std::string get_uri (const std::string & mime_type) noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/streamablecontent_extra_def.hpp>)
#include <atk/streamablecontent_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/streamablecontent_extra.hpp>)
#include <atk/streamablecontent_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class StreamableContent : public GI_ATK_STREAMABLECONTENT_BASE
{ typedef GI_ATK_STREAMABLECONTENT_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkStreamableContent>
{ typedef Atk::StreamableContent type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class StreamableContentIfaceDef
{
typedef StreamableContentIfaceDef self;
public:
typedef Atk::StreamableContent instance_type;
typedef ::AtkStreamableContentIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// const gchar* StreamableContent::get_mime_type (AtkStreamableContent* streamable, gint i);
// const char* StreamableContent::get_mime_type (::AtkStreamableContent* streamable, gint i);
// SKIP; invalid callback return transfer none

// gint StreamableContent::get_n_mime_types (AtkStreamableContent* streamable);
// gint StreamableContent::get_n_mime_types (::AtkStreamableContent* streamable);
virtual gint get_n_mime_types_ () noexcept = 0;

// GIOChannel* StreamableContent::get_stream (AtkStreamableContent* streamable, const gchar* mime_type);
// ::GIOChannel* StreamableContent::get_stream (::AtkStreamableContent* streamable, const char* mime_type);
virtual GLib::IOChannel get_stream_ (const std::string & mime_type) noexcept = 0;

// const gchar* StreamableContent::get_uri (AtkStreamableContent* streamable, const gchar* mime_type);
// const char* StreamableContent::get_uri (::AtkStreamableContent* streamable, const char* mime_type);
// SKIP; invalid callback return transfer none


};

using StreamableContentImpl = detail::InterfaceImpl<StreamableContentIfaceDef>;

class StreamableContentIfaceClassImpl: public detail::InterfaceClassImpl<StreamableContentImpl>
{
typedef StreamableContentIfaceClassImpl self;
typedef detail::InterfaceClassImpl<StreamableContentImpl> super;

protected:
using super::super;

// const gchar* StreamableContent::get_mime_type (AtkStreamableContent* streamable, gint i);
// const char* StreamableContent::get_mime_type (::AtkStreamableContent* streamable, gint i);
// SKIP; invalid callback return transfer none

// gint StreamableContent::get_n_mime_types (AtkStreamableContent* streamable);
// gint StreamableContent::get_n_mime_types (::AtkStreamableContent* streamable);
GI_INLINE_DECL gint get_n_mime_types_ () noexcept override;

// GIOChannel* StreamableContent::get_stream (AtkStreamableContent* streamable, const gchar* mime_type);
// ::GIOChannel* StreamableContent::get_stream (::AtkStreamableContent* streamable, const char* mime_type);
GI_INLINE_DECL GLib::IOChannel get_stream_ (const std::string & mime_type) noexcept override;

// const gchar* StreamableContent::get_uri (AtkStreamableContent* streamable, const gchar* mime_type);
// const char* StreamableContent::get_uri (::AtkStreamableContent* streamable, const char* mime_type);
// SKIP; invalid callback return transfer none


};

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
