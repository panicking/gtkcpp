// AUTO-GENERATED

#ifndef _GI_GTK_ENTRYCOMPLETION_HPP_
#define _GI_GTK_ENTRYCOMPLETION_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Buildable;
class CellArea;
class CellLayout;
class TreeIter;
class TreeModel;
class Widget;

class EntryCompletion;

namespace base {


#define GI_GTK_ENTRYCOMPLETION_BASE base::EntryCompletionBase
class EntryCompletionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkEntryCompletion BaseObjectType;

EntryCompletionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_entry_completion_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

GI_INLINE_DECL Gtk::CellLayout interface_ (gi::interface_tag<Gtk::CellLayout>);

GI_INLINE_DECL operator Gtk::CellLayout ();

// GtkEntryCompletion* gtk_entry_completion_new ();
// ::GtkEntryCompletion* gtk_entry_completion_new ();
static GI_INLINE_DECL Gtk::EntryCompletion new_ () noexcept;

// GtkEntryCompletion* gtk_entry_completion_new_with_area (GtkCellArea* area);
// ::GtkEntryCompletion* gtk_entry_completion_new_with_area (::GtkCellArea* area);
static GI_INLINE_DECL Gtk::EntryCompletion new_with_area (Gtk::CellArea area) noexcept;

// void gtk_entry_completion_complete (GtkEntryCompletion* completion);
// void gtk_entry_completion_complete (::GtkEntryCompletion* completion);
GI_INLINE_DECL void complete () noexcept;

// gchar* gtk_entry_completion_compute_prefix (GtkEntryCompletion* completion, const char* key);
// char* gtk_entry_completion_compute_prefix (::GtkEntryCompletion* completion, const char* key);
GI_INLINE_DECL std::string compute_prefix (const std::string & key) noexcept;

// void gtk_entry_completion_delete_action (GtkEntryCompletion* completion, gint index_);
// void gtk_entry_completion_delete_action (::GtkEntryCompletion* completion, gint index_);
GI_INLINE_DECL void delete_action (gint index_) noexcept;

// const gchar* gtk_entry_completion_get_completion_prefix (GtkEntryCompletion* completion);
// const char* gtk_entry_completion_get_completion_prefix (::GtkEntryCompletion* completion);
GI_INLINE_DECL std::string get_completion_prefix () noexcept;

// GtkWidget* gtk_entry_completion_get_entry (GtkEntryCompletion* completion);
// ::GtkWidget* gtk_entry_completion_get_entry (::GtkEntryCompletion* completion);
GI_INLINE_DECL Gtk::Widget get_entry () noexcept;

// gboolean gtk_entry_completion_get_inline_completion (GtkEntryCompletion* completion);
// gboolean gtk_entry_completion_get_inline_completion (::GtkEntryCompletion* completion);
GI_INLINE_DECL bool get_inline_completion () noexcept;

// gboolean gtk_entry_completion_get_inline_selection (GtkEntryCompletion* completion);
// gboolean gtk_entry_completion_get_inline_selection (::GtkEntryCompletion* completion);
GI_INLINE_DECL bool get_inline_selection () noexcept;

// gint gtk_entry_completion_get_minimum_key_length (GtkEntryCompletion* completion);
// gint gtk_entry_completion_get_minimum_key_length (::GtkEntryCompletion* completion);
GI_INLINE_DECL gint get_minimum_key_length () noexcept;

// GtkTreeModel* gtk_entry_completion_get_model (GtkEntryCompletion* completion);
// ::GtkTreeModel* gtk_entry_completion_get_model (::GtkEntryCompletion* completion);
GI_INLINE_DECL Gtk::TreeModel get_model () noexcept;

// gboolean gtk_entry_completion_get_popup_completion (GtkEntryCompletion* completion);
// gboolean gtk_entry_completion_get_popup_completion (::GtkEntryCompletion* completion);
GI_INLINE_DECL bool get_popup_completion () noexcept;

// gboolean gtk_entry_completion_get_popup_set_width (GtkEntryCompletion* completion);
// gboolean gtk_entry_completion_get_popup_set_width (::GtkEntryCompletion* completion);
GI_INLINE_DECL bool get_popup_set_width () noexcept;

// gboolean gtk_entry_completion_get_popup_single_match (GtkEntryCompletion* completion);
// gboolean gtk_entry_completion_get_popup_single_match (::GtkEntryCompletion* completion);
GI_INLINE_DECL bool get_popup_single_match () noexcept;

// gint gtk_entry_completion_get_text_column (GtkEntryCompletion* completion);
// gint gtk_entry_completion_get_text_column (::GtkEntryCompletion* completion);
GI_INLINE_DECL gint get_text_column () noexcept;

// void gtk_entry_completion_insert_action_markup (GtkEntryCompletion* completion, gint index_, const gchar* markup);
// void gtk_entry_completion_insert_action_markup (::GtkEntryCompletion* completion, gint index_, const char* markup);
GI_INLINE_DECL void insert_action_markup (gint index_, const std::string & markup) noexcept;

// void gtk_entry_completion_insert_action_text (GtkEntryCompletion* completion, gint index_, const gchar* text);
// void gtk_entry_completion_insert_action_text (::GtkEntryCompletion* completion, gint index_, const char* text);
GI_INLINE_DECL void insert_action_text (gint index_, const std::string & text) noexcept;

// void gtk_entry_completion_insert_prefix (GtkEntryCompletion* completion);
// void gtk_entry_completion_insert_prefix (::GtkEntryCompletion* completion);
GI_INLINE_DECL void insert_prefix () noexcept;

// void gtk_entry_completion_set_inline_completion (GtkEntryCompletion* completion, gboolean inline_completion);
// void gtk_entry_completion_set_inline_completion (::GtkEntryCompletion* completion, gboolean inline_completion);
GI_INLINE_DECL void set_inline_completion (gboolean inline_completion) noexcept;

// void gtk_entry_completion_set_inline_selection (GtkEntryCompletion* completion, gboolean inline_selection);
// void gtk_entry_completion_set_inline_selection (::GtkEntryCompletion* completion, gboolean inline_selection);
GI_INLINE_DECL void set_inline_selection (gboolean inline_selection) noexcept;

// void gtk_entry_completion_set_match_func (GtkEntryCompletion* completion, GtkEntryCompletionMatchFunc func, gpointer func_data, GDestroyNotify func_notify);
// void gtk_entry_completion_set_match_func (::GtkEntryCompletion* completion, Gtk::EntryCompletionMatchFunc::cfunction_type func, void* func_data, GLib::DestroyNotify::cfunction_type func_notify);
GI_INLINE_DECL void set_match_func (Gtk::EntryCompletionMatchFunc func) noexcept;

// void gtk_entry_completion_set_minimum_key_length (GtkEntryCompletion* completion, gint length);
// void gtk_entry_completion_set_minimum_key_length (::GtkEntryCompletion* completion, gint length);
GI_INLINE_DECL void set_minimum_key_length (gint length) noexcept;

// void gtk_entry_completion_set_model (GtkEntryCompletion* completion, GtkTreeModel* model);
// void gtk_entry_completion_set_model (::GtkEntryCompletion* completion, ::GtkTreeModel* model);
GI_INLINE_DECL void set_model (Gtk::TreeModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

// void gtk_entry_completion_set_popup_completion (GtkEntryCompletion* completion, gboolean popup_completion);
// void gtk_entry_completion_set_popup_completion (::GtkEntryCompletion* completion, gboolean popup_completion);
GI_INLINE_DECL void set_popup_completion (gboolean popup_completion) noexcept;

// void gtk_entry_completion_set_popup_set_width (GtkEntryCompletion* completion, gboolean popup_set_width);
// void gtk_entry_completion_set_popup_set_width (::GtkEntryCompletion* completion, gboolean popup_set_width);
GI_INLINE_DECL void set_popup_set_width (gboolean popup_set_width) noexcept;

// void gtk_entry_completion_set_popup_single_match (GtkEntryCompletion* completion, gboolean popup_single_match);
// void gtk_entry_completion_set_popup_single_match (::GtkEntryCompletion* completion, gboolean popup_single_match);
GI_INLINE_DECL void set_popup_single_match (gboolean popup_single_match) noexcept;

// void gtk_entry_completion_set_text_column (GtkEntryCompletion* completion, gint column);
// void gtk_entry_completion_set_text_column (::GtkEntryCompletion* completion, gint column);
GI_INLINE_DECL void set_text_column (gint column) noexcept;

gi::property_proxy<Gtk::CellArea, base::EntryCompletionBase> property_cell_area()
{ return gi::property_proxy<Gtk::CellArea, base::EntryCompletionBase> (*this, "cell-area"); }
const gi::property_proxy<Gtk::CellArea, base::EntryCompletionBase> property_cell_area() const
{ return gi::property_proxy<Gtk::CellArea, base::EntryCompletionBase> (*this, "cell-area"); }

gi::property_proxy<bool, base::EntryCompletionBase> property_inline_completion()
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "inline-completion"); }
const gi::property_proxy<bool, base::EntryCompletionBase> property_inline_completion() const
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "inline-completion"); }

gi::property_proxy<bool, base::EntryCompletionBase> property_inline_selection()
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "inline-selection"); }
const gi::property_proxy<bool, base::EntryCompletionBase> property_inline_selection() const
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "inline-selection"); }

gi::property_proxy<gint, base::EntryCompletionBase> property_minimum_key_length()
{ return gi::property_proxy<gint, base::EntryCompletionBase> (*this, "minimum-key-length"); }
const gi::property_proxy<gint, base::EntryCompletionBase> property_minimum_key_length() const
{ return gi::property_proxy<gint, base::EntryCompletionBase> (*this, "minimum-key-length"); }

gi::property_proxy<Gtk::TreeModel, base::EntryCompletionBase> property_model()
{ return gi::property_proxy<Gtk::TreeModel, base::EntryCompletionBase> (*this, "model"); }
const gi::property_proxy<Gtk::TreeModel, base::EntryCompletionBase> property_model() const
{ return gi::property_proxy<Gtk::TreeModel, base::EntryCompletionBase> (*this, "model"); }

gi::property_proxy<bool, base::EntryCompletionBase> property_popup_completion()
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "popup-completion"); }
const gi::property_proxy<bool, base::EntryCompletionBase> property_popup_completion() const
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "popup-completion"); }

gi::property_proxy<bool, base::EntryCompletionBase> property_popup_set_width()
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "popup-set-width"); }
const gi::property_proxy<bool, base::EntryCompletionBase> property_popup_set_width() const
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "popup-set-width"); }

gi::property_proxy<bool, base::EntryCompletionBase> property_popup_single_match()
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "popup-single-match"); }
const gi::property_proxy<bool, base::EntryCompletionBase> property_popup_single_match() const
{ return gi::property_proxy<bool, base::EntryCompletionBase> (*this, "popup-single-match"); }

gi::property_proxy<gint, base::EntryCompletionBase> property_text_column()
{ return gi::property_proxy<gint, base::EntryCompletionBase> (*this, "text-column"); }
const gi::property_proxy<gint, base::EntryCompletionBase> property_text_column() const
{ return gi::property_proxy<gint, base::EntryCompletionBase> (*this, "text-column"); }

// signal action-activated
gi::signal_proxy<void(Gtk::EntryCompletion, gint index)> signal_action_activated()
{ return gi::signal_proxy<void(Gtk::EntryCompletion, gint index)> (*this, "action-activated"); }

// signal cursor-on-match
gi::signal_proxy<bool(Gtk::EntryCompletion, Gtk::TreeModel model, Gtk::TreeIter iter)> signal_cursor_on_match()
{ return gi::signal_proxy<bool(Gtk::EntryCompletion, Gtk::TreeModel model, Gtk::TreeIter iter)> (*this, "cursor-on-match"); }

// signal insert-prefix
gi::signal_proxy<bool(Gtk::EntryCompletion, const std::string & prefix)> signal_insert_prefix()
{ return gi::signal_proxy<bool(Gtk::EntryCompletion, const std::string & prefix)> (*this, "insert-prefix"); }

// signal match-selected
gi::signal_proxy<bool(Gtk::EntryCompletion, Gtk::TreeModel model, Gtk::TreeIter iter)> signal_match_selected()
{ return gi::signal_proxy<bool(Gtk::EntryCompletion, Gtk::TreeModel model, Gtk::TreeIter iter)> (*this, "match-selected"); }

// signal no-matches
gi::signal_proxy<void(Gtk::EntryCompletion)> signal_no_matches()
{ return gi::signal_proxy<void(Gtk::EntryCompletion)> (*this, "no-matches"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/entrycompletion_extra_def.hpp>)
#include <gtk/entrycompletion_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/entrycompletion_extra.hpp>)
#include <gtk/entrycompletion_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class EntryCompletion : public GI_GTK_ENTRYCOMPLETION_BASE
{ typedef GI_GTK_ENTRYCOMPLETION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEntryCompletion>
{ typedef Gtk::EntryCompletion type; }; 

} // namespace repository

} // namespace gi

#include "buildable.hpp"
#include "celllayout.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class EntryCompletionClassDef
{
typedef EntryCompletionClassDef self;
public:
typedef Gtk::EntryCompletion instance_type;
typedef ::GtkEntryCompletionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void EntryCompletion::action_activated (GtkEntryCompletion* completion, gint index_);
// void EntryCompletion::action_activated (::GtkEntryCompletion* completion, gint index_);
virtual void action_activated_ (gint index_) noexcept = 0;

// gboolean EntryCompletion::cursor_on_match (GtkEntryCompletion* completion, GtkTreeModel* model, GtkTreeIter* iter);
// gboolean EntryCompletion::cursor_on_match (::GtkEntryCompletion* completion, ::GtkTreeModel* model, ::GtkTreeIter* iter);
virtual bool cursor_on_match_ (Gtk::TreeModel model, Gtk::TreeIter iter) noexcept = 0;

// gboolean EntryCompletion::insert_prefix (GtkEntryCompletion* completion, const gchar* prefix);
// gboolean EntryCompletion::insert_prefix (::GtkEntryCompletion* completion, const char* prefix);
virtual bool insert_prefix_ (const std::string & prefix) noexcept = 0;

// gboolean EntryCompletion::match_selected (GtkEntryCompletion* completion, GtkTreeModel* model, GtkTreeIter* iter);
// gboolean EntryCompletion::match_selected (::GtkEntryCompletion* completion, ::GtkTreeModel* model, ::GtkTreeIter* iter);
virtual bool match_selected_ (Gtk::TreeModel model, Gtk::TreeIter iter) noexcept = 0;

// void EntryCompletion::no_matches (GtkEntryCompletion* completion);
// void EntryCompletion::no_matches (::GtkEntryCompletion* completion);
virtual void no_matches_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class EntryCompletionClass: public detail::ClassTemplate<Gtk::impl::internal::EntryCompletionClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl, Gtk::impl::internal::CellLayoutIfaceClassImpl>
{
typedef EntryCompletionClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::EntryCompletionClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl, Gtk::impl::internal::CellLayoutIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::BuildableIfaceClassImpl GtkBuildableIface_type;
typedef Gtk::impl::internal::CellLayoutIfaceClassImpl GtkCellLayoutIface_type;


// void EntryCompletion::action_activated (GtkEntryCompletion* completion, gint index_);
// void EntryCompletion::action_activated (::GtkEntryCompletion* completion, gint index_);
GI_INLINE_DECL void action_activated_ (gint index_) noexcept override;

// gboolean EntryCompletion::cursor_on_match (GtkEntryCompletion* completion, GtkTreeModel* model, GtkTreeIter* iter);
// gboolean EntryCompletion::cursor_on_match (::GtkEntryCompletion* completion, ::GtkTreeModel* model, ::GtkTreeIter* iter);
GI_INLINE_DECL bool cursor_on_match_ (Gtk::TreeModel model, Gtk::TreeIter iter) noexcept override;

// gboolean EntryCompletion::insert_prefix (GtkEntryCompletion* completion, const gchar* prefix);
// gboolean EntryCompletion::insert_prefix (::GtkEntryCompletion* completion, const char* prefix);
GI_INLINE_DECL bool insert_prefix_ (const std::string & prefix) noexcept override;

// gboolean EntryCompletion::match_selected (GtkEntryCompletion* completion, GtkTreeModel* model, GtkTreeIter* iter);
// gboolean EntryCompletion::match_selected (::GtkEntryCompletion* completion, ::GtkTreeModel* model, ::GtkTreeIter* iter);
GI_INLINE_DECL bool match_selected_ (Gtk::TreeModel model, Gtk::TreeIter iter) noexcept override;

// void EntryCompletion::no_matches (GtkEntryCompletion* completion);
// void EntryCompletion::no_matches (::GtkEntryCompletion* completion);
GI_INLINE_DECL void no_matches_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using EntryCompletionImpl = detail::ObjectImpl<EntryCompletion, internal::EntryCompletionClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
