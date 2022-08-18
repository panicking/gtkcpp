// AUTO-GENERATED

#ifndef _GI_GOBJECT_PARAMSPECTYPEINFO_IMPL_HPP_
#define _GI_GOBJECT_PARAMSPECTYPEINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

static guint16 _field_instance_size_get (const ::GParamSpecTypeInfo* obj) { return (guint16) obj->instance_size; }
// guint16 ParamSpecTypeInfo::instance_size (const ::GParamSpecTypeInfo* obj);
// guint16 ParamSpecTypeInfo::instance_size (const ::GParamSpecTypeInfo* obj);
guint16 base::ParamSpecTypeInfoBase::instance_size_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::GParamSpecTypeInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_instance_size_get;
  auto _temp_ret = call_wrap_v ((const ::GParamSpecTypeInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_instance_size_set (::GParamSpecTypeInfo* obj, guint16 _value) { obj->instance_size = (decltype(obj->instance_size)) _value; }
//  ParamSpecTypeInfo::instance_size (::GParamSpecTypeInfo* obj, guint16 _value);
// void ParamSpecTypeInfo::instance_size (::GParamSpecTypeInfo* obj, guint16 _value);
void base::ParamSpecTypeInfoBase::instance_size_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GParamSpecTypeInfo* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_instance_size_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GParamSpecTypeInfo*) (gobj_()), (guint16) (_value_to_c));
}

static guint16 _field_n_preallocs_get (const ::GParamSpecTypeInfo* obj) { return (guint16) obj->n_preallocs; }
// guint16 ParamSpecTypeInfo::n_preallocs (const ::GParamSpecTypeInfo* obj);
// guint16 ParamSpecTypeInfo::n_preallocs (const ::GParamSpecTypeInfo* obj);
guint16 base::ParamSpecTypeInfoBase::n_preallocs_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::GParamSpecTypeInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_preallocs_get;
  auto _temp_ret = call_wrap_v ((const ::GParamSpecTypeInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_n_preallocs_set (::GParamSpecTypeInfo* obj, guint16 _value) { obj->n_preallocs = (decltype(obj->n_preallocs)) _value; }
//  ParamSpecTypeInfo::n_preallocs (::GParamSpecTypeInfo* obj, guint16 _value);
// void ParamSpecTypeInfo::n_preallocs (::GParamSpecTypeInfo* obj, guint16 _value);
void base::ParamSpecTypeInfoBase::n_preallocs_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GParamSpecTypeInfo* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_preallocs_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GParamSpecTypeInfo*) (gobj_()), (guint16) (_value_to_c));
}

static GType _field_value_type_get (const ::GParamSpecTypeInfo* obj) { return (GType) obj->value_type; }
// GType ParamSpecTypeInfo::value_type (const ::GParamSpecTypeInfo* obj);
// GType ParamSpecTypeInfo::value_type (const ::GParamSpecTypeInfo* obj);
GType base::ParamSpecTypeInfoBase::value_type_ () const noexcept
{
  typedef GType (*call_wrap_t) (const ::GParamSpecTypeInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_type_get;
  auto _temp_ret = call_wrap_v ((const ::GParamSpecTypeInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_value_type_set (::GParamSpecTypeInfo* obj, GType _value) { obj->value_type = (decltype(obj->value_type)) _value; }
//  ParamSpecTypeInfo::value_type (::GParamSpecTypeInfo* obj, GType _value);
// void ParamSpecTypeInfo::value_type (::GParamSpecTypeInfo* obj, GType _value);
void base::ParamSpecTypeInfoBase::value_type_ (GType _value) noexcept
{
  typedef void (*call_wrap_t) (::GParamSpecTypeInfo* obj, GType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_type_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GParamSpecTypeInfo*) (gobj_()), (GType) (_value_to_c));
}


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/paramspectypeinfo_extra_def_impl.hpp>)
#include <gobject/paramspectypeinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/paramspectypeinfo_extra_impl.hpp>)
#include <gobject/paramspectypeinfo_extra_impl.hpp>
#endif
#endif

#endif
