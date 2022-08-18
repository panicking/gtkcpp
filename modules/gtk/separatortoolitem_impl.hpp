// AUTO-GENERATED

#ifndef _GI_GTK_SEPARATORTOOLITEM_IMPL_HPP_
#define _GI_GTK_SEPARATORTOOLITEM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkToolItem* gtk_separator_tool_item_new ();
// ::GtkSeparatorToolItem* gtk_separator_tool_item_new ();
Gtk::SeparatorToolItem base::SeparatorToolItemBase::new_ () noexcept
{
  typedef ::GtkSeparatorToolItem* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_separator_tool_item_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_separator_tool_item_get_draw (GtkSeparatorToolItem* item);
// gboolean gtk_separator_tool_item_get_draw (::GtkSeparatorToolItem* item);
bool base::SeparatorToolItemBase::get_draw () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSeparatorToolItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_separator_tool_item_get_draw;
  auto _temp_ret = call_wrap_v ((::GtkSeparatorToolItem*) (gobj_()));
  return _temp_ret;
}

// void gtk_separator_tool_item_set_draw (GtkSeparatorToolItem* item, gboolean draw);
// void gtk_separator_tool_item_set_draw (::GtkSeparatorToolItem* item, gboolean draw);
void base::SeparatorToolItemBase::set_draw (gboolean draw) noexcept
{
  typedef void (*call_wrap_t) (::GtkSeparatorToolItem* item, gboolean draw);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_separator_tool_item_set_draw;
  auto draw_to_c = draw;
  call_wrap_v ((::GtkSeparatorToolItem*) (gobj_()), (gboolean) (draw_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/separatortoolitem_extra_def_impl.hpp>)
#include <gtk/separatortoolitem_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/separatortoolitem_extra_impl.hpp>)
#include <gtk/separatortoolitem_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SeparatorToolItemClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkSeparatorToolItemClass *methods = (::GtkSeparatorToolItemClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
