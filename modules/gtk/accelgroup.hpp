// AUTO-GENERATED

#ifndef _GI_GTK_ACCELGROUP_HPP_
#define _GI_GTK_ACCELGROUP_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class AccelGroupEntry;
class AccelKey;

class AccelGroup;

namespace base {


#define GI_GTK_ACCELGROUP_BASE base::AccelGroupBase
class AccelGroupBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkAccelGroup BaseObjectType;

AccelGroupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_accel_group_get_type(); } 

// GtkAccelGroup* gtk_accel_group_new ();
// ::GtkAccelGroup* gtk_accel_group_new ();
static GI_INLINE_DECL Gtk::AccelGroup new_ () noexcept;

// GtkAccelGroup* gtk_accel_group_from_accel_closure (GClosure* closure);
// ::GtkAccelGroup* gtk_accel_group_from_accel_closure (::GClosure* closure);
static GI_INLINE_DECL Gtk::AccelGroup from_accel_closure (GObject::Closure closure) noexcept;

// gboolean gtk_accel_group_activate (GtkAccelGroup* accel_group, GQuark accel_quark, GObject* acceleratable, guint accel_key, GdkModifierType accel_mods);
// gboolean gtk_accel_group_activate (::GtkAccelGroup* accel_group, ::GQuark accel_quark, ::GObject* acceleratable, guint accel_key, ::GdkModifierType accel_mods);
GI_INLINE_DECL bool activate (::GQuark accel_quark, GObject::Object acceleratable, guint accel_key, Gdk::ModifierType accel_mods) noexcept;

// void gtk_accel_group_connect (GtkAccelGroup* accel_group, guint accel_key, GdkModifierType accel_mods, GtkAccelFlags accel_flags, GClosure* closure);
// void gtk_accel_group_connect (::GtkAccelGroup* accel_group, guint accel_key, ::GdkModifierType accel_mods, ::GtkAccelFlags accel_flags, ::GClosure* closure);
GI_INLINE_DECL void connect (guint accel_key, Gdk::ModifierType accel_mods, Gtk::AccelFlags accel_flags, GObject::Closure closure) noexcept;

// void gtk_accel_group_connect_by_path (GtkAccelGroup* accel_group, const gchar* accel_path, GClosure* closure);
// void gtk_accel_group_connect_by_path (::GtkAccelGroup* accel_group, const char* accel_path, ::GClosure* closure);
GI_INLINE_DECL void connect_by_path (const std::string & accel_path, GObject::Closure closure) noexcept;

// gboolean gtk_accel_group_disconnect (GtkAccelGroup* accel_group, GClosure* closure);
// gboolean gtk_accel_group_disconnect (::GtkAccelGroup* accel_group, ::GClosure* closure);
GI_INLINE_DECL bool disconnect (GObject::Closure closure) noexcept;
GI_INLINE_DECL bool disconnect () noexcept;

// gboolean gtk_accel_group_disconnect_key (GtkAccelGroup* accel_group, guint accel_key, GdkModifierType accel_mods);
// gboolean gtk_accel_group_disconnect_key (::GtkAccelGroup* accel_group, guint accel_key, ::GdkModifierType accel_mods);
GI_INLINE_DECL bool disconnect_key (guint accel_key, Gdk::ModifierType accel_mods) noexcept;

// GtkAccelKey* gtk_accel_group_find (GtkAccelGroup* accel_group, GtkAccelGroupFindFunc find_func, gpointer data);
// ::GtkAccelKey* gtk_accel_group_find (::GtkAccelGroup* accel_group, Gtk::AccelGroupFindFunc::cfunction_type find_func, void* data);
GI_INLINE_DECL Gtk::AccelKey find (Gtk::AccelGroupFindFunc find_func) noexcept;

// gboolean gtk_accel_group_get_is_locked (GtkAccelGroup* accel_group);
// gboolean gtk_accel_group_get_is_locked (::GtkAccelGroup* accel_group);
GI_INLINE_DECL bool get_is_locked () noexcept;

// GdkModifierType gtk_accel_group_get_modifier_mask (GtkAccelGroup* accel_group);
// ::GdkModifierType gtk_accel_group_get_modifier_mask (::GtkAccelGroup* accel_group);
GI_INLINE_DECL Gdk::ModifierType get_modifier_mask () noexcept;

// void gtk_accel_group_lock (GtkAccelGroup* accel_group);
// void gtk_accel_group_lock (::GtkAccelGroup* accel_group);
GI_INLINE_DECL void lock () noexcept;

// GtkAccelGroupEntry* gtk_accel_group_query (GtkAccelGroup* accel_group, guint accel_key, GdkModifierType accel_mods, guint* n_entries);
// ::GtkAccelGroupEntry** gtk_accel_group_query (::GtkAccelGroup* accel_group, guint accel_key, ::GdkModifierType accel_mods, guint* n_entries);
// SKIP; inconsistent return  pointer depth (1 vs 2)

// void gtk_accel_group_unlock (GtkAccelGroup* accel_group);
// void gtk_accel_group_unlock (::GtkAccelGroup* accel_group);
GI_INLINE_DECL void unlock () noexcept;

gi::property_proxy<bool, base::AccelGroupBase> property_is_locked()
{ return gi::property_proxy<bool, base::AccelGroupBase> (*this, "is-locked"); }
const gi::property_proxy<bool, base::AccelGroupBase> property_is_locked() const
{ return gi::property_proxy<bool, base::AccelGroupBase> (*this, "is-locked"); }

gi::property_proxy<Gdk::ModifierType, base::AccelGroupBase> property_modifier_mask()
{ return gi::property_proxy<Gdk::ModifierType, base::AccelGroupBase> (*this, "modifier-mask"); }
const gi::property_proxy<Gdk::ModifierType, base::AccelGroupBase> property_modifier_mask() const
{ return gi::property_proxy<Gdk::ModifierType, base::AccelGroupBase> (*this, "modifier-mask"); }

// signal accel-activate
gi::signal_proxy<bool(Gtk::AccelGroup, GObject::Object acceleratable, guint keyval, Gdk::ModifierType modifier)> signal_accel_activate()
{ return gi::signal_proxy<bool(Gtk::AccelGroup, GObject::Object acceleratable, guint keyval, Gdk::ModifierType modifier)> (*this, "accel-activate"); }

// signal accel-changed
gi::signal_proxy<void(Gtk::AccelGroup, guint keyval, Gdk::ModifierType modifier, GObject::Closure accel_closure)> signal_accel_changed()
{ return gi::signal_proxy<void(Gtk::AccelGroup, guint keyval, Gdk::ModifierType modifier, GObject::Closure accel_closure)> (*this, "accel-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accelgroup_extra_def.hpp>)
#include <gtk/accelgroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accelgroup_extra.hpp>)
#include <gtk/accelgroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AccelGroup : public GI_GTK_ACCELGROUP_BASE
{ typedef GI_GTK_ACCELGROUP_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAccelGroup>
{ typedef Gtk::AccelGroup type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class AccelGroupClassDef
{
typedef AccelGroupClassDef self;
public:
typedef Gtk::AccelGroup instance_type;
typedef ::GtkAccelGroupClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void AccelGroup::accel_changed (GtkAccelGroup* accel_group, guint keyval, GdkModifierType modifier, GClosure* accel_closure);
// void AccelGroup::accel_changed (::GtkAccelGroup* accel_group, guint keyval, ::GdkModifierType modifier, ::GClosure* accel_closure);
virtual void accel_changed_ (guint keyval, Gdk::ModifierType modifier, GObject::Closure accel_closure) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class AccelGroupClass: public detail::ClassTemplate<Gtk::impl::internal::AccelGroupClassDef, GObject::impl::internal::ObjectClass>
{
typedef AccelGroupClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::AccelGroupClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void AccelGroup::accel_changed (GtkAccelGroup* accel_group, guint keyval, GdkModifierType modifier, GClosure* accel_closure);
// void AccelGroup::accel_changed (::GtkAccelGroup* accel_group, guint keyval, ::GdkModifierType modifier, ::GClosure* accel_closure);
GI_INLINE_DECL void accel_changed_ (guint keyval, Gdk::ModifierType modifier, GObject::Closure accel_closure) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using AccelGroupImpl = detail::ObjectImpl<AccelGroup, internal::AccelGroupClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
