// AUTO-GENERATED

#ifndef _GI_GST_TYPEFIND_HPP_
#define _GI_GST_TYPEFIND_HPP_


namespace gi {

namespace repository {

namespace Gst {

class Caps;
class Plugin;

class TypeFind;

namespace base {


#define GI_GST_TYPEFIND_BASE base::TypeFindBase
class TypeFindBase : public gi::detail::CBoxedWrapper<TypeFindBase, ::GstTypeFind>
{
typedef gi::detail::CBoxedWrapper<TypeFindBase, ::GstTypeFind> super_type;
public:

TypeFindBase (std::nullptr_t = nullptr) : super_type() {}

// guint64 gst_type_find_get_length (GstTypeFind* find);
// guint64 gst_type_find_get_length (::GstTypeFind* find);
GI_INLINE_DECL guint64 get_length () noexcept;

// const guint8* gst_type_find_peek (GstTypeFind* find, gint64 offset, guint size);
// const guint8* gst_type_find_peek (::GstTypeFind* find, gint64 offset, guint size);
GI_INLINE_DECL std::vector<guint8> peek (gint64 offset, guint size) noexcept;

// void gst_type_find_suggest (GstTypeFind* find, guint probability, GstCaps* caps);
// void gst_type_find_suggest (::GstTypeFind* find, guint probability, ::GstCaps* caps);
GI_INLINE_DECL void suggest (guint probability, Gst::Caps caps) noexcept;

// void gst_type_find_suggest_empty_simple (GstTypeFind* find, guint probability, const char* media_type);
// void gst_type_find_suggest_empty_simple (::GstTypeFind* find, guint probability, const char* media_type);
GI_INLINE_DECL void suggest_empty_simple (guint probability, const std::string & media_type) noexcept;

// void gst_type_find_suggest_simple (GstTypeFind* find, guint probability, const char* media_type, const char* fieldname);
// void gst_type_find_suggest_simple (::GstTypeFind* find, guint probability, const char* media_type, const char* fieldname);
// IGNORE; not introspectable, varargs not supported

// gboolean gst_type_find_register (GstPlugin* plugin, const gchar* name, guint rank, GstTypeFindFunction func, const gchar* extensions, GstCaps* possible_caps, gpointer data, GDestroyNotify data_notify);
// gboolean gst_type_find_register (::GstPlugin* plugin, const char* name, guint rank, Gst::TypeFindFunction::cfunction_type func, const char* extensions, ::GstCaps* possible_caps, void* data, GLib::DestroyNotify::cfunction_type data_notify);
static GI_INLINE_DECL bool register_ (Gst::Plugin plugin, const std::string & name, guint rank, Gst::TypeFindFunction func, const std::string & extensions, Gst::Caps possible_caps) noexcept;
static GI_INLINE_DECL bool register_ (const std::string & name, guint rank, Gst::TypeFindFunction func) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/typefind_extra_def.hpp>)
#include <gst/typefind_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/typefind_extra.hpp>)
#include <gst/typefind_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class TypeFind : public GI_GST_TYPEFIND_BASE
{ typedef GI_GST_TYPEFIND_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstTypeFind>
{ typedef Gst::TypeFind type; }; 

} // namespace repository

} // namespace gi

#endif
