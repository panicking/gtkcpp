// AUTO-GENERATED

#ifndef _GI_GTK_TABLE_HPP_
#define _GI_GTK_TABLE_HPP_

#include "container.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class Table;

namespace base {


#define GI_GTK_TABLE_BASE base::TableBase
class TableBase : public Gtk::Container
{
typedef Gtk::Container super_type;
public:
typedef ::GtkTable BaseObjectType;

TableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_table_get_type(); } 

// GtkWidget* gtk_table_new (guint rows, guint columns, gboolean homogeneous);
// ::GtkTable* gtk_table_new (guint rows, guint columns, gboolean homogeneous);
// IGNORE; deprecated

// void gtk_table_attach (GtkTable* table, GtkWidget* child, guint left_attach, guint right_attach, guint top_attach, guint bottom_attach, GtkAttachOptions xoptions, GtkAttachOptions yoptions, guint xpadding, guint ypadding);
// void gtk_table_attach (::GtkTable* table, ::GtkWidget* child, guint left_attach, guint right_attach, guint top_attach, guint bottom_attach, ::GtkAttachOptions xoptions, ::GtkAttachOptions yoptions, guint xpadding, guint ypadding);
// IGNORE; deprecated

// void gtk_table_attach_defaults (GtkTable* table, GtkWidget* widget, guint left_attach, guint right_attach, guint top_attach, guint bottom_attach);
// void gtk_table_attach_defaults (::GtkTable* table, ::GtkWidget* widget, guint left_attach, guint right_attach, guint top_attach, guint bottom_attach);
// IGNORE; deprecated

// guint gtk_table_get_col_spacing (GtkTable* table, guint column);
// guint gtk_table_get_col_spacing (::GtkTable* table, guint column);
// IGNORE; deprecated

// guint gtk_table_get_default_col_spacing (GtkTable* table);
// guint gtk_table_get_default_col_spacing (::GtkTable* table);
// IGNORE; deprecated

// guint gtk_table_get_default_row_spacing (GtkTable* table);
// guint gtk_table_get_default_row_spacing (::GtkTable* table);
// IGNORE; deprecated

// gboolean gtk_table_get_homogeneous (GtkTable* table);
// gboolean gtk_table_get_homogeneous (::GtkTable* table);
// IGNORE; deprecated

// guint gtk_table_get_row_spacing (GtkTable* table, guint row);
// guint gtk_table_get_row_spacing (::GtkTable* table, guint row);
// IGNORE; deprecated

// void gtk_table_get_size (GtkTable* table, guint* rows, guint* columns);
// void gtk_table_get_size (::GtkTable* table, guint* rows, guint* columns);
// IGNORE; deprecated

// void gtk_table_resize (GtkTable* table, guint rows, guint columns);
// void gtk_table_resize (::GtkTable* table, guint rows, guint columns);
// IGNORE; deprecated

// void gtk_table_set_col_spacing (GtkTable* table, guint column, guint spacing);
// void gtk_table_set_col_spacing (::GtkTable* table, guint column, guint spacing);
// IGNORE; deprecated

// void gtk_table_set_col_spacings (GtkTable* table, guint spacing);
// void gtk_table_set_col_spacings (::GtkTable* table, guint spacing);
// IGNORE; deprecated

// void gtk_table_set_homogeneous (GtkTable* table, gboolean homogeneous);
// void gtk_table_set_homogeneous (::GtkTable* table, gboolean homogeneous);
// IGNORE; deprecated

// void gtk_table_set_row_spacing (GtkTable* table, guint row, guint spacing);
// void gtk_table_set_row_spacing (::GtkTable* table, guint row, guint spacing);
// IGNORE; deprecated

// void gtk_table_set_row_spacings (GtkTable* table, guint spacing);
// void gtk_table_set_row_spacings (::GtkTable* table, guint spacing);
// IGNORE; deprecated

gi::property_proxy<guint, base::TableBase> property_column_spacing()
{ return gi::property_proxy<guint, base::TableBase> (*this, "column-spacing"); }
const gi::property_proxy<guint, base::TableBase> property_column_spacing() const
{ return gi::property_proxy<guint, base::TableBase> (*this, "column-spacing"); }

gi::property_proxy<bool, base::TableBase> property_homogeneous()
{ return gi::property_proxy<bool, base::TableBase> (*this, "homogeneous"); }
const gi::property_proxy<bool, base::TableBase> property_homogeneous() const
{ return gi::property_proxy<bool, base::TableBase> (*this, "homogeneous"); }

gi::property_proxy<guint, base::TableBase> property_n_columns()
{ return gi::property_proxy<guint, base::TableBase> (*this, "n-columns"); }
const gi::property_proxy<guint, base::TableBase> property_n_columns() const
{ return gi::property_proxy<guint, base::TableBase> (*this, "n-columns"); }

gi::property_proxy<guint, base::TableBase> property_n_rows()
{ return gi::property_proxy<guint, base::TableBase> (*this, "n-rows"); }
const gi::property_proxy<guint, base::TableBase> property_n_rows() const
{ return gi::property_proxy<guint, base::TableBase> (*this, "n-rows"); }

gi::property_proxy<guint, base::TableBase> property_row_spacing()
{ return gi::property_proxy<guint, base::TableBase> (*this, "row-spacing"); }
const gi::property_proxy<guint, base::TableBase> property_row_spacing() const
{ return gi::property_proxy<guint, base::TableBase> (*this, "row-spacing"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/table_extra_def.hpp>)
#include <gtk/table_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/table_extra.hpp>)
#include <gtk/table_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Table : public GI_GTK_TABLE_BASE
{ typedef GI_GTK_TABLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTable>
{ typedef Gtk::Table type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TableClassDef
{
typedef TableClassDef self;
public:
typedef Gtk::Table instance_type;
typedef ::GtkTableClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TableClass: public detail::ClassTemplate<Gtk::impl::internal::TableClassDef, Gtk::impl::internal::ContainerClass>
{
typedef TableClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TableClassDef, Gtk::impl::internal::ContainerClass> super;

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

using TableImpl = detail::ObjectImpl<Table, internal::TableClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
