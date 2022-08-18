// AUTO-GENERATED

#ifndef _GI_GTK_RECENTCHOOSER_HPP_
#define _GI_GTK_RECENTCHOOSER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class RecentFilter;
class RecentInfo;
class RecentManager;

class RecentChooser;

namespace base {


#define GI_GTK_RECENTCHOOSER_BASE base::RecentChooserBase
class RecentChooserBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkRecentChooser BaseObjectType;

RecentChooserBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_recent_chooser_get_type(); } 

// void gtk_recent_chooser_add_filter (GtkRecentChooser* chooser, GtkRecentFilter* filter);
// void gtk_recent_chooser_add_filter (::GtkRecentChooser* chooser, ::GtkRecentFilter* filter);
GI_INLINE_DECL void add_filter (Gtk::RecentFilter filter) noexcept;

// GtkRecentInfo* gtk_recent_chooser_get_current_item (GtkRecentChooser* chooser);
// ::GtkRecentInfo* gtk_recent_chooser_get_current_item (::GtkRecentChooser* chooser);
GI_INLINE_DECL Gtk::RecentInfo get_current_item () noexcept;

// gchar* gtk_recent_chooser_get_current_uri (GtkRecentChooser* chooser);
// char* gtk_recent_chooser_get_current_uri (::GtkRecentChooser* chooser);
GI_INLINE_DECL std::string get_current_uri () noexcept;

// GtkRecentFilter* gtk_recent_chooser_get_filter (GtkRecentChooser* chooser);
// ::GtkRecentFilter* gtk_recent_chooser_get_filter (::GtkRecentChooser* chooser);
GI_INLINE_DECL Gtk::RecentFilter get_filter () noexcept;

// GList* gtk_recent_chooser_get_items (GtkRecentChooser* chooser);
// ::GList* gtk_recent_chooser_get_items (::GtkRecentChooser* chooser);
GI_INLINE_DECL std::vector<Gtk::RecentInfo> get_items () noexcept;

// gint gtk_recent_chooser_get_limit (GtkRecentChooser* chooser);
// gint gtk_recent_chooser_get_limit (::GtkRecentChooser* chooser);
GI_INLINE_DECL gint get_limit () noexcept;

// gboolean gtk_recent_chooser_get_local_only (GtkRecentChooser* chooser);
// gboolean gtk_recent_chooser_get_local_only (::GtkRecentChooser* chooser);
GI_INLINE_DECL bool get_local_only () noexcept;

// gboolean gtk_recent_chooser_get_select_multiple (GtkRecentChooser* chooser);
// gboolean gtk_recent_chooser_get_select_multiple (::GtkRecentChooser* chooser);
GI_INLINE_DECL bool get_select_multiple () noexcept;

// gboolean gtk_recent_chooser_get_show_icons (GtkRecentChooser* chooser);
// gboolean gtk_recent_chooser_get_show_icons (::GtkRecentChooser* chooser);
GI_INLINE_DECL bool get_show_icons () noexcept;

// gboolean gtk_recent_chooser_get_show_not_found (GtkRecentChooser* chooser);
// gboolean gtk_recent_chooser_get_show_not_found (::GtkRecentChooser* chooser);
GI_INLINE_DECL bool get_show_not_found () noexcept;

// gboolean gtk_recent_chooser_get_show_private (GtkRecentChooser* chooser);
// gboolean gtk_recent_chooser_get_show_private (::GtkRecentChooser* chooser);
GI_INLINE_DECL bool get_show_private () noexcept;

// gboolean gtk_recent_chooser_get_show_tips (GtkRecentChooser* chooser);
// gboolean gtk_recent_chooser_get_show_tips (::GtkRecentChooser* chooser);
GI_INLINE_DECL bool get_show_tips () noexcept;

// GtkRecentSortType gtk_recent_chooser_get_sort_type (GtkRecentChooser* chooser);
// ::GtkRecentSortType gtk_recent_chooser_get_sort_type (::GtkRecentChooser* chooser);
GI_INLINE_DECL Gtk::RecentSortType get_sort_type () noexcept;

// gchar** gtk_recent_chooser_get_uris (GtkRecentChooser* chooser, gsize* length);
// char** gtk_recent_chooser_get_uris (::GtkRecentChooser* chooser, gsize* length);
GI_INLINE_DECL std::vector<std::string> get_uris (gsize * length = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::vector<std::string>, gsize> get_uris () noexcept;

// GSList* gtk_recent_chooser_list_filters (GtkRecentChooser* chooser);
// ::GSList* gtk_recent_chooser_list_filters (::GtkRecentChooser* chooser);
GI_INLINE_DECL std::vector<Gtk::RecentFilter> list_filters () noexcept;

// void gtk_recent_chooser_remove_filter (GtkRecentChooser* chooser, GtkRecentFilter* filter);
// void gtk_recent_chooser_remove_filter (::GtkRecentChooser* chooser, ::GtkRecentFilter* filter);
GI_INLINE_DECL void remove_filter (Gtk::RecentFilter filter) noexcept;

// void gtk_recent_chooser_select_all (GtkRecentChooser* chooser);
// void gtk_recent_chooser_select_all (::GtkRecentChooser* chooser);
GI_INLINE_DECL void select_all () noexcept;

// gboolean gtk_recent_chooser_select_uri (GtkRecentChooser* chooser, const gchar* uri, GError ** error);
// gboolean gtk_recent_chooser_select_uri (::GtkRecentChooser* chooser, const char* uri, GError ** error);
GI_INLINE_DECL bool select_uri (const std::string & uri);
GI_INLINE_DECL bool select_uri (const std::string & uri, GLib::Error * _error) noexcept;

// gboolean gtk_recent_chooser_set_current_uri (GtkRecentChooser* chooser, const gchar* uri, GError ** error);
// gboolean gtk_recent_chooser_set_current_uri (::GtkRecentChooser* chooser, const char* uri, GError ** error);
GI_INLINE_DECL bool set_current_uri (const std::string & uri);
GI_INLINE_DECL bool set_current_uri (const std::string & uri, GLib::Error * _error) noexcept;

// void gtk_recent_chooser_set_filter (GtkRecentChooser* chooser, GtkRecentFilter* filter);
// void gtk_recent_chooser_set_filter (::GtkRecentChooser* chooser, ::GtkRecentFilter* filter);
GI_INLINE_DECL void set_filter (Gtk::RecentFilter filter) noexcept;
GI_INLINE_DECL void set_filter () noexcept;

// void gtk_recent_chooser_set_limit (GtkRecentChooser* chooser, gint limit);
// void gtk_recent_chooser_set_limit (::GtkRecentChooser* chooser, gint limit);
GI_INLINE_DECL void set_limit (gint limit) noexcept;

// void gtk_recent_chooser_set_local_only (GtkRecentChooser* chooser, gboolean local_only);
// void gtk_recent_chooser_set_local_only (::GtkRecentChooser* chooser, gboolean local_only);
GI_INLINE_DECL void set_local_only (gboolean local_only) noexcept;

// void gtk_recent_chooser_set_select_multiple (GtkRecentChooser* chooser, gboolean select_multiple);
// void gtk_recent_chooser_set_select_multiple (::GtkRecentChooser* chooser, gboolean select_multiple);
GI_INLINE_DECL void set_select_multiple (gboolean select_multiple) noexcept;

// void gtk_recent_chooser_set_show_icons (GtkRecentChooser* chooser, gboolean show_icons);
// void gtk_recent_chooser_set_show_icons (::GtkRecentChooser* chooser, gboolean show_icons);
GI_INLINE_DECL void set_show_icons (gboolean show_icons) noexcept;

// void gtk_recent_chooser_set_show_not_found (GtkRecentChooser* chooser, gboolean show_not_found);
// void gtk_recent_chooser_set_show_not_found (::GtkRecentChooser* chooser, gboolean show_not_found);
GI_INLINE_DECL void set_show_not_found (gboolean show_not_found) noexcept;

// void gtk_recent_chooser_set_show_private (GtkRecentChooser* chooser, gboolean show_private);
// void gtk_recent_chooser_set_show_private (::GtkRecentChooser* chooser, gboolean show_private);
GI_INLINE_DECL void set_show_private (gboolean show_private) noexcept;

// void gtk_recent_chooser_set_show_tips (GtkRecentChooser* chooser, gboolean show_tips);
// void gtk_recent_chooser_set_show_tips (::GtkRecentChooser* chooser, gboolean show_tips);
GI_INLINE_DECL void set_show_tips (gboolean show_tips) noexcept;

// void gtk_recent_chooser_set_sort_func (GtkRecentChooser* chooser, GtkRecentSortFunc sort_func, gpointer sort_data, GDestroyNotify data_destroy);
// void gtk_recent_chooser_set_sort_func (::GtkRecentChooser* chooser, Gtk::RecentSortFunc::cfunction_type sort_func, void* sort_data, GLib::DestroyNotify::cfunction_type data_destroy);
GI_INLINE_DECL void set_sort_func (Gtk::RecentSortFunc sort_func) noexcept;

// void gtk_recent_chooser_set_sort_type (GtkRecentChooser* chooser, GtkRecentSortType sort_type);
// void gtk_recent_chooser_set_sort_type (::GtkRecentChooser* chooser, ::GtkRecentSortType sort_type);
GI_INLINE_DECL void set_sort_type (Gtk::RecentSortType sort_type) noexcept;

// void gtk_recent_chooser_unselect_all (GtkRecentChooser* chooser);
// void gtk_recent_chooser_unselect_all (::GtkRecentChooser* chooser);
GI_INLINE_DECL void unselect_all () noexcept;

// void gtk_recent_chooser_unselect_uri (GtkRecentChooser* chooser, const gchar* uri);
// void gtk_recent_chooser_unselect_uri (::GtkRecentChooser* chooser, const char* uri);
GI_INLINE_DECL void unselect_uri (const std::string & uri) noexcept;

gi::property_proxy<Gtk::RecentFilter, base::RecentChooserBase> property_filter()
{ return gi::property_proxy<Gtk::RecentFilter, base::RecentChooserBase> (*this, "filter"); }
const gi::property_proxy<Gtk::RecentFilter, base::RecentChooserBase> property_filter() const
{ return gi::property_proxy<Gtk::RecentFilter, base::RecentChooserBase> (*this, "filter"); }

gi::property_proxy<gint, base::RecentChooserBase> property_limit()
{ return gi::property_proxy<gint, base::RecentChooserBase> (*this, "limit"); }
const gi::property_proxy<gint, base::RecentChooserBase> property_limit() const
{ return gi::property_proxy<gint, base::RecentChooserBase> (*this, "limit"); }

gi::property_proxy<bool, base::RecentChooserBase> property_local_only()
{ return gi::property_proxy<bool, base::RecentChooserBase> (*this, "local-only"); }
const gi::property_proxy<bool, base::RecentChooserBase> property_local_only() const
{ return gi::property_proxy<bool, base::RecentChooserBase> (*this, "local-only"); }

gi::property_proxy_write<Gtk::RecentManager, base::RecentChooserBase> property_recent_manager()
{ return gi::property_proxy_write<Gtk::RecentManager, base::RecentChooserBase> (*this, "recent-manager"); }

gi::property_proxy<bool, base::RecentChooserBase> property_select_multiple()
{ return gi::property_proxy<bool, base::RecentChooserBase> (*this, "select-multiple"); }
const gi::property_proxy<bool, base::RecentChooserBase> property_select_multiple() const
{ return gi::property_proxy<bool, base::RecentChooserBase> (*this, "select-multiple"); }

gi::property_proxy<bool, base::RecentChooserBase> property_show_icons()
{ return gi::property_proxy<bool, base::RecentChooserBase> (*this, "show-icons"); }
const gi::property_proxy<bool, base::RecentChooserBase> property_show_icons() const
{ return gi::property_proxy<bool, base::RecentChooserBase> (*this, "show-icons"); }

gi::property_proxy<bool, base::RecentChooserBase> property_show_not_found()
{ return gi::property_proxy<bool, base::RecentChooserBase> (*this, "show-not-found"); }
const gi::property_proxy<bool, base::RecentChooserBase> property_show_not_found() const
{ return gi::property_proxy<bool, base::RecentChooserBase> (*this, "show-not-found"); }

gi::property_proxy<bool, base::RecentChooserBase> property_show_private()
{ return gi::property_proxy<bool, base::RecentChooserBase> (*this, "show-private"); }
const gi::property_proxy<bool, base::RecentChooserBase> property_show_private() const
{ return gi::property_proxy<bool, base::RecentChooserBase> (*this, "show-private"); }

gi::property_proxy<bool, base::RecentChooserBase> property_show_tips()
{ return gi::property_proxy<bool, base::RecentChooserBase> (*this, "show-tips"); }
const gi::property_proxy<bool, base::RecentChooserBase> property_show_tips() const
{ return gi::property_proxy<bool, base::RecentChooserBase> (*this, "show-tips"); }

gi::property_proxy<Gtk::RecentSortType, base::RecentChooserBase> property_sort_type()
{ return gi::property_proxy<Gtk::RecentSortType, base::RecentChooserBase> (*this, "sort-type"); }
const gi::property_proxy<Gtk::RecentSortType, base::RecentChooserBase> property_sort_type() const
{ return gi::property_proxy<Gtk::RecentSortType, base::RecentChooserBase> (*this, "sort-type"); }

// signal item-activated
gi::signal_proxy<void(Gtk::RecentChooser)> signal_item_activated()
{ return gi::signal_proxy<void(Gtk::RecentChooser)> (*this, "item-activated"); }

// signal selection-changed
gi::signal_proxy<void(Gtk::RecentChooser)> signal_selection_changed()
{ return gi::signal_proxy<void(Gtk::RecentChooser)> (*this, "selection-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentchooser_extra_def.hpp>)
#include <gtk/recentchooser_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentchooser_extra.hpp>)
#include <gtk/recentchooser_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RecentChooser : public GI_GTK_RECENTCHOOSER_BASE
{ typedef GI_GTK_RECENTCHOOSER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRecentChooser>
{ typedef Gtk::RecentChooser type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class RecentChooserIfaceDef
{
typedef RecentChooserIfaceDef self;
public:
typedef Gtk::RecentChooser instance_type;
typedef ::GtkRecentChooserIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void RecentChooser::add_filter (GtkRecentChooser* chooser, GtkRecentFilter* filter);
// void RecentChooser::add_filter (::GtkRecentChooser* chooser, ::GtkRecentFilter* filter);
virtual void add_filter_ (Gtk::RecentFilter filter) noexcept = 0;

// gchar* RecentChooser::get_current_uri (GtkRecentChooser* chooser);
// char* RecentChooser::get_current_uri (::GtkRecentChooser* chooser);
virtual std::string get_current_uri_ () noexcept = 0;

// GList* RecentChooser::get_items (GtkRecentChooser* chooser);
// ::GList* RecentChooser::get_items (::GtkRecentChooser* chooser);
// SKIP; container return not supported

// void RecentChooser::item_activated (GtkRecentChooser* chooser);
// void RecentChooser::item_activated (::GtkRecentChooser* chooser);
virtual void item_activated_ () noexcept = 0;

// GSList* RecentChooser::list_filters (GtkRecentChooser* chooser);
// ::GSList* RecentChooser::list_filters (::GtkRecentChooser* chooser);
// SKIP; container return not supported

// void RecentChooser::remove_filter (GtkRecentChooser* chooser, GtkRecentFilter* filter);
// void RecentChooser::remove_filter (::GtkRecentChooser* chooser, ::GtkRecentFilter* filter);
virtual void remove_filter_ (Gtk::RecentFilter filter) noexcept = 0;

// void RecentChooser::select_all (GtkRecentChooser* chooser);
// void RecentChooser::select_all (::GtkRecentChooser* chooser);
virtual void select_all_ () noexcept = 0;

// gboolean RecentChooser::select_uri (GtkRecentChooser* chooser, const gchar* uri, GError ** error);
// gboolean RecentChooser::select_uri (::GtkRecentChooser* chooser, const char* uri, GError ** error);
// SKIP; callee GError not supported

// void RecentChooser::selection_changed (GtkRecentChooser* chooser);
// void RecentChooser::selection_changed (::GtkRecentChooser* chooser);
virtual void selection_changed_ () noexcept = 0;

// gboolean RecentChooser::set_current_uri (GtkRecentChooser* chooser, const gchar* uri, GError ** error);
// gboolean RecentChooser::set_current_uri (::GtkRecentChooser* chooser, const char* uri, GError ** error);
// SKIP; callee GError not supported

// void RecentChooser::set_sort_func (GtkRecentChooser* chooser, GtkRecentSortFunc sort_func, gpointer sort_data, GDestroyNotify data_destroy);
// void RecentChooser::set_sort_func (::GtkRecentChooser* chooser, Gtk::RecentSortFunc::cfunction_type sort_func, void* sort_data, GLib::DestroyNotify::cfunction_type data_destroy);
// SKIP; virtual-method callback parameter not supported, virtual-method callback parameter not supported

// void RecentChooser::unselect_all (GtkRecentChooser* chooser);
// void RecentChooser::unselect_all (::GtkRecentChooser* chooser);
virtual void unselect_all_ () noexcept = 0;

// void RecentChooser::unselect_uri (GtkRecentChooser* chooser, const gchar* uri);
// void RecentChooser::unselect_uri (::GtkRecentChooser* chooser, const char* uri);
virtual void unselect_uri_ (const std::string & uri) noexcept = 0;


};

using RecentChooserImpl = detail::InterfaceImpl<RecentChooserIfaceDef>;

class RecentChooserIfaceClassImpl: public detail::InterfaceClassImpl<RecentChooserImpl>
{
typedef RecentChooserIfaceClassImpl self;
typedef detail::InterfaceClassImpl<RecentChooserImpl> super;

protected:
using super::super;

// void RecentChooser::add_filter (GtkRecentChooser* chooser, GtkRecentFilter* filter);
// void RecentChooser::add_filter (::GtkRecentChooser* chooser, ::GtkRecentFilter* filter);
GI_INLINE_DECL void add_filter_ (Gtk::RecentFilter filter) noexcept override;

// gchar* RecentChooser::get_current_uri (GtkRecentChooser* chooser);
// char* RecentChooser::get_current_uri (::GtkRecentChooser* chooser);
GI_INLINE_DECL std::string get_current_uri_ () noexcept override;

// GList* RecentChooser::get_items (GtkRecentChooser* chooser);
// ::GList* RecentChooser::get_items (::GtkRecentChooser* chooser);
// SKIP; container return not supported

// void RecentChooser::item_activated (GtkRecentChooser* chooser);
// void RecentChooser::item_activated (::GtkRecentChooser* chooser);
GI_INLINE_DECL void item_activated_ () noexcept override;

// GSList* RecentChooser::list_filters (GtkRecentChooser* chooser);
// ::GSList* RecentChooser::list_filters (::GtkRecentChooser* chooser);
// SKIP; container return not supported

// void RecentChooser::remove_filter (GtkRecentChooser* chooser, GtkRecentFilter* filter);
// void RecentChooser::remove_filter (::GtkRecentChooser* chooser, ::GtkRecentFilter* filter);
GI_INLINE_DECL void remove_filter_ (Gtk::RecentFilter filter) noexcept override;

// void RecentChooser::select_all (GtkRecentChooser* chooser);
// void RecentChooser::select_all (::GtkRecentChooser* chooser);
GI_INLINE_DECL void select_all_ () noexcept override;

// gboolean RecentChooser::select_uri (GtkRecentChooser* chooser, const gchar* uri, GError ** error);
// gboolean RecentChooser::select_uri (::GtkRecentChooser* chooser, const char* uri, GError ** error);
// SKIP; callee GError not supported

// void RecentChooser::selection_changed (GtkRecentChooser* chooser);
// void RecentChooser::selection_changed (::GtkRecentChooser* chooser);
GI_INLINE_DECL void selection_changed_ () noexcept override;

// gboolean RecentChooser::set_current_uri (GtkRecentChooser* chooser, const gchar* uri, GError ** error);
// gboolean RecentChooser::set_current_uri (::GtkRecentChooser* chooser, const char* uri, GError ** error);
// SKIP; callee GError not supported

// void RecentChooser::set_sort_func (GtkRecentChooser* chooser, GtkRecentSortFunc sort_func, gpointer sort_data, GDestroyNotify data_destroy);
// void RecentChooser::set_sort_func (::GtkRecentChooser* chooser, Gtk::RecentSortFunc::cfunction_type sort_func, void* sort_data, GLib::DestroyNotify::cfunction_type data_destroy);
// SKIP; virtual-method callback parameter not supported, virtual-method callback parameter not supported

// void RecentChooser::unselect_all (GtkRecentChooser* chooser);
// void RecentChooser::unselect_all (::GtkRecentChooser* chooser);
GI_INLINE_DECL void unselect_all_ () noexcept override;

// void RecentChooser::unselect_uri (GtkRecentChooser* chooser, const gchar* uri);
// void RecentChooser::unselect_uri (::GtkRecentChooser* chooser, const char* uri);
GI_INLINE_DECL void unselect_uri_ (const std::string & uri) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
