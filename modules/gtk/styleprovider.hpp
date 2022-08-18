// AUTO-GENERATED

#ifndef _GI_GTK_STYLEPROVIDER_HPP_
#define _GI_GTK_STYLEPROVIDER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class IconFactory;
class StyleProperties;
class WidgetPath;

class StyleProvider;

namespace base {


#define GI_GTK_STYLEPROVIDER_BASE base::StyleProviderBase
class StyleProviderBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkStyleProvider BaseObjectType;

StyleProviderBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_style_provider_get_type(); } 

// GtkIconFactory* gtk_style_provider_get_icon_factory (GtkStyleProvider* provider, GtkWidgetPath* path);
// ::GtkIconFactory* gtk_style_provider_get_icon_factory (::GtkStyleProvider* provider, ::GtkWidgetPath* path);
// IGNORE; deprecated

// GtkStyleProperties* gtk_style_provider_get_style (GtkStyleProvider* provider, GtkWidgetPath* path);
// ::GtkStyleProperties* gtk_style_provider_get_style (::GtkStyleProvider* provider, ::GtkWidgetPath* path);
// IGNORE; deprecated

// gboolean gtk_style_provider_get_style_property (GtkStyleProvider* provider, GtkWidgetPath* path, GtkStateFlags state, GParamSpec* pspec, GValue* value);
// gboolean gtk_style_provider_get_style_property (::GtkStyleProvider* provider, ::GtkWidgetPath* path, ::GtkStateFlags state, ::GParamSpec* pspec, ::GValue* value);
GI_INLINE_DECL bool get_style_property (Gtk::WidgetPath path, Gtk::StateFlags state, GObject::ParamSpec pspec, GObject::Value & value) noexcept;
GI_INLINE_DECL std::tuple<bool, GObject::Value> get_style_property (Gtk::WidgetPath path, Gtk::StateFlags state, GObject::ParamSpec pspec) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/styleprovider_extra_def.hpp>)
#include <gtk/styleprovider_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/styleprovider_extra.hpp>)
#include <gtk/styleprovider_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class StyleProvider : public GI_GTK_STYLEPROVIDER_BASE
{ typedef GI_GTK_STYLEPROVIDER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStyleProvider>
{ typedef Gtk::StyleProvider type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class StyleProviderIfaceDef
{
typedef StyleProviderIfaceDef self;
public:
typedef Gtk::StyleProvider instance_type;
typedef ::GtkStyleProviderIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GtkIconFactory* StyleProvider::get_icon_factory (GtkStyleProvider* provider, GtkWidgetPath* path);
// ::GtkIconFactory* StyleProvider::get_icon_factory (::GtkStyleProvider* provider, ::GtkWidgetPath* path);
// IGNORE; deprecated

// GtkStyleProperties* StyleProvider::get_style (GtkStyleProvider* provider, GtkWidgetPath* path);
// ::GtkStyleProperties* StyleProvider::get_style (::GtkStyleProvider* provider, ::GtkWidgetPath* path);
// IGNORE; deprecated

// gboolean StyleProvider::get_style_property (GtkStyleProvider* provider, GtkWidgetPath* path, GtkStateFlags state, GParamSpec* pspec, GValue* value);
// gboolean StyleProvider::get_style_property (::GtkStyleProvider* provider, ::GtkWidgetPath* path, ::GtkStateFlags state, ::GParamSpec* pspec, ::GValue* value);
// SKIP; virtual-method out parameter not supported


};

using StyleProviderImpl = detail::InterfaceImpl<StyleProviderIfaceDef>;

class StyleProviderIfaceClassImpl: public detail::InterfaceClassImpl<StyleProviderImpl>
{
typedef StyleProviderIfaceClassImpl self;
typedef detail::InterfaceClassImpl<StyleProviderImpl> super;

protected:
using super::super;

// GtkIconFactory* StyleProvider::get_icon_factory (GtkStyleProvider* provider, GtkWidgetPath* path);
// ::GtkIconFactory* StyleProvider::get_icon_factory (::GtkStyleProvider* provider, ::GtkWidgetPath* path);
// IGNORE; deprecated

// GtkStyleProperties* StyleProvider::get_style (GtkStyleProvider* provider, GtkWidgetPath* path);
// ::GtkStyleProperties* StyleProvider::get_style (::GtkStyleProvider* provider, ::GtkWidgetPath* path);
// IGNORE; deprecated

// gboolean StyleProvider::get_style_property (GtkStyleProvider* provider, GtkWidgetPath* path, GtkStateFlags state, GParamSpec* pspec, GValue* value);
// gboolean StyleProvider::get_style_property (::GtkStyleProvider* provider, ::GtkWidgetPath* path, ::GtkStateFlags state, ::GParamSpec* pspec, ::GValue* value);
// SKIP; virtual-method out parameter not supported


};

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
