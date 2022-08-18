// AUTO-GENERATED

#ifndef _GI_GTK_COMBOBOX_HPP_
#define _GI_GTK_COMBOBOX_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class CellArea;
class CellEditable;
class CellLayout;
class TreeIter;
class TreeModel;

class ComboBox;

namespace base {


#define GI_GTK_COMBOBOX_BASE base::ComboBoxBase
class ComboBoxBase : public Gtk::Bin
{
typedef Gtk::Bin super_type;
public:
typedef ::GtkComboBox BaseObjectType;

ComboBoxBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_combo_box_get_type(); } 

GI_INLINE_DECL Gtk::CellEditable interface_ (gi::interface_tag<Gtk::CellEditable>);

GI_INLINE_DECL operator Gtk::CellEditable ();

GI_INLINE_DECL Gtk::CellLayout interface_ (gi::interface_tag<Gtk::CellLayout>);

GI_INLINE_DECL operator Gtk::CellLayout ();

// GtkWidget* gtk_combo_box_new ();
// ::GtkComboBox* gtk_combo_box_new ();
static GI_INLINE_DECL Gtk::ComboBox new_ () noexcept;

// GtkWidget* gtk_combo_box_new_with_area (GtkCellArea* area);
// ::GtkComboBox* gtk_combo_box_new_with_area (::GtkCellArea* area);
static GI_INLINE_DECL Gtk::ComboBox new_with_area (Gtk::CellArea area) noexcept;

// GtkWidget* gtk_combo_box_new_with_area_and_entry (GtkCellArea* area);
// ::GtkComboBox* gtk_combo_box_new_with_area_and_entry (::GtkCellArea* area);
static GI_INLINE_DECL Gtk::ComboBox new_with_area_and_entry (Gtk::CellArea area) noexcept;

// GtkWidget* gtk_combo_box_new_with_entry ();
// ::GtkComboBox* gtk_combo_box_new_with_entry ();
static GI_INLINE_DECL Gtk::ComboBox new_with_entry () noexcept;

// GtkWidget* gtk_combo_box_new_with_model (GtkTreeModel* model);
// ::GtkComboBox* gtk_combo_box_new_with_model (::GtkTreeModel* model);
static GI_INLINE_DECL Gtk::ComboBox new_with_model (Gtk::TreeModel model) noexcept;

// GtkWidget* gtk_combo_box_new_with_model_and_entry (GtkTreeModel* model);
// ::GtkComboBox* gtk_combo_box_new_with_model_and_entry (::GtkTreeModel* model);
static GI_INLINE_DECL Gtk::ComboBox new_with_model_and_entry (Gtk::TreeModel model) noexcept;

// gint gtk_combo_box_get_active (GtkComboBox* combo_box);
// gint gtk_combo_box_get_active (::GtkComboBox* combo_box);
GI_INLINE_DECL gint get_active () noexcept;

// const gchar* gtk_combo_box_get_active_id (GtkComboBox* combo_box);
// const char* gtk_combo_box_get_active_id (::GtkComboBox* combo_box);
GI_INLINE_DECL std::string get_active_id () noexcept;

// gboolean gtk_combo_box_get_active_iter (GtkComboBox* combo_box, GtkTreeIter* iter);
// gboolean gtk_combo_box_get_active_iter (::GtkComboBox* combo_box, ::GtkTreeIter* iter);
GI_INLINE_DECL bool get_active_iter (Gtk::TreeIter & iter) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> get_active_iter () noexcept;

// gboolean gtk_combo_box_get_add_tearoffs (GtkComboBox* combo_box);
// gboolean gtk_combo_box_get_add_tearoffs (::GtkComboBox* combo_box);
// IGNORE; deprecated

// GtkSensitivityType gtk_combo_box_get_button_sensitivity (GtkComboBox* combo_box);
// ::GtkSensitivityType gtk_combo_box_get_button_sensitivity (::GtkComboBox* combo_box);
GI_INLINE_DECL Gtk::SensitivityType get_button_sensitivity () noexcept;

// gint gtk_combo_box_get_column_span_column (GtkComboBox* combo_box);
// gint gtk_combo_box_get_column_span_column (::GtkComboBox* combo_box);
GI_INLINE_DECL gint get_column_span_column () noexcept;

// gint gtk_combo_box_get_entry_text_column (GtkComboBox* combo_box);
// gint gtk_combo_box_get_entry_text_column (::GtkComboBox* combo_box);
GI_INLINE_DECL gint get_entry_text_column () noexcept;

// gboolean gtk_combo_box_get_focus_on_click (GtkComboBox* combo);
// gboolean gtk_combo_box_get_focus_on_click (::GtkComboBox* combo);
// IGNORE; deprecated

// gboolean gtk_combo_box_get_has_entry (GtkComboBox* combo_box);
// gboolean gtk_combo_box_get_has_entry (::GtkComboBox* combo_box);
GI_INLINE_DECL bool get_has_entry () noexcept;

// gint gtk_combo_box_get_id_column (GtkComboBox* combo_box);
// gint gtk_combo_box_get_id_column (::GtkComboBox* combo_box);
GI_INLINE_DECL gint get_id_column () noexcept;

// GtkTreeModel* gtk_combo_box_get_model (GtkComboBox* combo_box);
// ::GtkTreeModel* gtk_combo_box_get_model (::GtkComboBox* combo_box);
GI_INLINE_DECL Gtk::TreeModel get_model () noexcept;

// AtkObject* gtk_combo_box_get_popup_accessible (GtkComboBox* combo_box);
// ::AtkObject* gtk_combo_box_get_popup_accessible (::GtkComboBox* combo_box);
GI_INLINE_DECL Atk::Object get_popup_accessible () noexcept;

// gboolean gtk_combo_box_get_popup_fixed_width (GtkComboBox* combo_box);
// gboolean gtk_combo_box_get_popup_fixed_width (::GtkComboBox* combo_box);
GI_INLINE_DECL bool get_popup_fixed_width () noexcept;

// FAILURE on gtk_combo_box_get_row_separator_func; No such node (<xmlattr>.transfer-ownership)
// gint gtk_combo_box_get_row_span_column (GtkComboBox* combo_box);
// gint gtk_combo_box_get_row_span_column (::GtkComboBox* combo_box);
GI_INLINE_DECL gint get_row_span_column () noexcept;

// const gchar* gtk_combo_box_get_title (GtkComboBox* combo_box);
// const char* gtk_combo_box_get_title (::GtkComboBox* combo_box);
// IGNORE; deprecated

// gint gtk_combo_box_get_wrap_width (GtkComboBox* combo_box);
// gint gtk_combo_box_get_wrap_width (::GtkComboBox* combo_box);
GI_INLINE_DECL gint get_wrap_width () noexcept;

// void gtk_combo_box_popdown (GtkComboBox* combo_box);
// void gtk_combo_box_popdown (::GtkComboBox* combo_box);
GI_INLINE_DECL void popdown () noexcept;

// void gtk_combo_box_popup (GtkComboBox* combo_box);
// void gtk_combo_box_popup (::GtkComboBox* combo_box);
GI_INLINE_DECL void popup () noexcept;

// void gtk_combo_box_popup_for_device (GtkComboBox* combo_box, GdkDevice* device);
// void gtk_combo_box_popup_for_device (::GtkComboBox* combo_box, ::GdkDevice* device);
GI_INLINE_DECL void popup_for_device (Gdk::Device device) noexcept;

// void gtk_combo_box_set_active (GtkComboBox* combo_box, gint index_);
// void gtk_combo_box_set_active (::GtkComboBox* combo_box, gint index_);
GI_INLINE_DECL void set_active (gint index_) noexcept;

// gboolean gtk_combo_box_set_active_id (GtkComboBox* combo_box, const gchar* active_id);
// gboolean gtk_combo_box_set_active_id (::GtkComboBox* combo_box, const char* active_id);
GI_INLINE_DECL bool set_active_id (const std::string & active_id) noexcept;
GI_INLINE_DECL bool set_active_id () noexcept;

// void gtk_combo_box_set_active_iter (GtkComboBox* combo_box, GtkTreeIter* iter);
// void gtk_combo_box_set_active_iter (::GtkComboBox* combo_box, ::GtkTreeIter* iter);
GI_INLINE_DECL void set_active_iter (Gtk::TreeIter iter) noexcept;
GI_INLINE_DECL void set_active_iter () noexcept;

// void gtk_combo_box_set_add_tearoffs (GtkComboBox* combo_box, gboolean add_tearoffs);
// void gtk_combo_box_set_add_tearoffs (::GtkComboBox* combo_box, gboolean add_tearoffs);
// IGNORE; deprecated

// void gtk_combo_box_set_button_sensitivity (GtkComboBox* combo_box, GtkSensitivityType sensitivity);
// void gtk_combo_box_set_button_sensitivity (::GtkComboBox* combo_box, ::GtkSensitivityType sensitivity);
GI_INLINE_DECL void set_button_sensitivity (Gtk::SensitivityType sensitivity) noexcept;

// void gtk_combo_box_set_column_span_column (GtkComboBox* combo_box, gint column_span);
// void gtk_combo_box_set_column_span_column (::GtkComboBox* combo_box, gint column_span);
GI_INLINE_DECL void set_column_span_column (gint column_span) noexcept;

// void gtk_combo_box_set_entry_text_column (GtkComboBox* combo_box, gint text_column);
// void gtk_combo_box_set_entry_text_column (::GtkComboBox* combo_box, gint text_column);
GI_INLINE_DECL void set_entry_text_column (gint text_column) noexcept;

// void gtk_combo_box_set_focus_on_click (GtkComboBox* combo, gboolean focus_on_click);
// void gtk_combo_box_set_focus_on_click (::GtkComboBox* combo, gboolean focus_on_click);
// IGNORE; deprecated

// void gtk_combo_box_set_id_column (GtkComboBox* combo_box, gint id_column);
// void gtk_combo_box_set_id_column (::GtkComboBox* combo_box, gint id_column);
GI_INLINE_DECL void set_id_column (gint id_column) noexcept;

// void gtk_combo_box_set_model (GtkComboBox* combo_box, GtkTreeModel* model);
// void gtk_combo_box_set_model (::GtkComboBox* combo_box, ::GtkTreeModel* model);
GI_INLINE_DECL void set_model (Gtk::TreeModel model) noexcept;
GI_INLINE_DECL void set_model () noexcept;

// void gtk_combo_box_set_popup_fixed_width (GtkComboBox* combo_box, gboolean fixed);
// void gtk_combo_box_set_popup_fixed_width (::GtkComboBox* combo_box, gboolean fixed);
GI_INLINE_DECL void set_popup_fixed_width (gboolean fixed) noexcept;

// void gtk_combo_box_set_row_separator_func (GtkComboBox* combo_box, GtkTreeViewRowSeparatorFunc func, gpointer data, GDestroyNotify destroy);
// void gtk_combo_box_set_row_separator_func (::GtkComboBox* combo_box, Gtk::TreeViewRowSeparatorFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_row_separator_func (Gtk::TreeViewRowSeparatorFunc func) noexcept;

// void gtk_combo_box_set_row_span_column (GtkComboBox* combo_box, gint row_span);
// void gtk_combo_box_set_row_span_column (::GtkComboBox* combo_box, gint row_span);
GI_INLINE_DECL void set_row_span_column (gint row_span) noexcept;

// void gtk_combo_box_set_title (GtkComboBox* combo_box, const gchar* title);
// void gtk_combo_box_set_title (::GtkComboBox* combo_box, const char* title);
// IGNORE; deprecated

// void gtk_combo_box_set_wrap_width (GtkComboBox* combo_box, gint width);
// void gtk_combo_box_set_wrap_width (::GtkComboBox* combo_box, gint width);
GI_INLINE_DECL void set_wrap_width (gint width) noexcept;

gi::property_proxy<gint, base::ComboBoxBase> property_active()
{ return gi::property_proxy<gint, base::ComboBoxBase> (*this, "active"); }
const gi::property_proxy<gint, base::ComboBoxBase> property_active() const
{ return gi::property_proxy<gint, base::ComboBoxBase> (*this, "active"); }

gi::property_proxy<std::string, base::ComboBoxBase> property_active_id()
{ return gi::property_proxy<std::string, base::ComboBoxBase> (*this, "active-id"); }
const gi::property_proxy<std::string, base::ComboBoxBase> property_active_id() const
{ return gi::property_proxy<std::string, base::ComboBoxBase> (*this, "active-id"); }

gi::property_proxy<bool, base::ComboBoxBase> property_add_tearoffs()
{ return gi::property_proxy<bool, base::ComboBoxBase> (*this, "add-tearoffs"); }
const gi::property_proxy<bool, base::ComboBoxBase> property_add_tearoffs() const
{ return gi::property_proxy<bool, base::ComboBoxBase> (*this, "add-tearoffs"); }

gi::property_proxy<Gtk::SensitivityType, base::ComboBoxBase> property_button_sensitivity()
{ return gi::property_proxy<Gtk::SensitivityType, base::ComboBoxBase> (*this, "button-sensitivity"); }
const gi::property_proxy<Gtk::SensitivityType, base::ComboBoxBase> property_button_sensitivity() const
{ return gi::property_proxy<Gtk::SensitivityType, base::ComboBoxBase> (*this, "button-sensitivity"); }

gi::property_proxy<Gtk::CellArea, base::ComboBoxBase> property_cell_area()
{ return gi::property_proxy<Gtk::CellArea, base::ComboBoxBase> (*this, "cell-area"); }
const gi::property_proxy<Gtk::CellArea, base::ComboBoxBase> property_cell_area() const
{ return gi::property_proxy<Gtk::CellArea, base::ComboBoxBase> (*this, "cell-area"); }

gi::property_proxy<gint, base::ComboBoxBase> property_column_span_column()
{ return gi::property_proxy<gint, base::ComboBoxBase> (*this, "column-span-column"); }
const gi::property_proxy<gint, base::ComboBoxBase> property_column_span_column() const
{ return gi::property_proxy<gint, base::ComboBoxBase> (*this, "column-span-column"); }

gi::property_proxy<gint, base::ComboBoxBase> property_entry_text_column()
{ return gi::property_proxy<gint, base::ComboBoxBase> (*this, "entry-text-column"); }
const gi::property_proxy<gint, base::ComboBoxBase> property_entry_text_column() const
{ return gi::property_proxy<gint, base::ComboBoxBase> (*this, "entry-text-column"); }

gi::property_proxy<bool, base::ComboBoxBase> property_has_entry()
{ return gi::property_proxy<bool, base::ComboBoxBase> (*this, "has-entry"); }
const gi::property_proxy<bool, base::ComboBoxBase> property_has_entry() const
{ return gi::property_proxy<bool, base::ComboBoxBase> (*this, "has-entry"); }

gi::property_proxy<bool, base::ComboBoxBase> property_has_frame()
{ return gi::property_proxy<bool, base::ComboBoxBase> (*this, "has-frame"); }
const gi::property_proxy<bool, base::ComboBoxBase> property_has_frame() const
{ return gi::property_proxy<bool, base::ComboBoxBase> (*this, "has-frame"); }

gi::property_proxy<gint, base::ComboBoxBase> property_id_column()
{ return gi::property_proxy<gint, base::ComboBoxBase> (*this, "id-column"); }
const gi::property_proxy<gint, base::ComboBoxBase> property_id_column() const
{ return gi::property_proxy<gint, base::ComboBoxBase> (*this, "id-column"); }

gi::property_proxy<Gtk::TreeModel, base::ComboBoxBase> property_model()
{ return gi::property_proxy<Gtk::TreeModel, base::ComboBoxBase> (*this, "model"); }
const gi::property_proxy<Gtk::TreeModel, base::ComboBoxBase> property_model() const
{ return gi::property_proxy<Gtk::TreeModel, base::ComboBoxBase> (*this, "model"); }

gi::property_proxy<bool, base::ComboBoxBase> property_popup_fixed_width()
{ return gi::property_proxy<bool, base::ComboBoxBase> (*this, "popup-fixed-width"); }
const gi::property_proxy<bool, base::ComboBoxBase> property_popup_fixed_width() const
{ return gi::property_proxy<bool, base::ComboBoxBase> (*this, "popup-fixed-width"); }

gi::property_proxy<bool, base::ComboBoxBase> property_popup_shown()
{ return gi::property_proxy<bool, base::ComboBoxBase> (*this, "popup-shown"); }
const gi::property_proxy<bool, base::ComboBoxBase> property_popup_shown() const
{ return gi::property_proxy<bool, base::ComboBoxBase> (*this, "popup-shown"); }

gi::property_proxy<gint, base::ComboBoxBase> property_row_span_column()
{ return gi::property_proxy<gint, base::ComboBoxBase> (*this, "row-span-column"); }
const gi::property_proxy<gint, base::ComboBoxBase> property_row_span_column() const
{ return gi::property_proxy<gint, base::ComboBoxBase> (*this, "row-span-column"); }

gi::property_proxy<std::string, base::ComboBoxBase> property_tearoff_title()
{ return gi::property_proxy<std::string, base::ComboBoxBase> (*this, "tearoff-title"); }
const gi::property_proxy<std::string, base::ComboBoxBase> property_tearoff_title() const
{ return gi::property_proxy<std::string, base::ComboBoxBase> (*this, "tearoff-title"); }

gi::property_proxy<gint, base::ComboBoxBase> property_wrap_width()
{ return gi::property_proxy<gint, base::ComboBoxBase> (*this, "wrap-width"); }
const gi::property_proxy<gint, base::ComboBoxBase> property_wrap_width() const
{ return gi::property_proxy<gint, base::ComboBoxBase> (*this, "wrap-width"); }

// signal changed
gi::signal_proxy<void(Gtk::ComboBox)> signal_changed()
{ return gi::signal_proxy<void(Gtk::ComboBox)> (*this, "changed"); }

// signal format-entry-text
gi::signal_proxy<std::string(Gtk::ComboBox, const std::string & path)> signal_format_entry_text()
{ return gi::signal_proxy<std::string(Gtk::ComboBox, const std::string & path)> (*this, "format-entry-text"); }

// signal move-active
gi::signal_proxy<void(Gtk::ComboBox, Gtk::ScrollType scroll_type)> signal_move_active()
{ return gi::signal_proxy<void(Gtk::ComboBox, Gtk::ScrollType scroll_type)> (*this, "move-active"); }

// signal popdown
gi::signal_proxy<bool(Gtk::ComboBox)> signal_popdown()
{ return gi::signal_proxy<bool(Gtk::ComboBox)> (*this, "popdown"); }

// signal popup
gi::signal_proxy<void(Gtk::ComboBox)> signal_popup()
{ return gi::signal_proxy<void(Gtk::ComboBox)> (*this, "popup"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/combobox_extra_def.hpp>)
#include <gtk/combobox_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/combobox_extra.hpp>)
#include <gtk/combobox_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ComboBox : public GI_GTK_COMBOBOX_BASE
{ typedef GI_GTK_COMBOBOX_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkComboBox>
{ typedef Gtk::ComboBox type; }; 

} // namespace repository

} // namespace gi

#include "celleditable.hpp"
#include "celllayout.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ComboBoxClassDef
{
typedef ComboBoxClassDef self;
public:
typedef Gtk::ComboBox instance_type;
typedef ::GtkComboBoxClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ComboBox::changed (GtkComboBox* combo_box);
// void ComboBox::changed (::GtkComboBox* combo_box);
virtual void changed_ () noexcept = 0;

// gchar* ComboBox::format_entry_text (GtkComboBox* combo_box, const gchar* path);
// char* ComboBox::format_entry_text (::GtkComboBox* combo_box, const char* path);
virtual std::string format_entry_text_ (const std::string & path) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ComboBoxClass: public detail::ClassTemplate<Gtk::impl::internal::ComboBoxClassDef, Gtk::impl::internal::BinClass, Gtk::impl::internal::CellEditableIfaceClassImpl, Gtk::impl::internal::CellLayoutIfaceClassImpl>
{
typedef ComboBoxClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ComboBoxClassDef, Gtk::impl::internal::BinClass, Gtk::impl::internal::CellEditableIfaceClassImpl, Gtk::impl::internal::CellLayoutIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::CellEditableIfaceClassImpl GtkCellEditableIface_type;
typedef Gtk::impl::internal::CellLayoutIfaceClassImpl GtkCellLayoutIface_type;


// void ComboBox::changed (GtkComboBox* combo_box);
// void ComboBox::changed (::GtkComboBox* combo_box);
GI_INLINE_DECL void changed_ () noexcept override;

// gchar* ComboBox::format_entry_text (GtkComboBox* combo_box, const gchar* path);
// char* ComboBox::format_entry_text (::GtkComboBox* combo_box, const char* path);
GI_INLINE_DECL std::string format_entry_text_ (const std::string & path) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ComboBoxImpl = detail::ObjectImpl<ComboBox, internal::ComboBoxClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
