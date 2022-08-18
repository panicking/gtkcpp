// AUTO-GENERATED

#ifndef _GI_GTK_NOTEBOOK_HPP_
#define _GI_GTK_NOTEBOOK_HPP_

#include "container.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class Notebook;

namespace base {


#define GI_GTK_NOTEBOOK_BASE base::NotebookBase
class NotebookBase : public Gtk::Container
{
typedef Gtk::Container super_type;
public:
typedef ::GtkNotebook BaseObjectType;

NotebookBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_notebook_get_type(); } 

// GtkWidget* gtk_notebook_new ();
// ::GtkNotebook* gtk_notebook_new ();
static GI_INLINE_DECL Gtk::Notebook new_ () noexcept;

// gint gtk_notebook_append_page (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label);
// gint gtk_notebook_append_page (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label);
GI_INLINE_DECL gint append_page (Gtk::Widget child, Gtk::Widget tab_label) noexcept;
GI_INLINE_DECL gint append_page (Gtk::Widget child) noexcept;

// gint gtk_notebook_append_page_menu (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label, GtkWidget* menu_label);
// gint gtk_notebook_append_page_menu (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label);
GI_INLINE_DECL gint append_page_menu (Gtk::Widget child, Gtk::Widget tab_label, Gtk::Widget menu_label) noexcept;
GI_INLINE_DECL gint append_page_menu (Gtk::Widget child) noexcept;

// void gtk_notebook_detach_tab (GtkNotebook* notebook, GtkWidget* child);
// void gtk_notebook_detach_tab (::GtkNotebook* notebook, ::GtkWidget* child);
GI_INLINE_DECL void detach_tab (Gtk::Widget child) noexcept;

// GtkWidget* gtk_notebook_get_action_widget (GtkNotebook* notebook, GtkPackType pack_type);
// ::GtkWidget* gtk_notebook_get_action_widget (::GtkNotebook* notebook, ::GtkPackType pack_type);
GI_INLINE_DECL Gtk::Widget get_action_widget (Gtk::PackType pack_type) noexcept;

// gint gtk_notebook_get_current_page (GtkNotebook* notebook);
// gint gtk_notebook_get_current_page (::GtkNotebook* notebook);
GI_INLINE_DECL gint get_current_page () noexcept;

// const gchar* gtk_notebook_get_group_name (GtkNotebook* notebook);
// const char* gtk_notebook_get_group_name (::GtkNotebook* notebook);
GI_INLINE_DECL std::string get_group_name () noexcept;

// GtkWidget* gtk_notebook_get_menu_label (GtkNotebook* notebook, GtkWidget* child);
// ::GtkWidget* gtk_notebook_get_menu_label (::GtkNotebook* notebook, ::GtkWidget* child);
GI_INLINE_DECL Gtk::Widget get_menu_label (Gtk::Widget child) noexcept;

// const gchar* gtk_notebook_get_menu_label_text (GtkNotebook* notebook, GtkWidget* child);
// const char* gtk_notebook_get_menu_label_text (::GtkNotebook* notebook, ::GtkWidget* child);
GI_INLINE_DECL std::string get_menu_label_text (Gtk::Widget child) noexcept;

// gint gtk_notebook_get_n_pages (GtkNotebook* notebook);
// gint gtk_notebook_get_n_pages (::GtkNotebook* notebook);
GI_INLINE_DECL gint get_n_pages () noexcept;

// GtkWidget* gtk_notebook_get_nth_page (GtkNotebook* notebook, gint page_num);
// ::GtkWidget* gtk_notebook_get_nth_page (::GtkNotebook* notebook, gint page_num);
GI_INLINE_DECL Gtk::Widget get_nth_page (gint page_num) noexcept;

// gboolean gtk_notebook_get_scrollable (GtkNotebook* notebook);
// gboolean gtk_notebook_get_scrollable (::GtkNotebook* notebook);
GI_INLINE_DECL bool get_scrollable () noexcept;

// gboolean gtk_notebook_get_show_border (GtkNotebook* notebook);
// gboolean gtk_notebook_get_show_border (::GtkNotebook* notebook);
GI_INLINE_DECL bool get_show_border () noexcept;

// gboolean gtk_notebook_get_show_tabs (GtkNotebook* notebook);
// gboolean gtk_notebook_get_show_tabs (::GtkNotebook* notebook);
GI_INLINE_DECL bool get_show_tabs () noexcept;

// gboolean gtk_notebook_get_tab_detachable (GtkNotebook* notebook, GtkWidget* child);
// gboolean gtk_notebook_get_tab_detachable (::GtkNotebook* notebook, ::GtkWidget* child);
GI_INLINE_DECL bool get_tab_detachable (Gtk::Widget child) noexcept;

// guint16 gtk_notebook_get_tab_hborder (GtkNotebook* notebook);
// guint16 gtk_notebook_get_tab_hborder (::GtkNotebook* notebook);
// IGNORE; deprecated

// GtkWidget* gtk_notebook_get_tab_label (GtkNotebook* notebook, GtkWidget* child);
// ::GtkWidget* gtk_notebook_get_tab_label (::GtkNotebook* notebook, ::GtkWidget* child);
GI_INLINE_DECL Gtk::Widget get_tab_label (Gtk::Widget child) noexcept;

// const gchar* gtk_notebook_get_tab_label_text (GtkNotebook* notebook, GtkWidget* child);
// const char* gtk_notebook_get_tab_label_text (::GtkNotebook* notebook, ::GtkWidget* child);
GI_INLINE_DECL std::string get_tab_label_text (Gtk::Widget child) noexcept;

// GtkPositionType gtk_notebook_get_tab_pos (GtkNotebook* notebook);
// ::GtkPositionType gtk_notebook_get_tab_pos (::GtkNotebook* notebook);
GI_INLINE_DECL Gtk::PositionType get_tab_pos () noexcept;

// gboolean gtk_notebook_get_tab_reorderable (GtkNotebook* notebook, GtkWidget* child);
// gboolean gtk_notebook_get_tab_reorderable (::GtkNotebook* notebook, ::GtkWidget* child);
GI_INLINE_DECL bool get_tab_reorderable (Gtk::Widget child) noexcept;

// guint16 gtk_notebook_get_tab_vborder (GtkNotebook* notebook);
// guint16 gtk_notebook_get_tab_vborder (::GtkNotebook* notebook);
// IGNORE; deprecated

// gint gtk_notebook_insert_page (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label, gint position);
// gint gtk_notebook_insert_page (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, gint position);
GI_INLINE_DECL gint insert_page (Gtk::Widget child, Gtk::Widget tab_label, gint position) noexcept;
GI_INLINE_DECL gint insert_page (Gtk::Widget child, gint position) noexcept;

// gint gtk_notebook_insert_page_menu (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label, GtkWidget* menu_label, gint position);
// gint gtk_notebook_insert_page_menu (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label, gint position);
GI_INLINE_DECL gint insert_page_menu (Gtk::Widget child, Gtk::Widget tab_label, Gtk::Widget menu_label, gint position) noexcept;
GI_INLINE_DECL gint insert_page_menu (Gtk::Widget child, gint position) noexcept;

// void gtk_notebook_next_page (GtkNotebook* notebook);
// void gtk_notebook_next_page (::GtkNotebook* notebook);
GI_INLINE_DECL void next_page () noexcept;

// gint gtk_notebook_page_num (GtkNotebook* notebook, GtkWidget* child);
// gint gtk_notebook_page_num (::GtkNotebook* notebook, ::GtkWidget* child);
GI_INLINE_DECL gint page_num (Gtk::Widget child) noexcept;

// void gtk_notebook_popup_disable (GtkNotebook* notebook);
// void gtk_notebook_popup_disable (::GtkNotebook* notebook);
GI_INLINE_DECL void popup_disable () noexcept;

// void gtk_notebook_popup_enable (GtkNotebook* notebook);
// void gtk_notebook_popup_enable (::GtkNotebook* notebook);
GI_INLINE_DECL void popup_enable () noexcept;

// gint gtk_notebook_prepend_page (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label);
// gint gtk_notebook_prepend_page (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label);
GI_INLINE_DECL gint prepend_page (Gtk::Widget child, Gtk::Widget tab_label) noexcept;
GI_INLINE_DECL gint prepend_page (Gtk::Widget child) noexcept;

// gint gtk_notebook_prepend_page_menu (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label, GtkWidget* menu_label);
// gint gtk_notebook_prepend_page_menu (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label);
GI_INLINE_DECL gint prepend_page_menu (Gtk::Widget child, Gtk::Widget tab_label, Gtk::Widget menu_label) noexcept;
GI_INLINE_DECL gint prepend_page_menu (Gtk::Widget child) noexcept;

// void gtk_notebook_prev_page (GtkNotebook* notebook);
// void gtk_notebook_prev_page (::GtkNotebook* notebook);
GI_INLINE_DECL void prev_page () noexcept;

// void gtk_notebook_remove_page (GtkNotebook* notebook, gint page_num);
// void gtk_notebook_remove_page (::GtkNotebook* notebook, gint page_num);
GI_INLINE_DECL void remove_page (gint page_num) noexcept;

// void gtk_notebook_reorder_child (GtkNotebook* notebook, GtkWidget* child, gint position);
// void gtk_notebook_reorder_child (::GtkNotebook* notebook, ::GtkWidget* child, gint position);
GI_INLINE_DECL void reorder_child (Gtk::Widget child, gint position) noexcept;

// void gtk_notebook_set_action_widget (GtkNotebook* notebook, GtkWidget* widget, GtkPackType pack_type);
// void gtk_notebook_set_action_widget (::GtkNotebook* notebook, ::GtkWidget* widget, ::GtkPackType pack_type);
GI_INLINE_DECL void set_action_widget (Gtk::Widget widget, Gtk::PackType pack_type) noexcept;

// void gtk_notebook_set_current_page (GtkNotebook* notebook, gint page_num);
// void gtk_notebook_set_current_page (::GtkNotebook* notebook, gint page_num);
GI_INLINE_DECL void set_current_page (gint page_num) noexcept;

// void gtk_notebook_set_group_name (GtkNotebook* notebook, const gchar* group_name);
// void gtk_notebook_set_group_name (::GtkNotebook* notebook, const char* group_name);
GI_INLINE_DECL void set_group_name (const std::string & group_name) noexcept;
GI_INLINE_DECL void set_group_name () noexcept;

// void gtk_notebook_set_menu_label (GtkNotebook* notebook, GtkWidget* child, GtkWidget* menu_label);
// void gtk_notebook_set_menu_label (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* menu_label);
GI_INLINE_DECL void set_menu_label (Gtk::Widget child, Gtk::Widget menu_label) noexcept;
GI_INLINE_DECL void set_menu_label (Gtk::Widget child) noexcept;

// void gtk_notebook_set_menu_label_text (GtkNotebook* notebook, GtkWidget* child, const gchar* menu_text);
// void gtk_notebook_set_menu_label_text (::GtkNotebook* notebook, ::GtkWidget* child, const char* menu_text);
GI_INLINE_DECL void set_menu_label_text (Gtk::Widget child, const std::string & menu_text) noexcept;

// void gtk_notebook_set_scrollable (GtkNotebook* notebook, gboolean scrollable);
// void gtk_notebook_set_scrollable (::GtkNotebook* notebook, gboolean scrollable);
GI_INLINE_DECL void set_scrollable (gboolean scrollable) noexcept;

// void gtk_notebook_set_show_border (GtkNotebook* notebook, gboolean show_border);
// void gtk_notebook_set_show_border (::GtkNotebook* notebook, gboolean show_border);
GI_INLINE_DECL void set_show_border (gboolean show_border) noexcept;

// void gtk_notebook_set_show_tabs (GtkNotebook* notebook, gboolean show_tabs);
// void gtk_notebook_set_show_tabs (::GtkNotebook* notebook, gboolean show_tabs);
GI_INLINE_DECL void set_show_tabs (gboolean show_tabs) noexcept;

// void gtk_notebook_set_tab_detachable (GtkNotebook* notebook, GtkWidget* child, gboolean detachable);
// void gtk_notebook_set_tab_detachable (::GtkNotebook* notebook, ::GtkWidget* child, gboolean detachable);
GI_INLINE_DECL void set_tab_detachable (Gtk::Widget child, gboolean detachable) noexcept;

// void gtk_notebook_set_tab_label (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label);
// void gtk_notebook_set_tab_label (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label);
GI_INLINE_DECL void set_tab_label (Gtk::Widget child, Gtk::Widget tab_label) noexcept;
GI_INLINE_DECL void set_tab_label (Gtk::Widget child) noexcept;

// void gtk_notebook_set_tab_label_text (GtkNotebook* notebook, GtkWidget* child, const gchar* tab_text);
// void gtk_notebook_set_tab_label_text (::GtkNotebook* notebook, ::GtkWidget* child, const char* tab_text);
GI_INLINE_DECL void set_tab_label_text (Gtk::Widget child, const std::string & tab_text) noexcept;

// void gtk_notebook_set_tab_pos (GtkNotebook* notebook, GtkPositionType pos);
// void gtk_notebook_set_tab_pos (::GtkNotebook* notebook, ::GtkPositionType pos);
GI_INLINE_DECL void set_tab_pos (Gtk::PositionType pos) noexcept;

// void gtk_notebook_set_tab_reorderable (GtkNotebook* notebook, GtkWidget* child, gboolean reorderable);
// void gtk_notebook_set_tab_reorderable (::GtkNotebook* notebook, ::GtkWidget* child, gboolean reorderable);
GI_INLINE_DECL void set_tab_reorderable (Gtk::Widget child, gboolean reorderable) noexcept;

gi::property_proxy<bool, base::NotebookBase> property_enable_popup()
{ return gi::property_proxy<bool, base::NotebookBase> (*this, "enable-popup"); }
const gi::property_proxy<bool, base::NotebookBase> property_enable_popup() const
{ return gi::property_proxy<bool, base::NotebookBase> (*this, "enable-popup"); }

gi::property_proxy<std::string, base::NotebookBase> property_group_name()
{ return gi::property_proxy<std::string, base::NotebookBase> (*this, "group-name"); }
const gi::property_proxy<std::string, base::NotebookBase> property_group_name() const
{ return gi::property_proxy<std::string, base::NotebookBase> (*this, "group-name"); }

gi::property_proxy<gint, base::NotebookBase> property_page()
{ return gi::property_proxy<gint, base::NotebookBase> (*this, "page"); }
const gi::property_proxy<gint, base::NotebookBase> property_page() const
{ return gi::property_proxy<gint, base::NotebookBase> (*this, "page"); }

gi::property_proxy<bool, base::NotebookBase> property_scrollable()
{ return gi::property_proxy<bool, base::NotebookBase> (*this, "scrollable"); }
const gi::property_proxy<bool, base::NotebookBase> property_scrollable() const
{ return gi::property_proxy<bool, base::NotebookBase> (*this, "scrollable"); }

gi::property_proxy<bool, base::NotebookBase> property_show_border()
{ return gi::property_proxy<bool, base::NotebookBase> (*this, "show-border"); }
const gi::property_proxy<bool, base::NotebookBase> property_show_border() const
{ return gi::property_proxy<bool, base::NotebookBase> (*this, "show-border"); }

gi::property_proxy<bool, base::NotebookBase> property_show_tabs()
{ return gi::property_proxy<bool, base::NotebookBase> (*this, "show-tabs"); }
const gi::property_proxy<bool, base::NotebookBase> property_show_tabs() const
{ return gi::property_proxy<bool, base::NotebookBase> (*this, "show-tabs"); }

gi::property_proxy<Gtk::PositionType, base::NotebookBase> property_tab_pos()
{ return gi::property_proxy<Gtk::PositionType, base::NotebookBase> (*this, "tab-pos"); }
const gi::property_proxy<Gtk::PositionType, base::NotebookBase> property_tab_pos() const
{ return gi::property_proxy<Gtk::PositionType, base::NotebookBase> (*this, "tab-pos"); }

// signal change-current-page
gi::signal_proxy<bool(Gtk::Notebook, gint object)> signal_change_current_page()
{ return gi::signal_proxy<bool(Gtk::Notebook, gint object)> (*this, "change-current-page"); }

// signal create-window
gi::signal_proxy<Gtk::Notebook(Gtk::Notebook, Gtk::Widget page, gint x, gint y)> signal_create_window()
{ return gi::signal_proxy<Gtk::Notebook(Gtk::Notebook, Gtk::Widget page, gint x, gint y)> (*this, "create-window"); }

// signal focus-tab
gi::signal_proxy<bool(Gtk::Notebook, Gtk::NotebookTab object)> signal_focus_tab()
{ return gi::signal_proxy<bool(Gtk::Notebook, Gtk::NotebookTab object)> (*this, "focus-tab"); }

// signal move-focus-out
gi::signal_proxy<void(Gtk::Notebook, Gtk::DirectionType object)> signal_move_focus_out()
{ return gi::signal_proxy<void(Gtk::Notebook, Gtk::DirectionType object)> (*this, "move-focus-out"); }

// signal page-added
gi::signal_proxy<void(Gtk::Notebook, Gtk::Widget child, guint page_num)> signal_page_added()
{ return gi::signal_proxy<void(Gtk::Notebook, Gtk::Widget child, guint page_num)> (*this, "page-added"); }

// signal page-removed
gi::signal_proxy<void(Gtk::Notebook, Gtk::Widget child, guint page_num)> signal_page_removed()
{ return gi::signal_proxy<void(Gtk::Notebook, Gtk::Widget child, guint page_num)> (*this, "page-removed"); }

// signal page-reordered
gi::signal_proxy<void(Gtk::Notebook, Gtk::Widget child, guint page_num)> signal_page_reordered()
{ return gi::signal_proxy<void(Gtk::Notebook, Gtk::Widget child, guint page_num)> (*this, "page-reordered"); }

// signal reorder-tab
gi::signal_proxy<bool(Gtk::Notebook, Gtk::DirectionType object, gboolean p0)> signal_reorder_tab()
{ return gi::signal_proxy<bool(Gtk::Notebook, Gtk::DirectionType object, gboolean p0)> (*this, "reorder-tab"); }

// signal select-page
gi::signal_proxy<bool(Gtk::Notebook, gboolean object)> signal_select_page()
{ return gi::signal_proxy<bool(Gtk::Notebook, gboolean object)> (*this, "select-page"); }

// signal switch-page
gi::signal_proxy<void(Gtk::Notebook, Gtk::Widget page, guint page_num)> signal_switch_page()
{ return gi::signal_proxy<void(Gtk::Notebook, Gtk::Widget page, guint page_num)> (*this, "switch-page"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/notebook_extra_def.hpp>)
#include <gtk/notebook_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/notebook_extra.hpp>)
#include <gtk/notebook_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Notebook : public GI_GTK_NOTEBOOK_BASE
{ typedef GI_GTK_NOTEBOOK_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkNotebook>
{ typedef Gtk::Notebook type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class NotebookClassDef
{
typedef NotebookClassDef self;
public:
typedef Gtk::Notebook instance_type;
typedef ::GtkNotebookClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean Notebook::change_current_page (GtkNotebook* notebook, gint offset);
// gboolean Notebook::change_current_page (::GtkNotebook* notebook, gint offset);
virtual bool change_current_page_ (gint offset) noexcept = 0;

// gboolean Notebook::focus_tab (GtkNotebook* notebook, GtkNotebookTab type);
// gboolean Notebook::focus_tab (::GtkNotebook* notebook, ::GtkNotebookTab type);
virtual bool focus_tab_ (Gtk::NotebookTab type) noexcept = 0;

// gint Notebook::insert_page (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label, GtkWidget* menu_label, gint position);
// gint Notebook::insert_page (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label, gint position);
virtual gint insert_page_ (Gtk::Widget child, Gtk::Widget tab_label, Gtk::Widget menu_label, gint position) noexcept = 0;

// void Notebook::move_focus_out (GtkNotebook* notebook, GtkDirectionType direction);
// void Notebook::move_focus_out (::GtkNotebook* notebook, ::GtkDirectionType direction);
virtual void move_focus_out_ (Gtk::DirectionType direction) noexcept = 0;

// void Notebook::page_added (GtkNotebook* notebook, GtkWidget* child, guint page_num);
// void Notebook::page_added (::GtkNotebook* notebook, ::GtkWidget* child, guint page_num);
virtual void page_added_ (Gtk::Widget child, guint page_num) noexcept = 0;

// void Notebook::page_removed (GtkNotebook* notebook, GtkWidget* child, guint page_num);
// void Notebook::page_removed (::GtkNotebook* notebook, ::GtkWidget* child, guint page_num);
virtual void page_removed_ (Gtk::Widget child, guint page_num) noexcept = 0;

// void Notebook::page_reordered (GtkNotebook* notebook, GtkWidget* child, guint page_num);
// void Notebook::page_reordered (::GtkNotebook* notebook, ::GtkWidget* child, guint page_num);
virtual void page_reordered_ (Gtk::Widget child, guint page_num) noexcept = 0;

// gboolean Notebook::reorder_tab (GtkNotebook* notebook, GtkDirectionType direction, gboolean move_to_last);
// gboolean Notebook::reorder_tab (::GtkNotebook* notebook, ::GtkDirectionType direction, gboolean move_to_last);
virtual bool reorder_tab_ (Gtk::DirectionType direction, gboolean move_to_last) noexcept = 0;

// gboolean Notebook::select_page (GtkNotebook* notebook, gboolean move_focus);
// gboolean Notebook::select_page (::GtkNotebook* notebook, gboolean move_focus);
virtual bool select_page_ (gboolean move_focus) noexcept = 0;

// void Notebook::switch_page (GtkNotebook* notebook, GtkWidget* page, guint page_num);
// void Notebook::switch_page (::GtkNotebook* notebook, ::GtkWidget* page, guint page_num);
virtual void switch_page_ (Gtk::Widget page, guint page_num) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class NotebookClass: public detail::ClassTemplate<Gtk::impl::internal::NotebookClassDef, Gtk::impl::internal::ContainerClass>
{
typedef NotebookClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::NotebookClassDef, Gtk::impl::internal::ContainerClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean Notebook::change_current_page (GtkNotebook* notebook, gint offset);
// gboolean Notebook::change_current_page (::GtkNotebook* notebook, gint offset);
GI_INLINE_DECL bool change_current_page_ (gint offset) noexcept override;

// gboolean Notebook::focus_tab (GtkNotebook* notebook, GtkNotebookTab type);
// gboolean Notebook::focus_tab (::GtkNotebook* notebook, ::GtkNotebookTab type);
GI_INLINE_DECL bool focus_tab_ (Gtk::NotebookTab type) noexcept override;

// gint Notebook::insert_page (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label, GtkWidget* menu_label, gint position);
// gint Notebook::insert_page (::GtkNotebook* notebook, ::GtkWidget* child, ::GtkWidget* tab_label, ::GtkWidget* menu_label, gint position);
GI_INLINE_DECL gint insert_page_ (Gtk::Widget child, Gtk::Widget tab_label, Gtk::Widget menu_label, gint position) noexcept override;

// void Notebook::move_focus_out (GtkNotebook* notebook, GtkDirectionType direction);
// void Notebook::move_focus_out (::GtkNotebook* notebook, ::GtkDirectionType direction);
GI_INLINE_DECL void move_focus_out_ (Gtk::DirectionType direction) noexcept override;

// void Notebook::page_added (GtkNotebook* notebook, GtkWidget* child, guint page_num);
// void Notebook::page_added (::GtkNotebook* notebook, ::GtkWidget* child, guint page_num);
GI_INLINE_DECL void page_added_ (Gtk::Widget child, guint page_num) noexcept override;

// void Notebook::page_removed (GtkNotebook* notebook, GtkWidget* child, guint page_num);
// void Notebook::page_removed (::GtkNotebook* notebook, ::GtkWidget* child, guint page_num);
GI_INLINE_DECL void page_removed_ (Gtk::Widget child, guint page_num) noexcept override;

// void Notebook::page_reordered (GtkNotebook* notebook, GtkWidget* child, guint page_num);
// void Notebook::page_reordered (::GtkNotebook* notebook, ::GtkWidget* child, guint page_num);
GI_INLINE_DECL void page_reordered_ (Gtk::Widget child, guint page_num) noexcept override;

// gboolean Notebook::reorder_tab (GtkNotebook* notebook, GtkDirectionType direction, gboolean move_to_last);
// gboolean Notebook::reorder_tab (::GtkNotebook* notebook, ::GtkDirectionType direction, gboolean move_to_last);
GI_INLINE_DECL bool reorder_tab_ (Gtk::DirectionType direction, gboolean move_to_last) noexcept override;

// gboolean Notebook::select_page (GtkNotebook* notebook, gboolean move_focus);
// gboolean Notebook::select_page (::GtkNotebook* notebook, gboolean move_focus);
GI_INLINE_DECL bool select_page_ (gboolean move_focus) noexcept override;

// void Notebook::switch_page (GtkNotebook* notebook, GtkWidget* page, guint page_num);
// void Notebook::switch_page (::GtkNotebook* notebook, ::GtkWidget* page, guint page_num);
GI_INLINE_DECL void switch_page_ (Gtk::Widget page, guint page_num) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using NotebookImpl = detail::ObjectImpl<Notebook, internal::NotebookClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
