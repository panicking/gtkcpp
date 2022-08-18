// AUTO-GENERATED

#ifndef _GI_ATK_TEXT_HPP_
#define _GI_ATK_TEXT_HPP_


namespace gi {

namespace repository {

namespace Atk {

class TextRange;
class TextRectangle;

class Text;

namespace base {


#define GI_ATK_TEXT_BASE base::TextBase
class TextBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::AtkText BaseObjectType;

TextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return atk_text_get_type(); } 

// void atk_text_free_ranges ();
// void atk_text_free_ranges ();
// SKIP; inconsistent array info

// gboolean atk_text_add_selection (AtkText* text, gint start_offset, gint end_offset);
// gboolean atk_text_add_selection (::AtkText* text, gint start_offset, gint end_offset);
GI_INLINE_DECL bool add_selection (gint start_offset, gint end_offset) noexcept;

// AtkTextRange** atk_text_get_bounded_ranges (AtkText* text, AtkTextRectangle* rect, AtkCoordType coord_type, AtkTextClipType x_clip_type, AtkTextClipType y_clip_type);
// ::AtkTextRange** atk_text_get_bounded_ranges (::AtkText* text, ::AtkTextRectangle* rect, ::AtkCoordType coord_type, ::AtkTextClipType x_clip_type, ::AtkTextClipType y_clip_type);
GI_INLINE_DECL std::vector<Atk::TextRange> get_bounded_ranges (Atk::TextRectangle rect, Atk::CoordType coord_type, Atk::TextClipType x_clip_type, Atk::TextClipType y_clip_type) noexcept;

// gint atk_text_get_caret_offset (AtkText* text);
// gint atk_text_get_caret_offset (::AtkText* text);
GI_INLINE_DECL gint get_caret_offset () noexcept;

// gunichar atk_text_get_character_at_offset (AtkText* text, gint offset);
// gunichar atk_text_get_character_at_offset (::AtkText* text, gint offset);
GI_INLINE_DECL gunichar get_character_at_offset (gint offset) noexcept;

// gint atk_text_get_character_count (AtkText* text);
// gint atk_text_get_character_count (::AtkText* text);
GI_INLINE_DECL gint get_character_count () noexcept;

// void atk_text_get_character_extents (AtkText* text, gint offset, gint* x, gint* y, gint* width, gint* height, AtkCoordType coords);
// void atk_text_get_character_extents (::AtkText* text, gint offset, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coords);
GI_INLINE_DECL void get_character_extents (gint offset, gint * x, gint * y, gint * width, gint * height, Atk::CoordType coords) noexcept;
GI_INLINE_DECL std::tuple<gint, gint, gint, gint> get_character_extents (gint offset, Atk::CoordType coords) noexcept;

//  atk_text_get_default_attributes (AtkText* text);
//  atk_text_get_default_attributes (::AtkText* text);
// SKIP; inconsistent list element info

// gint atk_text_get_n_selections (AtkText* text);
// gint atk_text_get_n_selections (::AtkText* text);
GI_INLINE_DECL gint get_n_selections () noexcept;

// gint atk_text_get_offset_at_point (AtkText* text, gint x, gint y, AtkCoordType coords);
// gint atk_text_get_offset_at_point (::AtkText* text, gint x, gint y, ::AtkCoordType coords);
GI_INLINE_DECL gint get_offset_at_point (gint x, gint y, Atk::CoordType coords) noexcept;

// void atk_text_get_range_extents (AtkText* text, gint start_offset, gint end_offset, AtkCoordType coord_type, AtkTextRectangle* rect);
// void atk_text_get_range_extents (::AtkText* text, gint start_offset, gint end_offset, ::AtkCoordType coord_type, ::AtkTextRectangle* rect);
GI_INLINE_DECL void get_range_extents (gint start_offset, gint end_offset, Atk::CoordType coord_type, Atk::TextRectangle & rect) noexcept;
GI_INLINE_DECL Atk::TextRectangle get_range_extents (gint start_offset, gint end_offset, Atk::CoordType coord_type) noexcept;

//  atk_text_get_run_attributes (AtkText* text, gint offset, gint* start_offset, gint* end_offset);
//  atk_text_get_run_attributes (::AtkText* text, gint offset, gint* start_offset, gint* end_offset);
// SKIP; inconsistent list element info

// gchar* atk_text_get_selection (AtkText* text, gint selection_num, gint* start_offset, gint* end_offset);
// char* atk_text_get_selection (::AtkText* text, gint selection_num, gint* start_offset, gint* end_offset);
GI_INLINE_DECL std::string get_selection (gint selection_num, gint & start_offset, gint & end_offset) noexcept;
GI_INLINE_DECL std::tuple<std::string, gint, gint> get_selection (gint selection_num) noexcept;

// gchar* atk_text_get_string_at_offset (AtkText* text, gint offset, AtkTextGranularity granularity, gint* start_offset, gint* end_offset);
// char* atk_text_get_string_at_offset (::AtkText* text, gint offset, ::AtkTextGranularity granularity, gint* start_offset, gint* end_offset);
GI_INLINE_DECL std::string get_string_at_offset (gint offset, Atk::TextGranularity granularity, gint & start_offset, gint & end_offset) noexcept;
GI_INLINE_DECL std::tuple<std::string, gint, gint> get_string_at_offset (gint offset, Atk::TextGranularity granularity) noexcept;

// gchar* atk_text_get_text (AtkText* text, gint start_offset, gint end_offset);
// char* atk_text_get_text (::AtkText* text, gint start_offset, gint end_offset);
GI_INLINE_DECL std::string get_text (gint start_offset, gint end_offset) noexcept;

// gchar* atk_text_get_text_after_offset (AtkText* text, gint offset, AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// char* atk_text_get_text_after_offset (::AtkText* text, gint offset, ::AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// IGNORE; deprecated

// gchar* atk_text_get_text_at_offset (AtkText* text, gint offset, AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// char* atk_text_get_text_at_offset (::AtkText* text, gint offset, ::AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// IGNORE; deprecated

// gchar* atk_text_get_text_before_offset (AtkText* text, gint offset, AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// char* atk_text_get_text_before_offset (::AtkText* text, gint offset, ::AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// IGNORE; deprecated

// gboolean atk_text_remove_selection (AtkText* text, gint selection_num);
// gboolean atk_text_remove_selection (::AtkText* text, gint selection_num);
GI_INLINE_DECL bool remove_selection (gint selection_num) noexcept;

// gboolean atk_text_scroll_substring_to (AtkText* text, gint start_offset, gint end_offset, AtkScrollType type);
// gboolean atk_text_scroll_substring_to (::AtkText* text, gint start_offset, gint end_offset, ::AtkScrollType type);
GI_INLINE_DECL bool scroll_substring_to (gint start_offset, gint end_offset, Atk::ScrollType type) noexcept;

// gboolean atk_text_scroll_substring_to_point (AtkText* text, gint start_offset, gint end_offset, AtkCoordType coords, gint x, gint y);
// gboolean atk_text_scroll_substring_to_point (::AtkText* text, gint start_offset, gint end_offset, ::AtkCoordType coords, gint x, gint y);
GI_INLINE_DECL bool scroll_substring_to_point (gint start_offset, gint end_offset, Atk::CoordType coords, gint x, gint y) noexcept;

// gboolean atk_text_set_caret_offset (AtkText* text, gint offset);
// gboolean atk_text_set_caret_offset (::AtkText* text, gint offset);
GI_INLINE_DECL bool set_caret_offset (gint offset) noexcept;

// gboolean atk_text_set_selection (AtkText* text, gint selection_num, gint start_offset, gint end_offset);
// gboolean atk_text_set_selection (::AtkText* text, gint selection_num, gint start_offset, gint end_offset);
GI_INLINE_DECL bool set_selection (gint selection_num, gint start_offset, gint end_offset) noexcept;

// signal text-attributes-changed
gi::signal_proxy<void(Atk::Text)> signal_text_attributes_changed()
{ return gi::signal_proxy<void(Atk::Text)> (*this, "text-attributes-changed"); }

// signal text-caret-moved
gi::signal_proxy<void(Atk::Text, gint arg1)> signal_text_caret_moved()
{ return gi::signal_proxy<void(Atk::Text, gint arg1)> (*this, "text-caret-moved"); }

// signal text-changed
// IGNORE; deprecated

// signal text-insert
gi::signal_proxy<void(Atk::Text, gint arg1, gint arg2, const std::string & arg3)> signal_text_insert()
{ return gi::signal_proxy<void(Atk::Text, gint arg1, gint arg2, const std::string & arg3)> (*this, "text-insert"); }

// signal text-remove
gi::signal_proxy<void(Atk::Text, gint arg1, gint arg2, const std::string & arg3)> signal_text_remove()
{ return gi::signal_proxy<void(Atk::Text, gint arg1, gint arg2, const std::string & arg3)> (*this, "text-remove"); }

// signal text-selection-changed
gi::signal_proxy<void(Atk::Text)> signal_text_selection_changed()
{ return gi::signal_proxy<void(Atk::Text)> (*this, "text-selection-changed"); }

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/text_extra_def.hpp>)
#include <atk/text_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/text_extra.hpp>)
#include <atk/text_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class Text : public GI_ATK_TEXT_BASE
{ typedef GI_ATK_TEXT_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkText>
{ typedef Atk::Text type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {


class TextIfaceDef
{
typedef TextIfaceDef self;
public:
typedef Atk::Text instance_type;
typedef ::AtkTextIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean Text::add_selection (AtkText* text, gint start_offset, gint end_offset);
// gboolean Text::add_selection (::AtkText* text, gint start_offset, gint end_offset);
virtual bool add_selection_ (gint start_offset, gint end_offset) noexcept = 0;

// AtkTextRange** Text::get_bounded_ranges (AtkText* text, AtkTextRectangle* rect, AtkCoordType coord_type, AtkTextClipType x_clip_type, AtkTextClipType y_clip_type);
// ::AtkTextRange** Text::get_bounded_ranges (::AtkText* text, ::AtkTextRectangle* rect, ::AtkCoordType coord_type, ::AtkTextClipType x_clip_type, ::AtkTextClipType y_clip_type);
// SKIP; container return not supported

// gint Text::get_caret_offset (AtkText* text);
// gint Text::get_caret_offset (::AtkText* text);
virtual gint get_caret_offset_ () noexcept = 0;

// gunichar Text::get_character_at_offset (AtkText* text, gint offset);
// gunichar Text::get_character_at_offset (::AtkText* text, gint offset);
virtual gunichar get_character_at_offset_ (gint offset) noexcept = 0;

// gint Text::get_character_count (AtkText* text);
// gint Text::get_character_count (::AtkText* text);
virtual gint get_character_count_ () noexcept = 0;

// void Text::get_character_extents (AtkText* text, gint offset, gint* x, gint* y, gint* width, gint* height, AtkCoordType coords);
// void Text::get_character_extents (::AtkText* text, gint offset, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coords);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

//  Text::get_default_attributes (AtkText* text);
//  Text::get_default_attributes (::AtkText* text);
// SKIP; inconsistent list element info

// gint Text::get_n_selections (AtkText* text);
// gint Text::get_n_selections (::AtkText* text);
virtual gint get_n_selections_ () noexcept = 0;

// gint Text::get_offset_at_point (AtkText* text, gint x, gint y, AtkCoordType coords);
// gint Text::get_offset_at_point (::AtkText* text, gint x, gint y, ::AtkCoordType coords);
virtual gint get_offset_at_point_ (gint x, gint y, Atk::CoordType coords) noexcept = 0;

// void Text::get_range_extents (AtkText* text, gint start_offset, gint end_offset, AtkCoordType coord_type, AtkTextRectangle* rect);
// void Text::get_range_extents (::AtkText* text, gint start_offset, gint end_offset, ::AtkCoordType coord_type, ::AtkTextRectangle* rect);
// SKIP; virtual-method out parameter not supported

//  Text::get_run_attributes (AtkText* text, gint offset, gint* start_offset, gint* end_offset);
//  Text::get_run_attributes (::AtkText* text, gint offset, gint* start_offset, gint* end_offset);
// SKIP; inconsistent list element info, virtual-method out parameter not supported, virtual-method out parameter not supported

// gchar* Text::get_selection (AtkText* text, gint selection_num, gint* start_offset, gint* end_offset);
// char* Text::get_selection (::AtkText* text, gint selection_num, gint* start_offset, gint* end_offset);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// gchar* Text::get_string_at_offset (AtkText* text, gint offset, AtkTextGranularity granularity, gint* start_offset, gint* end_offset);
// char* Text::get_string_at_offset (::AtkText* text, gint offset, ::AtkTextGranularity granularity, gint* start_offset, gint* end_offset);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// gchar* Text::get_text (AtkText* text, gint start_offset, gint end_offset);
// char* Text::get_text (::AtkText* text, gint start_offset, gint end_offset);
virtual std::string get_text_ (gint start_offset, gint end_offset) noexcept = 0;

// gchar* Text::get_text_after_offset (AtkText* text, gint offset, AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// char* Text::get_text_after_offset (::AtkText* text, gint offset, ::AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// IGNORE; deprecated, virtual-method out parameter not supported, virtual-method out parameter not supported

// gchar* Text::get_text_at_offset (AtkText* text, gint offset, AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// char* Text::get_text_at_offset (::AtkText* text, gint offset, ::AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// IGNORE; deprecated, virtual-method out parameter not supported, virtual-method out parameter not supported

// gchar* Text::get_text_before_offset (AtkText* text, gint offset, AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// char* Text::get_text_before_offset (::AtkText* text, gint offset, ::AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// IGNORE; deprecated, virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean Text::remove_selection (AtkText* text, gint selection_num);
// gboolean Text::remove_selection (::AtkText* text, gint selection_num);
virtual bool remove_selection_ (gint selection_num) noexcept = 0;

// gboolean Text::scroll_substring_to (AtkText* text, gint start_offset, gint end_offset, AtkScrollType type);
// gboolean Text::scroll_substring_to (::AtkText* text, gint start_offset, gint end_offset, ::AtkScrollType type);
virtual bool scroll_substring_to_ (gint start_offset, gint end_offset, Atk::ScrollType type) noexcept = 0;

// gboolean Text::scroll_substring_to_point (AtkText* text, gint start_offset, gint end_offset, AtkCoordType coords, gint x, gint y);
// gboolean Text::scroll_substring_to_point (::AtkText* text, gint start_offset, gint end_offset, ::AtkCoordType coords, gint x, gint y);
virtual bool scroll_substring_to_point_ (gint start_offset, gint end_offset, Atk::CoordType coords, gint x, gint y) noexcept = 0;

// gboolean Text::set_caret_offset (AtkText* text, gint offset);
// gboolean Text::set_caret_offset (::AtkText* text, gint offset);
virtual bool set_caret_offset_ (gint offset) noexcept = 0;

// gboolean Text::set_selection (AtkText* text, gint selection_num, gint start_offset, gint end_offset);
// gboolean Text::set_selection (::AtkText* text, gint selection_num, gint start_offset, gint end_offset);
virtual bool set_selection_ (gint selection_num, gint start_offset, gint end_offset) noexcept = 0;

// void Text::text_attributes_changed (AtkText* text);
// void Text::text_attributes_changed (::AtkText* text);
virtual void text_attributes_changed_ () noexcept = 0;

// void Text::text_caret_moved (AtkText* text, gint location);
// void Text::text_caret_moved (::AtkText* text, gint location);
virtual void text_caret_moved_ (gint location) noexcept = 0;

// void Text::text_changed (AtkText* text, gint position, gint length);
// void Text::text_changed (::AtkText* text, gint position, gint length);
virtual void text_changed_ (gint position, gint length) noexcept = 0;

// void Text::text_selection_changed (AtkText* text);
// void Text::text_selection_changed (::AtkText* text);
virtual void text_selection_changed_ () noexcept = 0;


};

using TextImpl = detail::InterfaceImpl<TextIfaceDef>;

class TextIfaceClassImpl: public detail::InterfaceClassImpl<TextImpl>
{
typedef TextIfaceClassImpl self;
typedef detail::InterfaceClassImpl<TextImpl> super;

protected:
using super::super;

// gboolean Text::add_selection (AtkText* text, gint start_offset, gint end_offset);
// gboolean Text::add_selection (::AtkText* text, gint start_offset, gint end_offset);
GI_INLINE_DECL bool add_selection_ (gint start_offset, gint end_offset) noexcept override;

// AtkTextRange** Text::get_bounded_ranges (AtkText* text, AtkTextRectangle* rect, AtkCoordType coord_type, AtkTextClipType x_clip_type, AtkTextClipType y_clip_type);
// ::AtkTextRange** Text::get_bounded_ranges (::AtkText* text, ::AtkTextRectangle* rect, ::AtkCoordType coord_type, ::AtkTextClipType x_clip_type, ::AtkTextClipType y_clip_type);
// SKIP; container return not supported

// gint Text::get_caret_offset (AtkText* text);
// gint Text::get_caret_offset (::AtkText* text);
GI_INLINE_DECL gint get_caret_offset_ () noexcept override;

// gunichar Text::get_character_at_offset (AtkText* text, gint offset);
// gunichar Text::get_character_at_offset (::AtkText* text, gint offset);
GI_INLINE_DECL gunichar get_character_at_offset_ (gint offset) noexcept override;

// gint Text::get_character_count (AtkText* text);
// gint Text::get_character_count (::AtkText* text);
GI_INLINE_DECL gint get_character_count_ () noexcept override;

// void Text::get_character_extents (AtkText* text, gint offset, gint* x, gint* y, gint* width, gint* height, AtkCoordType coords);
// void Text::get_character_extents (::AtkText* text, gint offset, gint* x, gint* y, gint* width, gint* height, ::AtkCoordType coords);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

//  Text::get_default_attributes (AtkText* text);
//  Text::get_default_attributes (::AtkText* text);
// SKIP; inconsistent list element info

// gint Text::get_n_selections (AtkText* text);
// gint Text::get_n_selections (::AtkText* text);
GI_INLINE_DECL gint get_n_selections_ () noexcept override;

// gint Text::get_offset_at_point (AtkText* text, gint x, gint y, AtkCoordType coords);
// gint Text::get_offset_at_point (::AtkText* text, gint x, gint y, ::AtkCoordType coords);
GI_INLINE_DECL gint get_offset_at_point_ (gint x, gint y, Atk::CoordType coords) noexcept override;

// void Text::get_range_extents (AtkText* text, gint start_offset, gint end_offset, AtkCoordType coord_type, AtkTextRectangle* rect);
// void Text::get_range_extents (::AtkText* text, gint start_offset, gint end_offset, ::AtkCoordType coord_type, ::AtkTextRectangle* rect);
// SKIP; virtual-method out parameter not supported

//  Text::get_run_attributes (AtkText* text, gint offset, gint* start_offset, gint* end_offset);
//  Text::get_run_attributes (::AtkText* text, gint offset, gint* start_offset, gint* end_offset);
// SKIP; inconsistent list element info, virtual-method out parameter not supported, virtual-method out parameter not supported

// gchar* Text::get_selection (AtkText* text, gint selection_num, gint* start_offset, gint* end_offset);
// char* Text::get_selection (::AtkText* text, gint selection_num, gint* start_offset, gint* end_offset);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// gchar* Text::get_string_at_offset (AtkText* text, gint offset, AtkTextGranularity granularity, gint* start_offset, gint* end_offset);
// char* Text::get_string_at_offset (::AtkText* text, gint offset, ::AtkTextGranularity granularity, gint* start_offset, gint* end_offset);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// gchar* Text::get_text (AtkText* text, gint start_offset, gint end_offset);
// char* Text::get_text (::AtkText* text, gint start_offset, gint end_offset);
GI_INLINE_DECL std::string get_text_ (gint start_offset, gint end_offset) noexcept override;

// gchar* Text::get_text_after_offset (AtkText* text, gint offset, AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// char* Text::get_text_after_offset (::AtkText* text, gint offset, ::AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// IGNORE; deprecated, virtual-method out parameter not supported, virtual-method out parameter not supported

// gchar* Text::get_text_at_offset (AtkText* text, gint offset, AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// char* Text::get_text_at_offset (::AtkText* text, gint offset, ::AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// IGNORE; deprecated, virtual-method out parameter not supported, virtual-method out parameter not supported

// gchar* Text::get_text_before_offset (AtkText* text, gint offset, AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// char* Text::get_text_before_offset (::AtkText* text, gint offset, ::AtkTextBoundary boundary_type, gint* start_offset, gint* end_offset);
// IGNORE; deprecated, virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean Text::remove_selection (AtkText* text, gint selection_num);
// gboolean Text::remove_selection (::AtkText* text, gint selection_num);
GI_INLINE_DECL bool remove_selection_ (gint selection_num) noexcept override;

// gboolean Text::scroll_substring_to (AtkText* text, gint start_offset, gint end_offset, AtkScrollType type);
// gboolean Text::scroll_substring_to (::AtkText* text, gint start_offset, gint end_offset, ::AtkScrollType type);
GI_INLINE_DECL bool scroll_substring_to_ (gint start_offset, gint end_offset, Atk::ScrollType type) noexcept override;

// gboolean Text::scroll_substring_to_point (AtkText* text, gint start_offset, gint end_offset, AtkCoordType coords, gint x, gint y);
// gboolean Text::scroll_substring_to_point (::AtkText* text, gint start_offset, gint end_offset, ::AtkCoordType coords, gint x, gint y);
GI_INLINE_DECL bool scroll_substring_to_point_ (gint start_offset, gint end_offset, Atk::CoordType coords, gint x, gint y) noexcept override;

// gboolean Text::set_caret_offset (AtkText* text, gint offset);
// gboolean Text::set_caret_offset (::AtkText* text, gint offset);
GI_INLINE_DECL bool set_caret_offset_ (gint offset) noexcept override;

// gboolean Text::set_selection (AtkText* text, gint selection_num, gint start_offset, gint end_offset);
// gboolean Text::set_selection (::AtkText* text, gint selection_num, gint start_offset, gint end_offset);
GI_INLINE_DECL bool set_selection_ (gint selection_num, gint start_offset, gint end_offset) noexcept override;

// void Text::text_attributes_changed (AtkText* text);
// void Text::text_attributes_changed (::AtkText* text);
GI_INLINE_DECL void text_attributes_changed_ () noexcept override;

// void Text::text_caret_moved (AtkText* text, gint location);
// void Text::text_caret_moved (::AtkText* text, gint location);
GI_INLINE_DECL void text_caret_moved_ (gint location) noexcept override;

// void Text::text_changed (AtkText* text, gint position, gint length);
// void Text::text_changed (::AtkText* text, gint position, gint length);
GI_INLINE_DECL void text_changed_ (gint position, gint length) noexcept override;

// void Text::text_selection_changed (AtkText* text);
// void Text::text_selection_changed (::AtkText* text);
GI_INLINE_DECL void text_selection_changed_ () noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
