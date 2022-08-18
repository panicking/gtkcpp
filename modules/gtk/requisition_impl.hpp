// AUTO-GENERATED

#ifndef _GI_GTK_REQUISITION_IMPL_HPP_
#define _GI_GTK_REQUISITION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static gint _field_width_get (const ::GtkRequisition* obj) { return (gint) obj->width; }
// gint Requisition::width (const ::GtkRequisition* obj);
// gint Requisition::width (const ::GtkRequisition* obj);
gint base::RequisitionBase::width_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkRequisition* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRequisition*) (gobj_()));
  return _temp_ret;
}

static void _field_width_set (::GtkRequisition* obj, gint _value) { obj->width = (decltype(obj->width)) _value; }
//  Requisition::width (::GtkRequisition* obj, gint _value);
// void Requisition::width (::GtkRequisition* obj, gint _value);
void base::RequisitionBase::width_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkRequisition* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkRequisition*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_height_get (const ::GtkRequisition* obj) { return (gint) obj->height; }
// gint Requisition::height (const ::GtkRequisition* obj);
// gint Requisition::height (const ::GtkRequisition* obj);
gint base::RequisitionBase::height_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkRequisition* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_height_get;
  auto _temp_ret = call_wrap_v ((const ::GtkRequisition*) (gobj_()));
  return _temp_ret;
}

static void _field_height_set (::GtkRequisition* obj, gint _value) { obj->height = (decltype(obj->height)) _value; }
//  Requisition::height (::GtkRequisition* obj, gint _value);
// void Requisition::height (::GtkRequisition* obj, gint _value);
void base::RequisitionBase::height_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkRequisition* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_height_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkRequisition*) (gobj_()), (gint) (_value_to_c));
}

// GtkRequisition* gtk_requisition_new ();
// ::GtkRequisition* gtk_requisition_new ();
Gtk::Requisition base::RequisitionBase::new_ () noexcept
{
  typedef ::GtkRequisition* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_requisition_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkRequisition* gtk_requisition_copy (const GtkRequisition* requisition);
// ::GtkRequisition* gtk_requisition_copy (const ::GtkRequisition* requisition);
Gtk::Requisition base::RequisitionBase::copy () const noexcept
{
  typedef ::GtkRequisition* (*call_wrap_t) (const ::GtkRequisition* requisition);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_requisition_copy;
  auto _temp_ret = call_wrap_v ((const ::GtkRequisition*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_requisition_free (GtkRequisition* requisition);
// void gtk_requisition_free (::GtkRequisition* requisition);
// IGNORE; marked ignore


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/requisition_extra_def_impl.hpp>)
#include <gtk/requisition_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/requisition_extra_impl.hpp>)
#include <gtk/requisition_extra_impl.hpp>
#endif
#endif

#endif
