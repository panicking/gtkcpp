// AUTO-GENERATED

#ifndef _GI_GTK_CELLLAYOUT_HPP_
#define _GI_GTK_CELLLAYOUT_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class CellArea;
class CellRenderer;

class CellLayout;

namespace base {


#define GI_GTK_CELLLAYOUT_BASE base::CellLayoutBase
class CellLayoutBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkCellLayout BaseObjectType;

CellLayoutBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_layout_get_type(); } 

// void gtk_cell_layout_add_attribute (GtkCellLayout* cell_layout, GtkCellRenderer* cell, const gchar* attribute, gint column);
// void gtk_cell_layout_add_attribute (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, const char* attribute, gint column);
GI_INLINE_DECL void add_attribute (Gtk::CellRenderer cell, const std::string & attribute, gint column) noexcept;

// void gtk_cell_layout_clear (GtkCellLayout* cell_layout);
// void gtk_cell_layout_clear (::GtkCellLayout* cell_layout);
GI_INLINE_DECL void clear () noexcept;

// void gtk_cell_layout_clear_attributes (GtkCellLayout* cell_layout, GtkCellRenderer* cell);
// void gtk_cell_layout_clear_attributes (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell);
GI_INLINE_DECL void clear_attributes (Gtk::CellRenderer cell) noexcept;

// GtkCellArea* gtk_cell_layout_get_area (GtkCellLayout* cell_layout);
// ::GtkCellArea* gtk_cell_layout_get_area (::GtkCellLayout* cell_layout);
GI_INLINE_DECL Gtk::CellArea get_area () noexcept;

// GList* gtk_cell_layout_get_cells (GtkCellLayout* cell_layout);
// ::GList* gtk_cell_layout_get_cells (::GtkCellLayout* cell_layout);
GI_INLINE_DECL std::vector<Gtk::CellRenderer> get_cells () noexcept;

// void gtk_cell_layout_pack_end (GtkCellLayout* cell_layout, GtkCellRenderer* cell, gboolean expand);
// void gtk_cell_layout_pack_end (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, gboolean expand);
GI_INLINE_DECL void pack_end (Gtk::CellRenderer cell, gboolean expand) noexcept;

// void gtk_cell_layout_pack_start (GtkCellLayout* cell_layout, GtkCellRenderer* cell, gboolean expand);
// void gtk_cell_layout_pack_start (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, gboolean expand);
GI_INLINE_DECL void pack_start (Gtk::CellRenderer cell, gboolean expand) noexcept;

// void gtk_cell_layout_reorder (GtkCellLayout* cell_layout, GtkCellRenderer* cell, gint position);
// void gtk_cell_layout_reorder (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, gint position);
GI_INLINE_DECL void reorder (Gtk::CellRenderer cell, gint position) noexcept;

// void gtk_cell_layout_set_attributes (GtkCellLayout* cell_layout, GtkCellRenderer* cell);
// void gtk_cell_layout_set_attributes (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell);
// IGNORE; not introspectable, varargs not supported

// void gtk_cell_layout_set_cell_data_func (GtkCellLayout* cell_layout, GtkCellRenderer* cell, GtkCellLayoutDataFunc func, gpointer func_data, GDestroyNotify destroy);
// void gtk_cell_layout_set_cell_data_func (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, Gtk::CellLayoutDataFunc::cfunction_type func, void* func_data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_cell_data_func (Gtk::CellRenderer cell, Gtk::CellLayoutDataFunc func) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/celllayout_extra_def.hpp>)
#include <gtk/celllayout_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/celllayout_extra.hpp>)
#include <gtk/celllayout_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellLayout : public GI_GTK_CELLLAYOUT_BASE
{ typedef GI_GTK_CELLLAYOUT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellLayout>
{ typedef Gtk::CellLayout type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CellLayoutIfaceDef
{
typedef CellLayoutIfaceDef self;
public:
typedef Gtk::CellLayout instance_type;
typedef ::GtkCellLayoutIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void CellLayout::add_attribute (GtkCellLayout* cell_layout, GtkCellRenderer* cell, const gchar* attribute, gint column);
// void CellLayout::add_attribute (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, const char* attribute, gint column);
virtual void add_attribute_ (Gtk::CellRenderer cell, const std::string & attribute, gint column) noexcept = 0;

// void CellLayout::clear (GtkCellLayout* cell_layout);
// void CellLayout::clear (::GtkCellLayout* cell_layout);
virtual void clear_ () noexcept = 0;

// void CellLayout::clear_attributes (GtkCellLayout* cell_layout, GtkCellRenderer* cell);
// void CellLayout::clear_attributes (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell);
virtual void clear_attributes_ (Gtk::CellRenderer cell) noexcept = 0;

// GtkCellArea* CellLayout::get_area (GtkCellLayout* cell_layout);
// ::GtkCellArea* CellLayout::get_area (::GtkCellLayout* cell_layout);
virtual Gtk::CellArea get_area_ () noexcept = 0;

// GList* CellLayout::get_cells (GtkCellLayout* cell_layout);
// ::GList* CellLayout::get_cells (::GtkCellLayout* cell_layout);
// SKIP; container return not supported

// void CellLayout::pack_end (GtkCellLayout* cell_layout, GtkCellRenderer* cell, gboolean expand);
// void CellLayout::pack_end (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, gboolean expand);
virtual void pack_end_ (Gtk::CellRenderer cell, gboolean expand) noexcept = 0;

// void CellLayout::pack_start (GtkCellLayout* cell_layout, GtkCellRenderer* cell, gboolean expand);
// void CellLayout::pack_start (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, gboolean expand);
virtual void pack_start_ (Gtk::CellRenderer cell, gboolean expand) noexcept = 0;

// void CellLayout::reorder (GtkCellLayout* cell_layout, GtkCellRenderer* cell, gint position);
// void CellLayout::reorder (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, gint position);
virtual void reorder_ (Gtk::CellRenderer cell, gint position) noexcept = 0;

// void CellLayout::set_cell_data_func (GtkCellLayout* cell_layout, GtkCellRenderer* cell, GtkCellLayoutDataFunc func, gpointer func_data, GDestroyNotify destroy);
// void CellLayout::set_cell_data_func (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, Gtk::CellLayoutDataFunc::cfunction_type func, void* func_data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; virtual-method callback parameter not supported, virtual-method callback parameter not supported


};

using CellLayoutImpl = detail::InterfaceImpl<CellLayoutIfaceDef>;

class CellLayoutIfaceClassImpl: public detail::InterfaceClassImpl<CellLayoutImpl>
{
typedef CellLayoutIfaceClassImpl self;
typedef detail::InterfaceClassImpl<CellLayoutImpl> super;

protected:
using super::super;

// void CellLayout::add_attribute (GtkCellLayout* cell_layout, GtkCellRenderer* cell, const gchar* attribute, gint column);
// void CellLayout::add_attribute (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, const char* attribute, gint column);
GI_INLINE_DECL void add_attribute_ (Gtk::CellRenderer cell, const std::string & attribute, gint column) noexcept override;

// void CellLayout::clear (GtkCellLayout* cell_layout);
// void CellLayout::clear (::GtkCellLayout* cell_layout);
GI_INLINE_DECL void clear_ () noexcept override;

// void CellLayout::clear_attributes (GtkCellLayout* cell_layout, GtkCellRenderer* cell);
// void CellLayout::clear_attributes (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell);
GI_INLINE_DECL void clear_attributes_ (Gtk::CellRenderer cell) noexcept override;

// GtkCellArea* CellLayout::get_area (GtkCellLayout* cell_layout);
// ::GtkCellArea* CellLayout::get_area (::GtkCellLayout* cell_layout);
GI_INLINE_DECL Gtk::CellArea get_area_ () noexcept override;

// GList* CellLayout::get_cells (GtkCellLayout* cell_layout);
// ::GList* CellLayout::get_cells (::GtkCellLayout* cell_layout);
// SKIP; container return not supported

// void CellLayout::pack_end (GtkCellLayout* cell_layout, GtkCellRenderer* cell, gboolean expand);
// void CellLayout::pack_end (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, gboolean expand);
GI_INLINE_DECL void pack_end_ (Gtk::CellRenderer cell, gboolean expand) noexcept override;

// void CellLayout::pack_start (GtkCellLayout* cell_layout, GtkCellRenderer* cell, gboolean expand);
// void CellLayout::pack_start (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, gboolean expand);
GI_INLINE_DECL void pack_start_ (Gtk::CellRenderer cell, gboolean expand) noexcept override;

// void CellLayout::reorder (GtkCellLayout* cell_layout, GtkCellRenderer* cell, gint position);
// void CellLayout::reorder (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, gint position);
GI_INLINE_DECL void reorder_ (Gtk::CellRenderer cell, gint position) noexcept override;

// void CellLayout::set_cell_data_func (GtkCellLayout* cell_layout, GtkCellRenderer* cell, GtkCellLayoutDataFunc func, gpointer func_data, GDestroyNotify destroy);
// void CellLayout::set_cell_data_func (::GtkCellLayout* cell_layout, ::GtkCellRenderer* cell, Gtk::CellLayoutDataFunc::cfunction_type func, void* func_data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; virtual-method callback parameter not supported, virtual-method callback parameter not supported


};

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
