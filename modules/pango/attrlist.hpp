// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRLIST_HPP_
#define _GI_PANGO_ATTRLIST_HPP_


namespace gi {

namespace repository {

namespace Pango {

class AttrIterator;
class Attribute;

class AttrList;

namespace base {


#define GI_PANGO_ATTRLIST_BASE base::AttrListBase
class AttrListBase : public gi::detail::GBoxedWrapper<AttrListBase, ::PangoAttrList>
{
typedef gi::detail::GBoxedWrapper<AttrListBase, ::PangoAttrList> super_type;
public:

AttrListBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_attr_list_get_type(); } 

// PangoAttrList* pango_attr_list_new ();
// ::PangoAttrList* pango_attr_list_new ();
static GI_INLINE_DECL Pango::AttrList new_ () noexcept;

// void pango_attr_list_change (PangoAttrList* list, PangoAttribute* attr);
// void pango_attr_list_change (::PangoAttrList* list, ::PangoAttribute* attr);
GI_INLINE_DECL void change (Pango::Attribute attr) noexcept;

// PangoAttrList* pango_attr_list_copy (PangoAttrList* list);
// ::PangoAttrList* pango_attr_list_copy (::PangoAttrList* list);
GI_INLINE_DECL Pango::AttrList copy () noexcept;

// gboolean pango_attr_list_equal (PangoAttrList* list, PangoAttrList* other_list);
// gboolean pango_attr_list_equal (::PangoAttrList* list, ::PangoAttrList* other_list);
GI_INLINE_DECL bool equal (Pango::AttrList other_list) noexcept;

// PangoAttrList* pango_attr_list_filter (PangoAttrList* list, PangoAttrFilterFunc func, gpointer data);
// ::PangoAttrList* pango_attr_list_filter (::PangoAttrList* list, Pango::AttrFilterFunc::cfunction_type func, void* data);
GI_INLINE_DECL Pango::AttrList filter (Pango::AttrFilterFunc func) noexcept;

// GSList* pango_attr_list_get_attributes (PangoAttrList* list);
// ::GSList* pango_attr_list_get_attributes (::PangoAttrList* list);
GI_INLINE_DECL std::vector<Pango::Attribute> get_attributes () noexcept;

// PangoAttrIterator* pango_attr_list_get_iterator (PangoAttrList* list);
// ::PangoAttrIterator* pango_attr_list_get_iterator (::PangoAttrList* list);
GI_INLINE_DECL Pango::AttrIterator get_iterator () noexcept;

// void pango_attr_list_insert (PangoAttrList* list, PangoAttribute* attr);
// void pango_attr_list_insert (::PangoAttrList* list, ::PangoAttribute* attr);
GI_INLINE_DECL void insert (Pango::Attribute attr) noexcept;

// void pango_attr_list_insert_before (PangoAttrList* list, PangoAttribute* attr);
// void pango_attr_list_insert_before (::PangoAttrList* list, ::PangoAttribute* attr);
GI_INLINE_DECL void insert_before (Pango::Attribute attr) noexcept;

// PangoAttrList* pango_attr_list_ref (PangoAttrList* list);
// ::PangoAttrList* pango_attr_list_ref (::PangoAttrList* list);
// IGNORE; marked ignore

// void pango_attr_list_splice (PangoAttrList* list, PangoAttrList* other, int pos, int len);
// void pango_attr_list_splice (::PangoAttrList* list, ::PangoAttrList* other, gint pos, gint len);
GI_INLINE_DECL void splice (Pango::AttrList other, gint pos, gint len) noexcept;

// char* pango_attr_list_to_string (PangoAttrList* list);
// char* pango_attr_list_to_string (::PangoAttrList* list);
GI_INLINE_DECL std::string to_string () noexcept;

// void pango_attr_list_unref (PangoAttrList* list);
// void pango_attr_list_unref (::PangoAttrList* list);
// IGNORE; marked ignore

// void pango_attr_list_update (PangoAttrList* list, int pos, int remove, int add);
// void pango_attr_list_update (::PangoAttrList* list, gint pos, gint remove, gint add);
GI_INLINE_DECL void update (gint pos, gint remove, gint add) noexcept;

// PangoAttrList* pango_attr_list_from_string (const char* text);
// ::PangoAttrList* pango_attr_list_from_string (const char* text);
static GI_INLINE_DECL Pango::AttrList from_string (const std::string & text) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrlist_extra_def.hpp>)
#include <pango/attrlist_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrlist_extra.hpp>)
#include <pango/attrlist_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrList : public GI_PANGO_ATTRLIST_BASE
{ typedef GI_PANGO_ATTRLIST_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrList>
{ typedef Pango::AttrList type; }; 

} // namespace repository

} // namespace gi

#endif
