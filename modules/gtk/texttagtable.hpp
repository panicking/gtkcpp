// AUTO-GENERATED

#ifndef _GI_GTK_TEXTTAGTABLE_HPP_
#define _GI_GTK_TEXTTAGTABLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Buildable;
class TextTag;

class TextTagTable;

namespace base {


#define GI_GTK_TEXTTAGTABLE_BASE base::TextTagTableBase
class TextTagTableBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkTextTagTable BaseObjectType;

TextTagTableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_text_tag_table_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

// GtkTextTagTable* gtk_text_tag_table_new ();
// ::GtkTextTagTable* gtk_text_tag_table_new ();
static GI_INLINE_DECL Gtk::TextTagTable new_ () noexcept;

// gboolean gtk_text_tag_table_add (GtkTextTagTable* table, GtkTextTag* tag);
// gboolean gtk_text_tag_table_add (::GtkTextTagTable* table, ::GtkTextTag* tag);
GI_INLINE_DECL bool add (Gtk::TextTag tag) noexcept;

// void gtk_text_tag_table_foreach (GtkTextTagTable* table, GtkTextTagTableForeach func, gpointer data);
// void gtk_text_tag_table_foreach (::GtkTextTagTable* table, Gtk::TextTagTableForeach::cfunction_type func, void* data);
GI_INLINE_DECL void foreach (Gtk::TextTagTableForeach func) noexcept;

// gint gtk_text_tag_table_get_size (GtkTextTagTable* table);
// gint gtk_text_tag_table_get_size (::GtkTextTagTable* table);
GI_INLINE_DECL gint get_size () noexcept;

// GtkTextTag* gtk_text_tag_table_lookup (GtkTextTagTable* table, const gchar* name);
// ::GtkTextTag* gtk_text_tag_table_lookup (::GtkTextTagTable* table, const char* name);
GI_INLINE_DECL Gtk::TextTag lookup (const std::string & name) noexcept;

// void gtk_text_tag_table_remove (GtkTextTagTable* table, GtkTextTag* tag);
// void gtk_text_tag_table_remove (::GtkTextTagTable* table, ::GtkTextTag* tag);
GI_INLINE_DECL void remove (Gtk::TextTag tag) noexcept;

// signal tag-added
gi::signal_proxy<void(Gtk::TextTagTable, Gtk::TextTag tag)> signal_tag_added()
{ return gi::signal_proxy<void(Gtk::TextTagTable, Gtk::TextTag tag)> (*this, "tag-added"); }

// signal tag-changed
gi::signal_proxy<void(Gtk::TextTagTable, Gtk::TextTag tag, gboolean size_changed)> signal_tag_changed()
{ return gi::signal_proxy<void(Gtk::TextTagTable, Gtk::TextTag tag, gboolean size_changed)> (*this, "tag-changed"); }

// signal tag-removed
gi::signal_proxy<void(Gtk::TextTagTable, Gtk::TextTag tag)> signal_tag_removed()
{ return gi::signal_proxy<void(Gtk::TextTagTable, Gtk::TextTag tag)> (*this, "tag-removed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/texttagtable_extra_def.hpp>)
#include <gtk/texttagtable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/texttagtable_extra.hpp>)
#include <gtk/texttagtable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TextTagTable : public GI_GTK_TEXTTAGTABLE_BASE
{ typedef GI_GTK_TEXTTAGTABLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTextTagTable>
{ typedef Gtk::TextTagTable type; }; 

} // namespace repository

} // namespace gi

#include "buildable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TextTagTableClassDef
{
typedef TextTagTableClassDef self;
public:
typedef Gtk::TextTagTable instance_type;
typedef ::GtkTextTagTableClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void TextTagTable::tag_added (GtkTextTagTable* table, GtkTextTag* tag);
// void TextTagTable::tag_added (::GtkTextTagTable* table, ::GtkTextTag* tag);
virtual void tag_added_ (Gtk::TextTag tag) noexcept = 0;

// void TextTagTable::tag_changed (GtkTextTagTable* table, GtkTextTag* tag, gboolean size_changed);
// void TextTagTable::tag_changed (::GtkTextTagTable* table, ::GtkTextTag* tag, gboolean size_changed);
virtual void tag_changed_ (Gtk::TextTag tag, gboolean size_changed) noexcept = 0;

// void TextTagTable::tag_removed (GtkTextTagTable* table, GtkTextTag* tag);
// void TextTagTable::tag_removed (::GtkTextTagTable* table, ::GtkTextTag* tag);
virtual void tag_removed_ (Gtk::TextTag tag) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class TextTagTableClass: public detail::ClassTemplate<Gtk::impl::internal::TextTagTableClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl>
{
typedef TextTagTableClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TextTagTableClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::BuildableIfaceClassImpl GtkBuildableIface_type;


// void TextTagTable::tag_added (GtkTextTagTable* table, GtkTextTag* tag);
// void TextTagTable::tag_added (::GtkTextTagTable* table, ::GtkTextTag* tag);
GI_INLINE_DECL void tag_added_ (Gtk::TextTag tag) noexcept override;

// void TextTagTable::tag_changed (GtkTextTagTable* table, GtkTextTag* tag, gboolean size_changed);
// void TextTagTable::tag_changed (::GtkTextTagTable* table, ::GtkTextTag* tag, gboolean size_changed);
GI_INLINE_DECL void tag_changed_ (Gtk::TextTag tag, gboolean size_changed) noexcept override;

// void TextTagTable::tag_removed (GtkTextTagTable* table, GtkTextTag* tag);
// void TextTagTable::tag_removed (::GtkTextTagTable* table, ::GtkTextTag* tag);
GI_INLINE_DECL void tag_removed_ (Gtk::TextTag tag) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using TextTagTableImpl = detail::ObjectImpl<TextTagTable, internal::TextTagTableClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
