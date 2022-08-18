// AUTO-GENERATED

#ifndef _GI_GTK_LINKBUTTONACCESSIBLE_HPP_
#define _GI_GTK_LINKBUTTONACCESSIBLE_HPP_

#include "buttonaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class LinkButtonAccessible;

namespace base {


#define GI_GTK_LINKBUTTONACCESSIBLE_BASE base::LinkButtonAccessibleBase
class LinkButtonAccessibleBase : public Gtk::ButtonAccessible
{
typedef Gtk::ButtonAccessible super_type;
public:
typedef ::GtkLinkButtonAccessible BaseObjectType;

LinkButtonAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_link_button_accessible_get_type(); } 

GI_INLINE_DECL Atk::HyperlinkImpl interface_ (gi::interface_tag<Atk::HyperlinkImpl>);

GI_INLINE_DECL operator Atk::HyperlinkImpl ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/linkbuttonaccessible_extra_def.hpp>)
#include <gtk/linkbuttonaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/linkbuttonaccessible_extra.hpp>)
#include <gtk/linkbuttonaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class LinkButtonAccessible : public GI_GTK_LINKBUTTONACCESSIBLE_BASE
{ typedef GI_GTK_LINKBUTTONACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkLinkButtonAccessible>
{ typedef Gtk::LinkButtonAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class LinkButtonAccessibleClassDef
{
typedef LinkButtonAccessibleClassDef self;
public:
typedef Gtk::LinkButtonAccessible instance_type;
typedef ::GtkLinkButtonAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class LinkButtonAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::LinkButtonAccessibleClassDef, Gtk::impl::internal::ButtonAccessibleClass, Atk::impl::internal::HyperlinkImplIfaceClassImpl>
{
typedef LinkButtonAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::LinkButtonAccessibleClassDef, Gtk::impl::internal::ButtonAccessibleClass, Atk::impl::internal::HyperlinkImplIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::HyperlinkImplIfaceClassImpl AtkHyperlinkImplIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using LinkButtonAccessibleImpl = detail::ObjectImpl<LinkButtonAccessible, internal::LinkButtonAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
