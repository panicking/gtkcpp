// AUTO-GENERATED

#ifndef _GI_GST_TOCENTRY_IMPL_HPP_
#define _GI_GST_TOCENTRY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstTocEntry* gst_toc_entry_new (GstTocEntryType type, const gchar* uid);
// ::GstTocEntry* gst_toc_entry_new (::GstTocEntryType type, const char* uid);
Gst::TocEntry base::TocEntryBase::new_ (Gst::TocEntryType type, const std::string & uid) noexcept
{
  typedef ::GstTocEntry* (*call_wrap_t) (::GstTocEntryType type, const char* uid);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_new;
  auto uid_to_c = gi::unwrap (uid, gi::transfer_none, gi::direction_in);
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::GstTocEntryType) (type_to_c), (const char*) (uid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_toc_entry_append_sub_entry (GstTocEntry* entry, GstTocEntry* subentry);
// void gst_toc_entry_append_sub_entry (::GstTocEntry* entry, ::GstTocEntry* subentry);
void base::TocEntryBase::append_sub_entry (Gst::TocEntry subentry) noexcept
{
  typedef void (*call_wrap_t) (::GstTocEntry* entry, ::GstTocEntry* subentry);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_append_sub_entry;
  auto subentry_to_c = gi::unwrap (subentry, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GstTocEntry*) (gobj_()), (::GstTocEntry*) (subentry_to_c));
}

// GstTocEntryType gst_toc_entry_get_entry_type (const GstTocEntry* entry);
// ::GstTocEntryType gst_toc_entry_get_entry_type (const ::GstTocEntry* entry);
Gst::TocEntryType base::TocEntryBase::get_entry_type () const noexcept
{
  typedef ::GstTocEntryType (*call_wrap_t) (const ::GstTocEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_get_entry_type;
  auto _temp_ret = call_wrap_v ((const ::GstTocEntry*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gst_toc_entry_get_loop (const GstTocEntry* entry, GstTocLoopType* loop_type, gint* repeat_count);
// gboolean gst_toc_entry_get_loop (const ::GstTocEntry* entry, ::GstTocLoopType* loop_type, gint* repeat_count);
bool base::TocEntryBase::get_loop (Gst::TocLoopType * loop_type, gint * repeat_count) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTocEntry* entry, ::GstTocLoopType* loop_type, gint* repeat_count);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_get_loop;
  gint repeat_count_o {};
  ::GstTocLoopType loop_type_o {};
  auto _temp_ret = call_wrap_v ((const ::GstTocEntry*) (gobj_()), (::GstTocLoopType*) (loop_type ? &loop_type_o : nullptr), (gint*) (repeat_count ? &repeat_count_o : nullptr));
  if (repeat_count) *repeat_count = repeat_count_o;
  if (loop_type) *loop_type = gi::wrap (loop_type_o);
  return _temp_ret;
}
std::tuple<bool, Gst::TocLoopType, gint> base::TocEntryBase::get_loop () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTocEntry* entry, ::GstTocLoopType* loop_type, gint* repeat_count);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_get_loop;
  gint repeat_count_o {};
  ::GstTocLoopType loop_type_o {};
  auto _temp_ret = call_wrap_v ((const ::GstTocEntry*) (gobj_()), (::GstTocLoopType*) (&loop_type_o), (gint*) (&repeat_count_o));
  return std::make_tuple (_temp_ret, gi::wrap (loop_type_o), repeat_count_o);
}

// GstTocEntry* gst_toc_entry_get_parent (GstTocEntry* entry);
// ::GstTocEntry* gst_toc_entry_get_parent (::GstTocEntry* entry);
Gst::TocEntry base::TocEntryBase::get_parent () noexcept
{
  typedef ::GstTocEntry* (*call_wrap_t) (::GstTocEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_get_parent;
  auto _temp_ret = call_wrap_v ((::GstTocEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_toc_entry_get_start_stop_times (const GstTocEntry* entry, gint64* start, gint64* stop);
// gboolean gst_toc_entry_get_start_stop_times (const ::GstTocEntry* entry, gint64* start, gint64* stop);
bool base::TocEntryBase::get_start_stop_times (gint64 * start, gint64 * stop) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTocEntry* entry, gint64* start, gint64* stop);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_get_start_stop_times;
  gint64 stop_o {};
  gint64 start_o {};
  auto _temp_ret = call_wrap_v ((const ::GstTocEntry*) (gobj_()), (gint64*) (start ? &start_o : nullptr), (gint64*) (stop ? &stop_o : nullptr));
  if (stop) *stop = stop_o;
  if (start) *start = start_o;
  return _temp_ret;
}
std::tuple<bool, gint64, gint64> base::TocEntryBase::get_start_stop_times () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTocEntry* entry, gint64* start, gint64* stop);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_get_start_stop_times;
  gint64 stop_o {};
  gint64 start_o {};
  auto _temp_ret = call_wrap_v ((const ::GstTocEntry*) (gobj_()), (gint64*) (&start_o), (gint64*) (&stop_o));
  return std::make_tuple (_temp_ret, start_o, stop_o);
}

// GList* gst_toc_entry_get_sub_entries (const GstTocEntry* entry);
// ::GList* gst_toc_entry_get_sub_entries (const ::GstTocEntry* entry);
std::vector<Gst::TocEntry> base::TocEntryBase::get_sub_entries () const noexcept
{
  typedef ::GList* (*call_wrap_t) (const ::GstTocEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_get_sub_entries;
  auto _temp_ret = call_wrap_v ((const ::GstTocEntry*) (gobj_()));
  return gi::detail::wrap_list<Gst::TocEntry> (_temp_ret, gi::transfer_none);
}

// GstTagList* gst_toc_entry_get_tags (const GstTocEntry* entry);
// ::GstTagList* gst_toc_entry_get_tags (const ::GstTocEntry* entry);
Gst::TagList base::TocEntryBase::get_tags () const noexcept
{
  typedef ::GstTagList* (*call_wrap_t) (const ::GstTocEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_get_tags;
  auto _temp_ret = call_wrap_v ((const ::GstTocEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstToc* gst_toc_entry_get_toc (GstTocEntry* entry);
// ::GstToc* gst_toc_entry_get_toc (::GstTocEntry* entry);
Gst::Toc base::TocEntryBase::get_toc () noexcept
{
  typedef ::GstToc* (*call_wrap_t) (::GstTocEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_get_toc;
  auto _temp_ret = call_wrap_v ((::GstTocEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gst_toc_entry_get_uid (const GstTocEntry* entry);
// const char* gst_toc_entry_get_uid (const ::GstTocEntry* entry);
std::string base::TocEntryBase::get_uid () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstTocEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_get_uid;
  auto _temp_ret = call_wrap_v ((const ::GstTocEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_toc_entry_is_alternative (const GstTocEntry* entry);
// gboolean gst_toc_entry_is_alternative (const ::GstTocEntry* entry);
bool base::TocEntryBase::is_alternative () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTocEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_is_alternative;
  auto _temp_ret = call_wrap_v ((const ::GstTocEntry*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_toc_entry_is_sequence (const GstTocEntry* entry);
// gboolean gst_toc_entry_is_sequence (const ::GstTocEntry* entry);
bool base::TocEntryBase::is_sequence () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstTocEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_is_sequence;
  auto _temp_ret = call_wrap_v ((const ::GstTocEntry*) (gobj_()));
  return _temp_ret;
}

// void gst_toc_entry_merge_tags (GstTocEntry* entry, GstTagList* tags, GstTagMergeMode mode);
// void gst_toc_entry_merge_tags (::GstTocEntry* entry, ::GstTagList* tags, ::GstTagMergeMode mode);
void base::TocEntryBase::merge_tags (Gst::TagList tags, Gst::TagMergeMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GstTocEntry* entry, ::GstTagList* tags, ::GstTagMergeMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_merge_tags;
  auto mode_to_c = gi::unwrap (mode);
  auto tags_to_c = gi::unwrap (tags, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstTocEntry*) (gobj_()), (::GstTagList*) (tags_to_c), (::GstTagMergeMode) (mode_to_c));
}
void base::TocEntryBase::merge_tags (Gst::TagMergeMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GstTocEntry* entry, ::GstTagList* tags, ::GstTagMergeMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_merge_tags;
  auto mode_to_c = gi::unwrap (mode);
  auto tags_to_c = nullptr;
  call_wrap_v ((::GstTocEntry*) (gobj_()), (::GstTagList*) (tags_to_c), (::GstTagMergeMode) (mode_to_c));
}

// void gst_toc_entry_set_loop (GstTocEntry* entry, GstTocLoopType loop_type, gint repeat_count);
// void gst_toc_entry_set_loop (::GstTocEntry* entry, ::GstTocLoopType loop_type, gint repeat_count);
void base::TocEntryBase::set_loop (Gst::TocLoopType loop_type, gint repeat_count) noexcept
{
  typedef void (*call_wrap_t) (::GstTocEntry* entry, ::GstTocLoopType loop_type, gint repeat_count);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_set_loop;
  auto repeat_count_to_c = repeat_count;
  auto loop_type_to_c = gi::unwrap (loop_type);
  call_wrap_v ((::GstTocEntry*) (gobj_()), (::GstTocLoopType) (loop_type_to_c), (gint) (repeat_count_to_c));
}

// void gst_toc_entry_set_start_stop_times (GstTocEntry* entry, gint64 start, gint64 stop);
// void gst_toc_entry_set_start_stop_times (::GstTocEntry* entry, gint64 start, gint64 stop);
void base::TocEntryBase::set_start_stop_times (gint64 start, gint64 stop) noexcept
{
  typedef void (*call_wrap_t) (::GstTocEntry* entry, gint64 start, gint64 stop);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_set_start_stop_times;
  auto stop_to_c = stop;
  auto start_to_c = start;
  call_wrap_v ((::GstTocEntry*) (gobj_()), (gint64) (start_to_c), (gint64) (stop_to_c));
}

// void gst_toc_entry_set_tags (GstTocEntry* entry, GstTagList* tags);
// void gst_toc_entry_set_tags (::GstTocEntry* entry, ::GstTagList* tags);
void base::TocEntryBase::set_tags (Gst::TagList tags) noexcept
{
  typedef void (*call_wrap_t) (::GstTocEntry* entry, ::GstTagList* tags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_set_tags;
  auto tags_to_c = gi::unwrap (tags, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GstTocEntry*) (gobj_()), (::GstTagList*) (tags_to_c));
}
void base::TocEntryBase::set_tags () noexcept
{
  typedef void (*call_wrap_t) (::GstTocEntry* entry, ::GstTagList* tags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_entry_set_tags;
  auto tags_to_c = nullptr;
  call_wrap_v ((::GstTocEntry*) (gobj_()), (::GstTagList*) (tags_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/tocentry_extra_def_impl.hpp>)
#include <gst/tocentry_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/tocentry_extra_impl.hpp>)
#include <gst/tocentry_extra_impl.hpp>
#endif
#endif

#endif
