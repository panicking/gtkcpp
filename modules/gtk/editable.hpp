// AUTO-GENERATED

#ifndef _GI_GTK_EDITABLE_HPP_
#define _GI_GTK_EDITABLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class Editable;

namespace base {


#define GI_GTK_EDITABLE_BASE base::EditableBase
class EditableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkEditable BaseObjectType;

EditableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_editable_get_type(); } 

// void gtk_editable_copy_clipboard (GtkEditable* editable);
// void gtk_editable_copy_clipboard (::GtkEditable* editable);
GI_INLINE_DECL void copy_clipboard () noexcept;

// void gtk_editable_cut_clipboard (GtkEditable* editable);
// void gtk_editable_cut_clipboard (::GtkEditable* editable);
GI_INLINE_DECL void cut_clipboard () noexcept;

// void gtk_editable_delete_selection (GtkEditable* editable);
// void gtk_editable_delete_selection (::GtkEditable* editable);
GI_INLINE_DECL void delete_selection () noexcept;

// void gtk_editable_delete_text (GtkEditable* editable, gint start_pos, gint end_pos);
// void gtk_editable_delete_text (::GtkEditable* editable, gint start_pos, gint end_pos);
GI_INLINE_DECL void delete_text (gint start_pos, gint end_pos) noexcept;

// gchar* gtk_editable_get_chars (GtkEditable* editable, gint start_pos, gint end_pos);
// char* gtk_editable_get_chars (::GtkEditable* editable, gint start_pos, gint end_pos);
GI_INLINE_DECL std::string get_chars (gint start_pos, gint end_pos) noexcept;

// gboolean gtk_editable_get_editable (GtkEditable* editable);
// gboolean gtk_editable_get_editable (::GtkEditable* editable);
GI_INLINE_DECL bool get_editable () noexcept;

// gint gtk_editable_get_position (GtkEditable* editable);
// gint gtk_editable_get_position (::GtkEditable* editable);
GI_INLINE_DECL gint get_position () noexcept;

// gboolean gtk_editable_get_selection_bounds (GtkEditable* editable, gint* start_pos, gint* end_pos);
// gboolean gtk_editable_get_selection_bounds (::GtkEditable* editable, gint* start_pos, gint* end_pos);
GI_INLINE_DECL bool get_selection_bounds (gint * start_pos = nullptr, gint * end_pos = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint> get_selection_bounds () noexcept;

// void gtk_editable_insert_text (GtkEditable* editable, const gchar* new_text, gint new_text_length, gint* position);
// void gtk_editable_insert_text (::GtkEditable* editable, const char* new_text, gint new_text_length, gint* position);
GI_INLINE_DECL void insert_text (const std::string & new_text, gint new_text_length, gint & position) noexcept;

// void gtk_editable_paste_clipboard (GtkEditable* editable);
// void gtk_editable_paste_clipboard (::GtkEditable* editable);
GI_INLINE_DECL void paste_clipboard () noexcept;

// void gtk_editable_select_region (GtkEditable* editable, gint start_pos, gint end_pos);
// void gtk_editable_select_region (::GtkEditable* editable, gint start_pos, gint end_pos);
GI_INLINE_DECL void select_region (gint start_pos, gint end_pos) noexcept;

// void gtk_editable_set_editable (GtkEditable* editable, gboolean is_editable);
// void gtk_editable_set_editable (::GtkEditable* editable, gboolean is_editable);
GI_INLINE_DECL void set_editable (gboolean is_editable) noexcept;

// void gtk_editable_set_position (GtkEditable* editable, gint position);
// void gtk_editable_set_position (::GtkEditable* editable, gint position);
GI_INLINE_DECL void set_position (gint position) noexcept;

// signal changed
gi::signal_proxy<void(Gtk::Editable)> signal_changed()
{ return gi::signal_proxy<void(Gtk::Editable)> (*this, "changed"); }

// signal delete-text
gi::signal_proxy<void(Gtk::Editable, gint start_pos, gint end_pos)> signal_delete_text()
{ return gi::signal_proxy<void(Gtk::Editable, gint start_pos, gint end_pos)> (*this, "delete-text"); }

// signal insert-text
// SKIP; glib:signal out parameter not supported

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/editable_extra_def.hpp>)
#include <gtk/editable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/editable_extra.hpp>)
#include <gtk/editable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Editable : public GI_GTK_EDITABLE_BASE
{ typedef GI_GTK_EDITABLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkEditable>
{ typedef Gtk::Editable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class EditableInterfaceDef
{
typedef EditableInterfaceDef self;
public:
typedef Gtk::Editable instance_type;
typedef ::GtkEditableInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void Editable::changed (GtkEditable* editable);
// void Editable::changed (::GtkEditable* editable);
virtual void changed_ () noexcept = 0;

// void Editable::delete_text (GtkEditable* editable, gint start_pos, gint end_pos);
// void Editable::delete_text (::GtkEditable* editable, gint start_pos, gint end_pos);
virtual void delete_text_ (gint start_pos, gint end_pos) noexcept = 0;

// void Editable::do_delete_text (GtkEditable* editable, gint start_pos, gint end_pos);
// void Editable::do_delete_text (::GtkEditable* editable, gint start_pos, gint end_pos);
virtual void do_delete_text_ (gint start_pos, gint end_pos) noexcept = 0;

// void Editable::do_insert_text (GtkEditable* editable, const gchar* new_text, gint new_text_length, gint* position);
// void Editable::do_insert_text (::GtkEditable* editable, const char* new_text, gint new_text_length, gint* position);
// SKIP; virtual-method out parameter not supported

// gchar* Editable::get_chars (GtkEditable* editable, gint start_pos, gint end_pos);
// char* Editable::get_chars (::GtkEditable* editable, gint start_pos, gint end_pos);
virtual std::string get_chars_ (gint start_pos, gint end_pos) noexcept = 0;

// gint Editable::get_position (GtkEditable* editable);
// gint Editable::get_position (::GtkEditable* editable);
virtual gint get_position_ () noexcept = 0;

// gboolean Editable::get_selection_bounds (GtkEditable* editable, gint* start_pos, gint* end_pos);
// gboolean Editable::get_selection_bounds (::GtkEditable* editable, gint* start_pos, gint* end_pos);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void Editable::insert_text (GtkEditable* editable, const gchar* new_text, gint new_text_length, gint* position);
// void Editable::insert_text (::GtkEditable* editable, const char* new_text, gint new_text_length, gint* position);
// SKIP; virtual-method out parameter not supported

// void Editable::set_position (GtkEditable* editable, gint position);
// void Editable::set_position (::GtkEditable* editable, gint position);
virtual void set_position_ (gint position) noexcept = 0;

// void Editable::set_selection_bounds (GtkEditable* editable, gint start_pos, gint end_pos);
// void Editable::set_selection_bounds (::GtkEditable* editable, gint start_pos, gint end_pos);
virtual void set_selection_bounds_ (gint start_pos, gint end_pos) noexcept = 0;


};

using EditableImpl = detail::InterfaceImpl<EditableInterfaceDef>;

class EditableInterfaceClassImpl: public detail::InterfaceClassImpl<EditableImpl>
{
typedef EditableInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<EditableImpl> super;

protected:
using super::super;

// void Editable::changed (GtkEditable* editable);
// void Editable::changed (::GtkEditable* editable);
GI_INLINE_DECL void changed_ () noexcept override;

// void Editable::delete_text (GtkEditable* editable, gint start_pos, gint end_pos);
// void Editable::delete_text (::GtkEditable* editable, gint start_pos, gint end_pos);
GI_INLINE_DECL void delete_text_ (gint start_pos, gint end_pos) noexcept override;

// void Editable::do_delete_text (GtkEditable* editable, gint start_pos, gint end_pos);
// void Editable::do_delete_text (::GtkEditable* editable, gint start_pos, gint end_pos);
GI_INLINE_DECL void do_delete_text_ (gint start_pos, gint end_pos) noexcept override;

// void Editable::do_insert_text (GtkEditable* editable, const gchar* new_text, gint new_text_length, gint* position);
// void Editable::do_insert_text (::GtkEditable* editable, const char* new_text, gint new_text_length, gint* position);
// SKIP; virtual-method out parameter not supported

// gchar* Editable::get_chars (GtkEditable* editable, gint start_pos, gint end_pos);
// char* Editable::get_chars (::GtkEditable* editable, gint start_pos, gint end_pos);
GI_INLINE_DECL std::string get_chars_ (gint start_pos, gint end_pos) noexcept override;

// gint Editable::get_position (GtkEditable* editable);
// gint Editable::get_position (::GtkEditable* editable);
GI_INLINE_DECL gint get_position_ () noexcept override;

// gboolean Editable::get_selection_bounds (GtkEditable* editable, gint* start_pos, gint* end_pos);
// gboolean Editable::get_selection_bounds (::GtkEditable* editable, gint* start_pos, gint* end_pos);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void Editable::insert_text (GtkEditable* editable, const gchar* new_text, gint new_text_length, gint* position);
// void Editable::insert_text (::GtkEditable* editable, const char* new_text, gint new_text_length, gint* position);
// SKIP; virtual-method out parameter not supported

// void Editable::set_position (GtkEditable* editable, gint position);
// void Editable::set_position (::GtkEditable* editable, gint position);
GI_INLINE_DECL void set_position_ (gint position) noexcept override;

// void Editable::set_selection_bounds (GtkEditable* editable, gint start_pos, gint end_pos);
// void Editable::set_selection_bounds (::GtkEditable* editable, gint start_pos, gint end_pos);
GI_INLINE_DECL void set_selection_bounds_ (gint start_pos, gint end_pos) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
