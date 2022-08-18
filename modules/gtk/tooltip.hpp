// AUTO-GENERATED

#ifndef _GI_GTK_TOOLTIP_HPP_
#define _GI_GTK_TOOLTIP_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class Tooltip;

namespace base {


#define GI_GTK_TOOLTIP_BASE base::TooltipBase
class TooltipBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkTooltip BaseObjectType;

TooltipBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tooltip_get_type(); } 

// void gtk_tooltip_trigger_tooltip_query (GdkDisplay* display);
// void gtk_tooltip_trigger_tooltip_query (::GdkDisplay* display);
static GI_INLINE_DECL void trigger_tooltip_query (Gdk::Display display) noexcept;

// void gtk_tooltip_set_custom (GtkTooltip* tooltip, GtkWidget* custom_widget);
// void gtk_tooltip_set_custom (::GtkTooltip* tooltip, ::GtkWidget* custom_widget);
GI_INLINE_DECL void set_custom (Gtk::Widget custom_widget) noexcept;
GI_INLINE_DECL void set_custom () noexcept;

// void gtk_tooltip_set_icon (GtkTooltip* tooltip, GdkPixbuf* pixbuf);
// void gtk_tooltip_set_icon (::GtkTooltip* tooltip, ::GdkPixbuf* pixbuf);
GI_INLINE_DECL void set_icon (GdkPixbuf::Pixbuf pixbuf) noexcept;
GI_INLINE_DECL void set_icon () noexcept;

// void gtk_tooltip_set_icon_from_gicon (GtkTooltip* tooltip, GIcon* gicon, GtkIconSize size);
// void gtk_tooltip_set_icon_from_gicon (::GtkTooltip* tooltip, ::GIcon* gicon, gint size);
GI_INLINE_DECL void set_icon_from_gicon (Gio::Icon gicon, gint size) noexcept;
GI_INLINE_DECL void set_icon_from_gicon (gint size) noexcept;

// void gtk_tooltip_set_icon_from_icon_name (GtkTooltip* tooltip, const gchar* icon_name, GtkIconSize size);
// void gtk_tooltip_set_icon_from_icon_name (::GtkTooltip* tooltip, const char* icon_name, gint size);
GI_INLINE_DECL void set_icon_from_icon_name (const std::string & icon_name, gint size) noexcept;
GI_INLINE_DECL void set_icon_from_icon_name (gint size) noexcept;

// void gtk_tooltip_set_icon_from_stock (GtkTooltip* tooltip, const gchar* stock_id, GtkIconSize size);
// void gtk_tooltip_set_icon_from_stock (::GtkTooltip* tooltip, const char* stock_id, gint size);
// IGNORE; deprecated

// void gtk_tooltip_set_markup (GtkTooltip* tooltip, const gchar* markup);
// void gtk_tooltip_set_markup (::GtkTooltip* tooltip, const char* markup);
GI_INLINE_DECL void set_markup (const std::string & markup) noexcept;
GI_INLINE_DECL void set_markup () noexcept;

// void gtk_tooltip_set_text (GtkTooltip* tooltip, const gchar* text);
// void gtk_tooltip_set_text (::GtkTooltip* tooltip, const char* text);
GI_INLINE_DECL void set_text (const std::string & text) noexcept;
GI_INLINE_DECL void set_text () noexcept;

// void gtk_tooltip_set_tip_area (GtkTooltip* tooltip, const GdkRectangle* rect);
// void gtk_tooltip_set_tip_area (::GtkTooltip* tooltip, const ::GdkRectangle* rect);
GI_INLINE_DECL void set_tip_area (const Gdk::Rectangle & rect) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/tooltip_extra_def.hpp>)
#include <gtk/tooltip_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/tooltip_extra.hpp>)
#include <gtk/tooltip_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Tooltip : public GI_GTK_TOOLTIP_BASE
{ typedef GI_GTK_TOOLTIP_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTooltip>
{ typedef Gtk::Tooltip type; }; 

} // namespace repository

} // namespace gi

#endif
