// AUTO-GENERATED

#ifndef _GI_GTK_TEXTCELLACCESSIBLE_HPP_
#define _GI_GTK_TEXTCELLACCESSIBLE_HPP_

#include "renderercellaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class TextCellAccessible;

namespace base {


#define GI_GTK_TEXTCELLACCESSIBLE_BASE base::TextCellAccessibleBase
class TextCellAccessibleBase : public Gtk::RendererCellAccessible
{
typedef Gtk::RendererCellAccessible super_type;
public:
typedef ::GtkTextCellAccessible BaseObjectType;

TextCellAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_text_cell_accessible_get_type(); } 

GI_INLINE_DECL Atk::Text interface_ (gi::interface_tag<Atk::Text>);

GI_INLINE_DECL operator Atk::Text ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textcellaccessible_extra_def.hpp>)
#include <gtk/textcellaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textcellaccessible_extra.hpp>)
#include <gtk/textcellaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TextCellAccessible : public GI_GTK_TEXTCELLACCESSIBLE_BASE
{ typedef GI_GTK_TEXTCELLACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTextCellAccessible>
{ typedef Gtk::TextCellAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TextCellAccessibleClassDef
{
typedef TextCellAccessibleClassDef self;
public:
typedef Gtk::TextCellAccessible instance_type;
typedef ::GtkTextCellAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TextCellAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::TextCellAccessibleClassDef, Gtk::impl::internal::RendererCellAccessibleClass, Atk::impl::internal::TextIfaceClassImpl>
{
typedef TextCellAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TextCellAccessibleClassDef, Gtk::impl::internal::RendererCellAccessibleClass, Atk::impl::internal::TextIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::TextIfaceClassImpl AtkTextIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using TextCellAccessibleImpl = detail::ObjectImpl<TextCellAccessible, internal::TextCellAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
