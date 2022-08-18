// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRLIST_IMPL_HPP_
#define _GI_PANGO_ATTRLIST_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// PangoAttrList* pango_attr_list_new ();
// ::PangoAttrList* pango_attr_list_new ();
Pango::AttrList base::AttrListBase::new_ () noexcept
{
  typedef ::PangoAttrList* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_list_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void pango_attr_list_change (PangoAttrList* list, PangoAttribute* attr);
// void pango_attr_list_change (::PangoAttrList* list, ::PangoAttribute* attr);
void base::AttrListBase::change (Pango::Attribute attr) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrList* list, ::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_list_change;
  auto attr_to_c = gi::unwrap (attr, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::PangoAttrList*) (gobj_()), (::PangoAttribute*) (attr_to_c));
}

// PangoAttrList* pango_attr_list_copy (PangoAttrList* list);
// ::PangoAttrList* pango_attr_list_copy (::PangoAttrList* list);
Pango::AttrList base::AttrListBase::copy () noexcept
{
  typedef ::PangoAttrList* (*call_wrap_t) (::PangoAttrList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_list_copy;
  auto _temp_ret = call_wrap_v ((::PangoAttrList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean pango_attr_list_equal (PangoAttrList* list, PangoAttrList* other_list);
// gboolean pango_attr_list_equal (::PangoAttrList* list, ::PangoAttrList* other_list);
bool base::AttrListBase::equal (Pango::AttrList other_list) noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoAttrList* list, ::PangoAttrList* other_list);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_list_equal;
  auto other_list_to_c = gi::unwrap (other_list, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoAttrList*) (gobj_()), (::PangoAttrList*) (other_list_to_c));
  return _temp_ret;
}

// PangoAttrList* pango_attr_list_filter (PangoAttrList* list, PangoAttrFilterFunc func, gpointer data);
// ::PangoAttrList* pango_attr_list_filter (::PangoAttrList* list, Pango::AttrFilterFunc::cfunction_type func, void* data);
Pango::AttrList base::AttrListBase::filter (Pango::AttrFilterFunc func) noexcept
{
  typedef ::PangoAttrList* (*call_wrap_t) (::PangoAttrList* list, Pango::AttrFilterFunc::cfunction_type func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_list_filter;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  auto _temp_ret = call_wrap_v ((::PangoAttrList*) (gobj_()), (Pango::AttrFilterFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSList* pango_attr_list_get_attributes (PangoAttrList* list);
// ::GSList* pango_attr_list_get_attributes (::PangoAttrList* list);
std::vector<Pango::Attribute> base::AttrListBase::get_attributes () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::PangoAttrList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_list_get_attributes;
  auto _temp_ret = call_wrap_v ((::PangoAttrList*) (gobj_()));
  return gi::detail::wrap_list<Pango::Attribute> (_temp_ret, gi::transfer_full);
}

// PangoAttrIterator* pango_attr_list_get_iterator (PangoAttrList* list);
// ::PangoAttrIterator* pango_attr_list_get_iterator (::PangoAttrList* list);
Pango::AttrIterator base::AttrListBase::get_iterator () noexcept
{
  typedef ::PangoAttrIterator* (*call_wrap_t) (::PangoAttrList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_list_get_iterator;
  auto _temp_ret = call_wrap_v ((::PangoAttrList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void pango_attr_list_insert (PangoAttrList* list, PangoAttribute* attr);
// void pango_attr_list_insert (::PangoAttrList* list, ::PangoAttribute* attr);
void base::AttrListBase::insert (Pango::Attribute attr) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrList* list, ::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_list_insert;
  auto attr_to_c = gi::unwrap (attr, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::PangoAttrList*) (gobj_()), (::PangoAttribute*) (attr_to_c));
}

// void pango_attr_list_insert_before (PangoAttrList* list, PangoAttribute* attr);
// void pango_attr_list_insert_before (::PangoAttrList* list, ::PangoAttribute* attr);
void base::AttrListBase::insert_before (Pango::Attribute attr) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrList* list, ::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_list_insert_before;
  auto attr_to_c = gi::unwrap (attr, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::PangoAttrList*) (gobj_()), (::PangoAttribute*) (attr_to_c));
}

// PangoAttrList* pango_attr_list_ref (PangoAttrList* list);
// ::PangoAttrList* pango_attr_list_ref (::PangoAttrList* list);
// IGNORE; marked ignore

// void pango_attr_list_splice (PangoAttrList* list, PangoAttrList* other, int pos, int len);
// void pango_attr_list_splice (::PangoAttrList* list, ::PangoAttrList* other, gint pos, gint len);
void base::AttrListBase::splice (Pango::AttrList other, gint pos, gint len) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrList* list, ::PangoAttrList* other, gint pos, gint len);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_list_splice;
  auto len_to_c = len;
  auto pos_to_c = pos;
  auto other_to_c = gi::unwrap (other, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoAttrList*) (gobj_()), (::PangoAttrList*) (other_to_c), (gint) (pos_to_c), (gint) (len_to_c));
}

// char* pango_attr_list_to_string (PangoAttrList* list);
// char* pango_attr_list_to_string (::PangoAttrList* list);
std::string base::AttrListBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::PangoAttrList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_list_to_string;
  auto _temp_ret = call_wrap_v ((::PangoAttrList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void pango_attr_list_unref (PangoAttrList* list);
// void pango_attr_list_unref (::PangoAttrList* list);
// IGNORE; marked ignore

// void pango_attr_list_update (PangoAttrList* list, int pos, int remove, int add);
// void pango_attr_list_update (::PangoAttrList* list, gint pos, gint remove, gint add);
void base::AttrListBase::update (gint pos, gint remove, gint add) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrList* list, gint pos, gint remove, gint add);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_list_update;
  auto add_to_c = add;
  auto remove_to_c = remove;
  auto pos_to_c = pos;
  call_wrap_v ((::PangoAttrList*) (gobj_()), (gint) (pos_to_c), (gint) (remove_to_c), (gint) (add_to_c));
}

// PangoAttrList* pango_attr_list_from_string (const char* text);
// ::PangoAttrList* pango_attr_list_from_string (const char* text);
Pango::AttrList base::AttrListBase::from_string (const std::string & text) noexcept
{
  typedef ::PangoAttrList* (*call_wrap_t) (const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_list_from_string;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (text_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrlist_extra_def_impl.hpp>)
#include <pango/attrlist_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrlist_extra_impl.hpp>)
#include <pango/attrlist_extra_impl.hpp>
#endif
#endif

#endif
