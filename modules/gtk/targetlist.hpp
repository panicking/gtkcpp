// AUTO-GENERATED

#ifndef _GI_GTK_TARGETLIST_HPP_
#define _GI_GTK_TARGETLIST_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TargetEntry;
class TextBuffer;

class TargetList;

namespace base {


#define GI_GTK_TARGETLIST_BASE base::TargetListBase
class TargetListBase : public gi::detail::GBoxedWrapper<TargetListBase, ::GtkTargetList>
{
typedef gi::detail::GBoxedWrapper<TargetListBase, ::GtkTargetList> super_type;
public:

TargetListBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_target_list_get_type(); } 

// GtkTargetList* gtk_target_list_new (const GtkTargetEntry* targets, guint ntargets);
// ::GtkTargetList* gtk_target_list_new (const ::GtkTargetEntry** targets, guint ntargets);
// SKIP; inconsistent in targets pointer depth (1 vs 2)

// void gtk_target_list_add (GtkTargetList* list, GdkAtom target, guint flags, guint info);
// void gtk_target_list_add (::GtkTargetList* list,  target, guint flags, guint info);
// SKIP; target type  not supported

// void gtk_target_list_add_image_targets (GtkTargetList* list, guint info, gboolean writable);
// void gtk_target_list_add_image_targets (::GtkTargetList* list, guint info, gboolean writable);
GI_INLINE_DECL void add_image_targets (guint info, gboolean writable) noexcept;

// void gtk_target_list_add_rich_text_targets (GtkTargetList* list, guint info, gboolean deserializable, GtkTextBuffer* buffer);
// void gtk_target_list_add_rich_text_targets (::GtkTargetList* list, guint info, gboolean deserializable, ::GtkTextBuffer* buffer);
GI_INLINE_DECL void add_rich_text_targets (guint info, gboolean deserializable, Gtk::TextBuffer buffer) noexcept;

// void gtk_target_list_add_table (GtkTargetList* list, const GtkTargetEntry* targets, guint ntargets);
// void gtk_target_list_add_table (::GtkTargetList* list, const ::GtkTargetEntry** targets, guint ntargets);
// SKIP; inconsistent in targets pointer depth (1 vs 2)

// void gtk_target_list_add_text_targets (GtkTargetList* list, guint info);
// void gtk_target_list_add_text_targets (::GtkTargetList* list, guint info);
GI_INLINE_DECL void add_text_targets (guint info) noexcept;

// void gtk_target_list_add_uri_targets (GtkTargetList* list, guint info);
// void gtk_target_list_add_uri_targets (::GtkTargetList* list, guint info);
GI_INLINE_DECL void add_uri_targets (guint info) noexcept;

// gboolean gtk_target_list_find (GtkTargetList* list, GdkAtom target, guint* info);
// gboolean gtk_target_list_find (::GtkTargetList* list,  target, guint* info);
// SKIP; target type  not supported

// GtkTargetList* gtk_target_list_ref (GtkTargetList* list);
// ::GtkTargetList* gtk_target_list_ref (::GtkTargetList* list);
// IGNORE; marked ignore

// void gtk_target_list_remove (GtkTargetList* list, GdkAtom target);
// void gtk_target_list_remove (::GtkTargetList* list,  target);
// SKIP; target type  not supported

// void gtk_target_list_unref (GtkTargetList* list);
// void gtk_target_list_unref (::GtkTargetList* list);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/targetlist_extra_def.hpp>)
#include <gtk/targetlist_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/targetlist_extra.hpp>)
#include <gtk/targetlist_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TargetList : public GI_GTK_TARGETLIST_BASE
{ typedef GI_GTK_TARGETLIST_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTargetList>
{ typedef Gtk::TargetList type; }; 

} // namespace repository

} // namespace gi

#endif
