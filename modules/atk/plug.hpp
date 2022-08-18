// AUTO-GENERATED

#ifndef _GI_ATK_PLUG_HPP_
#define _GI_ATK_PLUG_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Atk {

class Component;
class Object;

class Plug;

namespace base {


#define GI_ATK_PLUG_BASE base::PlugBase
class PlugBase : public Atk::Object
{
typedef Atk::Object super_type;
public:
typedef ::AtkPlug BaseObjectType;

PlugBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_plug_get_type(); } 

GI_INLINE_DECL Atk::Component interface_ (gi::interface_tag<Atk::Component>);

GI_INLINE_DECL operator Atk::Component ();

// AtkObject* atk_plug_new ();
// ::AtkPlug* atk_plug_new ();
static GI_INLINE_DECL Atk::Plug new_ () noexcept;

// gchar* atk_plug_get_id (AtkPlug* plug);
// char* atk_plug_get_id (::AtkPlug* plug);
GI_INLINE_DECL std::string get_id () noexcept;

// void atk_plug_set_child (AtkPlug* plug, AtkObject* child);
// void atk_plug_set_child (::AtkPlug* plug, ::AtkObject* child);
GI_INLINE_DECL void set_child (Atk::Object child) noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/plug_extra_def.hpp>)
#include <atk/plug_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/plug_extra.hpp>)
#include <atk/plug_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Plug : public GI_ATK_PLUG_BASE
{ typedef GI_ATK_PLUG_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkPlug>
{ typedef Atk::Plug type; }; 

} // namespace repository

} // namespace gi

#include "component.hpp"

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class PlugClassDef
{
typedef PlugClassDef self;
public:
typedef Atk::Plug instance_type;
typedef ::AtkPlugClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gchar* Plug::get_object_id (AtkPlug* obj);
// char* Plug::get_object_id (::AtkPlug* obj);
virtual std::string get_object_id_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class PlugClass: public detail::ClassTemplate<Atk::impl::internal::PlugClassDef, Atk::impl::internal::ObjectClass, Atk::impl::internal::ComponentIfaceClassImpl>
{
typedef PlugClass self;
typedef detail::ClassTemplate<Atk::impl::internal::PlugClassDef, Atk::impl::internal::ObjectClass, Atk::impl::internal::ComponentIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::ComponentIfaceClassImpl AtkComponentIface_type;


// gchar* Plug::get_object_id (AtkPlug* obj);
// char* Plug::get_object_id (::AtkPlug* obj);
GI_INLINE_DECL std::string get_object_id_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using PlugImpl = detail::ObjectImpl<Plug, internal::PlugClass>;

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
