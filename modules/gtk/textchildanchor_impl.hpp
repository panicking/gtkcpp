// AUTO-GENERATED

#ifndef _GI_GTK_TEXTCHILDANCHOR_IMPL_HPP_
#define _GI_GTK_TEXTCHILDANCHOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkTextChildAnchor* gtk_text_child_anchor_new ();
// ::GtkTextChildAnchor* gtk_text_child_anchor_new ();
Gtk::TextChildAnchor base::TextChildAnchorBase::new_ () noexcept
{
  typedef ::GtkTextChildAnchor* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_child_anchor_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_text_child_anchor_get_deleted (GtkTextChildAnchor* anchor);
// gboolean gtk_text_child_anchor_get_deleted (::GtkTextChildAnchor* anchor);
bool base::TextChildAnchorBase::get_deleted () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTextChildAnchor* anchor);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_child_anchor_get_deleted;
  auto _temp_ret = call_wrap_v ((::GtkTextChildAnchor*) (gobj_()));
  return _temp_ret;
}

// GList* gtk_text_child_anchor_get_widgets (GtkTextChildAnchor* anchor);
// ::GList* gtk_text_child_anchor_get_widgets (::GtkTextChildAnchor* anchor);
std::vector<Gtk::Widget> base::TextChildAnchorBase::get_widgets () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkTextChildAnchor* anchor);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_text_child_anchor_get_widgets;
  auto _temp_ret = call_wrap_v ((::GtkTextChildAnchor*) (gobj_()));
  return gi::detail::wrap_list<Gtk::Widget> (_temp_ret, gi::transfer_container);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textchildanchor_extra_def_impl.hpp>)
#include <gtk/textchildanchor_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textchildanchor_extra_impl.hpp>)
#include <gtk/textchildanchor_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TextChildAnchorClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkTextChildAnchorClass *methods = (::GtkTextChildAnchorClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
