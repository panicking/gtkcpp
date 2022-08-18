// AUTO-GENERATED

#ifndef _GI_GTK_NOTEBOOKPAGEACCESSIBLE_HPP_
#define _GI_GTK_NOTEBOOKPAGEACCESSIBLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class NotebookAccessible;
class Widget;

class NotebookPageAccessible;

namespace base {


#define GI_GTK_NOTEBOOKPAGEACCESSIBLE_BASE base::NotebookPageAccessibleBase
class NotebookPageAccessibleBase : public Atk::Object
{
typedef Atk::Object super_type;
public:
typedef ::GtkNotebookPageAccessible BaseObjectType;

NotebookPageAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_notebook_page_accessible_get_type(); } 

GI_INLINE_DECL Atk::Component interface_ (gi::interface_tag<Atk::Component>);

GI_INLINE_DECL operator Atk::Component ();

// AtkObject* gtk_notebook_page_accessible_new (GtkNotebookAccessible* notebook, GtkWidget* child);
// ::GtkNotebookPageAccessible* gtk_notebook_page_accessible_new (::GtkNotebookAccessible* notebook, ::GtkWidget* child);
static GI_INLINE_DECL Gtk::NotebookPageAccessible new_ (Gtk::NotebookAccessible notebook, Gtk::Widget child) noexcept;

// void gtk_notebook_page_accessible_invalidate (GtkNotebookPageAccessible* page);
// void gtk_notebook_page_accessible_invalidate (::GtkNotebookPageAccessible* page);
GI_INLINE_DECL void invalidate () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/notebookpageaccessible_extra_def.hpp>)
#include <gtk/notebookpageaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/notebookpageaccessible_extra.hpp>)
#include <gtk/notebookpageaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class NotebookPageAccessible : public GI_GTK_NOTEBOOKPAGEACCESSIBLE_BASE
{ typedef GI_GTK_NOTEBOOKPAGEACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkNotebookPageAccessible>
{ typedef Gtk::NotebookPageAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class NotebookPageAccessibleClassDef
{
typedef NotebookPageAccessibleClassDef self;
public:
typedef Gtk::NotebookPageAccessible instance_type;
typedef ::GtkNotebookPageAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class NotebookPageAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::NotebookPageAccessibleClassDef, Atk::impl::internal::ObjectClass, Atk::impl::internal::ComponentIfaceClassImpl>
{
typedef NotebookPageAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::NotebookPageAccessibleClassDef, Atk::impl::internal::ObjectClass, Atk::impl::internal::ComponentIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::ComponentIfaceClassImpl AtkComponentIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using NotebookPageAccessibleImpl = detail::ObjectImpl<NotebookPageAccessible, internal::NotebookPageAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
