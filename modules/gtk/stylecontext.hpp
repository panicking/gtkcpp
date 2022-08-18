// AUTO-GENERATED

#ifndef _GI_GTK_STYLECONTEXT_HPP_
#define _GI_GTK_STYLECONTEXT_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Border;
class CssSection;
class IconSet;
class StyleProvider;
class WidgetPath;

class StyleContext;

namespace base {


#define GI_GTK_STYLECONTEXT_BASE base::StyleContextBase
class StyleContextBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkStyleContext BaseObjectType;

StyleContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_style_context_get_type(); } 

// GtkStyleContext* gtk_style_context_new ();
// ::GtkStyleContext* gtk_style_context_new ();
static GI_INLINE_DECL Gtk::StyleContext new_ () noexcept;

// void gtk_style_context_add_provider_for_screen (GdkScreen* screen, GtkStyleProvider* provider, guint priority);
// void gtk_style_context_add_provider_for_screen (::GdkScreen* screen, ::GtkStyleProvider* provider, guint priority);
static GI_INLINE_DECL void add_provider_for_screen (Gdk::Screen screen, Gtk::StyleProvider provider, guint priority) noexcept;

// void gtk_style_context_remove_provider_for_screen (GdkScreen* screen, GtkStyleProvider* provider);
// void gtk_style_context_remove_provider_for_screen (::GdkScreen* screen, ::GtkStyleProvider* provider);
static GI_INLINE_DECL void remove_provider_for_screen (Gdk::Screen screen, Gtk::StyleProvider provider) noexcept;

// void gtk_style_context_reset_widgets (GdkScreen* screen);
// void gtk_style_context_reset_widgets (::GdkScreen* screen);
static GI_INLINE_DECL void reset_widgets (Gdk::Screen screen) noexcept;

// void gtk_style_context_add_class (GtkStyleContext* context, const gchar* class_name);
// void gtk_style_context_add_class (::GtkStyleContext* context, const char* class_name);
GI_INLINE_DECL void add_class (const std::string & class_name) noexcept;

// void gtk_style_context_add_provider (GtkStyleContext* context, GtkStyleProvider* provider, guint priority);
// void gtk_style_context_add_provider (::GtkStyleContext* context, ::GtkStyleProvider* provider, guint priority);
GI_INLINE_DECL void add_provider (Gtk::StyleProvider provider, guint priority) noexcept;

// void gtk_style_context_add_region (GtkStyleContext* context, const gchar* region_name, GtkRegionFlags flags);
// void gtk_style_context_add_region (::GtkStyleContext* context, const char* region_name, ::GtkRegionFlags flags);
// IGNORE; deprecated

// void gtk_style_context_cancel_animations (GtkStyleContext* context, gpointer region_id);
// void gtk_style_context_cancel_animations (::GtkStyleContext* context, void* region_id);
// IGNORE; deprecated

// void gtk_style_context_get (GtkStyleContext* context, GtkStateFlags state);
// void gtk_style_context_get (::GtkStyleContext* context, ::GtkStateFlags state);
// IGNORE; not introspectable, varargs not supported

// void gtk_style_context_get_background_color (GtkStyleContext* context, GtkStateFlags state, GdkRGBA* color);
// void gtk_style_context_get_background_color (::GtkStyleContext* context, ::GtkStateFlags state, ::GdkRGBA* color);
// IGNORE; deprecated

// void gtk_style_context_get_border (GtkStyleContext* context, GtkStateFlags state, GtkBorder* border);
// void gtk_style_context_get_border (::GtkStyleContext* context, ::GtkStateFlags state, ::GtkBorder* border);
GI_INLINE_DECL void get_border (Gtk::StateFlags state, Gtk::Border & border) noexcept;
GI_INLINE_DECL Gtk::Border get_border (Gtk::StateFlags state) noexcept;

// void gtk_style_context_get_border_color (GtkStyleContext* context, GtkStateFlags state, GdkRGBA* color);
// void gtk_style_context_get_border_color (::GtkStyleContext* context, ::GtkStateFlags state, ::GdkRGBA* color);
// IGNORE; deprecated

// void gtk_style_context_get_color (GtkStyleContext* context, GtkStateFlags state, GdkRGBA* color);
// void gtk_style_context_get_color (::GtkStyleContext* context, ::GtkStateFlags state, ::GdkRGBA* color);
GI_INLINE_DECL void get_color (Gtk::StateFlags state, Gdk::RGBA & color) noexcept;
GI_INLINE_DECL Gdk::RGBA get_color (Gtk::StateFlags state) noexcept;

// GtkTextDirection gtk_style_context_get_direction (GtkStyleContext* context);
// ::GtkTextDirection gtk_style_context_get_direction (::GtkStyleContext* context);
// IGNORE; deprecated

// const PangoFontDescription* gtk_style_context_get_font (GtkStyleContext* context, GtkStateFlags state);
// const ::PangoFontDescription* gtk_style_context_get_font (::GtkStyleContext* context, ::GtkStateFlags state);
// IGNORE; deprecated

// GdkFrameClock* gtk_style_context_get_frame_clock (GtkStyleContext* context);
// ::GdkFrameClock* gtk_style_context_get_frame_clock (::GtkStyleContext* context);
GI_INLINE_DECL Gdk::FrameClock get_frame_clock () noexcept;

// GtkJunctionSides gtk_style_context_get_junction_sides (GtkStyleContext* context);
// ::GtkJunctionSides gtk_style_context_get_junction_sides (::GtkStyleContext* context);
GI_INLINE_DECL Gtk::JunctionSides get_junction_sides () noexcept;

// void gtk_style_context_get_margin (GtkStyleContext* context, GtkStateFlags state, GtkBorder* margin);
// void gtk_style_context_get_margin (::GtkStyleContext* context, ::GtkStateFlags state, ::GtkBorder* margin);
GI_INLINE_DECL void get_margin (Gtk::StateFlags state, Gtk::Border & margin) noexcept;
GI_INLINE_DECL Gtk::Border get_margin (Gtk::StateFlags state) noexcept;

// void gtk_style_context_get_padding (GtkStyleContext* context, GtkStateFlags state, GtkBorder* padding);
// void gtk_style_context_get_padding (::GtkStyleContext* context, ::GtkStateFlags state, ::GtkBorder* padding);
GI_INLINE_DECL void get_padding (Gtk::StateFlags state, Gtk::Border & padding) noexcept;
GI_INLINE_DECL Gtk::Border get_padding (Gtk::StateFlags state) noexcept;

// GtkStyleContext* gtk_style_context_get_parent (GtkStyleContext* context);
// ::GtkStyleContext* gtk_style_context_get_parent (::GtkStyleContext* context);
GI_INLINE_DECL Gtk::StyleContext get_parent () noexcept;

// const GtkWidgetPath* gtk_style_context_get_path (GtkStyleContext* context);
// const ::GtkWidgetPath* gtk_style_context_get_path (::GtkStyleContext* context);
GI_INLINE_DECL Gtk::WidgetPath get_path () noexcept;

// void gtk_style_context_get_property (GtkStyleContext* context, const gchar* property, GtkStateFlags state, GValue* value);
// void gtk_style_context_get_property (::GtkStyleContext* context, const char* property, ::GtkStateFlags state, ::GValue* value);
GI_INLINE_DECL void get_property (const std::string & property, Gtk::StateFlags state, GObject::Value & value) noexcept;
GI_INLINE_DECL GObject::Value get_property (const std::string & property, Gtk::StateFlags state) noexcept;

// gint gtk_style_context_get_scale (GtkStyleContext* context);
// gint gtk_style_context_get_scale (::GtkStyleContext* context);
GI_INLINE_DECL gint get_scale () noexcept;

// GdkScreen* gtk_style_context_get_screen (GtkStyleContext* context);
// ::GdkScreen* gtk_style_context_get_screen (::GtkStyleContext* context);
GI_INLINE_DECL Gdk::Screen get_screen () noexcept;

// GtkCssSection* gtk_style_context_get_section (GtkStyleContext* context, const gchar* property);
// ::GtkCssSection* gtk_style_context_get_section (::GtkStyleContext* context, const char* property);
GI_INLINE_DECL Gtk::CssSection get_section (const std::string & property) noexcept;

// GtkStateFlags gtk_style_context_get_state (GtkStyleContext* context);
// ::GtkStateFlags gtk_style_context_get_state (::GtkStyleContext* context);
GI_INLINE_DECL Gtk::StateFlags get_state () noexcept;

// void gtk_style_context_get_style (GtkStyleContext* context);
// void gtk_style_context_get_style (::GtkStyleContext* context);
// IGNORE; not introspectable, varargs not supported

// void gtk_style_context_get_style_property (GtkStyleContext* context, const gchar* property_name, GValue* value);
// void gtk_style_context_get_style_property (::GtkStyleContext* context, const char* property_name, ::GValue* value);
GI_INLINE_DECL void get_style_property (const std::string & property_name, GObject::Value value) noexcept;

// void gtk_style_context_get_style_valist (GtkStyleContext* context, va_list args);
// void gtk_style_context_get_style_valist (::GtkStyleContext* context,  args);
// IGNORE; not introspectable, args type  not supported

// void gtk_style_context_get_valist (GtkStyleContext* context, GtkStateFlags state, va_list args);
// void gtk_style_context_get_valist (::GtkStyleContext* context, ::GtkStateFlags state,  args);
// IGNORE; not introspectable, args type  not supported

// gboolean gtk_style_context_has_class (GtkStyleContext* context, const gchar* class_name);
// gboolean gtk_style_context_has_class (::GtkStyleContext* context, const char* class_name);
GI_INLINE_DECL bool has_class (const std::string & class_name) noexcept;

// gboolean gtk_style_context_has_region (GtkStyleContext* context, const gchar* region_name, GtkRegionFlags* flags_return);
// gboolean gtk_style_context_has_region (::GtkStyleContext* context, const char* region_name, ::GtkRegionFlags* flags_return);
// IGNORE; deprecated

// void gtk_style_context_invalidate (GtkStyleContext* context);
// void gtk_style_context_invalidate (::GtkStyleContext* context);
// IGNORE; deprecated

// GList* gtk_style_context_list_classes (GtkStyleContext* context);
// ::GList* gtk_style_context_list_classes (::GtkStyleContext* context);
GI_INLINE_DECL std::vector<std::string> list_classes () noexcept;

// GList* gtk_style_context_list_regions (GtkStyleContext* context);
// ::GList* gtk_style_context_list_regions (::GtkStyleContext* context);
// IGNORE; deprecated

// gboolean gtk_style_context_lookup_color (GtkStyleContext* context, const gchar* color_name, GdkRGBA* color);
// gboolean gtk_style_context_lookup_color (::GtkStyleContext* context, const char* color_name, ::GdkRGBA* color);
GI_INLINE_DECL bool lookup_color (const std::string & color_name, Gdk::RGBA & color) noexcept;
GI_INLINE_DECL std::tuple<bool, Gdk::RGBA> lookup_color (const std::string & color_name) noexcept;

// GtkIconSet* gtk_style_context_lookup_icon_set (GtkStyleContext* context, const gchar* stock_id);
// ::GtkIconSet* gtk_style_context_lookup_icon_set (::GtkStyleContext* context, const char* stock_id);
// IGNORE; deprecated

// void gtk_style_context_notify_state_change (GtkStyleContext* context, GdkWindow* window, gpointer region_id, GtkStateType state, gboolean state_value);
// void gtk_style_context_notify_state_change (::GtkStyleContext* context, ::GdkWindow* window, void* region_id,  state, gboolean state_value);
// IGNORE; deprecated

// void gtk_style_context_pop_animatable_region (GtkStyleContext* context);
// void gtk_style_context_pop_animatable_region (::GtkStyleContext* context);
// IGNORE; deprecated

// void gtk_style_context_push_animatable_region (GtkStyleContext* context, gpointer region_id);
// void gtk_style_context_push_animatable_region (::GtkStyleContext* context, void* region_id);
// IGNORE; deprecated

// void gtk_style_context_remove_class (GtkStyleContext* context, const gchar* class_name);
// void gtk_style_context_remove_class (::GtkStyleContext* context, const char* class_name);
GI_INLINE_DECL void remove_class (const std::string & class_name) noexcept;

// void gtk_style_context_remove_provider (GtkStyleContext* context, GtkStyleProvider* provider);
// void gtk_style_context_remove_provider (::GtkStyleContext* context, ::GtkStyleProvider* provider);
GI_INLINE_DECL void remove_provider (Gtk::StyleProvider provider) noexcept;

// void gtk_style_context_remove_region (GtkStyleContext* context, const gchar* region_name);
// void gtk_style_context_remove_region (::GtkStyleContext* context, const char* region_name);
// IGNORE; deprecated

// void gtk_style_context_restore (GtkStyleContext* context);
// void gtk_style_context_restore (::GtkStyleContext* context);
GI_INLINE_DECL void restore () noexcept;

// void gtk_style_context_save (GtkStyleContext* context);
// void gtk_style_context_save (::GtkStyleContext* context);
GI_INLINE_DECL void save () noexcept;

// void gtk_style_context_scroll_animations (GtkStyleContext* context, GdkWindow* window, gint dx, gint dy);
// void gtk_style_context_scroll_animations (::GtkStyleContext* context, ::GdkWindow* window, gint dx, gint dy);
// IGNORE; deprecated

// void gtk_style_context_set_background (GtkStyleContext* context, GdkWindow* window);
// void gtk_style_context_set_background (::GtkStyleContext* context, ::GdkWindow* window);
// IGNORE; deprecated

// void gtk_style_context_set_direction (GtkStyleContext* context, GtkTextDirection direction);
// void gtk_style_context_set_direction (::GtkStyleContext* context, ::GtkTextDirection direction);
// IGNORE; deprecated

// void gtk_style_context_set_frame_clock (GtkStyleContext* context, GdkFrameClock* frame_clock);
// void gtk_style_context_set_frame_clock (::GtkStyleContext* context, ::GdkFrameClock* frame_clock);
GI_INLINE_DECL void set_frame_clock (Gdk::FrameClock frame_clock) noexcept;

// void gtk_style_context_set_junction_sides (GtkStyleContext* context, GtkJunctionSides sides);
// void gtk_style_context_set_junction_sides (::GtkStyleContext* context, ::GtkJunctionSides sides);
GI_INLINE_DECL void set_junction_sides (Gtk::JunctionSides sides) noexcept;

// void gtk_style_context_set_parent (GtkStyleContext* context, GtkStyleContext* parent);
// void gtk_style_context_set_parent (::GtkStyleContext* context, ::GtkStyleContext* parent);
GI_INLINE_DECL void set_parent (Gtk::StyleContext parent) noexcept;
GI_INLINE_DECL void set_parent () noexcept;

// void gtk_style_context_set_path (GtkStyleContext* context, GtkWidgetPath* path);
// void gtk_style_context_set_path (::GtkStyleContext* context, ::GtkWidgetPath* path);
GI_INLINE_DECL void set_path (Gtk::WidgetPath path) noexcept;

// void gtk_style_context_set_scale (GtkStyleContext* context, gint scale);
// void gtk_style_context_set_scale (::GtkStyleContext* context, gint scale);
GI_INLINE_DECL void set_scale (gint scale) noexcept;

// void gtk_style_context_set_screen (GtkStyleContext* context, GdkScreen* screen);
// void gtk_style_context_set_screen (::GtkStyleContext* context, ::GdkScreen* screen);
GI_INLINE_DECL void set_screen (Gdk::Screen screen) noexcept;

// void gtk_style_context_set_state (GtkStyleContext* context, GtkStateFlags flags);
// void gtk_style_context_set_state (::GtkStyleContext* context, ::GtkStateFlags flags);
GI_INLINE_DECL void set_state (Gtk::StateFlags flags) noexcept;

// gboolean gtk_style_context_state_is_running (GtkStyleContext* context, GtkStateType state, gdouble* progress);
// gboolean gtk_style_context_state_is_running (::GtkStyleContext* context,  state, gdouble* progress);
// IGNORE; deprecated

// char* gtk_style_context_to_string (GtkStyleContext* context, GtkStyleContextPrintFlags flags);
// char* gtk_style_context_to_string (::GtkStyleContext* context, ::GtkStyleContextPrintFlags flags);
GI_INLINE_DECL std::string to_string (Gtk::StyleContextPrintFlags flags) noexcept;

gi::property_proxy<Gtk::TextDirection, base::StyleContextBase> property_direction()
{ return gi::property_proxy<Gtk::TextDirection, base::StyleContextBase> (*this, "direction"); }
const gi::property_proxy<Gtk::TextDirection, base::StyleContextBase> property_direction() const
{ return gi::property_proxy<Gtk::TextDirection, base::StyleContextBase> (*this, "direction"); }

gi::property_proxy<Gdk::FrameClock, base::StyleContextBase> property_paint_clock()
{ return gi::property_proxy<Gdk::FrameClock, base::StyleContextBase> (*this, "paint-clock"); }
const gi::property_proxy<Gdk::FrameClock, base::StyleContextBase> property_paint_clock() const
{ return gi::property_proxy<Gdk::FrameClock, base::StyleContextBase> (*this, "paint-clock"); }

gi::property_proxy<Gtk::StyleContext, base::StyleContextBase> property_parent()
{ return gi::property_proxy<Gtk::StyleContext, base::StyleContextBase> (*this, "parent"); }
const gi::property_proxy<Gtk::StyleContext, base::StyleContextBase> property_parent() const
{ return gi::property_proxy<Gtk::StyleContext, base::StyleContextBase> (*this, "parent"); }

gi::property_proxy<Gdk::Screen, base::StyleContextBase> property_screen()
{ return gi::property_proxy<Gdk::Screen, base::StyleContextBase> (*this, "screen"); }
const gi::property_proxy<Gdk::Screen, base::StyleContextBase> property_screen() const
{ return gi::property_proxy<Gdk::Screen, base::StyleContextBase> (*this, "screen"); }

// signal changed
gi::signal_proxy<void(Gtk::StyleContext)> signal_changed()
{ return gi::signal_proxy<void(Gtk::StyleContext)> (*this, "changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stylecontext_extra_def.hpp>)
#include <gtk/stylecontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stylecontext_extra.hpp>)
#include <gtk/stylecontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class StyleContext : public GI_GTK_STYLECONTEXT_BASE
{ typedef GI_GTK_STYLECONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkStyleContext>
{ typedef Gtk::StyleContext type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class StyleContextClassDef
{
typedef StyleContextClassDef self;
public:
typedef Gtk::StyleContext instance_type;
typedef ::GtkStyleContextClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void StyleContext::changed (GtkStyleContext* context);
// void StyleContext::changed (::GtkStyleContext* context);
virtual void changed_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class StyleContextClass: public detail::ClassTemplate<Gtk::impl::internal::StyleContextClassDef, GObject::impl::internal::ObjectClass>
{
typedef StyleContextClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::StyleContextClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void StyleContext::changed (GtkStyleContext* context);
// void StyleContext::changed (::GtkStyleContext* context);
GI_INLINE_DECL void changed_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using StyleContextImpl = detail::ObjectImpl<StyleContext, internal::StyleContextClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
