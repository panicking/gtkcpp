// AUTO-GENERATED

#ifndef _GI_GTK_TREEDRAGSOURCE_HPP_
#define _GI_GTK_TREEDRAGSOURCE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class SelectionData;
class TreePath;

class TreeDragSource;

namespace base {


#define GI_GTK_TREEDRAGSOURCE_BASE base::TreeDragSourceBase
class TreeDragSourceBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkTreeDragSource BaseObjectType;

TreeDragSourceBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_drag_source_get_type(); } 

// gboolean gtk_tree_drag_source_drag_data_delete (GtkTreeDragSource* drag_source, GtkTreePath* path);
// gboolean gtk_tree_drag_source_drag_data_delete (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
GI_INLINE_DECL bool drag_data_delete (Gtk::TreePath path) noexcept;

// gboolean gtk_tree_drag_source_drag_data_get (GtkTreeDragSource* drag_source, GtkTreePath* path, GtkSelectionData* selection_data);
// gboolean gtk_tree_drag_source_drag_data_get (::GtkTreeDragSource* drag_source, ::GtkTreePath* path, ::GtkSelectionData* selection_data);
GI_INLINE_DECL bool drag_data_get (Gtk::TreePath path, Gtk::SelectionData selection_data) noexcept;

// gboolean gtk_tree_drag_source_row_draggable (GtkTreeDragSource* drag_source, GtkTreePath* path);
// gboolean gtk_tree_drag_source_row_draggable (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
GI_INLINE_DECL bool row_draggable (Gtk::TreePath path) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treedragsource_extra_def.hpp>)
#include <gtk/treedragsource_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treedragsource_extra.hpp>)
#include <gtk/treedragsource_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeDragSource : public GI_GTK_TREEDRAGSOURCE_BASE
{ typedef GI_GTK_TREEDRAGSOURCE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeDragSource>
{ typedef Gtk::TreeDragSource type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeDragSourceIfaceDef
{
typedef TreeDragSourceIfaceDef self;
public:
typedef Gtk::TreeDragSource instance_type;
typedef ::GtkTreeDragSourceIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean TreeDragSource::drag_data_delete (GtkTreeDragSource* drag_source, GtkTreePath* path);
// gboolean TreeDragSource::drag_data_delete (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
virtual bool drag_data_delete_ (Gtk::TreePath path) noexcept = 0;

// gboolean TreeDragSource::drag_data_get (GtkTreeDragSource* drag_source, GtkTreePath* path, GtkSelectionData* selection_data);
// gboolean TreeDragSource::drag_data_get (::GtkTreeDragSource* drag_source, ::GtkTreePath* path, ::GtkSelectionData* selection_data);
virtual bool drag_data_get_ (Gtk::TreePath path, Gtk::SelectionData selection_data) noexcept = 0;

// gboolean TreeDragSource::row_draggable (GtkTreeDragSource* drag_source, GtkTreePath* path);
// gboolean TreeDragSource::row_draggable (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
virtual bool row_draggable_ (Gtk::TreePath path) noexcept = 0;


};

using TreeDragSourceImpl = detail::InterfaceImpl<TreeDragSourceIfaceDef>;

class TreeDragSourceIfaceClassImpl: public detail::InterfaceClassImpl<TreeDragSourceImpl>
{
typedef TreeDragSourceIfaceClassImpl self;
typedef detail::InterfaceClassImpl<TreeDragSourceImpl> super;

protected:
using super::super;

// gboolean TreeDragSource::drag_data_delete (GtkTreeDragSource* drag_source, GtkTreePath* path);
// gboolean TreeDragSource::drag_data_delete (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
GI_INLINE_DECL bool drag_data_delete_ (Gtk::TreePath path) noexcept override;

// gboolean TreeDragSource::drag_data_get (GtkTreeDragSource* drag_source, GtkTreePath* path, GtkSelectionData* selection_data);
// gboolean TreeDragSource::drag_data_get (::GtkTreeDragSource* drag_source, ::GtkTreePath* path, ::GtkSelectionData* selection_data);
GI_INLINE_DECL bool drag_data_get_ (Gtk::TreePath path, Gtk::SelectionData selection_data) noexcept override;

// gboolean TreeDragSource::row_draggable (GtkTreeDragSource* drag_source, GtkTreePath* path);
// gboolean TreeDragSource::row_draggable (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
GI_INLINE_DECL bool row_draggable_ (Gtk::TreePath path) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
