// AUTO-GENERATED

#ifndef _GI_GTK_TEXTVIEWACCESSIBLE_HPP_
#define _GI_GTK_TEXTVIEWACCESSIBLE_HPP_

#include "containeraccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class TextViewAccessible;

namespace base {


#define GI_GTK_TEXTVIEWACCESSIBLE_BASE base::TextViewAccessibleBase
class TextViewAccessibleBase : public Gtk::ContainerAccessible
{
typedef Gtk::ContainerAccessible super_type;
public:
typedef ::GtkTextViewAccessible BaseObjectType;

TextViewAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_text_view_accessible_get_type(); } 

GI_INLINE_DECL Atk::EditableText interface_ (gi::interface_tag<Atk::EditableText>);

GI_INLINE_DECL operator Atk::EditableText ();

GI_INLINE_DECL Atk::StreamableContent interface_ (gi::interface_tag<Atk::StreamableContent>);

GI_INLINE_DECL operator Atk::StreamableContent ();

GI_INLINE_DECL Atk::Text interface_ (gi::interface_tag<Atk::Text>);

GI_INLINE_DECL operator Atk::Text ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/textviewaccessible_extra_def.hpp>)
#include <gtk/textviewaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/textviewaccessible_extra.hpp>)
#include <gtk/textviewaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TextViewAccessible : public GI_GTK_TEXTVIEWACCESSIBLE_BASE
{ typedef GI_GTK_TEXTVIEWACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTextViewAccessible>
{ typedef Gtk::TextViewAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TextViewAccessibleClassDef
{
typedef TextViewAccessibleClassDef self;
public:
typedef Gtk::TextViewAccessible instance_type;
typedef ::GtkTextViewAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TextViewAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::TextViewAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::EditableTextIfaceClassImpl, Atk::impl::internal::StreamableContentIfaceClassImpl, Atk::impl::internal::TextIfaceClassImpl>
{
typedef TextViewAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TextViewAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::EditableTextIfaceClassImpl, Atk::impl::internal::StreamableContentIfaceClassImpl, Atk::impl::internal::TextIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::EditableTextIfaceClassImpl AtkEditableTextIface_type;
typedef Atk::impl::internal::StreamableContentIfaceClassImpl AtkStreamableContentIface_type;
typedef Atk::impl::internal::TextIfaceClassImpl AtkTextIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using TextViewAccessibleImpl = detail::ObjectImpl<TextViewAccessible, internal::TextViewAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
