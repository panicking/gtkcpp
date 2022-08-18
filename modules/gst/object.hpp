// AUTO-GENERATED

#ifndef _GI_GST_OBJECT_HPP_
#define _GI_GST_OBJECT_HPP_


namespace gi {

namespace repository {

namespace Gst {

class ControlBinding;

class Object;

namespace base {


#define GI_GST_OBJECT_BASE base::ObjectBase
class ObjectBase : public GObject::InitiallyUnowned
{
typedef GObject::InitiallyUnowned super_type;
public:
typedef ::GstObject BaseObjectType;

ObjectBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_object_get_type(); } 

// gboolean gst_object_check_uniqueness (GList* list, const gchar* name);
// gboolean gst_object_check_uniqueness (::GList* list, const char* name);
static GI_INLINE_DECL bool check_uniqueness (const std::vector<Gst::Object> & list, const std::string & name) noexcept;

// void gst_object_default_deep_notify (GObject* object, GstObject* orig, GParamSpec* pspec, gchar** excluded_props);
// void gst_object_default_deep_notify (::GObject* object, ::GstObject* orig, ::GParamSpec* pspec, char** excluded_props);
static GI_INLINE_DECL void default_deep_notify (GObject::Object object, Gst::Object orig, GObject::ParamSpec pspec, const std::vector<std::string> & excluded_props) noexcept;

// gpointer gst_object_ref_sink (gpointer object);
// void* gst_object_ref_sink (void* object);
// IGNORE; marked ignore

// gboolean gst_object_replace (GstObject** oldobj, GstObject* newobj);
// gboolean gst_object_replace (::GstObject** oldobj, ::GstObject* newobj);
static GI_INLINE_DECL bool replace (Gst::Object * oldobj, Gst::Object newobj) noexcept;
static GI_INLINE_DECL bool replace (Gst::Object * oldobj = nullptr) noexcept;

// gboolean gst_object_add_control_binding (GstObject* object, GstControlBinding* binding);
// gboolean gst_object_add_control_binding (::GstObject* object, ::GstControlBinding* binding);
GI_INLINE_DECL bool add_control_binding (Gst::ControlBinding binding) noexcept;

// void gst_object_default_error (GstObject* source, const GError* error, const gchar* debug);
// void gst_object_default_error (::GstObject* source, const ::GError* error, const char* debug);
GI_INLINE_DECL void default_error (const GLib::Error & error, const std::string & debug) noexcept;
GI_INLINE_DECL void default_error (const GLib::Error & error) noexcept;

// GstControlBinding* gst_object_get_control_binding (GstObject* object, const gchar* property_name);
// ::GstControlBinding* gst_object_get_control_binding (::GstObject* object, const char* property_name);
GI_INLINE_DECL Gst::ControlBinding get_control_binding (const std::string & property_name) noexcept;

// GstClockTime gst_object_get_control_rate (GstObject* object);
// ::GstClockTime gst_object_get_control_rate (::GstObject* object);
GI_INLINE_DECL Gst::ClockTime get_control_rate () noexcept;

// gboolean gst_object_get_g_value_array (GstObject* object, const gchar* property_name, GstClockTime timestamp, GstClockTime interval, guint n_values, GValue* values);
// gboolean gst_object_get_g_value_array (::GstObject* object, const char* property_name, ::GstClockTime timestamp, ::GstClockTime interval, guint n_values, ::GValue** values);
// SKIP; inconsistent in values pointer depth (1 vs 2)

// gchar* gst_object_get_name (GstObject* object);
// char* gst_object_get_name (::GstObject* object);
GI_INLINE_DECL std::string get_name () noexcept;

// GstObject* gst_object_get_parent (GstObject* object);
// ::GstObject* gst_object_get_parent (::GstObject* object);
GI_INLINE_DECL Gst::Object get_parent () noexcept;

// gchar* gst_object_get_path_string (GstObject* object);
// char* gst_object_get_path_string (::GstObject* object);
GI_INLINE_DECL std::string get_path_string () noexcept;

// GValue* gst_object_get_value (GstObject* object, const gchar* property_name, GstClockTime timestamp);
// ::GValue* gst_object_get_value (::GstObject* object, const char* property_name, ::GstClockTime timestamp);
GI_INLINE_DECL GObject::Value get_value (const std::string & property_name, ::GstClockTime timestamp) noexcept;

// gboolean gst_object_get_value_array (GstObject* object, const gchar* property_name, GstClockTime timestamp, GstClockTime interval, guint n_values, gpointer values);
// gboolean gst_object_get_value_array (::GstObject* object, const char* property_name, ::GstClockTime timestamp, ::GstClockTime interval, guint n_values, void* values);
GI_INLINE_DECL bool get_value_array (const std::string & property_name, ::GstClockTime timestamp, ::GstClockTime interval, guint n_values, void* values) noexcept;

// gboolean gst_object_has_active_control_bindings (GstObject* object);
// gboolean gst_object_has_active_control_bindings (::GstObject* object);
GI_INLINE_DECL bool has_active_control_bindings () noexcept;

// gboolean gst_object_has_ancestor (GstObject* object, GstObject* ancestor);
// gboolean gst_object_has_ancestor (::GstObject* object, ::GstObject* ancestor);
// IGNORE; deprecated

// gboolean gst_object_has_as_ancestor (GstObject* object, GstObject* ancestor);
// gboolean gst_object_has_as_ancestor (::GstObject* object, ::GstObject* ancestor);
GI_INLINE_DECL bool has_as_ancestor (Gst::Object ancestor) noexcept;

// gboolean gst_object_has_as_parent (GstObject* object, GstObject* parent);
// gboolean gst_object_has_as_parent (::GstObject* object, ::GstObject* parent);
GI_INLINE_DECL bool has_as_parent (Gst::Object parent) noexcept;

// gpointer gst_object_ref (gpointer object);
// ::GstObject* gst_object_ref (::GstObject* object);
// IGNORE; marked ignore

// gboolean gst_object_remove_control_binding (GstObject* object, GstControlBinding* binding);
// gboolean gst_object_remove_control_binding (::GstObject* object, ::GstControlBinding* binding);
GI_INLINE_DECL bool remove_control_binding (Gst::ControlBinding binding) noexcept;

// void gst_object_set_control_binding_disabled (GstObject* object, const gchar* property_name, gboolean disabled);
// void gst_object_set_control_binding_disabled (::GstObject* object, const char* property_name, gboolean disabled);
GI_INLINE_DECL void set_control_binding_disabled (const std::string & property_name, gboolean disabled) noexcept;

// void gst_object_set_control_bindings_disabled (GstObject* object, gboolean disabled);
// void gst_object_set_control_bindings_disabled (::GstObject* object, gboolean disabled);
GI_INLINE_DECL void set_control_bindings_disabled (gboolean disabled) noexcept;

// void gst_object_set_control_rate (GstObject* object, GstClockTime control_rate);
// void gst_object_set_control_rate (::GstObject* object, ::GstClockTime control_rate);
GI_INLINE_DECL void set_control_rate (::GstClockTime control_rate) noexcept;

// gboolean gst_object_set_name (GstObject* object, const gchar* name);
// gboolean gst_object_set_name (::GstObject* object, const char* name);
GI_INLINE_DECL bool set_name (const std::string & name) noexcept;
GI_INLINE_DECL bool set_name () noexcept;

// gboolean gst_object_set_parent (GstObject* object, GstObject* parent);
// gboolean gst_object_set_parent (::GstObject* object, ::GstObject* parent);
GI_INLINE_DECL bool set_parent (Gst::Object parent) noexcept;

// GstClockTime gst_object_suggest_next_sync (GstObject* object);
// ::GstClockTime gst_object_suggest_next_sync (::GstObject* object);
GI_INLINE_DECL Gst::ClockTime suggest_next_sync () noexcept;

// gboolean gst_object_sync_values (GstObject* object, GstClockTime timestamp);
// gboolean gst_object_sync_values (::GstObject* object, ::GstClockTime timestamp);
GI_INLINE_DECL bool sync_values (::GstClockTime timestamp) noexcept;

// void gst_object_unparent (GstObject* object);
// void gst_object_unparent (::GstObject* object);
GI_INLINE_DECL void unparent () noexcept;

// void gst_object_unref (gpointer object);
// void gst_object_unref (::GstObject* object);
// IGNORE; marked ignore

gi::property_proxy<std::string, base::ObjectBase> property_name()
{ return gi::property_proxy<std::string, base::ObjectBase> (*this, "name"); }
const gi::property_proxy<std::string, base::ObjectBase> property_name() const
{ return gi::property_proxy<std::string, base::ObjectBase> (*this, "name"); }

gi::property_proxy<Gst::Object, base::ObjectBase> property_parent()
{ return gi::property_proxy<Gst::Object, base::ObjectBase> (*this, "parent"); }
const gi::property_proxy<Gst::Object, base::ObjectBase> property_parent() const
{ return gi::property_proxy<Gst::Object, base::ObjectBase> (*this, "parent"); }

// char* Object::name (const ::GstObject* obj);
// char* Object::name (const ::GstObject* obj);
GI_INLINE_DECL std::string name_ () const noexcept;

// ::GstObject* Object::parent (const ::GstObject* obj);
// ::GstObject* Object::parent (const ::GstObject* obj);
GI_INLINE_DECL Gst::Object parent_ () const noexcept;

// guint32 Object::flags (const ::GstObject* obj);
// guint32 Object::flags (const ::GstObject* obj);
GI_INLINE_DECL guint32 flags_ () const noexcept;

//  Object::flags (::GstObject* obj, guint32 _value);
// void Object::flags (::GstObject* obj, guint32 _value);
GI_INLINE_DECL void flags_ (guint32 _value) noexcept;

// signal deep-notify
gi::signal_proxy<void(Gst::Object, Gst::Object prop_object, GObject::ParamSpec prop)> signal_deep_notify()
{ return gi::signal_proxy<void(Gst::Object, Gst::Object prop_object, GObject::ParamSpec prop)> (*this, "deep-notify"); }

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/object_extra_def.hpp>)
#include <gst/object_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/object_extra.hpp>)
#include <gst/object_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Object : public GI_GST_OBJECT_BASE
{ typedef GI_GST_OBJECT_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstObject>
{ typedef Gst::Object type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class ObjectClassDef
{
typedef ObjectClassDef self;
public:
typedef Gst::Object instance_type;
typedef ::GstObjectClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Object::deep_notify (GstObject* object, GstObject* orig, GParamSpec* pspec);
// void Object::deep_notify (::GstObject* object, ::GstObject* orig, ::GParamSpec* pspec);
virtual void deep_notify_ (Gst::Object orig, GObject::ParamSpec pspec) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ObjectClass: public detail::ClassTemplate<Gst::impl::internal::ObjectClassDef, GObject::impl::internal::InitiallyUnownedClass>
{
typedef ObjectClass self;
typedef detail::ClassTemplate<Gst::impl::internal::ObjectClassDef, GObject::impl::internal::InitiallyUnownedClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Object::deep_notify (GstObject* object, GstObject* orig, GParamSpec* pspec);
// void Object::deep_notify (::GstObject* object, ::GstObject* orig, ::GParamSpec* pspec);
GI_INLINE_DECL void deep_notify_ (Gst::Object orig, GObject::ParamSpec pspec) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ObjectImpl = detail::ObjectImpl<Object, internal::ObjectClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
