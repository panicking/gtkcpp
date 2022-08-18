// AUTO-GENERATED

#ifndef _GI_GST_ALLOCATOR_HPP_
#define _GI_GST_ALLOCATOR_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {

class AllocationParams;
class Memory;

class Allocator;

namespace base {


#define GI_GST_ALLOCATOR_BASE base::AllocatorBase
class AllocatorBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstAllocator BaseObjectType;

AllocatorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_allocator_get_type(); } 

// GstAllocator* gst_allocator_find (const gchar* name);
// ::GstAllocator* gst_allocator_find (const char* name);
static GI_INLINE_DECL Gst::Allocator find (const std::string & name) noexcept;
static GI_INLINE_DECL Gst::Allocator find () noexcept;

// void gst_allocator_register (const gchar* name, GstAllocator* allocator);
// void gst_allocator_register (const char* name, ::GstAllocator* allocator);
static GI_INLINE_DECL void register_ (const std::string & name, Gst::Allocator allocator) noexcept;

// GstMemory* gst_allocator_alloc (GstAllocator* allocator, gsize size, GstAllocationParams* params);
// ::GstMemory* gst_allocator_alloc (::GstAllocator* allocator, gsize size, ::GstAllocationParams* params);
GI_INLINE_DECL Gst::Memory alloc (gsize size, Gst::AllocationParams params) noexcept;
GI_INLINE_DECL Gst::Memory alloc (gsize size) noexcept;

// void gst_allocator_free (GstAllocator* allocator, GstMemory* memory);
// void gst_allocator_free (::GstAllocator* allocator, ::GstMemory* memory);
// IGNORE; marked ignore

// void gst_allocator_set_default (GstAllocator* allocator);
// void gst_allocator_set_default (::GstAllocator* allocator);
GI_INLINE_DECL void set_default () noexcept;

// const char* Allocator::mem_type (const ::GstAllocator* obj);
// const char* Allocator::mem_type (const ::GstAllocator* obj);
GI_INLINE_DECL std::string mem_type_ () const noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/allocator_extra_def.hpp>)
#include <gst/allocator_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/allocator_extra.hpp>)
#include <gst/allocator_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Allocator : public GI_GST_ALLOCATOR_BASE
{ typedef GI_GST_ALLOCATOR_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstAllocator>
{ typedef Gst::Allocator type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class AllocatorClassDef
{
typedef AllocatorClassDef self;
public:
typedef Gst::Allocator instance_type;
typedef ::GstAllocatorClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// GstMemory* Allocator::alloc (GstAllocator* allocator, gsize size, GstAllocationParams* params);
// ::GstMemory* Allocator::alloc (::GstAllocator* allocator, gsize size, ::GstAllocationParams* params);
virtual Gst::Memory alloc_ (gsize size, Gst::AllocationParams params) noexcept = 0;

// void Allocator::free (GstAllocator* allocator, GstMemory* memory);
// void Allocator::free (::GstAllocator* allocator, ::GstMemory* memory);
virtual void free_ (Gst::Memory memory) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class AllocatorClass: public detail::ClassTemplate<Gst::impl::internal::AllocatorClassDef, Gst::impl::internal::ObjectClass>
{
typedef AllocatorClass self;
typedef detail::ClassTemplate<Gst::impl::internal::AllocatorClassDef, Gst::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// GstMemory* Allocator::alloc (GstAllocator* allocator, gsize size, GstAllocationParams* params);
// ::GstMemory* Allocator::alloc (::GstAllocator* allocator, gsize size, ::GstAllocationParams* params);
GI_INLINE_DECL Gst::Memory alloc_ (gsize size, Gst::AllocationParams params) noexcept override;

// void Allocator::free (GstAllocator* allocator, GstMemory* memory);
// void Allocator::free (::GstAllocator* allocator, ::GstMemory* memory);
GI_INLINE_DECL void free_ (Gst::Memory memory) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using AllocatorImpl = detail::ObjectImpl<Allocator, internal::AllocatorClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
