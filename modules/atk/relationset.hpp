// AUTO-GENERATED

#ifndef _GI_ATK_RELATIONSET_HPP_
#define _GI_ATK_RELATIONSET_HPP_


namespace gi {

namespace repository {

namespace Atk {

class Object;
class Relation;

class RelationSet;

namespace base {


#define GI_ATK_RELATIONSET_BASE base::RelationSetBase
class RelationSetBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AtkRelationSet BaseObjectType;

RelationSetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_relation_set_get_type(); } 

// AtkRelationSet* atk_relation_set_new ();
// ::AtkRelationSet* atk_relation_set_new ();
static GI_INLINE_DECL Atk::RelationSet new_ () noexcept;

// void atk_relation_set_add (AtkRelationSet* set, AtkRelation* relation);
// void atk_relation_set_add (::AtkRelationSet* set, ::AtkRelation* relation);
GI_INLINE_DECL void add (Atk::Relation relation) noexcept;

// void atk_relation_set_add_relation_by_type (AtkRelationSet* set, AtkRelationType relationship, AtkObject* target);
// void atk_relation_set_add_relation_by_type (::AtkRelationSet* set, ::AtkRelationType relationship, ::AtkObject* target);
GI_INLINE_DECL void add_relation_by_type (Atk::RelationType relationship, Atk::Object target) noexcept;

// gboolean atk_relation_set_contains (AtkRelationSet* set, AtkRelationType relationship);
// gboolean atk_relation_set_contains (::AtkRelationSet* set, ::AtkRelationType relationship);
GI_INLINE_DECL bool contains (Atk::RelationType relationship) noexcept;

// gboolean atk_relation_set_contains_target (AtkRelationSet* set, AtkRelationType relationship, AtkObject* target);
// gboolean atk_relation_set_contains_target (::AtkRelationSet* set, ::AtkRelationType relationship, ::AtkObject* target);
GI_INLINE_DECL bool contains_target (Atk::RelationType relationship, Atk::Object target) noexcept;

// gint atk_relation_set_get_n_relations (AtkRelationSet* set);
// gint atk_relation_set_get_n_relations (::AtkRelationSet* set);
GI_INLINE_DECL gint get_n_relations () noexcept;

// AtkRelation* atk_relation_set_get_relation (AtkRelationSet* set, gint i);
// ::AtkRelation* atk_relation_set_get_relation (::AtkRelationSet* set, gint i);
GI_INLINE_DECL Atk::Relation get_relation (gint i) noexcept;

// AtkRelation* atk_relation_set_get_relation_by_type (AtkRelationSet* set, AtkRelationType relationship);
// ::AtkRelation* atk_relation_set_get_relation_by_type (::AtkRelationSet* set, ::AtkRelationType relationship);
GI_INLINE_DECL Atk::Relation get_relation_by_type (Atk::RelationType relationship) noexcept;

// void atk_relation_set_remove (AtkRelationSet* set, AtkRelation* relation);
// void atk_relation_set_remove (::AtkRelationSet* set, ::AtkRelation* relation);
GI_INLINE_DECL void remove (Atk::Relation relation) noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/relationset_extra_def.hpp>)
#include <atk/relationset_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/relationset_extra.hpp>)
#include <atk/relationset_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class RelationSet : public GI_ATK_RELATIONSET_BASE
{ typedef GI_ATK_RELATIONSET_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkRelationSet>
{ typedef Atk::RelationSet type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class RelationSetClassDef
{
typedef RelationSetClassDef self;
public:
typedef Atk::RelationSet instance_type;
typedef ::AtkRelationSetClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class RelationSetClass: public detail::ClassTemplate<Atk::impl::internal::RelationSetClassDef, GObject::impl::internal::ObjectClass>
{
typedef RelationSetClass self;
typedef detail::ClassTemplate<Atk::impl::internal::RelationSetClassDef, GObject::impl::internal::ObjectClass> super;

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

using RelationSetImpl = detail::ObjectImpl<RelationSet, internal::RelationSetClass>;

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
