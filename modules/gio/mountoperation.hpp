// AUTO-GENERATED

#ifndef _GI_GIO_MOUNTOPERATION_HPP_
#define _GI_GIO_MOUNTOPERATION_HPP_


namespace gi {

namespace repository {

namespace Gio {


class MountOperation;

namespace base {


#define GI_GIO_MOUNTOPERATION_BASE base::MountOperationBase
class MountOperationBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GMountOperation BaseObjectType;

MountOperationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_mount_operation_get_type(); } 

// GMountOperation* g_mount_operation_new ();
// ::GMountOperation* g_mount_operation_new ();
static GI_INLINE_DECL Gio::MountOperation new_ () noexcept;

// gboolean g_mount_operation_get_anonymous (GMountOperation* op);
// gboolean g_mount_operation_get_anonymous (::GMountOperation* op);
GI_INLINE_DECL bool get_anonymous () noexcept;

// int g_mount_operation_get_choice (GMountOperation* op);
// gint g_mount_operation_get_choice (::GMountOperation* op);
GI_INLINE_DECL gint get_choice () noexcept;

// const char* g_mount_operation_get_domain (GMountOperation* op);
// const char* g_mount_operation_get_domain (::GMountOperation* op);
GI_INLINE_DECL std::string get_domain () noexcept;

// gboolean g_mount_operation_get_is_tcrypt_hidden_volume (GMountOperation* op);
// gboolean g_mount_operation_get_is_tcrypt_hidden_volume (::GMountOperation* op);
GI_INLINE_DECL bool get_is_tcrypt_hidden_volume () noexcept;

// gboolean g_mount_operation_get_is_tcrypt_system_volume (GMountOperation* op);
// gboolean g_mount_operation_get_is_tcrypt_system_volume (::GMountOperation* op);
GI_INLINE_DECL bool get_is_tcrypt_system_volume () noexcept;

// const char* g_mount_operation_get_password (GMountOperation* op);
// const char* g_mount_operation_get_password (::GMountOperation* op);
GI_INLINE_DECL std::string get_password () noexcept;

// GPasswordSave g_mount_operation_get_password_save (GMountOperation* op);
// ::GPasswordSave g_mount_operation_get_password_save (::GMountOperation* op);
GI_INLINE_DECL Gio::PasswordSave get_password_save () noexcept;

// guint g_mount_operation_get_pim (GMountOperation* op);
// guint g_mount_operation_get_pim (::GMountOperation* op);
GI_INLINE_DECL guint get_pim () noexcept;

// const char* g_mount_operation_get_username (GMountOperation* op);
// const char* g_mount_operation_get_username (::GMountOperation* op);
GI_INLINE_DECL std::string get_username () noexcept;

// void g_mount_operation_reply (GMountOperation* op, GMountOperationResult result);
// void g_mount_operation_reply (::GMountOperation* op, ::GMountOperationResult result);
GI_INLINE_DECL void reply (Gio::MountOperationResult result) noexcept;

// void g_mount_operation_set_anonymous (GMountOperation* op, gboolean anonymous);
// void g_mount_operation_set_anonymous (::GMountOperation* op, gboolean anonymous);
GI_INLINE_DECL void set_anonymous (gboolean anonymous) noexcept;

// void g_mount_operation_set_choice (GMountOperation* op, int choice);
// void g_mount_operation_set_choice (::GMountOperation* op, gint choice);
GI_INLINE_DECL void set_choice (gint choice) noexcept;

// void g_mount_operation_set_domain (GMountOperation* op, const char* domain);
// void g_mount_operation_set_domain (::GMountOperation* op, const char* domain);
GI_INLINE_DECL void set_domain (const std::string & domain) noexcept;
GI_INLINE_DECL void set_domain () noexcept;

// void g_mount_operation_set_is_tcrypt_hidden_volume (GMountOperation* op, gboolean hidden_volume);
// void g_mount_operation_set_is_tcrypt_hidden_volume (::GMountOperation* op, gboolean hidden_volume);
GI_INLINE_DECL void set_is_tcrypt_hidden_volume (gboolean hidden_volume) noexcept;

// void g_mount_operation_set_is_tcrypt_system_volume (GMountOperation* op, gboolean system_volume);
// void g_mount_operation_set_is_tcrypt_system_volume (::GMountOperation* op, gboolean system_volume);
GI_INLINE_DECL void set_is_tcrypt_system_volume (gboolean system_volume) noexcept;

// void g_mount_operation_set_password (GMountOperation* op, const char* password);
// void g_mount_operation_set_password (::GMountOperation* op, const char* password);
GI_INLINE_DECL void set_password (const std::string & password) noexcept;
GI_INLINE_DECL void set_password () noexcept;

// void g_mount_operation_set_password_save (GMountOperation* op, GPasswordSave save);
// void g_mount_operation_set_password_save (::GMountOperation* op, ::GPasswordSave save);
GI_INLINE_DECL void set_password_save (Gio::PasswordSave save) noexcept;

// void g_mount_operation_set_pim (GMountOperation* op, guint pim);
// void g_mount_operation_set_pim (::GMountOperation* op, guint pim);
GI_INLINE_DECL void set_pim (guint pim) noexcept;

// void g_mount_operation_set_username (GMountOperation* op, const char* username);
// void g_mount_operation_set_username (::GMountOperation* op, const char* username);
GI_INLINE_DECL void set_username (const std::string & username) noexcept;
GI_INLINE_DECL void set_username () noexcept;

gi::property_proxy<bool, base::MountOperationBase> property_anonymous()
{ return gi::property_proxy<bool, base::MountOperationBase> (*this, "anonymous"); }
const gi::property_proxy<bool, base::MountOperationBase> property_anonymous() const
{ return gi::property_proxy<bool, base::MountOperationBase> (*this, "anonymous"); }

gi::property_proxy<gint, base::MountOperationBase> property_choice()
{ return gi::property_proxy<gint, base::MountOperationBase> (*this, "choice"); }
const gi::property_proxy<gint, base::MountOperationBase> property_choice() const
{ return gi::property_proxy<gint, base::MountOperationBase> (*this, "choice"); }

gi::property_proxy<std::string, base::MountOperationBase> property_domain()
{ return gi::property_proxy<std::string, base::MountOperationBase> (*this, "domain"); }
const gi::property_proxy<std::string, base::MountOperationBase> property_domain() const
{ return gi::property_proxy<std::string, base::MountOperationBase> (*this, "domain"); }

gi::property_proxy<bool, base::MountOperationBase> property_is_tcrypt_hidden_volume()
{ return gi::property_proxy<bool, base::MountOperationBase> (*this, "is-tcrypt-hidden-volume"); }
const gi::property_proxy<bool, base::MountOperationBase> property_is_tcrypt_hidden_volume() const
{ return gi::property_proxy<bool, base::MountOperationBase> (*this, "is-tcrypt-hidden-volume"); }

gi::property_proxy<bool, base::MountOperationBase> property_is_tcrypt_system_volume()
{ return gi::property_proxy<bool, base::MountOperationBase> (*this, "is-tcrypt-system-volume"); }
const gi::property_proxy<bool, base::MountOperationBase> property_is_tcrypt_system_volume() const
{ return gi::property_proxy<bool, base::MountOperationBase> (*this, "is-tcrypt-system-volume"); }

gi::property_proxy<std::string, base::MountOperationBase> property_password()
{ return gi::property_proxy<std::string, base::MountOperationBase> (*this, "password"); }
const gi::property_proxy<std::string, base::MountOperationBase> property_password() const
{ return gi::property_proxy<std::string, base::MountOperationBase> (*this, "password"); }

gi::property_proxy<Gio::PasswordSave, base::MountOperationBase> property_password_save()
{ return gi::property_proxy<Gio::PasswordSave, base::MountOperationBase> (*this, "password-save"); }
const gi::property_proxy<Gio::PasswordSave, base::MountOperationBase> property_password_save() const
{ return gi::property_proxy<Gio::PasswordSave, base::MountOperationBase> (*this, "password-save"); }

gi::property_proxy<guint, base::MountOperationBase> property_pim()
{ return gi::property_proxy<guint, base::MountOperationBase> (*this, "pim"); }
const gi::property_proxy<guint, base::MountOperationBase> property_pim() const
{ return gi::property_proxy<guint, base::MountOperationBase> (*this, "pim"); }

gi::property_proxy<std::string, base::MountOperationBase> property_username()
{ return gi::property_proxy<std::string, base::MountOperationBase> (*this, "username"); }
const gi::property_proxy<std::string, base::MountOperationBase> property_username() const
{ return gi::property_proxy<std::string, base::MountOperationBase> (*this, "username"); }

// signal aborted
gi::signal_proxy<void(Gio::MountOperation)> signal_aborted()
{ return gi::signal_proxy<void(Gio::MountOperation)> (*this, "aborted"); }

// signal ask-password
gi::signal_proxy<void(Gio::MountOperation, const std::string & message, const std::string & default_user, const std::string & default_domain, Gio::AskPasswordFlags flags)> signal_ask_password()
{ return gi::signal_proxy<void(Gio::MountOperation, const std::string & message, const std::string & default_user, const std::string & default_domain, Gio::AskPasswordFlags flags)> (*this, "ask-password"); }

// signal ask-question
// SKIP; glib:signal container parameter not supported

// signal reply
gi::signal_proxy<void(Gio::MountOperation, Gio::MountOperationResult result)> signal_reply()
{ return gi::signal_proxy<void(Gio::MountOperation, Gio::MountOperationResult result)> (*this, "reply"); }

// signal show-processes
// SKIP; glib:signal container parameter not supported

// signal show-unmount-progress
gi::signal_proxy<void(Gio::MountOperation, const std::string & message, gint64 time_left, gint64 bytes_left)> signal_show_unmount_progress()
{ return gi::signal_proxy<void(Gio::MountOperation, const std::string & message, gint64 time_left, gint64 bytes_left)> (*this, "show-unmount-progress"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/mountoperation_extra_def.hpp>)
#include <gio/mountoperation_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/mountoperation_extra.hpp>)
#include <gio/mountoperation_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class MountOperation : public GI_GIO_MOUNTOPERATION_BASE
{ typedef GI_GIO_MOUNTOPERATION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GMountOperation>
{ typedef Gio::MountOperation type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class MountOperationClassDef
{
typedef MountOperationClassDef self;
public:
typedef Gio::MountOperation instance_type;
typedef ::GMountOperationClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void MountOperation::aborted (GMountOperation* op);
// void MountOperation::aborted (::GMountOperation* op);
virtual void aborted_ () noexcept = 0;

// void MountOperation::ask_password (GMountOperation* op, const char* message, const char* default_user, const char* default_domain, GAskPasswordFlags flags);
// void MountOperation::ask_password (::GMountOperation* op, const char* message, const char* default_user, const char* default_domain, ::GAskPasswordFlags flags);
virtual void ask_password_ (const std::string & message, const std::string & default_user, const std::string & default_domain, Gio::AskPasswordFlags flags) noexcept = 0;

// void MountOperation::ask_question (GMountOperation* op, const char* message, const char** choices);
// void MountOperation::ask_question (::GMountOperation* op, const char* message, const char** choices);
// IGNORE; marked ignore, virtual-method container parameter not supported

// void MountOperation::reply (GMountOperation* op, GMountOperationResult result);
// void MountOperation::reply (::GMountOperation* op, ::GMountOperationResult result);
virtual void reply_ (Gio::MountOperationResult result) noexcept = 0;

// void MountOperation::show_processes (GMountOperation* op, const gchar* message, GArray* processes, const gchar** choices);
// void MountOperation::show_processes (::GMountOperation* op, const char* message,  processes, const char** choices);
// SKIP; virtual-method container parameter not supported

// void MountOperation::show_unmount_progress (GMountOperation* op, const gchar* message, gint64 time_left, gint64 bytes_left);
// void MountOperation::show_unmount_progress (::GMountOperation* op, const char* message, gint64 time_left, gint64 bytes_left);
virtual void show_unmount_progress_ (const std::string & message, gint64 time_left, gint64 bytes_left) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class MountOperationClass: public detail::ClassTemplate<Gio::impl::internal::MountOperationClassDef, GObject::impl::internal::ObjectClass>
{
typedef MountOperationClass self;
typedef detail::ClassTemplate<Gio::impl::internal::MountOperationClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void MountOperation::aborted (GMountOperation* op);
// void MountOperation::aborted (::GMountOperation* op);
GI_INLINE_DECL void aborted_ () noexcept override;

// void MountOperation::ask_password (GMountOperation* op, const char* message, const char* default_user, const char* default_domain, GAskPasswordFlags flags);
// void MountOperation::ask_password (::GMountOperation* op, const char* message, const char* default_user, const char* default_domain, ::GAskPasswordFlags flags);
GI_INLINE_DECL void ask_password_ (const std::string & message, const std::string & default_user, const std::string & default_domain, Gio::AskPasswordFlags flags) noexcept override;

// void MountOperation::ask_question (GMountOperation* op, const char* message, const char** choices);
// void MountOperation::ask_question (::GMountOperation* op, const char* message, const char** choices);
// IGNORE; marked ignore, virtual-method container parameter not supported

// void MountOperation::reply (GMountOperation* op, GMountOperationResult result);
// void MountOperation::reply (::GMountOperation* op, ::GMountOperationResult result);
GI_INLINE_DECL void reply_ (Gio::MountOperationResult result) noexcept override;

// void MountOperation::show_processes (GMountOperation* op, const gchar* message, GArray* processes, const gchar** choices);
// void MountOperation::show_processes (::GMountOperation* op, const char* message,  processes, const char** choices);
// SKIP; virtual-method container parameter not supported

// void MountOperation::show_unmount_progress (GMountOperation* op, const gchar* message, gint64 time_left, gint64 bytes_left);
// void MountOperation::show_unmount_progress (::GMountOperation* op, const char* message, gint64 time_left, gint64 bytes_left);
GI_INLINE_DECL void show_unmount_progress_ (const std::string & message, gint64 time_left, gint64 bytes_left) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using MountOperationImpl = detail::ObjectImpl<MountOperation, internal::MountOperationClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
