// AUTO-GENERATED

#ifndef _GI_GTK_RECENTMANAGER_HPP_
#define _GI_GTK_RECENTMANAGER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class RecentData;
class RecentInfo;

class RecentManager;

namespace base {


#define GI_GTK_RECENTMANAGER_BASE base::RecentManagerBase
class RecentManagerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkRecentManager BaseObjectType;

RecentManagerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_recent_manager_get_type(); } 

// GtkRecentManager* gtk_recent_manager_new ();
// ::GtkRecentManager* gtk_recent_manager_new ();
static GI_INLINE_DECL Gtk::RecentManager new_ () noexcept;

// GtkRecentManager* gtk_recent_manager_get_default ();
// ::GtkRecentManager* gtk_recent_manager_get_default ();
static GI_INLINE_DECL Gtk::RecentManager get_default () noexcept;

// gboolean gtk_recent_manager_add_full (GtkRecentManager* manager, const gchar* uri, const GtkRecentData* recent_data);
// gboolean gtk_recent_manager_add_full (::GtkRecentManager* manager, const char* uri, const ::GtkRecentData* recent_data);
GI_INLINE_DECL bool add_full (const std::string & uri, const Gtk::RecentData & recent_data) noexcept;

// gboolean gtk_recent_manager_add_item (GtkRecentManager* manager, const gchar* uri);
// gboolean gtk_recent_manager_add_item (::GtkRecentManager* manager, const char* uri);
GI_INLINE_DECL bool add_item (const std::string & uri) noexcept;

// GList* gtk_recent_manager_get_items (GtkRecentManager* manager);
// ::GList* gtk_recent_manager_get_items (::GtkRecentManager* manager);
GI_INLINE_DECL std::vector<Gtk::RecentInfo> get_items () noexcept;

// gboolean gtk_recent_manager_has_item (GtkRecentManager* manager, const gchar* uri);
// gboolean gtk_recent_manager_has_item (::GtkRecentManager* manager, const char* uri);
GI_INLINE_DECL bool has_item (const std::string & uri) noexcept;

// GtkRecentInfo* gtk_recent_manager_lookup_item (GtkRecentManager* manager, const gchar* uri, GError ** error);
// ::GtkRecentInfo* gtk_recent_manager_lookup_item (::GtkRecentManager* manager, const char* uri, GError ** error);
GI_INLINE_DECL Gtk::RecentInfo lookup_item (const std::string & uri);
GI_INLINE_DECL Gtk::RecentInfo lookup_item (const std::string & uri, GLib::Error * _error) noexcept;

// gboolean gtk_recent_manager_move_item (GtkRecentManager* manager, const gchar* uri, const gchar* new_uri, GError ** error);
// gboolean gtk_recent_manager_move_item (::GtkRecentManager* manager, const char* uri, const char* new_uri, GError ** error);
GI_INLINE_DECL bool move_item (const std::string & uri, const std::string & new_uri);
GI_INLINE_DECL bool move_item (const std::string & uri);
GI_INLINE_DECL bool move_item (const std::string & uri, const std::string & new_uri, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool move_item (const std::string & uri, GLib::Error * _error) noexcept;

// gint gtk_recent_manager_purge_items (GtkRecentManager* manager, GError ** error);
// gint gtk_recent_manager_purge_items (::GtkRecentManager* manager, GError ** error);
GI_INLINE_DECL gint purge_items ();
GI_INLINE_DECL gint purge_items (GLib::Error * _error) noexcept;

// gboolean gtk_recent_manager_remove_item (GtkRecentManager* manager, const gchar* uri, GError ** error);
// gboolean gtk_recent_manager_remove_item (::GtkRecentManager* manager, const char* uri, GError ** error);
GI_INLINE_DECL bool remove_item (const std::string & uri);
GI_INLINE_DECL bool remove_item (const std::string & uri, GLib::Error * _error) noexcept;

gi::property_proxy<std::string, base::RecentManagerBase> property_filename()
{ return gi::property_proxy<std::string, base::RecentManagerBase> (*this, "filename"); }
const gi::property_proxy<std::string, base::RecentManagerBase> property_filename() const
{ return gi::property_proxy<std::string, base::RecentManagerBase> (*this, "filename"); }

gi::property_proxy<gint, base::RecentManagerBase> property_size()
{ return gi::property_proxy<gint, base::RecentManagerBase> (*this, "size"); }
const gi::property_proxy<gint, base::RecentManagerBase> property_size() const
{ return gi::property_proxy<gint, base::RecentManagerBase> (*this, "size"); }

// signal changed
gi::signal_proxy<void(Gtk::RecentManager)> signal_changed()
{ return gi::signal_proxy<void(Gtk::RecentManager)> (*this, "changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentmanager_extra_def.hpp>)
#include <gtk/recentmanager_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentmanager_extra.hpp>)
#include <gtk/recentmanager_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RecentManager : public GI_GTK_RECENTMANAGER_BASE
{ typedef GI_GTK_RECENTMANAGER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRecentManager>
{ typedef Gtk::RecentManager type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class RecentManagerClassDef
{
typedef RecentManagerClassDef self;
public:
typedef Gtk::RecentManager instance_type;
typedef ::GtkRecentManagerClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void RecentManager::changed (GtkRecentManager* manager);
// void RecentManager::changed (::GtkRecentManager* manager);
virtual void changed_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class RecentManagerClass: public detail::ClassTemplate<Gtk::impl::internal::RecentManagerClassDef, GObject::impl::internal::ObjectClass>
{
typedef RecentManagerClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::RecentManagerClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void RecentManager::changed (GtkRecentManager* manager);
// void RecentManager::changed (::GtkRecentManager* manager);
GI_INLINE_DECL void changed_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using RecentManagerImpl = detail::ObjectImpl<RecentManager, internal::RecentManagerClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
