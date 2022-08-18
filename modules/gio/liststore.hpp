// AUTO-GENERATED

#ifndef _GI_GIO_LISTSTORE_HPP_
#define _GI_GIO_LISTSTORE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class ListModel;

class ListStore;

namespace base {


#define GI_GIO_LISTSTORE_BASE base::ListStoreBase
class ListStoreBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GListStore BaseObjectType;

ListStoreBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_list_store_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

// GListStore* g_list_store_new (GType item_type);
// ::GListStore* g_list_store_new (GType item_type);
static GI_INLINE_DECL Gio::ListStore new_ (GType item_type) noexcept;

// void g_list_store_append (GListStore* store, gpointer item);
// void g_list_store_append (::GListStore* store, ::GObject* item);
GI_INLINE_DECL void append (GObject::Object item) noexcept;

// gboolean g_list_store_find (GListStore* store, gpointer item, guint* position);
// gboolean g_list_store_find (::GListStore* store, ::GObject* item, guint* position);
GI_INLINE_DECL bool find (GObject::Object item, guint * position = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, guint> find (GObject::Object item) noexcept;

// gboolean g_list_store_find_with_equal_func (GListStore* store, gpointer item, GEqualFunc equal_func, guint* position);
// gboolean g_list_store_find_with_equal_func (::GListStore* store, ::GObject* item,  equal_func, guint* position);
// SKIP; equal_func type  not supported

// void g_list_store_insert (GListStore* store, guint position, gpointer item);
// void g_list_store_insert (::GListStore* store, guint position, ::GObject* item);
GI_INLINE_DECL void insert (guint position, GObject::Object item) noexcept;

// guint g_list_store_insert_sorted (GListStore* store, gpointer item, GCompareDataFunc compare_func, gpointer user_data);
// guint g_list_store_insert_sorted (::GListStore* store, ::GObject* item, GLib::CompareDataFunc::cfunction_type compare_func, void* user_data);
GI_INLINE_DECL guint insert_sorted (GObject::Object item, GLib::CompareDataFunc compare_func) noexcept;

// void g_list_store_remove (GListStore* store, guint position);
// void g_list_store_remove (::GListStore* store, guint position);
GI_INLINE_DECL void remove (guint position) noexcept;

// void g_list_store_remove_all (GListStore* store);
// void g_list_store_remove_all (::GListStore* store);
GI_INLINE_DECL void remove_all () noexcept;

// void g_list_store_sort (GListStore* store, GCompareDataFunc compare_func, gpointer user_data);
// void g_list_store_sort (::GListStore* store, GLib::CompareDataFunc::cfunction_type compare_func, void* user_data);
GI_INLINE_DECL void sort (GLib::CompareDataFunc compare_func) noexcept;

// void g_list_store_splice (GListStore* store, guint position, guint n_removals, gpointer* additions, guint n_additions);
// void g_list_store_splice (::GListStore* store, guint position, guint n_removals, ::GObject** additions, guint n_additions);
GI_INLINE_DECL void splice (guint position, guint n_removals, GObject::Object * additions, guint n_additions) noexcept;

gi::property_proxy<GType, base::ListStoreBase> property_item_type()
{ return gi::property_proxy<GType, base::ListStoreBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::ListStoreBase> property_item_type() const
{ return gi::property_proxy<GType, base::ListStoreBase> (*this, "item-type"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/liststore_extra_def.hpp>)
#include <gio/liststore_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/liststore_extra.hpp>)
#include <gio/liststore_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class ListStore : public GI_GIO_LISTSTORE_BASE
{ typedef GI_GIO_LISTSTORE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GListStore>
{ typedef Gio::ListStore type; }; 

} // namespace repository

} // namespace gi

#include "listmodel.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ListStoreClassDef
{
typedef ListStoreClassDef self;
public:
typedef Gio::ListStore instance_type;
typedef ::GListStoreClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ListStoreClass: public detail::ClassTemplate<Gio::impl::internal::ListStoreClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl>
{
typedef ListStoreClass self;
typedef detail::ClassTemplate<Gio::impl::internal::ListStoreClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ListModelInterfaceClassImpl GListModelInterface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using ListStoreImpl = detail::ObjectImpl<ListStore, internal::ListStoreClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
