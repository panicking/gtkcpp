// AUTO-GENERATED

#ifndef _GI_GST_TAGSETTER_HPP_
#define _GI_GST_TAGSETTER_HPP_


namespace gi {

namespace repository {

namespace Gst {

class TagList;

class TagSetter;

namespace base {


#define GI_GST_TAGSETTER_BASE base::TagSetterBase
class TagSetterBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GstTagSetter BaseObjectType;

TagSetterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_tag_setter_get_type(); } 

// void gst_tag_setter_add_tag_valist (GstTagSetter* setter, GstTagMergeMode mode, const gchar* tag, va_list var_args);
// void gst_tag_setter_add_tag_valist (::GstTagSetter* setter, ::GstTagMergeMode mode, const char* tag,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void gst_tag_setter_add_tag_valist_values (GstTagSetter* setter, GstTagMergeMode mode, const gchar* tag, va_list var_args);
// void gst_tag_setter_add_tag_valist_values (::GstTagSetter* setter, ::GstTagMergeMode mode, const char* tag,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void gst_tag_setter_add_tag_value (GstTagSetter* setter, GstTagMergeMode mode, const gchar* tag, const GValue* value);
// void gst_tag_setter_add_tag_value (::GstTagSetter* setter, ::GstTagMergeMode mode, const char* tag, const ::GValue* value);
GI_INLINE_DECL void add_tag_value (Gst::TagMergeMode mode, const std::string & tag, const GObject::Value & value) noexcept;

// void gst_tag_setter_add_tag_values (GstTagSetter* setter, GstTagMergeMode mode, const gchar* tag);
// void gst_tag_setter_add_tag_values (::GstTagSetter* setter, ::GstTagMergeMode mode, const char* tag);
// IGNORE; not introspectable, varargs not supported

// void gst_tag_setter_add_tags (GstTagSetter* setter, GstTagMergeMode mode, const gchar* tag);
// void gst_tag_setter_add_tags (::GstTagSetter* setter, ::GstTagMergeMode mode, const char* tag);
// IGNORE; not introspectable, varargs not supported

// const GstTagList* gst_tag_setter_get_tag_list (GstTagSetter* setter);
// const ::GstTagList* gst_tag_setter_get_tag_list (::GstTagSetter* setter);
GI_INLINE_DECL Gst::TagList get_tag_list () noexcept;

// GstTagMergeMode gst_tag_setter_get_tag_merge_mode (GstTagSetter* setter);
// ::GstTagMergeMode gst_tag_setter_get_tag_merge_mode (::GstTagSetter* setter);
GI_INLINE_DECL Gst::TagMergeMode get_tag_merge_mode () noexcept;

// void gst_tag_setter_merge_tags (GstTagSetter* setter, const GstTagList* list, GstTagMergeMode mode);
// void gst_tag_setter_merge_tags (::GstTagSetter* setter, const ::GstTagList* list, ::GstTagMergeMode mode);
GI_INLINE_DECL void merge_tags (const Gst::TagList & list, Gst::TagMergeMode mode) noexcept;

// void gst_tag_setter_reset_tags (GstTagSetter* setter);
// void gst_tag_setter_reset_tags (::GstTagSetter* setter);
GI_INLINE_DECL void reset_tags () noexcept;

// void gst_tag_setter_set_tag_merge_mode (GstTagSetter* setter, GstTagMergeMode mode);
// void gst_tag_setter_set_tag_merge_mode (::GstTagSetter* setter, ::GstTagMergeMode mode);
GI_INLINE_DECL void set_tag_merge_mode (Gst::TagMergeMode mode) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/tagsetter_extra_def.hpp>)
#include <gst/tagsetter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/tagsetter_extra.hpp>)
#include <gst/tagsetter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class TagSetter : public GI_GST_TAGSETTER_BASE
{ typedef GI_GST_TAGSETTER_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstTagSetter>
{ typedef Gst::TagSetter type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class TagSetterInterfaceDef
{
typedef TagSetterInterfaceDef self;
public:
typedef Gst::TagSetter instance_type;
typedef ::GstTagSetterInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );


};

using TagSetterImpl = detail::InterfaceImpl<TagSetterInterfaceDef>;

class TagSetterInterfaceClassImpl: public detail::InterfaceClassImpl<TagSetterImpl>
{
typedef TagSetterInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<TagSetterImpl> super;

protected:
using super::super;


};

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
