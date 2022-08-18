// AUTO-GENERATED

#ifndef _GI_GST_TOC_IMPL_HPP_
#define _GI_GST_TOC_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstToc* gst_toc_new (GstTocScope scope);
// ::GstToc* gst_toc_new (::GstTocScope scope);
Gst::Toc base::TocBase::new_ (Gst::TocScope scope) noexcept
{
  typedef ::GstToc* (*call_wrap_t) (::GstTocScope scope);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_new;
  auto scope_to_c = gi::unwrap (scope);
  auto _temp_ret = call_wrap_v ((::GstTocScope) (scope_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_toc_append_entry (GstToc* toc, GstTocEntry* entry);
// void gst_toc_append_entry (::GstToc* toc, ::GstTocEntry* entry);
void base::TocBase::append_entry (Gst::TocEntry entry) noexcept
{
  typedef void (*call_wrap_t) (::GstToc* toc, ::GstTocEntry* entry);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_append_entry;
  auto entry_to_c = gi::unwrap (entry, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GstToc*) (gobj_()), (::GstTocEntry*) (entry_to_c));
}

// void gst_toc_dump (GstToc* toc);
// void gst_toc_dump (::GstToc* toc);
void base::TocBase::dump () noexcept
{
  typedef void (*call_wrap_t) (::GstToc* toc);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_dump;
  call_wrap_v ((::GstToc*) (gobj_()));
}

// GstTocEntry* gst_toc_find_entry (const GstToc* toc, const gchar* uid);
// ::GstTocEntry* gst_toc_find_entry (const ::GstToc* toc, const char* uid);
Gst::TocEntry base::TocBase::find_entry (const std::string & uid) const noexcept
{
  typedef ::GstTocEntry* (*call_wrap_t) (const ::GstToc* toc, const char* uid);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_find_entry;
  auto uid_to_c = gi::unwrap (uid, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstToc*) (gobj_()), (const char*) (uid_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* gst_toc_get_entries (const GstToc* toc);
// ::GList* gst_toc_get_entries (const ::GstToc* toc);
std::vector<Gst::TocEntry> base::TocBase::get_entries () const noexcept
{
  typedef ::GList* (*call_wrap_t) (const ::GstToc* toc);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_get_entries;
  auto _temp_ret = call_wrap_v ((const ::GstToc*) (gobj_()));
  return gi::detail::wrap_list<Gst::TocEntry> (_temp_ret, gi::transfer_none);
}

// GstTocScope gst_toc_get_scope (const GstToc* toc);
// ::GstTocScope gst_toc_get_scope (const ::GstToc* toc);
Gst::TocScope base::TocBase::get_scope () const noexcept
{
  typedef ::GstTocScope (*call_wrap_t) (const ::GstToc* toc);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_get_scope;
  auto _temp_ret = call_wrap_v ((const ::GstToc*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GstTagList* gst_toc_get_tags (const GstToc* toc);
// ::GstTagList* gst_toc_get_tags (const ::GstToc* toc);
Gst::TagList base::TocBase::get_tags () const noexcept
{
  typedef ::GstTagList* (*call_wrap_t) (const ::GstToc* toc);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_get_tags;
  auto _temp_ret = call_wrap_v ((const ::GstToc*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gst_toc_merge_tags (GstToc* toc, GstTagList* tags, GstTagMergeMode mode);
// void gst_toc_merge_tags (::GstToc* toc, ::GstTagList* tags, ::GstTagMergeMode mode);
void base::TocBase::merge_tags (Gst::TagList tags, Gst::TagMergeMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GstToc* toc, ::GstTagList* tags, ::GstTagMergeMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_merge_tags;
  auto mode_to_c = gi::unwrap (mode);
  auto tags_to_c = gi::unwrap (tags, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstToc*) (gobj_()), (::GstTagList*) (tags_to_c), (::GstTagMergeMode) (mode_to_c));
}
void base::TocBase::merge_tags (Gst::TagMergeMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GstToc* toc, ::GstTagList* tags, ::GstTagMergeMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_merge_tags;
  auto mode_to_c = gi::unwrap (mode);
  auto tags_to_c = nullptr;
  call_wrap_v ((::GstToc*) (gobj_()), (::GstTagList*) (tags_to_c), (::GstTagMergeMode) (mode_to_c));
}

// void gst_toc_set_tags (GstToc* toc, GstTagList* tags);
// void gst_toc_set_tags (::GstToc* toc, ::GstTagList* tags);
void base::TocBase::set_tags (Gst::TagList tags) noexcept
{
  typedef void (*call_wrap_t) (::GstToc* toc, ::GstTagList* tags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_set_tags;
  auto tags_to_c = gi::unwrap (tags, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GstToc*) (gobj_()), (::GstTagList*) (tags_to_c));
}
void base::TocBase::set_tags () noexcept
{
  typedef void (*call_wrap_t) (::GstToc* toc, ::GstTagList* tags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_toc_set_tags;
  auto tags_to_c = nullptr;
  call_wrap_v ((::GstToc*) (gobj_()), (::GstTagList*) (tags_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/toc_extra_def_impl.hpp>)
#include <gst/toc_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/toc_extra_impl.hpp>)
#include <gst/toc_extra_impl.hpp>
#endif
#endif

#endif
