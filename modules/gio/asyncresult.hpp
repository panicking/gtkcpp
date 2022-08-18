// AUTO-GENERATED

#ifndef _GI_GIO_ASYNCRESULT_HPP_
#define _GI_GIO_ASYNCRESULT_HPP_


namespace gi {

namespace repository {

namespace Gio {


class AsyncResult;

namespace base {


#define GI_GIO_ASYNCRESULT_BASE base::AsyncResultBase
class AsyncResultBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GAsyncResult BaseObjectType;

AsyncResultBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_async_result_get_type(); } 

// GObject* g_async_result_get_source_object (GAsyncResult* res);
// ::GObject* g_async_result_get_source_object (::GAsyncResult* res);
GI_INLINE_DECL GObject::Object get_source_object () noexcept;

// gpointer g_async_result_get_user_data (GAsyncResult* res);
// void* g_async_result_get_user_data (::GAsyncResult* res);
GI_INLINE_DECL gpointer get_user_data () noexcept;

// gboolean g_async_result_is_tagged (GAsyncResult* res, gpointer source_tag);
// gboolean g_async_result_is_tagged (::GAsyncResult* res, void* source_tag);
GI_INLINE_DECL bool is_tagged (void* source_tag) noexcept;

// gboolean g_async_result_legacy_propagate_error (GAsyncResult* res, GError ** error);
// gboolean g_async_result_legacy_propagate_error (::GAsyncResult* res, GError ** error);
GI_INLINE_DECL bool legacy_propagate_error ();
GI_INLINE_DECL bool legacy_propagate_error (GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/asyncresult_extra_def.hpp>)
#include <gio/asyncresult_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/asyncresult_extra.hpp>)
#include <gio/asyncresult_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class AsyncResult : public GI_GIO_ASYNCRESULT_BASE
{ typedef GI_GIO_ASYNCRESULT_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GAsyncResult>
{ typedef Gio::AsyncResult type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class AsyncResultIfaceDef
{
typedef AsyncResultIfaceDef self;
public:
typedef Gio::AsyncResult instance_type;
typedef ::GAsyncResultIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GObject* AsyncResult::get_source_object (GAsyncResult* res);
// ::GObject* AsyncResult::get_source_object (::GAsyncResult* res);
virtual GObject::Object get_source_object_ () noexcept = 0;

// gpointer AsyncResult::get_user_data (GAsyncResult* res);
// void* AsyncResult::get_user_data (::GAsyncResult* res);
virtual gpointer get_user_data_ () noexcept = 0;

// gboolean AsyncResult::is_tagged (GAsyncResult* res, gpointer source_tag);
// gboolean AsyncResult::is_tagged (::GAsyncResult* res, void* source_tag);
virtual bool is_tagged_ (void* source_tag) noexcept = 0;


};

using AsyncResultImpl = detail::InterfaceImpl<AsyncResultIfaceDef>;

class AsyncResultIfaceClassImpl: public detail::InterfaceClassImpl<AsyncResultImpl>
{
typedef AsyncResultIfaceClassImpl self;
typedef detail::InterfaceClassImpl<AsyncResultImpl> super;

protected:
using super::super;

// GObject* AsyncResult::get_source_object (GAsyncResult* res);
// ::GObject* AsyncResult::get_source_object (::GAsyncResult* res);
GI_INLINE_DECL GObject::Object get_source_object_ () noexcept override;

// gpointer AsyncResult::get_user_data (GAsyncResult* res);
// void* AsyncResult::get_user_data (::GAsyncResult* res);
GI_INLINE_DECL gpointer get_user_data_ () noexcept override;

// gboolean AsyncResult::is_tagged (GAsyncResult* res, gpointer source_tag);
// gboolean AsyncResult::is_tagged (::GAsyncResult* res, void* source_tag);
GI_INLINE_DECL bool is_tagged_ (void* source_tag) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
