// AUTO-GENERATED

#ifndef _GI_GST_TOCENTRY_HPP_
#define _GI_GST_TOCENTRY_HPP_


namespace gi {

namespace repository {

namespace Gst {

class TagList;
class Toc;

class TocEntry;

namespace base {


#define GI_GST_TOCENTRY_BASE base::TocEntryBase
class TocEntryBase : public gi::detail::GBoxedWrapper<TocEntryBase, ::GstTocEntry>
{
typedef gi::detail::GBoxedWrapper<TocEntryBase, ::GstTocEntry> super_type;
public:

TocEntryBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_toc_entry_get_type(); } 

// GstTocEntry* gst_toc_entry_new (GstTocEntryType type, const gchar* uid);
// ::GstTocEntry* gst_toc_entry_new (::GstTocEntryType type, const char* uid);
static GI_INLINE_DECL Gst::TocEntry new_ (Gst::TocEntryType type, const std::string & uid) noexcept;

// void gst_toc_entry_append_sub_entry (GstTocEntry* entry, GstTocEntry* subentry);
// void gst_toc_entry_append_sub_entry (::GstTocEntry* entry, ::GstTocEntry* subentry);
GI_INLINE_DECL void append_sub_entry (Gst::TocEntry subentry) noexcept;

// GstTocEntryType gst_toc_entry_get_entry_type (const GstTocEntry* entry);
// ::GstTocEntryType gst_toc_entry_get_entry_type (const ::GstTocEntry* entry);
GI_INLINE_DECL Gst::TocEntryType get_entry_type () const noexcept;

// gboolean gst_toc_entry_get_loop (const GstTocEntry* entry, GstTocLoopType* loop_type, gint* repeat_count);
// gboolean gst_toc_entry_get_loop (const ::GstTocEntry* entry, ::GstTocLoopType* loop_type, gint* repeat_count);
GI_INLINE_DECL bool get_loop (Gst::TocLoopType * loop_type = nullptr, gint * repeat_count = nullptr) const noexcept;
GI_INLINE_DECL std::tuple<bool, Gst::TocLoopType, gint> get_loop () const noexcept;

// GstTocEntry* gst_toc_entry_get_parent (GstTocEntry* entry);
// ::GstTocEntry* gst_toc_entry_get_parent (::GstTocEntry* entry);
GI_INLINE_DECL Gst::TocEntry get_parent () noexcept;

// gboolean gst_toc_entry_get_start_stop_times (const GstTocEntry* entry, gint64* start, gint64* stop);
// gboolean gst_toc_entry_get_start_stop_times (const ::GstTocEntry* entry, gint64* start, gint64* stop);
GI_INLINE_DECL bool get_start_stop_times (gint64 * start = nullptr, gint64 * stop = nullptr) const noexcept;
GI_INLINE_DECL std::tuple<bool, gint64, gint64> get_start_stop_times () const noexcept;

// GList* gst_toc_entry_get_sub_entries (const GstTocEntry* entry);
// ::GList* gst_toc_entry_get_sub_entries (const ::GstTocEntry* entry);
GI_INLINE_DECL std::vector<Gst::TocEntry> get_sub_entries () const noexcept;

// GstTagList* gst_toc_entry_get_tags (const GstTocEntry* entry);
// ::GstTagList* gst_toc_entry_get_tags (const ::GstTocEntry* entry);
GI_INLINE_DECL Gst::TagList get_tags () const noexcept;

// GstToc* gst_toc_entry_get_toc (GstTocEntry* entry);
// ::GstToc* gst_toc_entry_get_toc (::GstTocEntry* entry);
GI_INLINE_DECL Gst::Toc get_toc () noexcept;

// const gchar* gst_toc_entry_get_uid (const GstTocEntry* entry);
// const char* gst_toc_entry_get_uid (const ::GstTocEntry* entry);
GI_INLINE_DECL std::string get_uid () const noexcept;

// gboolean gst_toc_entry_is_alternative (const GstTocEntry* entry);
// gboolean gst_toc_entry_is_alternative (const ::GstTocEntry* entry);
GI_INLINE_DECL bool is_alternative () const noexcept;

// gboolean gst_toc_entry_is_sequence (const GstTocEntry* entry);
// gboolean gst_toc_entry_is_sequence (const ::GstTocEntry* entry);
GI_INLINE_DECL bool is_sequence () const noexcept;

// void gst_toc_entry_merge_tags (GstTocEntry* entry, GstTagList* tags, GstTagMergeMode mode);
// void gst_toc_entry_merge_tags (::GstTocEntry* entry, ::GstTagList* tags, ::GstTagMergeMode mode);
GI_INLINE_DECL void merge_tags (Gst::TagList tags, Gst::TagMergeMode mode) noexcept;
GI_INLINE_DECL void merge_tags (Gst::TagMergeMode mode) noexcept;

// void gst_toc_entry_set_loop (GstTocEntry* entry, GstTocLoopType loop_type, gint repeat_count);
// void gst_toc_entry_set_loop (::GstTocEntry* entry, ::GstTocLoopType loop_type, gint repeat_count);
GI_INLINE_DECL void set_loop (Gst::TocLoopType loop_type, gint repeat_count) noexcept;

// void gst_toc_entry_set_start_stop_times (GstTocEntry* entry, gint64 start, gint64 stop);
// void gst_toc_entry_set_start_stop_times (::GstTocEntry* entry, gint64 start, gint64 stop);
GI_INLINE_DECL void set_start_stop_times (gint64 start, gint64 stop) noexcept;

// void gst_toc_entry_set_tags (GstTocEntry* entry, GstTagList* tags);
// void gst_toc_entry_set_tags (::GstTocEntry* entry, ::GstTagList* tags);
GI_INLINE_DECL void set_tags (Gst::TagList tags) noexcept;
GI_INLINE_DECL void set_tags () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/tocentry_extra_def.hpp>)
#include <gst/tocentry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/tocentry_extra.hpp>)
#include <gst/tocentry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class TocEntry : public GI_GST_TOCENTRY_BASE
{ typedef GI_GST_TOCENTRY_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstTocEntry>
{ typedef Gst::TocEntry type; }; 

} // namespace repository

} // namespace gi

#endif
