// AUTO-GENERATED

#ifndef _GI_GTK_TREEITER_HPP_
#define _GI_GTK_TREEITER_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class TreeIter;

namespace base {


#define GI_GTK_TREEITER_BASE base::TreeIterBase
class TreeIterBase : public gi::detail::GBoxedWrapper<TreeIterBase, ::GtkTreeIter>
{
typedef gi::detail::GBoxedWrapper<TreeIterBase, ::GtkTreeIter> super_type;
public:

TreeIterBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_tree_iter_get_type(); } 

// gint TreeIter::stamp (const ::GtkTreeIter* obj);
// gint TreeIter::stamp (const ::GtkTreeIter* obj);
GI_INLINE_DECL gint stamp_ () const noexcept;

//  TreeIter::stamp (::GtkTreeIter* obj, gint _value);
// void TreeIter::stamp (::GtkTreeIter* obj, gint _value);
GI_INLINE_DECL void stamp_ (gint _value) noexcept;

// GtkTreeIter* gtk_tree_iter_copy (GtkTreeIter* iter);
// ::GtkTreeIter* gtk_tree_iter_copy (::GtkTreeIter* iter);
GI_INLINE_DECL Gtk::TreeIter copy () noexcept;

// void gtk_tree_iter_free (GtkTreeIter* iter);
// void gtk_tree_iter_free (::GtkTreeIter* iter);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treeiter_extra_def.hpp>)
#include <gtk/treeiter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treeiter_extra.hpp>)
#include <gtk/treeiter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeIter : public GI_GTK_TREEITER_BASE
{ typedef GI_GTK_TREEITER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeIter>
{ typedef Gtk::TreeIter type; }; 

} // namespace repository

} // namespace gi

#endif
