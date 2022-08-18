// AUTO-GENERATED

#ifndef _GI_ATK_RELATION_HPP_
#define _GI_ATK_RELATION_HPP_


namespace gi {

namespace repository {

namespace Atk {

class Object;

class Relation;

namespace base {


#define GI_ATK_RELATION_BASE base::RelationBase
class RelationBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AtkRelation BaseObjectType;

RelationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_relation_get_type(); } 

// AtkRelation* atk_relation_new (AtkObject** targets, gint n_targets, AtkRelationType relationship);
// ::AtkRelation* atk_relation_new (::AtkObject** targets, gint n_targets, ::AtkRelationType relationship);
static GI_INLINE_DECL Atk::Relation new_ (Atk::Object * targets, gint n_targets, Atk::RelationType relationship) noexcept;

// void atk_relation_add_target (AtkRelation* relation, AtkObject* target);
// void atk_relation_add_target (::AtkRelation* relation, ::AtkObject* target);
GI_INLINE_DECL void add_target (Atk::Object target) noexcept;

// AtkRelationType atk_relation_get_relation_type (AtkRelation* relation);
// ::AtkRelationType atk_relation_get_relation_type (::AtkRelation* relation);
GI_INLINE_DECL Atk::RelationType get_relation_type () noexcept;

// GPtrArray* atk_relation_get_target (AtkRelation* relation);
//  atk_relation_get_target (::AtkRelation* relation);
// SKIP;  type  not supported

// gboolean atk_relation_remove_target (AtkRelation* relation, AtkObject* target);
// gboolean atk_relation_remove_target (::AtkRelation* relation, ::AtkObject* target);
GI_INLINE_DECL bool remove_target (Atk::Object target) noexcept;

gi::property_proxy<Atk::RelationType, base::RelationBase> property_relation_type()
{ return gi::property_proxy<Atk::RelationType, base::RelationBase> (*this, "relation-type"); }
const gi::property_proxy<Atk::RelationType, base::RelationBase> property_relation_type() const
{ return gi::property_proxy<Atk::RelationType, base::RelationBase> (*this, "relation-type"); }

// ::AtkRelationType Relation::relationship (const ::AtkRelation* obj);
// ::AtkRelationType Relation::relationship (const ::AtkRelation* obj);
GI_INLINE_DECL Atk::RelationType relationship_ () const noexcept;

//  Relation::relationship (::AtkRelation* obj, ::AtkRelationType _value);
// void Relation::relationship (::AtkRelation* obj, ::AtkRelationType _value);
GI_INLINE_DECL void relationship_ (Atk::RelationType _value) noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/relation_extra_def.hpp>)
#include <atk/relation_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/relation_extra.hpp>)
#include <atk/relation_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Relation : public GI_ATK_RELATION_BASE
{ typedef GI_ATK_RELATION_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkRelation>
{ typedef Atk::Relation type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class RelationClassDef
{
typedef RelationClassDef self;
public:
typedef Atk::Relation instance_type;
typedef ::AtkRelationClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class RelationClass: public detail::ClassTemplate<Atk::impl::internal::RelationClassDef, GObject::impl::internal::ObjectClass>
{
typedef RelationClass self;
typedef detail::ClassTemplate<Atk::impl::internal::RelationClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using RelationImpl = detail::ObjectImpl<Relation, internal::RelationClass>;

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
