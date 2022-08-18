// AUTO-GENERATED

#ifndef _GI_ATK_VALUE_IMPL_HPP_
#define _GI_ATK_VALUE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// void atk_value_get_current_value (AtkValue* obj, GValue* value);
// void atk_value_get_current_value (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated

// gdouble atk_value_get_increment (AtkValue* obj);
// gdouble atk_value_get_increment (::AtkValue* obj);
gdouble base::ValueBase::get_increment () noexcept
{
  typedef gdouble (*call_wrap_t) (::AtkValue* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_value_get_increment;
  auto _temp_ret = call_wrap_v ((::AtkValue*) (gobj_()));
  return _temp_ret;
}

// void atk_value_get_maximum_value (AtkValue* obj, GValue* value);
// void atk_value_get_maximum_value (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated

// void atk_value_get_minimum_increment (AtkValue* obj, GValue* value);
// void atk_value_get_minimum_increment (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated

// void atk_value_get_minimum_value (AtkValue* obj, GValue* value);
// void atk_value_get_minimum_value (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated

// AtkRange* atk_value_get_range (AtkValue* obj);
// ::AtkRange* atk_value_get_range (::AtkValue* obj);
Atk::Range base::ValueBase::get_range () noexcept
{
  typedef ::AtkRange* (*call_wrap_t) (::AtkValue* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_value_get_range;
  auto _temp_ret = call_wrap_v ((::AtkValue*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSList* atk_value_get_sub_ranges (AtkValue* obj);
// ::GSList* atk_value_get_sub_ranges (::AtkValue* obj);
std::vector<Atk::Range> base::ValueBase::get_sub_ranges () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::AtkValue* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_value_get_sub_ranges;
  auto _temp_ret = call_wrap_v ((::AtkValue*) (gobj_()));
  return gi::detail::wrap_list<Atk::Range> (_temp_ret, gi::transfer_full);
}

// void atk_value_get_value_and_text (AtkValue* obj, gdouble* value, gchar** text);
// void atk_value_get_value_and_text (::AtkValue* obj, gdouble* value, char** text);
void base::ValueBase::get_value_and_text (gdouble & value, std::string * text) noexcept
{
  typedef void (*call_wrap_t) (::AtkValue* obj, gdouble* value, char** text);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_value_get_value_and_text;
  char* text_o {};
  gdouble value_o {};
  call_wrap_v ((::AtkValue*) (gobj_()), (gdouble*) (&value_o), (char**) (text ? &text_o : nullptr));
  if (text) *text = gi::wrap (text_o, gi::transfer_full, gi::direction_out);
  value = value_o;
}
std::tuple<gdouble, std::string> base::ValueBase::get_value_and_text () noexcept
{
  typedef void (*call_wrap_t) (::AtkValue* obj, gdouble* value, char** text);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_value_get_value_and_text;
  char* text_o {};
  gdouble value_o {};
  call_wrap_v ((::AtkValue*) (gobj_()), (gdouble*) (&value_o), (char**) (&text_o));
  return std::make_tuple (value_o, gi::wrap (text_o, gi::transfer_full, gi::direction_out));
}

// gboolean atk_value_set_current_value (AtkValue* obj, const GValue* value);
// gboolean atk_value_set_current_value (::AtkValue* obj, const ::GValue* value);
// IGNORE; deprecated

// void atk_value_set_value (AtkValue* obj, const gdouble new_value);
// void atk_value_set_value (::AtkValue* obj, const gdouble new_value);
void base::ValueBase::set_value (const gdouble new_value) noexcept
{
  typedef void (*call_wrap_t) (::AtkValue* obj, const gdouble new_value);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_value_set_value;
  auto new_value_to_c = new_value;
  call_wrap_v ((::AtkValue*) (gobj_()), (const gdouble) (new_value_to_c));
}



} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/value_extra_def_impl.hpp>)
#include <atk/value_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/value_extra_impl.hpp>)
#include <atk/value_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void ValueIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::AtkValueIface *methods = (::AtkValueIface *) interface_struct;
  (void) methods;

  methods->get_increment = (decltype (methods->get_increment)) detail::method_wrapper<self, gdouble (*) (), gi::transfer_none_t>::wrapper<&self::get_increment_>;
  methods->get_range = (decltype (methods->get_range)) detail::method_wrapper<self, Atk::Range (*) (), gi::transfer_full_t>::wrapper<&self::get_range_>;
  methods->set_value = (decltype (methods->set_value)) detail::method_wrapper<self, void (*) (const gdouble new_value), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_value_>;
}

// void Value::get_current_value (AtkValue* obj, GValue* value);
// void Value::get_current_value (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated, virtual-method out parameter not supported

// gdouble Value::get_increment (AtkValue* obj);
// gdouble Value::get_increment (::AtkValue* obj);
gdouble ValueIfaceClassImpl::get_increment_ () noexcept
{
  if (!get_struct_()->get_increment) return gdouble{};
  typedef gdouble (*call_wrap_t) (::AtkValue* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_increment;
  auto _temp_ret = call_wrap_v ((::AtkValue*) (gobj_()));
  return _temp_ret;
}

// void Value::get_maximum_value (AtkValue* obj, GValue* value);
// void Value::get_maximum_value (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated, virtual-method out parameter not supported

// void Value::get_minimum_increment (AtkValue* obj, GValue* value);
// void Value::get_minimum_increment (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated, virtual-method out parameter not supported

// void Value::get_minimum_value (AtkValue* obj, GValue* value);
// void Value::get_minimum_value (::AtkValue* obj, ::GValue* value);
// IGNORE; deprecated, virtual-method out parameter not supported

// AtkRange* Value::get_range (AtkValue* obj);
// ::AtkRange* Value::get_range (::AtkValue* obj);
Atk::Range ValueIfaceClassImpl::get_range_ () noexcept
{
  if (!get_struct_()->get_range) return Atk::Range{};
  typedef ::AtkRange* (*call_wrap_t) (::AtkValue* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_range;
  auto _temp_ret = call_wrap_v ((::AtkValue*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSList* Value::get_sub_ranges (AtkValue* obj);
// ::GSList* Value::get_sub_ranges (::AtkValue* obj);
// SKIP; container return not supported

// void Value::get_value_and_text (AtkValue* obj, gdouble* value, gchar** text);
// void Value::get_value_and_text (::AtkValue* obj, gdouble* value, char** text);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean Value::set_current_value (AtkValue* obj, const GValue* value);
// gboolean Value::set_current_value (::AtkValue* obj, const ::GValue* value);
// IGNORE; deprecated

// void Value::set_value (AtkValue* obj, const gdouble new_value);
// void Value::set_value (::AtkValue* obj, const gdouble new_value);
void ValueIfaceClassImpl::set_value_ (const gdouble new_value) noexcept
{
  if (!get_struct_()->set_value) return ;
  typedef void (*call_wrap_t) (::AtkValue* obj, const gdouble new_value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_value;
  auto new_value_to_c = new_value;
  call_wrap_v ((::AtkValue*) (gobj_()), (const gdouble) (new_value_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
