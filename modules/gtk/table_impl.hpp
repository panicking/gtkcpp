// AUTO-GENERATED

#ifndef _GI_GTK_TABLE_IMPL_HPP_
#define _GI_GTK_TABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

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


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/table_extra_def_impl.hpp>)
#include <gtk/table_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/table_extra_impl.hpp>)
#include <gtk/table_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TableClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkTableClass *methods = (::GtkTableClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
