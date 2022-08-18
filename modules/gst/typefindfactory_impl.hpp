// AUTO-GENERATED

#ifndef _GI_GST_TYPEFINDFACTORY_IMPL_HPP_
#define _GI_GST_TYPEFINDFACTORY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GList* gst_type_find_factory_get_list ();
// ::GList* gst_type_find_factory_get_list ();
std::vector<Gst::TypeFindFactory> base::TypeFindFactoryBase::get_list () noexcept
{
  typedef ::GList* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_type_find_factory_get_list;
  auto _temp_ret = call_wrap_v ();
  return gi::detail::wrap_list<Gst::TypeFindFactory> (_temp_ret, gi::transfer_full);
}

// void gst_type_find_factory_call_function (GstTypeFindFactory* factory, GstTypeFind* find);
// void gst_type_find_factory_call_function (::GstTypeFindFactory* factory, ::GstTypeFind* find);
void base::TypeFindFactoryBase::call_function (Gst::TypeFind find) noexcept
{
  typedef void (*call_wrap_t) (::GstTypeFindFactory* factory, ::GstTypeFind* find);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_type_find_factory_call_function;
  auto find_to_c = gi::unwrap (find, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstTypeFindFactory*) (gobj_()), (::GstTypeFind*) (find_to_c));
}

// GstCaps* gst_type_find_factory_get_caps (GstTypeFindFactory* factory);
// ::GstCaps* gst_type_find_factory_get_caps (::GstTypeFindFactory* factory);
Gst::Caps base::TypeFindFactoryBase::get_caps () noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstTypeFindFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_type_find_factory_get_caps;
  auto _temp_ret = call_wrap_v ((::GstTypeFindFactory*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* const* gst_type_find_factory_get_extensions (GstTypeFindFactory* factory);
// const char** gst_type_find_factory_get_extensions (::GstTypeFindFactory* factory);
std::vector<std::string> base::TypeFindFactoryBase::get_extensions () noexcept
{
  typedef const char** (*call_wrap_t) (::GstTypeFindFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_type_find_factory_get_extensions;
  auto _temp_ret = call_wrap_v ((::GstTypeFindFactory*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// gboolean gst_type_find_factory_has_function (GstTypeFindFactory* factory);
// gboolean gst_type_find_factory_has_function (::GstTypeFindFactory* factory);
bool base::TypeFindFactoryBase::has_function () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstTypeFindFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_type_find_factory_has_function;
  auto _temp_ret = call_wrap_v ((::GstTypeFindFactory*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/typefindfactory_extra_def_impl.hpp>)
#include <gst/typefindfactory_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/typefindfactory_extra_impl.hpp>)
#include <gst/typefindfactory_extra_impl.hpp>
#endif
#endif

#endif
