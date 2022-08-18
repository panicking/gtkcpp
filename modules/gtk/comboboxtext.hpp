// AUTO-GENERATED

#ifndef _GI_GTK_COMBOBOXTEXT_HPP_
#define _GI_GTK_COMBOBOXTEXT_HPP_

#include "combobox.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ComboBoxText;

namespace base {


#define GI_GTK_COMBOBOXTEXT_BASE base::ComboBoxTextBase
class ComboBoxTextBase : public Gtk::ComboBox
{
typedef Gtk::ComboBox super_type;
public:
typedef ::GtkComboBoxText BaseObjectType;

ComboBoxTextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_combo_box_text_get_type(); } 

// GtkWidget* gtk_combo_box_text_new ();
// ::GtkComboBoxText* gtk_combo_box_text_new ();
static GI_INLINE_DECL Gtk::ComboBoxText new_ () noexcept;

// GtkWidget* gtk_combo_box_text_new_with_entry ();
// ::GtkComboBoxText* gtk_combo_box_text_new_with_entry ();
static GI_INLINE_DECL Gtk::ComboBoxText new_with_entry () noexcept;

// void gtk_combo_box_text_append (GtkComboBoxText* combo_box, const gchar* id, const gchar* text);
// void gtk_combo_box_text_append (::GtkComboBoxText* combo_box, const char* id, const char* text);
GI_INLINE_DECL void append (const std::string & id, const std::string & text) noexcept;
GI_INLINE_DECL void append (const std::string & text) noexcept;

// void gtk_combo_box_text_append_text (GtkComboBoxText* combo_box, const gchar* text);
// void gtk_combo_box_text_append_text (::GtkComboBoxText* combo_box, const char* text);
GI_INLINE_DECL void append_text (const std::string & text) noexcept;

// gchar* gtk_combo_box_text_get_active_text (GtkComboBoxText* combo_box);
// char* gtk_combo_box_text_get_active_text (::GtkComboBoxText* combo_box);
GI_INLINE_DECL std::string get_active_text () noexcept;

// void gtk_combo_box_text_insert (GtkComboBoxText* combo_box, gint position, const gchar* id, const gchar* text);
// void gtk_combo_box_text_insert (::GtkComboBoxText* combo_box, gint position, const char* id, const char* text);
GI_INLINE_DECL void insert (gint position, const std::string & id, const std::string & text) noexcept;
GI_INLINE_DECL void insert (gint position, const std::string & text) noexcept;

// void gtk_combo_box_text_insert_text (GtkComboBoxText* combo_box, gint position, const gchar* text);
// void gtk_combo_box_text_insert_text (::GtkComboBoxText* combo_box, gint position, const char* text);
GI_INLINE_DECL void insert_text (gint position, const std::string & text) noexcept;

// void gtk_combo_box_text_prepend (GtkComboBoxText* combo_box, const gchar* id, const gchar* text);
// void gtk_combo_box_text_prepend (::GtkComboBoxText* combo_box, const char* id, const char* text);
GI_INLINE_DECL void prepend (const std::string & id, const std::string & text) noexcept;
GI_INLINE_DECL void prepend (const std::string & text) noexcept;

// void gtk_combo_box_text_prepend_text (GtkComboBoxText* combo_box, const gchar* text);
// void gtk_combo_box_text_prepend_text (::GtkComboBoxText* combo_box, const char* text);
GI_INLINE_DECL void prepend_text (const std::string & text) noexcept;

// void gtk_combo_box_text_remove (GtkComboBoxText* combo_box, gint position);
// void gtk_combo_box_text_remove (::GtkComboBoxText* combo_box, gint position);
GI_INLINE_DECL void remove (gint position) noexcept;

// void gtk_combo_box_text_remove_all (GtkComboBoxText* combo_box);
// void gtk_combo_box_text_remove_all (::GtkComboBoxText* combo_box);
GI_INLINE_DECL void remove_all () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/comboboxtext_extra_def.hpp>)
#include <gtk/comboboxtext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/comboboxtext_extra.hpp>)
#include <gtk/comboboxtext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ComboBoxText : public GI_GTK_COMBOBOXTEXT_BASE
{ typedef GI_GTK_COMBOBOXTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkComboBoxText>
{ typedef Gtk::ComboBoxText type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ComboBoxTextClassDef
{
typedef ComboBoxTextClassDef self;
public:
typedef Gtk::ComboBoxText instance_type;
typedef ::GtkComboBoxTextClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ComboBoxTextClass: public detail::ClassTemplate<Gtk::impl::internal::ComboBoxTextClassDef, Gtk::impl::internal::ComboBoxClass>
{
typedef ComboBoxTextClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ComboBoxTextClassDef, Gtk::impl::internal::ComboBoxClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using ComboBoxTextImpl = detail::ObjectImpl<ComboBoxText, internal::ComboBoxTextClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
