// AUTO-GENERATED

#ifndef _GI_GST_TOC_HPP_
#define _GI_GST_TOC_HPP_


namespace gi {

namespace repository {

namespace Gst {

class TagList;
class TocEntry;

class Toc;

namespace base {


#define GI_GST_TOC_BASE base::TocBase
class TocBase : public gi::detail::GBoxedWrapper<TocBase, ::GstToc>
{
typedef gi::detail::GBoxedWrapper<TocBase, ::GstToc> super_type;
public:

TocBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_toc_get_type(); } 

// GstToc* gst_toc_new (GstTocScope scope);
// ::GstToc* gst_toc_new (::GstTocScope scope);
static GI_INLINE_DECL Gst::Toc new_ (Gst::TocScope scope) noexcept;

// void gst_toc_append_entry (GstToc* toc, GstTocEntry* entry);
// void gst_toc_append_entry (::GstToc* toc, ::GstTocEntry* entry);
GI_INLINE_DECL void append_entry (Gst::TocEntry entry) noexcept;

// void gst_toc_dump (GstToc* toc);
// void gst_toc_dump (::GstToc* toc);
GI_INLINE_DECL void dump () noexcept;

// GstTocEntry* gst_toc_find_entry (const GstToc* toc, const gchar* uid);
// ::GstTocEntry* gst_toc_find_entry (const ::GstToc* toc, const char* uid);
GI_INLINE_DECL Gst::TocEntry find_entry (const std::string & uid) const noexcept;

// GList* gst_toc_get_entries (const GstToc* toc);
// ::GList* gst_toc_get_entries (const ::GstToc* toc);
GI_INLINE_DECL std::vector<Gst::TocEntry> get_entries () const noexcept;

// GstTocScope gst_toc_get_scope (const GstToc* toc);
// ::GstTocScope gst_toc_get_scope (const ::GstToc* toc);
GI_INLINE_DECL Gst::TocScope get_scope () const noexcept;

// GstTagList* gst_toc_get_tags (const GstToc* toc);
// ::GstTagList* gst_toc_get_tags (const ::GstToc* toc);
GI_INLINE_DECL Gst::TagList get_tags () const noexcept;

// void gst_toc_merge_tags (GstToc* toc, GstTagList* tags, GstTagMergeMode mode);
// void gst_toc_merge_tags (::GstToc* toc, ::GstTagList* tags, ::GstTagMergeMode mode);
GI_INLINE_DECL void merge_tags (Gst::TagList tags, Gst::TagMergeMode mode) noexcept;
GI_INLINE_DECL void merge_tags (Gst::TagMergeMode mode) noexcept;

// void gst_toc_set_tags (GstToc* toc, GstTagList* tags);
// void gst_toc_set_tags (::GstToc* toc, ::GstTagList* tags);
GI_INLINE_DECL void set_tags (Gst::TagList tags) noexcept;
GI_INLINE_DECL void set_tags () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/toc_extra_def.hpp>)
#include <gst/toc_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/toc_extra.hpp>)
#include <gst/toc_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Toc : public GI_GST_TOC_BASE
{ typedef GI_GST_TOC_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstToc>
{ typedef Gst::Toc type; }; 

} // namespace repository

} // namespace gi

#endif
