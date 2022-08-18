// AUTO-GENERATED

#ifndef _GI_PANGO_ITEM_HPP_
#define _GI_PANGO_ITEM_HPP_


namespace gi {

namespace repository {

namespace Pango {

class AttrIterator;

class Item;

namespace base {


#define GI_PANGO_ITEM_BASE base::ItemBase
class ItemBase : public gi::detail::GBoxedWrapper<ItemBase, ::PangoItem>
{
typedef gi::detail::GBoxedWrapper<ItemBase, ::PangoItem> super_type;
public:

ItemBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_item_get_type(); } 

// gint Item::offset (const ::PangoItem* obj);
// gint Item::offset (const ::PangoItem* obj);
GI_INLINE_DECL gint offset_ () const noexcept;

//  Item::offset (::PangoItem* obj, gint _value);
// void Item::offset (::PangoItem* obj, gint _value);
GI_INLINE_DECL void offset_ (gint _value) noexcept;

// gint Item::length (const ::PangoItem* obj);
// gint Item::length (const ::PangoItem* obj);
GI_INLINE_DECL gint length_ () const noexcept;

//  Item::length (::PangoItem* obj, gint _value);
// void Item::length (::PangoItem* obj, gint _value);
GI_INLINE_DECL void length_ (gint _value) noexcept;

// gint Item::num_chars (const ::PangoItem* obj);
// gint Item::num_chars (const ::PangoItem* obj);
GI_INLINE_DECL gint num_chars_ () const noexcept;

//  Item::num_chars (::PangoItem* obj, gint _value);
// void Item::num_chars (::PangoItem* obj, gint _value);
GI_INLINE_DECL void num_chars_ (gint _value) noexcept;

// PangoItem* pango_item_new ();
// ::PangoItem* pango_item_new ();
static GI_INLINE_DECL Pango::Item new_ () noexcept;

// void pango_item_apply_attrs (PangoItem* item, PangoAttrIterator* iter);
// void pango_item_apply_attrs (::PangoItem* item, ::PangoAttrIterator* iter);
GI_INLINE_DECL void apply_attrs (Pango::AttrIterator iter) noexcept;

// PangoItem* pango_item_copy (PangoItem* item);
// ::PangoItem* pango_item_copy (::PangoItem* item);
GI_INLINE_DECL Pango::Item copy () noexcept;

// void pango_item_free (PangoItem* item);
// void pango_item_free (::PangoItem* item);
// IGNORE; marked ignore

// PangoItem* pango_item_split (PangoItem* orig, int split_index, int split_offset);
// ::PangoItem* pango_item_split (::PangoItem* orig, gint split_index, gint split_offset);
GI_INLINE_DECL Pango::Item split (gint split_index, gint split_offset) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/item_extra_def.hpp>)
#include <pango/item_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/item_extra.hpp>)
#include <pango/item_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Item : public GI_PANGO_ITEM_BASE
{ typedef GI_PANGO_ITEM_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoItem>
{ typedef Pango::Item type; }; 

} // namespace repository

} // namespace gi

#endif
