// AUTO-GENERATED

#ifndef _GI_GTK_TREEDRAGDEST_HPP_
#define _GI_GTK_TREEDRAGDEST_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class SelectionData;
class TreePath;

class TreeDragDest;

namespace base {


#define GI_GTK_TREEDRAGDEST_BASE base::TreeDragDestBase
class TreeDragDestBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkTreeDragDest BaseObjectType;

TreeDragDestBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_drag_dest_get_type(); } 

// gboolean gtk_tree_drag_dest_drag_data_received (GtkTreeDragDest* drag_dest, GtkTreePath* dest, GtkSelectionData* selection_data);
// gboolean gtk_tree_drag_dest_drag_data_received (::GtkTreeDragDest* drag_dest, ::GtkTreePath* dest, ::GtkSelectionData* selection_data);
GI_INLINE_DECL bool drag_data_received (Gtk::TreePath dest, Gtk::SelectionData selection_data) noexcept;

// gboolean gtk_tree_drag_dest_row_drop_possible (GtkTreeDragDest* drag_dest, GtkTreePath* dest_path, GtkSelectionData* selection_data);
// gboolean gtk_tree_drag_dest_row_drop_possible (::GtkTreeDragDest* drag_dest, ::GtkTreePath* dest_path, ::GtkSelectionData* selection_data);
GI_INLINE_DECL bool row_drop_possible (Gtk::TreePath dest_path, Gtk::SelectionData selection_data) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treedragdest_extra_def.hpp>)
#include <gtk/treedragdest_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treedragdest_extra.hpp>)
#include <gtk/treedragdest_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeDragDest : public GI_GTK_TREEDRAGDEST_BASE
{ typedef GI_GTK_TREEDRAGDEST_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeDragDest>
{ typedef Gtk::TreeDragDest type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeDragDestIfaceDef
{
typedef TreeDragDestIfaceDef self;
public:
typedef Gtk::TreeDragDest instance_type;
typedef ::GtkTreeDragDestIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean TreeDragDest::drag_data_received (GtkTreeDragDest* drag_dest, GtkTreePath* dest, GtkSelectionData* selection_data);
// gboolean TreeDragDest::drag_data_received (::GtkTreeDragDest* drag_dest, ::GtkTreePath* dest, ::GtkSelectionData* selection_data);
virtual bool drag_data_received_ (Gtk::TreePath dest, Gtk::SelectionData selection_data) noexcept = 0;

// gboolean TreeDragDest::row_drop_possible (GtkTreeDragDest* drag_dest, GtkTreePath* dest_path, GtkSelectionData* selection_data);
// gboolean TreeDragDest::row_drop_possible (::GtkTreeDragDest* drag_dest, ::GtkTreePath* dest_path, ::GtkSelectionData* selection_data);
virtual bool row_drop_possible_ (Gtk::TreePath dest_path, Gtk::SelectionData selection_data) noexcept = 0;


};

using TreeDragDestImpl = detail::InterfaceImpl<TreeDragDestIfaceDef>;

class TreeDragDestIfaceClassImpl: public detail::InterfaceClassImpl<TreeDragDestImpl>
{
typedef TreeDragDestIfaceClassImpl self;
typedef detail::InterfaceClassImpl<TreeDragDestImpl> super;

protected:
using super::super;

// gboolean TreeDragDest::drag_data_received (GtkTreeDragDest* drag_dest, GtkTreePath* dest, GtkSelectionData* selection_data);
// gboolean TreeDragDest::drag_data_received (::GtkTreeDragDest* drag_dest, ::GtkTreePath* dest, ::GtkSelectionData* selection_data);
GI_INLINE_DECL bool drag_data_received_ (Gtk::TreePath dest, Gtk::SelectionData selection_data) noexcept override;

// gboolean TreeDragDest::row_drop_possible (GtkTreeDragDest* drag_dest, GtkTreePath* dest_path, GtkSelectionData* selection_data);
// gboolean TreeDragDest::row_drop_possible (::GtkTreeDragDest* drag_dest, ::GtkTreePath* dest_path, ::GtkSelectionData* selection_data);
GI_INLINE_DECL bool row_drop_possible_ (Gtk::TreePath dest_path, Gtk::SelectionData selection_data) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
