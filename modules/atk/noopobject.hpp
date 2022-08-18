// AUTO-GENERATED

#ifndef _GI_ATK_NOOPOBJECT_HPP_
#define _GI_ATK_NOOPOBJECT_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Atk {

class Action;
class Component;
class Document;
class EditableText;
class Hypertext;
class Image;
class Selection;
class Table;
class TableCell;
class Text;
class Value;
class Window;

class NoOpObject;

namespace base {


#define GI_ATK_NOOPOBJECT_BASE base::NoOpObjectBase
class NoOpObjectBase : public Atk::Object
{
typedef Atk::Object super_type;
public:
typedef ::AtkNoOpObject BaseObjectType;

NoOpObjectBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_no_op_object_get_type(); } 

GI_INLINE_DECL Atk::Action interface_ (gi::interface_tag<Atk::Action>);

GI_INLINE_DECL operator Atk::Action ();

GI_INLINE_DECL Atk::Component interface_ (gi::interface_tag<Atk::Component>);

GI_INLINE_DECL operator Atk::Component ();

GI_INLINE_DECL Atk::Document interface_ (gi::interface_tag<Atk::Document>);

GI_INLINE_DECL operator Atk::Document ();

GI_INLINE_DECL Atk::EditableText interface_ (gi::interface_tag<Atk::EditableText>);

GI_INLINE_DECL operator Atk::EditableText ();

GI_INLINE_DECL Atk::Hypertext interface_ (gi::interface_tag<Atk::Hypertext>);

GI_INLINE_DECL operator Atk::Hypertext ();

GI_INLINE_DECL Atk::Image interface_ (gi::interface_tag<Atk::Image>);

GI_INLINE_DECL operator Atk::Image ();

GI_INLINE_DECL Atk::Selection interface_ (gi::interface_tag<Atk::Selection>);

GI_INLINE_DECL operator Atk::Selection ();

GI_INLINE_DECL Atk::Table interface_ (gi::interface_tag<Atk::Table>);

GI_INLINE_DECL operator Atk::Table ();

GI_INLINE_DECL Atk::TableCell interface_ (gi::interface_tag<Atk::TableCell>);

GI_INLINE_DECL operator Atk::TableCell ();

GI_INLINE_DECL Atk::Text interface_ (gi::interface_tag<Atk::Text>);

GI_INLINE_DECL operator Atk::Text ();

GI_INLINE_DECL Atk::Value interface_ (gi::interface_tag<Atk::Value>);

GI_INLINE_DECL operator Atk::Value ();

GI_INLINE_DECL Atk::Window interface_ (gi::interface_tag<Atk::Window>);

GI_INLINE_DECL operator Atk::Window ();

// AtkObject* atk_no_op_object_new (GObject* obj);
// ::AtkNoOpObject* atk_no_op_object_new (::GObject* obj);
static GI_INLINE_DECL Atk::NoOpObject new_ (GObject::Object obj) noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/noopobject_extra_def.hpp>)
#include <atk/noopobject_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/noopobject_extra.hpp>)
#include <atk/noopobject_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class NoOpObject : public GI_ATK_NOOPOBJECT_BASE
{ typedef GI_ATK_NOOPOBJECT_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkNoOpObject>
{ typedef Atk::NoOpObject type; }; 

} // namespace repository

} // namespace gi

#include "action.hpp"
#include "component.hpp"
#include "document.hpp"
#include "editabletext.hpp"
#include "hypertext.hpp"
#include "image.hpp"
#include "selection.hpp"
#include "table.hpp"
#include "tablecell.hpp"
#include "text.hpp"
#include "value.hpp"
#include "window.hpp"

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class NoOpObjectClassDef
{
typedef NoOpObjectClassDef self;
public:
typedef Atk::NoOpObject instance_type;
typedef ::AtkNoOpObjectClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class NoOpObjectClass: public detail::ClassTemplate<Atk::impl::internal::NoOpObjectClassDef, Atk::impl::internal::ObjectClass, Atk::impl::internal::ActionIfaceClassImpl, Atk::impl::internal::ComponentIfaceClassImpl, Atk::impl::internal::DocumentIfaceClassImpl, Atk::impl::internal::EditableTextIfaceClassImpl, Atk::impl::internal::HypertextIfaceClassImpl, Atk::impl::internal::ImageIfaceClassImpl, Atk::impl::internal::SelectionIfaceClassImpl, Atk::impl::internal::TableIfaceClassImpl, Atk::impl::internal::TableCellIfaceClassImpl, Atk::impl::internal::TextIfaceClassImpl, Atk::impl::internal::ValueIfaceClassImpl, Atk::impl::internal::WindowIfaceClassImpl>
{
typedef NoOpObjectClass self;
typedef detail::ClassTemplate<Atk::impl::internal::NoOpObjectClassDef, Atk::impl::internal::ObjectClass, Atk::impl::internal::ActionIfaceClassImpl, Atk::impl::internal::ComponentIfaceClassImpl, Atk::impl::internal::DocumentIfaceClassImpl, Atk::impl::internal::EditableTextIfaceClassImpl, Atk::impl::internal::HypertextIfaceClassImpl, Atk::impl::internal::ImageIfaceClassImpl, Atk::impl::internal::SelectionIfaceClassImpl, Atk::impl::internal::TableIfaceClassImpl, Atk::impl::internal::TableCellIfaceClassImpl, Atk::impl::internal::TextIfaceClassImpl, Atk::impl::internal::ValueIfaceClassImpl, Atk::impl::internal::WindowIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::ActionIfaceClassImpl AtkActionIface_type;
typedef Atk::impl::internal::ComponentIfaceClassImpl AtkComponentIface_type;
typedef Atk::impl::internal::DocumentIfaceClassImpl AtkDocumentIface_type;
typedef Atk::impl::internal::EditableTextIfaceClassImpl AtkEditableTextIface_type;
typedef Atk::impl::internal::HypertextIfaceClassImpl AtkHypertextIface_type;
typedef Atk::impl::internal::ImageIfaceClassImpl AtkImageIface_type;
typedef Atk::impl::internal::SelectionIfaceClassImpl AtkSelectionIface_type;
typedef Atk::impl::internal::TableIfaceClassImpl AtkTableIface_type;
typedef Atk::impl::internal::TableCellIfaceClassImpl AtkTableCellIface_type;
typedef Atk::impl::internal::TextIfaceClassImpl AtkTextIface_type;
typedef Atk::impl::internal::ValueIfaceClassImpl AtkValueIface_type;
typedef Atk::impl::internal::WindowIfaceClassImpl AtkWindowIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using NoOpObjectImpl = detail::ObjectImpl<NoOpObject, internal::NoOpObjectClass>;

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
