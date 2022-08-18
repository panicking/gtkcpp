// AUTO-GENERATED

#ifndef _GI_ATK_OBJECT_HPP_
#define _GI_ATK_OBJECT_HPP_


namespace gi {

namespace repository {

namespace Atk {

class PropertyValues;
class RelationSet;
class StateSet;

class Object;

namespace base {


#define GI_ATK_OBJECT_BASE base::ObjectBase
class ObjectBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::AtkObject BaseObjectType;

ObjectBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_object_get_type(); } 

// gboolean atk_object_add_relationship (AtkObject* object, AtkRelationType relationship, AtkObject* target);
// gboolean atk_object_add_relationship (::AtkObject* object, ::AtkRelationType relationship, ::AtkObject* target);
GI_INLINE_DECL bool add_relationship (Atk::RelationType relationship, Atk::Object target) noexcept;

// guint atk_object_connect_property_change_handler (AtkObject* accessible, AtkPropertyChangeHandler* handler);
// guint atk_object_connect_property_change_handler (::AtkObject* accessible,  handler);
// IGNORE; deprecated

// const gchar* atk_object_get_accessible_id (AtkObject* accessible);
// const char* atk_object_get_accessible_id (::AtkObject* accessible);
GI_INLINE_DECL std::string get_accessible_id () noexcept;

//  atk_object_get_attributes (AtkObject* accessible);
//  atk_object_get_attributes (::AtkObject* accessible);
// SKIP; inconsistent list element info

// const gchar* atk_object_get_description (AtkObject* accessible);
// const char* atk_object_get_description (::AtkObject* accessible);
GI_INLINE_DECL std::string get_description () noexcept;

// gint atk_object_get_index_in_parent (AtkObject* accessible);
// gint atk_object_get_index_in_parent (::AtkObject* accessible);
GI_INLINE_DECL gint get_index_in_parent () noexcept;

// AtkLayer atk_object_get_layer (AtkObject* accessible);
// ::AtkLayer atk_object_get_layer (::AtkObject* accessible);
// IGNORE; deprecated

// gint atk_object_get_mdi_zorder (AtkObject* accessible);
// gint atk_object_get_mdi_zorder (::AtkObject* accessible);
// IGNORE; deprecated

// gint atk_object_get_n_accessible_children (AtkObject* accessible);
// gint atk_object_get_n_accessible_children (::AtkObject* accessible);
GI_INLINE_DECL gint get_n_accessible_children () noexcept;

// const gchar* atk_object_get_name (AtkObject* accessible);
// const char* atk_object_get_name (::AtkObject* accessible);
GI_INLINE_DECL std::string get_name () noexcept;

// const gchar* atk_object_get_object_locale (AtkObject* accessible);
// const char* atk_object_get_object_locale (::AtkObject* accessible);
GI_INLINE_DECL std::string get_object_locale () noexcept;

// AtkObject* atk_object_get_parent (AtkObject* accessible);
// ::AtkObject* atk_object_get_parent (::AtkObject* accessible);
GI_INLINE_DECL Atk::Object get_parent () noexcept;

// AtkRole atk_object_get_role (AtkObject* accessible);
// ::AtkRole atk_object_get_role (::AtkObject* accessible);
GI_INLINE_DECL Atk::Role get_role () noexcept;

// void atk_object_initialize (AtkObject* accessible, gpointer data);
// void atk_object_initialize (::AtkObject* accessible, void* data);
GI_INLINE_DECL void initialize (void* data) noexcept;

// void atk_object_notify_state_change (AtkObject* accessible, AtkState state, gboolean value);
// void atk_object_notify_state_change (::AtkObject* accessible, ::AtkState state, gboolean value);
GI_INLINE_DECL void notify_state_change (::AtkState state, gboolean value) noexcept;

// AtkObject* atk_object_peek_parent (AtkObject* accessible);
// ::AtkObject* atk_object_peek_parent (::AtkObject* accessible);
GI_INLINE_DECL Atk::Object peek_parent () noexcept;

// AtkObject* atk_object_ref_accessible_child (AtkObject* accessible, gint i);
// ::AtkObject* atk_object_ref_accessible_child (::AtkObject* accessible, gint i);
GI_INLINE_DECL Atk::Object ref_accessible_child (gint i) noexcept;

// AtkRelationSet* atk_object_ref_relation_set (AtkObject* accessible);
// ::AtkRelationSet* atk_object_ref_relation_set (::AtkObject* accessible);
GI_INLINE_DECL Atk::RelationSet ref_relation_set () noexcept;

// AtkStateSet* atk_object_ref_state_set (AtkObject* accessible);
// ::AtkStateSet* atk_object_ref_state_set (::AtkObject* accessible);
GI_INLINE_DECL Atk::StateSet ref_state_set () noexcept;

// void atk_object_remove_property_change_handler (AtkObject* accessible, guint handler_id);
// void atk_object_remove_property_change_handler (::AtkObject* accessible, guint handler_id);
// IGNORE; deprecated

// gboolean atk_object_remove_relationship (AtkObject* object, AtkRelationType relationship, AtkObject* target);
// gboolean atk_object_remove_relationship (::AtkObject* object, ::AtkRelationType relationship, ::AtkObject* target);
GI_INLINE_DECL bool remove_relationship (Atk::RelationType relationship, Atk::Object target) noexcept;

// void atk_object_set_accessible_id (AtkObject* accessible, const gchar* name);
// void atk_object_set_accessible_id (::AtkObject* accessible, const char* name);
GI_INLINE_DECL void set_accessible_id (const std::string & name) noexcept;

// void atk_object_set_description (AtkObject* accessible, const gchar* description);
// void atk_object_set_description (::AtkObject* accessible, const char* description);
GI_INLINE_DECL void set_description (const std::string & description) noexcept;

// void atk_object_set_name (AtkObject* accessible, const gchar* name);
// void atk_object_set_name (::AtkObject* accessible, const char* name);
GI_INLINE_DECL void set_name (const std::string & name) noexcept;

// void atk_object_set_parent (AtkObject* accessible, AtkObject* parent);
// void atk_object_set_parent (::AtkObject* accessible, ::AtkObject* parent);
GI_INLINE_DECL void set_parent (Atk::Object parent) noexcept;

// void atk_object_set_role (AtkObject* accessible, AtkRole role);
// void atk_object_set_role (::AtkObject* accessible, ::AtkRole role);
GI_INLINE_DECL void set_role (Atk::Role role) noexcept;

gi::property_proxy<gint, base::ObjectBase> property_accessible_component_layer()
{ return gi::property_proxy<gint, base::ObjectBase> (*this, "accessible-component-layer"); }
const gi::property_proxy<gint, base::ObjectBase> property_accessible_component_layer() const
{ return gi::property_proxy<gint, base::ObjectBase> (*this, "accessible-component-layer"); }

gi::property_proxy<gint, base::ObjectBase> property_accessible_component_mdi_zorder()
{ return gi::property_proxy<gint, base::ObjectBase> (*this, "accessible-component-mdi-zorder"); }
const gi::property_proxy<gint, base::ObjectBase> property_accessible_component_mdi_zorder() const
{ return gi::property_proxy<gint, base::ObjectBase> (*this, "accessible-component-mdi-zorder"); }

gi::property_proxy<std::string, base::ObjectBase> property_accessible_description()
{ return gi::property_proxy<std::string, base::ObjectBase> (*this, "accessible-description"); }
const gi::property_proxy<std::string, base::ObjectBase> property_accessible_description() const
{ return gi::property_proxy<std::string, base::ObjectBase> (*this, "accessible-description"); }

gi::property_proxy<gint, base::ObjectBase> property_accessible_hypertext_nlinks()
{ return gi::property_proxy<gint, base::ObjectBase> (*this, "accessible-hypertext-nlinks"); }
const gi::property_proxy<gint, base::ObjectBase> property_accessible_hypertext_nlinks() const
{ return gi::property_proxy<gint, base::ObjectBase> (*this, "accessible-hypertext-nlinks"); }

gi::property_proxy<std::string, base::ObjectBase> property_accessible_name()
{ return gi::property_proxy<std::string, base::ObjectBase> (*this, "accessible-name"); }
const gi::property_proxy<std::string, base::ObjectBase> property_accessible_name() const
{ return gi::property_proxy<std::string, base::ObjectBase> (*this, "accessible-name"); }

gi::property_proxy<Atk::Object, base::ObjectBase> property_accessible_parent()
{ return gi::property_proxy<Atk::Object, base::ObjectBase> (*this, "accessible-parent"); }
const gi::property_proxy<Atk::Object, base::ObjectBase> property_accessible_parent() const
{ return gi::property_proxy<Atk::Object, base::ObjectBase> (*this, "accessible-parent"); }

gi::property_proxy<Atk::Role, base::ObjectBase> property_accessible_role()
{ return gi::property_proxy<Atk::Role, base::ObjectBase> (*this, "accessible-role"); }
const gi::property_proxy<Atk::Role, base::ObjectBase> property_accessible_role() const
{ return gi::property_proxy<Atk::Role, base::ObjectBase> (*this, "accessible-role"); }

gi::property_proxy<std::string, base::ObjectBase> property_accessible_table_caption()
{ return gi::property_proxy<std::string, base::ObjectBase> (*this, "accessible-table-caption"); }
const gi::property_proxy<std::string, base::ObjectBase> property_accessible_table_caption() const
{ return gi::property_proxy<std::string, base::ObjectBase> (*this, "accessible-table-caption"); }

gi::property_proxy<Atk::Object, base::ObjectBase> property_accessible_table_caption_object()
{ return gi::property_proxy<Atk::Object, base::ObjectBase> (*this, "accessible-table-caption-object"); }
const gi::property_proxy<Atk::Object, base::ObjectBase> property_accessible_table_caption_object() const
{ return gi::property_proxy<Atk::Object, base::ObjectBase> (*this, "accessible-table-caption-object"); }

gi::property_proxy<std::string, base::ObjectBase> property_accessible_table_column_description()
{ return gi::property_proxy<std::string, base::ObjectBase> (*this, "accessible-table-column-description"); }
const gi::property_proxy<std::string, base::ObjectBase> property_accessible_table_column_description() const
{ return gi::property_proxy<std::string, base::ObjectBase> (*this, "accessible-table-column-description"); }

gi::property_proxy<Atk::Object, base::ObjectBase> property_accessible_table_column_header()
{ return gi::property_proxy<Atk::Object, base::ObjectBase> (*this, "accessible-table-column-header"); }
const gi::property_proxy<Atk::Object, base::ObjectBase> property_accessible_table_column_header() const
{ return gi::property_proxy<Atk::Object, base::ObjectBase> (*this, "accessible-table-column-header"); }

gi::property_proxy<std::string, base::ObjectBase> property_accessible_table_row_description()
{ return gi::property_proxy<std::string, base::ObjectBase> (*this, "accessible-table-row-description"); }
const gi::property_proxy<std::string, base::ObjectBase> property_accessible_table_row_description() const
{ return gi::property_proxy<std::string, base::ObjectBase> (*this, "accessible-table-row-description"); }

gi::property_proxy<Atk::Object, base::ObjectBase> property_accessible_table_row_header()
{ return gi::property_proxy<Atk::Object, base::ObjectBase> (*this, "accessible-table-row-header"); }
const gi::property_proxy<Atk::Object, base::ObjectBase> property_accessible_table_row_header() const
{ return gi::property_proxy<Atk::Object, base::ObjectBase> (*this, "accessible-table-row-header"); }

gi::property_proxy<Atk::Object, base::ObjectBase> property_accessible_table_summary()
{ return gi::property_proxy<Atk::Object, base::ObjectBase> (*this, "accessible-table-summary"); }
const gi::property_proxy<Atk::Object, base::ObjectBase> property_accessible_table_summary() const
{ return gi::property_proxy<Atk::Object, base::ObjectBase> (*this, "accessible-table-summary"); }

gi::property_proxy<gdouble, base::ObjectBase> property_accessible_value()
{ return gi::property_proxy<gdouble, base::ObjectBase> (*this, "accessible-value"); }
const gi::property_proxy<gdouble, base::ObjectBase> property_accessible_value() const
{ return gi::property_proxy<gdouble, base::ObjectBase> (*this, "accessible-value"); }

// char* Object::description (const ::AtkObject* obj);
// char* Object::description (const ::AtkObject* obj);
GI_INLINE_DECL std::string description_ () const noexcept;

// char* Object::name (const ::AtkObject* obj);
// char* Object::name (const ::AtkObject* obj);
GI_INLINE_DECL std::string name_ () const noexcept;

// ::AtkObject* Object::accessible_parent (const ::AtkObject* obj);
// ::AtkObject* Object::accessible_parent (const ::AtkObject* obj);
GI_INLINE_DECL Atk::Object accessible_parent_ () const noexcept;

// ::AtkRole Object::role (const ::AtkObject* obj);
// ::AtkRole Object::role (const ::AtkObject* obj);
GI_INLINE_DECL Atk::Role role_ () const noexcept;

//  Object::role (::AtkObject* obj, ::AtkRole _value);
// void Object::role (::AtkObject* obj, ::AtkRole _value);
GI_INLINE_DECL void role_ (Atk::Role _value) noexcept;

// ::AtkRelationSet* Object::relation_set (const ::AtkObject* obj);
// ::AtkRelationSet* Object::relation_set (const ::AtkObject* obj);
GI_INLINE_DECL Atk::RelationSet relation_set_ () const noexcept;

// ::AtkLayer Object::layer (const ::AtkObject* obj);
// ::AtkLayer Object::layer (const ::AtkObject* obj);
GI_INLINE_DECL Atk::Layer layer_ () const noexcept;

//  Object::layer (::AtkObject* obj, ::AtkLayer _value);
// void Object::layer (::AtkObject* obj, ::AtkLayer _value);
GI_INLINE_DECL void layer_ (Atk::Layer _value) noexcept;

// signal active-descendant-changed
gi::signal_proxy<void(Atk::Object, Atk::Object arg1)> signal_active_descendant_changed()
{ return gi::signal_proxy<void(Atk::Object, Atk::Object arg1)> (*this, "active-descendant-changed"); }

// signal children-changed
gi::signal_proxy<void(Atk::Object, guint arg1, Atk::Object arg2)> signal_children_changed()
{ return gi::signal_proxy<void(Atk::Object, guint arg1, Atk::Object arg2)> (*this, "children-changed"); }

// signal focus-event
// IGNORE; deprecated

// signal property-change
gi::signal_proxy<void(Atk::Object, Atk::PropertyValues arg1)> signal_property_change()
{ return gi::signal_proxy<void(Atk::Object, Atk::PropertyValues arg1)> (*this, "property-change"); }

// signal state-change
gi::signal_proxy<void(Atk::Object, const std::string & arg1, gboolean arg2)> signal_state_change()
{ return gi::signal_proxy<void(Atk::Object, const std::string & arg1, gboolean arg2)> (*this, "state-change"); }

// signal visible-data-changed
gi::signal_proxy<void(Atk::Object)> signal_visible_data_changed()
{ return gi::signal_proxy<void(Atk::Object)> (*this, "visible-data-changed"); }

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/object_extra_def.hpp>)
#include <atk/object_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/object_extra.hpp>)
#include <atk/object_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Object : public GI_ATK_OBJECT_BASE
{ typedef GI_ATK_OBJECT_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkObject>
{ typedef Atk::Object type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class ObjectClassDef
{
typedef ObjectClassDef self;
public:
typedef Atk::Object instance_type;
typedef ::AtkObjectClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Object::active_descendant_changed (AtkObject* accessible, gpointer* child);
// void Object::active_descendant_changed (::AtkObject* accessible, void* child);
// SKIP; inconsistent in child pointer depth (2 vs 1)

// void Object::children_changed (AtkObject* accessible, guint change_index, gpointer changed_child);
// void Object::children_changed (::AtkObject* accessible, guint change_index, void* changed_child);
virtual void children_changed_ (guint change_index, void* changed_child) noexcept = 0;

// void Object::focus_event (AtkObject* accessible, gboolean focus_in);
// void Object::focus_event (::AtkObject* accessible, gboolean focus_in);
virtual void focus_event_ (gboolean focus_in) noexcept = 0;

//  Object::get_attributes (AtkObject* accessible);
//  Object::get_attributes (::AtkObject* accessible);
// SKIP; inconsistent list element info

// const gchar* Object::get_description (AtkObject* accessible);
// const char* Object::get_description (::AtkObject* accessible);
// SKIP; invalid callback return transfer none

// gint Object::get_index_in_parent (AtkObject* accessible);
// gint Object::get_index_in_parent (::AtkObject* accessible);
virtual gint get_index_in_parent_ () noexcept = 0;

// AtkLayer Object::get_layer (AtkObject* accessible);
// ::AtkLayer Object::get_layer (::AtkObject* accessible);
// IGNORE; deprecated

// gint Object::get_mdi_zorder (AtkObject* accessible);
// gint Object::get_mdi_zorder (::AtkObject* accessible);
// IGNORE; deprecated

// gint Object::get_n_children (AtkObject* accessible);
// gint Object::get_n_children (::AtkObject* accessible);
virtual gint get_n_children_ () noexcept = 0;

// const gchar* Object::get_name (AtkObject* accessible);
// const char* Object::get_name (::AtkObject* accessible);
// SKIP; invalid callback return transfer none

// const gchar* Object::get_object_locale (AtkObject* accessible);
// const char* Object::get_object_locale (::AtkObject* accessible);
// SKIP; invalid callback return transfer none

// AtkObject* Object::get_parent (AtkObject* accessible);
// ::AtkObject* Object::get_parent (::AtkObject* accessible);
virtual Atk::Object get_parent_ () noexcept = 0;

// AtkRole Object::get_role (AtkObject* accessible);
// ::AtkRole Object::get_role (::AtkObject* accessible);
virtual Atk::Role get_role_ () noexcept = 0;

// void Object::initialize (AtkObject* accessible, gpointer data);
// void Object::initialize (::AtkObject* accessible, void* data);
virtual void initialize_ (void* data) noexcept = 0;

// void Object::property_change (AtkObject* accessible, AtkPropertyValues* values);
// void Object::property_change (::AtkObject* accessible, ::AtkPropertyValues* values);
virtual void property_change_ (Atk::PropertyValues values) noexcept = 0;

// AtkRelationSet* Object::ref_relation_set (AtkObject* accessible);
// ::AtkRelationSet* Object::ref_relation_set (::AtkObject* accessible);
virtual Atk::RelationSet ref_relation_set_ () noexcept = 0;

// AtkStateSet* Object::ref_state_set (AtkObject* accessible);
// ::AtkStateSet* Object::ref_state_set (::AtkObject* accessible);
virtual Atk::StateSet ref_state_set_ () noexcept = 0;

// void Object::remove_property_change_handler (AtkObject* accessible, guint handler_id);
// void Object::remove_property_change_handler (::AtkObject* accessible, guint handler_id);
// IGNORE; deprecated

// void Object::set_description (AtkObject* accessible, const gchar* description);
// void Object::set_description (::AtkObject* accessible, const char* description);
virtual void set_description_ (const std::string & description) noexcept = 0;

// void Object::set_name (AtkObject* accessible, const gchar* name);
// void Object::set_name (::AtkObject* accessible, const char* name);
virtual void set_name_ (const std::string & name) noexcept = 0;

// void Object::set_parent (AtkObject* accessible, AtkObject* parent);
// void Object::set_parent (::AtkObject* accessible, ::AtkObject* parent);
virtual void set_parent_ (Atk::Object parent) noexcept = 0;

// void Object::set_role (AtkObject* accessible, AtkRole role);
// void Object::set_role (::AtkObject* accessible, ::AtkRole role);
virtual void set_role_ (Atk::Role role) noexcept = 0;

// void Object::state_change (AtkObject* accessible, const gchar* name, gboolean state_set);
// void Object::state_change (::AtkObject* accessible, const char* name, gboolean state_set);
virtual void state_change_ (const std::string & name, gboolean state_set) noexcept = 0;

// void Object::visible_data_changed (AtkObject* accessible);
// void Object::visible_data_changed (::AtkObject* accessible);
virtual void visible_data_changed_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ObjectClass: public detail::ClassTemplate<Atk::impl::internal::ObjectClassDef, GObject::impl::internal::ObjectClass>
{
typedef ObjectClass self;
typedef detail::ClassTemplate<Atk::impl::internal::ObjectClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Object::active_descendant_changed (AtkObject* accessible, gpointer* child);
// void Object::active_descendant_changed (::AtkObject* accessible, void* child);
// SKIP; inconsistent in child pointer depth (2 vs 1)

// void Object::children_changed (AtkObject* accessible, guint change_index, gpointer changed_child);
// void Object::children_changed (::AtkObject* accessible, guint change_index, void* changed_child);
GI_INLINE_DECL void children_changed_ (guint change_index, void* changed_child) noexcept override;

// void Object::focus_event (AtkObject* accessible, gboolean focus_in);
// void Object::focus_event (::AtkObject* accessible, gboolean focus_in);
GI_INLINE_DECL void focus_event_ (gboolean focus_in) noexcept override;

//  Object::get_attributes (AtkObject* accessible);
//  Object::get_attributes (::AtkObject* accessible);
// SKIP; inconsistent list element info

// const gchar* Object::get_description (AtkObject* accessible);
// const char* Object::get_description (::AtkObject* accessible);
// SKIP; invalid callback return transfer none

// gint Object::get_index_in_parent (AtkObject* accessible);
// gint Object::get_index_in_parent (::AtkObject* accessible);
GI_INLINE_DECL gint get_index_in_parent_ () noexcept override;

// AtkLayer Object::get_layer (AtkObject* accessible);
// ::AtkLayer Object::get_layer (::AtkObject* accessible);
// IGNORE; deprecated

// gint Object::get_mdi_zorder (AtkObject* accessible);
// gint Object::get_mdi_zorder (::AtkObject* accessible);
// IGNORE; deprecated

// gint Object::get_n_children (AtkObject* accessible);
// gint Object::get_n_children (::AtkObject* accessible);
GI_INLINE_DECL gint get_n_children_ () noexcept override;

// const gchar* Object::get_name (AtkObject* accessible);
// const char* Object::get_name (::AtkObject* accessible);
// SKIP; invalid callback return transfer none

// const gchar* Object::get_object_locale (AtkObject* accessible);
// const char* Object::get_object_locale (::AtkObject* accessible);
// SKIP; invalid callback return transfer none

// AtkObject* Object::get_parent (AtkObject* accessible);
// ::AtkObject* Object::get_parent (::AtkObject* accessible);
GI_INLINE_DECL Atk::Object get_parent_ () noexcept override;

// AtkRole Object::get_role (AtkObject* accessible);
// ::AtkRole Object::get_role (::AtkObject* accessible);
GI_INLINE_DECL Atk::Role get_role_ () noexcept override;

// void Object::initialize (AtkObject* accessible, gpointer data);
// void Object::initialize (::AtkObject* accessible, void* data);
GI_INLINE_DECL void initialize_ (void* data) noexcept override;

// void Object::property_change (AtkObject* accessible, AtkPropertyValues* values);
// void Object::property_change (::AtkObject* accessible, ::AtkPropertyValues* values);
GI_INLINE_DECL void property_change_ (Atk::PropertyValues values) noexcept override;

// AtkRelationSet* Object::ref_relation_set (AtkObject* accessible);
// ::AtkRelationSet* Object::ref_relation_set (::AtkObject* accessible);
GI_INLINE_DECL Atk::RelationSet ref_relation_set_ () noexcept override;

// AtkStateSet* Object::ref_state_set (AtkObject* accessible);
// ::AtkStateSet* Object::ref_state_set (::AtkObject* accessible);
GI_INLINE_DECL Atk::StateSet ref_state_set_ () noexcept override;

// void Object::remove_property_change_handler (AtkObject* accessible, guint handler_id);
// void Object::remove_property_change_handler (::AtkObject* accessible, guint handler_id);
// IGNORE; deprecated

// void Object::set_description (AtkObject* accessible, const gchar* description);
// void Object::set_description (::AtkObject* accessible, const char* description);
GI_INLINE_DECL void set_description_ (const std::string & description) noexcept override;

// void Object::set_name (AtkObject* accessible, const gchar* name);
// void Object::set_name (::AtkObject* accessible, const char* name);
GI_INLINE_DECL void set_name_ (const std::string & name) noexcept override;

// void Object::set_parent (AtkObject* accessible, AtkObject* parent);
// void Object::set_parent (::AtkObject* accessible, ::AtkObject* parent);
GI_INLINE_DECL void set_parent_ (Atk::Object parent) noexcept override;

// void Object::set_role (AtkObject* accessible, AtkRole role);
// void Object::set_role (::AtkObject* accessible, ::AtkRole role);
GI_INLINE_DECL void set_role_ (Atk::Role role) noexcept override;

// void Object::state_change (AtkObject* accessible, const gchar* name, gboolean state_set);
// void Object::state_change (::AtkObject* accessible, const char* name, gboolean state_set);
GI_INLINE_DECL void state_change_ (const std::string & name, gboolean state_set) noexcept override;

// void Object::visible_data_changed (AtkObject* accessible);
// void Object::visible_data_changed (::AtkObject* accessible);
GI_INLINE_DECL void visible_data_changed_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ObjectImpl = detail::ObjectImpl<Object, internal::ObjectClass>;

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
