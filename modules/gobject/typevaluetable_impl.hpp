// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEVALUETABLE_IMPL_HPP_
#define _GI_GOBJECT_TYPEVALUETABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

static const char* _field_collect_format_get (const ::GTypeValueTable* obj) { return (const char*) obj->collect_format; }
// const char* TypeValueTable::collect_format (const ::GTypeValueTable* obj);
// const char* TypeValueTable::collect_format (const ::GTypeValueTable* obj);
std::string base::TypeValueTableBase::collect_format_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GTypeValueTable* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_collect_format_get;
  auto _temp_ret = call_wrap_v ((const ::GTypeValueTable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_lcopy_format_get (const ::GTypeValueTable* obj) { return (const char*) obj->lcopy_format; }
// const char* TypeValueTable::lcopy_format (const ::GTypeValueTable* obj);
// const char* TypeValueTable::lcopy_format (const ::GTypeValueTable* obj);
std::string base::TypeValueTableBase::lcopy_format_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GTypeValueTable* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_lcopy_format_get;
  auto _temp_ret = call_wrap_v ((const ::GTypeValueTable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// FAILURE on g_type_value_table_peek; No such node (<xmlattr>.transfer-ownership)

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typevaluetable_extra_def_impl.hpp>)
#include <gobject/typevaluetable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typevaluetable_extra_impl.hpp>)
#include <gobject/typevaluetable_extra_impl.hpp>
#endif
#endif

#endif
