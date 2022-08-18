// AUTO-GENERATED

#ifndef _GI_GST_CHILDPROXY_HPP_
#define _GI_GST_CHILDPROXY_HPP_


namespace gi {

namespace repository {

namespace Gst {


class ChildProxy;

namespace base {


#define GI_GST_CHILDPROXY_BASE base::ChildProxyBase
class ChildProxyBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GstChildProxy BaseObjectType;

ChildProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_child_proxy_get_type(); } 

// void gst_child_proxy_child_added (GstChildProxy* parent, GObject* child, const gchar* name);
// void gst_child_proxy_child_added (::GstChildProxy* parent, ::GObject* child, const char* name);
GI_INLINE_DECL void child_added (GObject::Object child, const std::string & name) noexcept;

// void gst_child_proxy_child_removed (GstChildProxy* parent, GObject* child, const gchar* name);
// void gst_child_proxy_child_removed (::GstChildProxy* parent, ::GObject* child, const char* name);
GI_INLINE_DECL void child_removed (GObject::Object child, const std::string & name) noexcept;

// void gst_child_proxy_get (GstChildProxy* object, const gchar* first_property_name);
// void gst_child_proxy_get (::GstChildProxy* object, const char* first_property_name);
// IGNORE; not introspectable, varargs not supported

// GObject* gst_child_proxy_get_child_by_index (GstChildProxy* parent, guint index);
// ::GObject* gst_child_proxy_get_child_by_index (::GstChildProxy* parent, guint index);
GI_INLINE_DECL GObject::Object get_child_by_index (guint index) noexcept;

// GObject* gst_child_proxy_get_child_by_name (GstChildProxy* parent, const gchar* name);
// ::GObject* gst_child_proxy_get_child_by_name (::GstChildProxy* parent, const char* name);
GI_INLINE_DECL GObject::Object get_child_by_name (const std::string & name) noexcept;

// guint gst_child_proxy_get_children_count (GstChildProxy* parent);
// guint gst_child_proxy_get_children_count (::GstChildProxy* parent);
GI_INLINE_DECL guint get_children_count () noexcept;

// void gst_child_proxy_get_property (GstChildProxy* object, const gchar* name, GValue* value);
// void gst_child_proxy_get_property (::GstChildProxy* object, const char* name, ::GValue* value);
GI_INLINE_DECL void get_property (const std::string & name, GObject::Value & value) noexcept;
GI_INLINE_DECL GObject::Value get_property (const std::string & name) noexcept;

// void gst_child_proxy_get_valist (GstChildProxy* object, const gchar* first_property_name, va_list var_args);
// void gst_child_proxy_get_valist (::GstChildProxy* object, const char* first_property_name,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// gboolean gst_child_proxy_lookup (GstChildProxy* object, const gchar* name, GObject** target, GParamSpec** pspec);
// gboolean gst_child_proxy_lookup (::GstChildProxy* object, const char* name, ::GObject** target, ::GParamSpec** pspec);
GI_INLINE_DECL bool lookup (const std::string & name, GObject::Object * target = nullptr, GObject::ParamSpec * pspec = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, GObject::Object, GObject::ParamSpec> lookup (const std::string & name) noexcept;

// void gst_child_proxy_set (GstChildProxy* object, const gchar* first_property_name);
// void gst_child_proxy_set (::GstChildProxy* object, const char* first_property_name);
// IGNORE; not introspectable, varargs not supported

// void gst_child_proxy_set_property (GstChildProxy* object, const gchar* name, const GValue* value);
// void gst_child_proxy_set_property (::GstChildProxy* object, const char* name, const ::GValue* value);
GI_INLINE_DECL void set_property (const std::string & name, const GObject::Value & value) noexcept;

// void gst_child_proxy_set_valist (GstChildProxy* object, const gchar* first_property_name, va_list var_args);
// void gst_child_proxy_set_valist (::GstChildProxy* object, const char* first_property_name,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// signal child-added
gi::signal_proxy<void(Gst::ChildProxy, GObject::Object object, const std::string & name)> signal_child_added()
{ return gi::signal_proxy<void(Gst::ChildProxy, GObject::Object object, const std::string & name)> (*this, "child-added"); }

// signal child-removed
gi::signal_proxy<void(Gst::ChildProxy, GObject::Object object, const std::string & name)> signal_child_removed()
{ return gi::signal_proxy<void(Gst::ChildProxy, GObject::Object object, const std::string & name)> (*this, "child-removed"); }

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/childproxy_extra_def.hpp>)
#include <gst/childproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/childproxy_extra.hpp>)
#include <gst/childproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class ChildProxy : public GI_GST_CHILDPROXY_BASE
{ typedef GI_GST_CHILDPROXY_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstChildProxy>
{ typedef Gst::ChildProxy type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class ChildProxyInterfaceDef
{
typedef ChildProxyInterfaceDef self;
public:
typedef Gst::ChildProxy instance_type;
typedef ::GstChildProxyInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void ChildProxy::child_added (GstChildProxy* parent, GObject* child, const gchar* name);
// void ChildProxy::child_added (::GstChildProxy* parent, ::GObject* child, const char* name);
virtual void child_added_ (GObject::Object child, const std::string & name) noexcept = 0;

// void ChildProxy::child_removed (GstChildProxy* parent, GObject* child, const gchar* name);
// void ChildProxy::child_removed (::GstChildProxy* parent, ::GObject* child, const char* name);
virtual void child_removed_ (GObject::Object child, const std::string & name) noexcept = 0;

// GObject* ChildProxy::get_child_by_index (GstChildProxy* parent, guint index);
// ::GObject* ChildProxy::get_child_by_index (::GstChildProxy* parent, guint index);
virtual GObject::Object get_child_by_index_ (guint index) noexcept = 0;

// GObject* ChildProxy::get_child_by_name (GstChildProxy* parent, const gchar* name);
// ::GObject* ChildProxy::get_child_by_name (::GstChildProxy* parent, const char* name);
virtual GObject::Object get_child_by_name_ (const std::string & name) noexcept = 0;

// guint ChildProxy::get_children_count (GstChildProxy* parent);
// guint ChildProxy::get_children_count (::GstChildProxy* parent);
virtual guint get_children_count_ () noexcept = 0;


};

using ChildProxyImpl = detail::InterfaceImpl<ChildProxyInterfaceDef>;

class ChildProxyInterfaceClassImpl: public detail::InterfaceClassImpl<ChildProxyImpl>
{
typedef ChildProxyInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<ChildProxyImpl> super;

protected:
using super::super;

// void ChildProxy::child_added (GstChildProxy* parent, GObject* child, const gchar* name);
// void ChildProxy::child_added (::GstChildProxy* parent, ::GObject* child, const char* name);
GI_INLINE_DECL void child_added_ (GObject::Object child, const std::string & name) noexcept override;

// void ChildProxy::child_removed (GstChildProxy* parent, GObject* child, const gchar* name);
// void ChildProxy::child_removed (::GstChildProxy* parent, ::GObject* child, const char* name);
GI_INLINE_DECL void child_removed_ (GObject::Object child, const std::string & name) noexcept override;

// GObject* ChildProxy::get_child_by_index (GstChildProxy* parent, guint index);
// ::GObject* ChildProxy::get_child_by_index (::GstChildProxy* parent, guint index);
GI_INLINE_DECL GObject::Object get_child_by_index_ (guint index) noexcept override;

// GObject* ChildProxy::get_child_by_name (GstChildProxy* parent, const gchar* name);
// ::GObject* ChildProxy::get_child_by_name (::GstChildProxy* parent, const char* name);
GI_INLINE_DECL GObject::Object get_child_by_name_ (const std::string & name) noexcept override;

// guint ChildProxy::get_children_count (GstChildProxy* parent);
// guint ChildProxy::get_children_count (::GstChildProxy* parent);
GI_INLINE_DECL guint get_children_count_ () noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
