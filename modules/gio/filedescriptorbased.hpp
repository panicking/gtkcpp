// AUTO-GENERATED

#ifndef _GI_GIO_FILEDESCRIPTORBASED_HPP_
#define _GI_GIO_FILEDESCRIPTORBASED_HPP_


namespace gi {

namespace repository {

namespace Gio {


class FileDescriptorBased;

namespace base {


#define GI_GIO_FILEDESCRIPTORBASED_BASE base::FileDescriptorBasedBase
class FileDescriptorBasedBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GFileDescriptorBased BaseObjectType;

FileDescriptorBasedBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_file_descriptor_based_get_type(); } 

// int g_file_descriptor_based_get_fd (GFileDescriptorBased* fd_based);
// gint g_file_descriptor_based_get_fd (::GFileDescriptorBased* fd_based);
GI_INLINE_DECL gint get_fd () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/filedescriptorbased_extra_def.hpp>)
#include <gio/filedescriptorbased_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/filedescriptorbased_extra.hpp>)
#include <gio/filedescriptorbased_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FileDescriptorBased : public GI_GIO_FILEDESCRIPTORBASED_BASE
{ typedef GI_GIO_FILEDESCRIPTORBASED_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFileDescriptorBased>
{ typedef Gio::FileDescriptorBased type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class FileDescriptorBasedIfaceDef
{
typedef FileDescriptorBasedIfaceDef self;
public:
typedef Gio::FileDescriptorBased instance_type;
typedef ::GFileDescriptorBasedIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// int FileDescriptorBased::get_fd (GFileDescriptorBased* fd_based);
// gint FileDescriptorBased::get_fd (::GFileDescriptorBased* fd_based);
virtual gint get_fd_ () noexcept = 0;


};

using FileDescriptorBasedImpl = detail::InterfaceImpl<FileDescriptorBasedIfaceDef>;

class FileDescriptorBasedIfaceClassImpl: public detail::InterfaceClassImpl<FileDescriptorBasedImpl>
{
typedef FileDescriptorBasedIfaceClassImpl self;
typedef detail::InterfaceClassImpl<FileDescriptorBasedImpl> super;

protected:
using super::super;

// int FileDescriptorBased::get_fd (GFileDescriptorBased* fd_based);
// gint FileDescriptorBased::get_fd (::GFileDescriptorBased* fd_based);
GI_INLINE_DECL gint get_fd_ () noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
