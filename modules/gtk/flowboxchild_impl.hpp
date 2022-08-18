// AUTO-GENERATED

#ifndef _GI_GTK_FLOWBOXCHILD_IMPL_HPP_
#define _GI_GTK_FLOWBOXCHILD_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_flow_box_child_new ();
// ::GtkFlowBoxChild* gtk_flow_box_child_new ();
Gtk::FlowBoxChild base::FlowBoxChildBase::new_ () noexcept
{
  typedef ::GtkFlowBoxChild* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_child_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_flow_box_child_changed (GtkFlowBoxChild* child);
// void gtk_flow_box_child_changed (::GtkFlowBoxChild* child);
void base::FlowBoxChildBase::changed () noexcept
{
  typedef void (*call_wrap_t) (::GtkFlowBoxChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_child_changed;
  call_wrap_v ((::GtkFlowBoxChild*) (gobj_()));
}

// gint gtk_flow_box_child_get_index (GtkFlowBoxChild* child);
// gint gtk_flow_box_child_get_index (::GtkFlowBoxChild* child);
gint base::FlowBoxChildBase::get_index () noexcept
{
  typedef gint (*call_wrap_t) (::GtkFlowBoxChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_child_get_index;
  auto _temp_ret = call_wrap_v ((::GtkFlowBoxChild*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_flow_box_child_is_selected (GtkFlowBoxChild* child);
// gboolean gtk_flow_box_child_is_selected (::GtkFlowBoxChild* child);
bool base::FlowBoxChildBase::is_selected () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFlowBoxChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_flow_box_child_is_selected;
  auto _temp_ret = call_wrap_v ((::GtkFlowBoxChild*) (gobj_()));
  return _temp_ret;
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/flowboxchild_extra_def_impl.hpp>)
#include <gtk/flowboxchild_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/flowboxchild_extra_impl.hpp>)
#include <gtk/flowboxchild_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FlowBoxChildClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkFlowBoxChildClass *methods = (::GtkFlowBoxChildClass *) class_struct;
  (void) methods;

  methods->activate = (decltype (methods->activate)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::activate_>;
}

// void FlowBoxChild::activate (GtkFlowBoxChild* child);
// void FlowBoxChild::activate (::GtkFlowBoxChild* child);
void FlowBoxChildClass::activate_ () noexcept
{
  if (!get_struct_()->activate) return ;
  typedef void (*call_wrap_t) (::GtkFlowBoxChild* child);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  call_wrap_v ((::GtkFlowBoxChild*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
