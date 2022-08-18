// AUTO-GENERATED

#ifndef _GI_GIO_MENUMODEL_HPP_
#define _GI_GIO_MENUMODEL_HPP_


namespace gi {

namespace repository {

namespace Gio {

class MenuAttributeIter;
class MenuLinkIter;

class MenuModel;

namespace base {


#define GI_GIO_MENUMODEL_BASE base::MenuModelBase
class MenuModelBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GMenuModel BaseObjectType;

MenuModelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_menu_model_get_type(); } 

// gboolean g_menu_model_get_item_attribute (GMenuModel* model, gint item_index, const gchar* attribute, const gchar* format_string);
// gboolean g_menu_model_get_item_attribute (::GMenuModel* model, gint item_index, const char* attribute, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// GVariant* g_menu_model_get_item_attribute_value (GMenuModel* model, gint item_index, const gchar* attribute, const GVariantType* expected_type);
// ::GVariant* g_menu_model_get_item_attribute_value (::GMenuModel* model, gint item_index, const char* attribute, const ::GVariantType* expected_type);
GI_INLINE_DECL GLib::Variant get_item_attribute_value (gint item_index, const std::string & attribute, const GLib::VariantType & expected_type) noexcept;
GI_INLINE_DECL GLib::Variant get_item_attribute_value (gint item_index, const std::string & attribute) noexcept;

// GMenuModel* g_menu_model_get_item_link (GMenuModel* model, gint item_index, const gchar* link);
// ::GMenuModel* g_menu_model_get_item_link (::GMenuModel* model, gint item_index, const char* link);
GI_INLINE_DECL Gio::MenuModel get_item_link (gint item_index, const std::string & link) noexcept;

// gint g_menu_model_get_n_items (GMenuModel* model);
// gint g_menu_model_get_n_items (::GMenuModel* model);
GI_INLINE_DECL gint get_n_items () noexcept;

// gboolean g_menu_model_is_mutable (GMenuModel* model);
// gboolean g_menu_model_is_mutable (::GMenuModel* model);
GI_INLINE_DECL bool is_mutable () noexcept;

// void g_menu_model_items_changed (GMenuModel* model, gint position, gint removed, gint added);
// void g_menu_model_items_changed (::GMenuModel* model, gint position, gint removed, gint added);
GI_INLINE_DECL void items_changed (gint position, gint removed, gint added) noexcept;

// GMenuAttributeIter* g_menu_model_iterate_item_attributes (GMenuModel* model, gint item_index);
// ::GMenuAttributeIter* g_menu_model_iterate_item_attributes (::GMenuModel* model, gint item_index);
GI_INLINE_DECL Gio::MenuAttributeIter iterate_item_attributes (gint item_index) noexcept;

// GMenuLinkIter* g_menu_model_iterate_item_links (GMenuModel* model, gint item_index);
// ::GMenuLinkIter* g_menu_model_iterate_item_links (::GMenuModel* model, gint item_index);
GI_INLINE_DECL Gio::MenuLinkIter iterate_item_links (gint item_index) noexcept;

// signal items-changed
gi::signal_proxy<void(Gio::MenuModel, gint position, gint removed, gint added)> signal_items_changed()
{ return gi::signal_proxy<void(Gio::MenuModel, gint position, gint removed, gint added)> (*this, "items-changed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/menumodel_extra_def.hpp>)
#include <gio/menumodel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/menumodel_extra.hpp>)
#include <gio/menumodel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class MenuModel : public GI_GIO_MENUMODEL_BASE
{ typedef GI_GIO_MENUMODEL_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GMenuModel>
{ typedef Gio::MenuModel type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class MenuModelClassDef
{
typedef MenuModelClassDef self;
public:
typedef Gio::MenuModel instance_type;
typedef ::GMenuModelClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// GVariant* MenuModel::get_item_attribute_value (GMenuModel* model, gint item_index, const gchar* attribute, const GVariantType* expected_type);
// ::GVariant* MenuModel::get_item_attribute_value (::GMenuModel* model, gint item_index, const char* attribute, const ::GVariantType* expected_type);
virtual GLib::Variant get_item_attribute_value_ (gint item_index, const std::string & attribute, const GLib::VariantType & expected_type) noexcept = 0;

// void MenuModel::get_item_attributes (GMenuModel* model, gint item_index, GHashTable** attributes);
// void MenuModel::get_item_attributes (::GMenuModel* model, gint item_index, ::GHashTable** attributes);
// SKIP; virtual-method out parameter not supported

// GMenuModel* MenuModel::get_item_link (GMenuModel* model, gint item_index, const gchar* link);
// ::GMenuModel* MenuModel::get_item_link (::GMenuModel* model, gint item_index, const char* link);
virtual Gio::MenuModel get_item_link_ (gint item_index, const std::string & link) noexcept = 0;

// void MenuModel::get_item_links (GMenuModel* model, gint item_index, GHashTable** links);
// void MenuModel::get_item_links (::GMenuModel* model, gint item_index, ::GHashTable** links);
// SKIP; virtual-method out parameter not supported

// gint MenuModel::get_n_items (GMenuModel* model);
// gint MenuModel::get_n_items (::GMenuModel* model);
virtual gint get_n_items_ () noexcept = 0;

// gboolean MenuModel::is_mutable (GMenuModel* model);
// gboolean MenuModel::is_mutable (::GMenuModel* model);
virtual bool is_mutable_ () noexcept = 0;

// GMenuAttributeIter* MenuModel::iterate_item_attributes (GMenuModel* model, gint item_index);
// ::GMenuAttributeIter* MenuModel::iterate_item_attributes (::GMenuModel* model, gint item_index);
virtual Gio::MenuAttributeIter iterate_item_attributes_ (gint item_index) noexcept = 0;

// GMenuLinkIter* MenuModel::iterate_item_links (GMenuModel* model, gint item_index);
// ::GMenuLinkIter* MenuModel::iterate_item_links (::GMenuModel* model, gint item_index);
virtual Gio::MenuLinkIter iterate_item_links_ (gint item_index) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class MenuModelClass: public detail::ClassTemplate<Gio::impl::internal::MenuModelClassDef, GObject::impl::internal::ObjectClass>
{
typedef MenuModelClass self;
typedef detail::ClassTemplate<Gio::impl::internal::MenuModelClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// GVariant* MenuModel::get_item_attribute_value (GMenuModel* model, gint item_index, const gchar* attribute, const GVariantType* expected_type);
// ::GVariant* MenuModel::get_item_attribute_value (::GMenuModel* model, gint item_index, const char* attribute, const ::GVariantType* expected_type);
GI_INLINE_DECL GLib::Variant get_item_attribute_value_ (gint item_index, const std::string & attribute, const GLib::VariantType & expected_type) noexcept override;

// void MenuModel::get_item_attributes (GMenuModel* model, gint item_index, GHashTable** attributes);
// void MenuModel::get_item_attributes (::GMenuModel* model, gint item_index, ::GHashTable** attributes);
// SKIP; virtual-method out parameter not supported

// GMenuModel* MenuModel::get_item_link (GMenuModel* model, gint item_index, const gchar* link);
// ::GMenuModel* MenuModel::get_item_link (::GMenuModel* model, gint item_index, const char* link);
GI_INLINE_DECL Gio::MenuModel get_item_link_ (gint item_index, const std::string & link) noexcept override;

// void MenuModel::get_item_links (GMenuModel* model, gint item_index, GHashTable** links);
// void MenuModel::get_item_links (::GMenuModel* model, gint item_index, ::GHashTable** links);
// SKIP; virtual-method out parameter not supported

// gint MenuModel::get_n_items (GMenuModel* model);
// gint MenuModel::get_n_items (::GMenuModel* model);
GI_INLINE_DECL gint get_n_items_ () noexcept override;

// gboolean MenuModel::is_mutable (GMenuModel* model);
// gboolean MenuModel::is_mutable (::GMenuModel* model);
GI_INLINE_DECL bool is_mutable_ () noexcept override;

// GMenuAttributeIter* MenuModel::iterate_item_attributes (GMenuModel* model, gint item_index);
// ::GMenuAttributeIter* MenuModel::iterate_item_attributes (::GMenuModel* model, gint item_index);
GI_INLINE_DECL Gio::MenuAttributeIter iterate_item_attributes_ (gint item_index) noexcept override;

// GMenuLinkIter* MenuModel::iterate_item_links (GMenuModel* model, gint item_index);
// ::GMenuLinkIter* MenuModel::iterate_item_links (::GMenuModel* model, gint item_index);
GI_INLINE_DECL Gio::MenuLinkIter iterate_item_links_ (gint item_index) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using MenuModelImpl = detail::ObjectImpl<MenuModel, internal::MenuModelClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
