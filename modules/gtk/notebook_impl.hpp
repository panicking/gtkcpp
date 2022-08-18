// AUTO-GENERATED

#ifndef _GI_GTK_NOTEBOOK_IMPL_HPP_
#define _GI_GTK_NOTEBOOK_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_notebook_new ();
// ::GtkNotebook* gtk_notebook_new ();
Gtk::Notebook base::NotebookBase::new_ () noexcept
{
  typedef ::GtkNotebook* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gtk_notebook_append_page (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label);
// gint gtk_notebook_append_page (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label);
gint base::NotebookBase::append_page (Gtk::Widget child, Gtk::Widget tab_label) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_append_page;
  auto tab_label_to_c = gi::unwrap (tab_label, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c));
  return _temp_ret;
}
gint base::NotebookBase::append_page (Gtk::Widget child) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_append_page;
  auto tab_label_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c));
  return _temp_ret;
}

// gint gtk_notebook_append_page_menu (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label, GtkWidget* menu_label);
// gint gtk_notebook_append_page_menu (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label);
gint base::NotebookBase::append_page_menu (Gtk::Widget child, Gtk::Widget tab_label, Gtk::Widget menu_label) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_append_page_menu;
  auto menu_label_to_c = gi::unwrap (menu_label, gi::transfer_none, gi::direction_in);
  auto tab_label_to_c = gi::unwrap (tab_label, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c), (::GtkWidget*) (menu_label_to_c));
  return _temp_ret;
}
gint base::NotebookBase::append_page_menu (Gtk::Widget child) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_append_page_menu;
  auto menu_label_to_c = nullptr;
  auto tab_label_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c), (::GtkWidget*) (menu_label_to_c));
  return _temp_ret;
}

// void gtk_notebook_detach_tab (GtkNotebook* notebook, GtkWidget* child);
// void gtk_notebook_detach_tab (::GtkNotebook* notebook, ::GtkWidget* child);
void base::NotebookBase::detach_tab (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_detach_tab;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// GtkWidget* gtk_notebook_get_action_widget (GtkNotebook* notebook, GtkPackType pack_type);
// ::GtkWidget* gtk_notebook_get_action_widget (::GtkNotebook* notebook, ::GtkPackType pack_type);
Gtk::Widget base::NotebookBase::get_action_widget (Gtk::PackType pack_type) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkNotebook* notebook, ::GtkPackType pack_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_get_action_widget;
  auto pack_type_to_c = gi::unwrap (pack_type);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkPackType) (pack_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gtk_notebook_get_current_page (GtkNotebook* notebook);
// gint gtk_notebook_get_current_page (::GtkNotebook* notebook);
gint base::NotebookBase::get_current_page () noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_get_current_page;
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()));
  return _temp_ret;
}

// const gchar* gtk_notebook_get_group_name (GtkNotebook* notebook);
// const char* gtk_notebook_get_group_name (::GtkNotebook* notebook);
std::string base::NotebookBase::get_group_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_get_group_name;
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_notebook_get_menu_label (GtkNotebook* notebook, GtkWidget* child);
// ::GtkWidget* gtk_notebook_get_menu_label (::GtkNotebook* notebook, ::GtkWidget* child);
Gtk::Widget base::NotebookBase::get_menu_label (Gtk::Widget child) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_get_menu_label;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_notebook_get_menu_label_text (GtkNotebook* notebook, GtkWidget* child);
// const char* gtk_notebook_get_menu_label_text (::GtkNotebook* notebook, ::GtkWidget* child);
std::string base::NotebookBase::get_menu_label_text (Gtk::Widget child) noexcept
{
  typedef const char* (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_get_menu_label_text;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gtk_notebook_get_n_pages (GtkNotebook* notebook);
// gint gtk_notebook_get_n_pages (::GtkNotebook* notebook);
gint base::NotebookBase::get_n_pages () noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_get_n_pages;
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* gtk_notebook_get_nth_page (GtkNotebook* notebook, gint page_num);
// ::GtkWidget* gtk_notebook_get_nth_page (::GtkNotebook* notebook, gint page_num);
Gtk::Widget base::NotebookBase::get_nth_page (gint page_num) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkNotebook* notebook, gint page_num);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_get_nth_page;
  auto page_num_to_c = page_num;
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (gint) (page_num_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_notebook_get_scrollable (GtkNotebook* notebook);
// gboolean gtk_notebook_get_scrollable (::GtkNotebook* notebook);
bool base::NotebookBase::get_scrollable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_get_scrollable;
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_notebook_get_show_border (GtkNotebook* notebook);
// gboolean gtk_notebook_get_show_border (::GtkNotebook* notebook);
bool base::NotebookBase::get_show_border () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_get_show_border;
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_notebook_get_show_tabs (GtkNotebook* notebook);
// gboolean gtk_notebook_get_show_tabs (::GtkNotebook* notebook);
bool base::NotebookBase::get_show_tabs () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_get_show_tabs;
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_notebook_get_tab_detachable (GtkNotebook* notebook, GtkWidget* child);
// gboolean gtk_notebook_get_tab_detachable (::GtkNotebook* notebook, ::GtkWidget* child);
bool base::NotebookBase::get_tab_detachable (Gtk::Widget child) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_get_tab_detachable;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c));
  return _temp_ret;
}

// guint16 gtk_notebook_get_tab_hborder (GtkNotebook* notebook);
// guint16 gtk_notebook_get_tab_hborder (::GtkNotebook* notebook);
// IGNORE; deprecated

// GtkWidget* gtk_notebook_get_tab_label (GtkNotebook* notebook, GtkWidget* child);
// ::GtkWidget* gtk_notebook_get_tab_label (::GtkNotebook* notebook, ::GtkWidget* child);
Gtk::Widget base::NotebookBase::get_tab_label (Gtk::Widget child) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_get_tab_label;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_notebook_get_tab_label_text (GtkNotebook* notebook, GtkWidget* child);
// const char* gtk_notebook_get_tab_label_text (::GtkNotebook* notebook, ::GtkWidget* child);
std::string base::NotebookBase::get_tab_label_text (Gtk::Widget child) noexcept
{
  typedef const char* (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_get_tab_label_text;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkPositionType gtk_notebook_get_tab_pos (GtkNotebook* notebook);
// ::GtkPositionType gtk_notebook_get_tab_pos (::GtkNotebook* notebook);
Gtk::PositionType base::NotebookBase::get_tab_pos () noexcept
{
  typedef ::GtkPositionType (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_get_tab_pos;
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_notebook_get_tab_reorderable (GtkNotebook* notebook, GtkWidget* child);
// gboolean gtk_notebook_get_tab_reorderable (::GtkNotebook* notebook, ::GtkWidget* child);
bool base::NotebookBase::get_tab_reorderable (Gtk::Widget child) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_get_tab_reorderable;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c));
  return _temp_ret;
}

// guint16 gtk_notebook_get_tab_vborder (GtkNotebook* notebook);
// guint16 gtk_notebook_get_tab_vborder (::GtkNotebook* notebook);
// IGNORE; deprecated

// gint gtk_notebook_insert_page (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label, gint position);
// gint gtk_notebook_insert_page (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, gint position);
gint base::NotebookBase::insert_page (Gtk::Widget child, Gtk::Widget tab_label, gint position) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_insert_page;
  auto position_to_c = position;
  auto tab_label_to_c = gi::unwrap (tab_label, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c), (gint) (position_to_c));
  return _temp_ret;
}
gint base::NotebookBase::insert_page (Gtk::Widget child, gint position) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_insert_page;
  auto position_to_c = position;
  auto tab_label_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c), (gint) (position_to_c));
  return _temp_ret;
}

// gint gtk_notebook_insert_page_menu (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label, GtkWidget* menu_label, gint position);
// gint gtk_notebook_insert_page_menu (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label, gint position);
gint base::NotebookBase::insert_page_menu (Gtk::Widget child, Gtk::Widget tab_label, Gtk::Widget menu_label, gint position) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_insert_page_menu;
  auto position_to_c = position;
  auto menu_label_to_c = gi::unwrap (menu_label, gi::transfer_none, gi::direction_in);
  auto tab_label_to_c = gi::unwrap (tab_label, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c), (::GtkWidget*) (menu_label_to_c), (gint) (position_to_c));
  return _temp_ret;
}
gint base::NotebookBase::insert_page_menu (Gtk::Widget child, gint position) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_insert_page_menu;
  auto position_to_c = position;
  auto menu_label_to_c = nullptr;
  auto tab_label_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c), (::GtkWidget*) (menu_label_to_c), (gint) (position_to_c));
  return _temp_ret;
}

// void gtk_notebook_next_page (GtkNotebook* notebook);
// void gtk_notebook_next_page (::GtkNotebook* notebook);
void base::NotebookBase::next_page () noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_next_page;
  call_wrap_v ((::GtkNotebook*) (gobj_()));
}

// gint gtk_notebook_page_num (GtkNotebook* notebook, GtkWidget* child);
// gint gtk_notebook_page_num (::GtkNotebook* notebook, ::GtkWidget* child);
gint base::NotebookBase::page_num (Gtk::Widget child) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_page_num;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c));
  return _temp_ret;
}

// void gtk_notebook_popup_disable (GtkNotebook* notebook);
// void gtk_notebook_popup_disable (::GtkNotebook* notebook);
void base::NotebookBase::popup_disable () noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_popup_disable;
  call_wrap_v ((::GtkNotebook*) (gobj_()));
}

// void gtk_notebook_popup_enable (GtkNotebook* notebook);
// void gtk_notebook_popup_enable (::GtkNotebook* notebook);
void base::NotebookBase::popup_enable () noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_popup_enable;
  call_wrap_v ((::GtkNotebook*) (gobj_()));
}

// gint gtk_notebook_prepend_page (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label);
// gint gtk_notebook_prepend_page (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label);
gint base::NotebookBase::prepend_page (Gtk::Widget child, Gtk::Widget tab_label) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_prepend_page;
  auto tab_label_to_c = gi::unwrap (tab_label, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c));
  return _temp_ret;
}
gint base::NotebookBase::prepend_page (Gtk::Widget child) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_prepend_page;
  auto tab_label_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c));
  return _temp_ret;
}

// gint gtk_notebook_prepend_page_menu (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label, GtkWidget* menu_label);
// gint gtk_notebook_prepend_page_menu (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label);
gint base::NotebookBase::prepend_page_menu (Gtk::Widget child, Gtk::Widget tab_label, Gtk::Widget menu_label) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_prepend_page_menu;
  auto menu_label_to_c = gi::unwrap (menu_label, gi::transfer_none, gi::direction_in);
  auto tab_label_to_c = gi::unwrap (tab_label, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c), (::GtkWidget*) (menu_label_to_c));
  return _temp_ret;
}
gint base::NotebookBase::prepend_page_menu (Gtk::Widget child) noexcept
{
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_prepend_page_menu;
  auto menu_label_to_c = nullptr;
  auto tab_label_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c), (::GtkWidget*) (menu_label_to_c));
  return _temp_ret;
}

// void gtk_notebook_prev_page (GtkNotebook* notebook);
// void gtk_notebook_prev_page (::GtkNotebook* notebook);
void base::NotebookBase::prev_page () noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_prev_page;
  call_wrap_v ((::GtkNotebook*) (gobj_()));
}

// void gtk_notebook_remove_page (GtkNotebook* notebook, gint page_num);
// void gtk_notebook_remove_page (::GtkNotebook* notebook, gint page_num);
void base::NotebookBase::remove_page (gint page_num) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, gint page_num);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_remove_page;
  auto page_num_to_c = page_num;
  call_wrap_v ((::GtkNotebook*) (gobj_()), (gint) (page_num_to_c));
}

// void gtk_notebook_reorder_child (GtkNotebook* notebook, GtkWidget* child, gint position);
// void gtk_notebook_reorder_child (::GtkNotebook* notebook, ::GtkWidget* child, gint position);
void base::NotebookBase::reorder_child (Gtk::Widget child, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_reorder_child;
  auto position_to_c = position;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (gint) (position_to_c));
}

// void gtk_notebook_set_action_widget (GtkNotebook* notebook, GtkWidget* widget, GtkPackType pack_type);
// void gtk_notebook_set_action_widget (::GtkNotebook* notebook, ::GtkWidget* widget, ::GtkPackType pack_type);
void base::NotebookBase::set_action_widget (Gtk::Widget widget, Gtk::PackType pack_type) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* widget, ::GtkPackType pack_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_set_action_widget;
  auto pack_type_to_c = gi::unwrap (pack_type);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (widget_to_c), (::GtkPackType) (pack_type_to_c));
}

// void gtk_notebook_set_current_page (GtkNotebook* notebook, gint page_num);
// void gtk_notebook_set_current_page (::GtkNotebook* notebook, gint page_num);
void base::NotebookBase::set_current_page (gint page_num) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, gint page_num);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_set_current_page;
  auto page_num_to_c = page_num;
  call_wrap_v ((::GtkNotebook*) (gobj_()), (gint) (page_num_to_c));
}

// void gtk_notebook_set_group_name (GtkNotebook* notebook, const gchar* group_name);
// void gtk_notebook_set_group_name (::GtkNotebook* notebook, const char* group_name);
void base::NotebookBase::set_group_name (const std::string & group_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, const char* group_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_set_group_name;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (const char*) (group_name_to_c));
}
void base::NotebookBase::set_group_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, const char* group_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_set_group_name;
  auto group_name_to_c = nullptr;
  call_wrap_v ((::GtkNotebook*) (gobj_()), (const char*) (group_name_to_c));
}

// void gtk_notebook_set_menu_label (GtkNotebook* notebook, GtkWidget* child, GtkWidget* menu_label);
// void gtk_notebook_set_menu_label (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* menu_label);
void base::NotebookBase::set_menu_label (Gtk::Widget child, Gtk::Widget menu_label) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* menu_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_set_menu_label;
  auto menu_label_to_c = gi::unwrap (menu_label, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (menu_label_to_c));
}
void base::NotebookBase::set_menu_label (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* menu_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_set_menu_label;
  auto menu_label_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (menu_label_to_c));
}

// void gtk_notebook_set_menu_label_text (GtkNotebook* notebook, GtkWidget* child, const gchar* menu_text);
// void gtk_notebook_set_menu_label_text (::GtkNotebook* notebook, ::GtkWidget* child, const char* menu_text);
void base::NotebookBase::set_menu_label_text (Gtk::Widget child, const std::string & menu_text) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, const char* menu_text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_set_menu_label_text;
  auto menu_text_to_c = gi::unwrap (menu_text, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (menu_text_to_c));
}

// void gtk_notebook_set_scrollable (GtkNotebook* notebook, gboolean scrollable);
// void gtk_notebook_set_scrollable (::GtkNotebook* notebook, gboolean scrollable);
void base::NotebookBase::set_scrollable (gboolean scrollable) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, gboolean scrollable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_set_scrollable;
  auto scrollable_to_c = scrollable;
  call_wrap_v ((::GtkNotebook*) (gobj_()), (gboolean) (scrollable_to_c));
}

// void gtk_notebook_set_show_border (GtkNotebook* notebook, gboolean show_border);
// void gtk_notebook_set_show_border (::GtkNotebook* notebook, gboolean show_border);
void base::NotebookBase::set_show_border (gboolean show_border) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, gboolean show_border);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_set_show_border;
  auto show_border_to_c = show_border;
  call_wrap_v ((::GtkNotebook*) (gobj_()), (gboolean) (show_border_to_c));
}

// void gtk_notebook_set_show_tabs (GtkNotebook* notebook, gboolean show_tabs);
// void gtk_notebook_set_show_tabs (::GtkNotebook* notebook, gboolean show_tabs);
void base::NotebookBase::set_show_tabs (gboolean show_tabs) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, gboolean show_tabs);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_set_show_tabs;
  auto show_tabs_to_c = show_tabs;
  call_wrap_v ((::GtkNotebook*) (gobj_()), (gboolean) (show_tabs_to_c));
}

// void gtk_notebook_set_tab_detachable (GtkNotebook* notebook, GtkWidget* child, gboolean detachable);
// void gtk_notebook_set_tab_detachable (::GtkNotebook* notebook, ::GtkWidget* child, gboolean detachable);
void base::NotebookBase::set_tab_detachable (Gtk::Widget child, gboolean detachable) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, gboolean detachable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_set_tab_detachable;
  auto detachable_to_c = detachable;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (gboolean) (detachable_to_c));
}

// void gtk_notebook_set_tab_label (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label);
// void gtk_notebook_set_tab_label (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label);
void base::NotebookBase::set_tab_label (Gtk::Widget child, Gtk::Widget tab_label) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_set_tab_label;
  auto tab_label_to_c = gi::unwrap (tab_label, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c));
}
void base::NotebookBase::set_tab_label (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_set_tab_label;
  auto tab_label_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c));
}

// void gtk_notebook_set_tab_label_text (GtkNotebook* notebook, GtkWidget* child, const gchar* tab_text);
// void gtk_notebook_set_tab_label_text (::GtkNotebook* notebook, ::GtkWidget* child, const char* tab_text);
void base::NotebookBase::set_tab_label_text (Gtk::Widget child, const std::string & tab_text) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, const char* tab_text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_set_tab_label_text;
  auto tab_text_to_c = gi::unwrap (tab_text, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (const char*) (tab_text_to_c));
}

// void gtk_notebook_set_tab_pos (GtkNotebook* notebook, GtkPositionType pos);
// void gtk_notebook_set_tab_pos (::GtkNotebook* notebook, ::GtkPositionType pos);
void base::NotebookBase::set_tab_pos (Gtk::PositionType pos) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkPositionType pos);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_set_tab_pos;
  auto pos_to_c = gi::unwrap (pos);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkPositionType) (pos_to_c));
}

// void gtk_notebook_set_tab_reorderable (GtkNotebook* notebook, GtkWidget* child, gboolean reorderable);
// void gtk_notebook_set_tab_reorderable (::GtkNotebook* notebook, ::GtkWidget* child, gboolean reorderable);
void base::NotebookBase::set_tab_reorderable (Gtk::Widget child, gboolean reorderable) noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, gboolean reorderable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_set_tab_reorderable;
  auto reorderable_to_c = reorderable;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (gboolean) (reorderable_to_c));
}












} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/notebook_extra_def_impl.hpp>)
#include <gtk/notebook_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/notebook_extra_impl.hpp>)
#include <gtk/notebook_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void NotebookClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkNotebookClass *methods = (::GtkNotebookClass *) class_struct;
  (void) methods;

  methods->change_current_page = (decltype (methods->change_current_page)) detail::method_wrapper<self, bool (*) (gint offset), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::change_current_page_>;
  methods->focus_tab = (decltype (methods->focus_tab)) detail::method_wrapper<self, bool (*) (Gtk::NotebookTab type), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::focus_tab_>;
  methods->insert_page = (decltype (methods->insert_page)) detail::method_wrapper<self, gint (*) (Gtk::Widget child, Gtk::Widget tab_label, Gtk::Widget menu_label, gint position), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::insert_page_>;
  methods->move_focus_out = (decltype (methods->move_focus_out)) detail::method_wrapper<self, void (*) (Gtk::DirectionType direction), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::move_focus_out_>;
  methods->page_added = (decltype (methods->page_added)) detail::method_wrapper<self, void (*) (Gtk::Widget child, guint page_num), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::page_added_>;
  methods->page_removed = (decltype (methods->page_removed)) detail::method_wrapper<self, void (*) (Gtk::Widget child, guint page_num), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::page_removed_>;
  methods->page_reordered = (decltype (methods->page_reordered)) detail::method_wrapper<self, void (*) (Gtk::Widget child, guint page_num), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::page_reordered_>;
  methods->reorder_tab = (decltype (methods->reorder_tab)) detail::method_wrapper<self, bool (*) (Gtk::DirectionType direction, gboolean move_to_last), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::reorder_tab_>;
  methods->select_page = (decltype (methods->select_page)) detail::method_wrapper<self, bool (*) (gboolean move_focus), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::select_page_>;
  methods->switch_page = (decltype (methods->switch_page)) detail::method_wrapper<self, void (*) (Gtk::Widget page, guint page_num), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::switch_page_>;
}

// gboolean Notebook::change_current_page (GtkNotebook* notebook, gint offset);
// gboolean Notebook::change_current_page (::GtkNotebook* notebook, gint offset);
bool NotebookClass::change_current_page_ (gint offset) noexcept
{
  if (!get_struct_()->change_current_page) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkNotebook* notebook, gint offset);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->change_current_page;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (gint) (offset_to_c));
  return _temp_ret;
}

// gboolean Notebook::focus_tab (GtkNotebook* notebook, GtkNotebookTab type);
// gboolean Notebook::focus_tab (::GtkNotebook* notebook, ::GtkNotebookTab type);
bool NotebookClass::focus_tab_ (Gtk::NotebookTab type) noexcept
{
  if (!get_struct_()->focus_tab) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkNotebook* notebook, ::GtkNotebookTab type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->focus_tab;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkNotebookTab) (type_to_c));
  return _temp_ret;
}

// gint Notebook::insert_page (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label, GtkWidget* menu_label, gint position);
// gint Notebook::insert_page (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label, gint position);
gint NotebookClass::insert_page_ (Gtk::Widget child, Gtk::Widget tab_label, Gtk::Widget menu_label, gint position) noexcept
{
  if (!get_struct_()->insert_page) return gint{};
  typedef gint (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->insert_page;
  auto position_to_c = position;
  auto menu_label_to_c = gi::unwrap (menu_label, gi::transfer_none, gi::direction_in);
  auto tab_label_to_c = gi::unwrap (tab_label, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (::GtkWidget*) (tab_label_to_c), (::GtkWidget*) (menu_label_to_c), (gint) (position_to_c));
  return _temp_ret;
}

// void Notebook::move_focus_out (GtkNotebook* notebook, GtkDirectionType direction);
// void Notebook::move_focus_out (::GtkNotebook* notebook, ::GtkDirectionType direction);
void NotebookClass::move_focus_out_ (Gtk::DirectionType direction) noexcept
{
  if (!get_struct_()->move_focus_out) return ;
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkDirectionType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move_focus_out;
  auto direction_to_c = gi::unwrap (direction);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkDirectionType) (direction_to_c));
}

// void Notebook::page_added (GtkNotebook* notebook, GtkWidget* child, guint page_num);
// void Notebook::page_added (::GtkNotebook* notebook, ::GtkWidget* child, guint page_num);
void NotebookClass::page_added_ (Gtk::Widget child, guint page_num) noexcept
{
  if (!get_struct_()->page_added) return ;
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, guint page_num);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->page_added;
  auto page_num_to_c = page_num;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (guint) (page_num_to_c));
}

// void Notebook::page_removed (GtkNotebook* notebook, GtkWidget* child, guint page_num);
// void Notebook::page_removed (::GtkNotebook* notebook, ::GtkWidget* child, guint page_num);
void NotebookClass::page_removed_ (Gtk::Widget child, guint page_num) noexcept
{
  if (!get_struct_()->page_removed) return ;
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, guint page_num);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->page_removed;
  auto page_num_to_c = page_num;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (guint) (page_num_to_c));
}

// void Notebook::page_reordered (GtkNotebook* notebook, GtkWidget* child, guint page_num);
// void Notebook::page_reordered (::GtkNotebook* notebook, ::GtkWidget* child, guint page_num);
void NotebookClass::page_reordered_ (Gtk::Widget child, guint page_num) noexcept
{
  if (!get_struct_()->page_reordered) return ;
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* child, guint page_num);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->page_reordered;
  auto page_num_to_c = page_num;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (child_to_c), (guint) (page_num_to_c));
}

// gboolean Notebook::reorder_tab (GtkNotebook* notebook, GtkDirectionType direction, gboolean move_to_last);
// gboolean Notebook::reorder_tab (::GtkNotebook* notebook, ::GtkDirectionType direction, gboolean move_to_last);
bool NotebookClass::reorder_tab_ (Gtk::DirectionType direction, gboolean move_to_last) noexcept
{
  if (!get_struct_()->reorder_tab) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkNotebook* notebook, ::GtkDirectionType direction, gboolean move_to_last);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->reorder_tab;
  auto move_to_last_to_c = move_to_last;
  auto direction_to_c = gi::unwrap (direction);
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkDirectionType) (direction_to_c), (gboolean) (move_to_last_to_c));
  return _temp_ret;
}

// gboolean Notebook::select_page (GtkNotebook* notebook, gboolean move_focus);
// gboolean Notebook::select_page (::GtkNotebook* notebook, gboolean move_focus);
bool NotebookClass::select_page_ (gboolean move_focus) noexcept
{
  if (!get_struct_()->select_page) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkNotebook* notebook, gboolean move_focus);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->select_page;
  auto move_focus_to_c = move_focus;
  auto _temp_ret = call_wrap_v ((::GtkNotebook*) (gobj_()), (gboolean) (move_focus_to_c));
  return _temp_ret;
}

// void Notebook::switch_page (GtkNotebook* notebook, GtkWidget* page, guint page_num);
// void Notebook::switch_page (::GtkNotebook* notebook, ::GtkWidget* page, guint page_num);
void NotebookClass::switch_page_ (Gtk::Widget page, guint page_num) noexcept
{
  if (!get_struct_()->switch_page) return ;
  typedef void (*call_wrap_t) (::GtkNotebook* notebook, ::GtkWidget* page, guint page_num);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->switch_page;
  auto page_num_to_c = page_num;
  auto page_to_c = gi::unwrap (page, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkNotebook*) (gobj_()), (::GtkWidget*) (page_to_c), (guint) (page_num_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
