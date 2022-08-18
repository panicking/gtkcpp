// AUTO-GENERATED

#ifndef _GI_GTK_BUILDABLE_IMPL_HPP_
#define _GI_GTK_BUILDABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_buildable_add_child (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* type);
// void gtk_buildable_add_child (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* type);
void base::BuildableBase::add_child (Gtk::Builder builder, GObject::Object child, const std::string & type) noexcept
{
  typedef void (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_buildable_add_child;
  auto type_to_c = gi::unwrap (type, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (::GObject*) (child_to_c), (const char*) (type_to_c));
}
void base::BuildableBase::add_child (Gtk::Builder builder, GObject::Object child) noexcept
{
  typedef void (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_buildable_add_child;
  auto type_to_c = nullptr;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (::GObject*) (child_to_c), (const char*) (type_to_c));
}

// GObject* gtk_buildable_construct_child (GtkBuildable* buildable, GtkBuilder* builder, const gchar* name);
// ::GObject* gtk_buildable_construct_child (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* name);
GObject::Object base::BuildableBase::construct_child (Gtk::Builder builder, const std::string & name) noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_buildable_construct_child;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_buildable_custom_finished (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* tagname, gpointer data);
// void gtk_buildable_custom_finished (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, void* data);
void base::BuildableBase::custom_finished (Gtk::Builder builder, GObject::Object child, const std::string & tagname, void* data) noexcept
{
  typedef void (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_buildable_custom_finished;
  auto data_to_c = data;
  auto tagname_to_c = gi::unwrap (tagname, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (::GObject*) (child_to_c), (const char*) (tagname_to_c), (void*) (data_to_c));
}
void base::BuildableBase::custom_finished (Gtk::Builder builder, const std::string & tagname, void* data) noexcept
{
  typedef void (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_buildable_custom_finished;
  auto data_to_c = data;
  auto tagname_to_c = gi::unwrap (tagname, gi::transfer_none, gi::direction_in);
  auto child_to_c = nullptr;
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (::GObject*) (child_to_c), (const char*) (tagname_to_c), (void*) (data_to_c));
}

// void gtk_buildable_custom_tag_end (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* tagname, gpointer* data);
// void gtk_buildable_custom_tag_end (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, void* data);
// SKIP; inconsistent in data pointer depth (2 vs 1)

// gboolean gtk_buildable_custom_tag_start (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* tagname, GMarkupParser* parser, gpointer* data);
// gboolean gtk_buildable_custom_tag_start (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, ::GMarkupParser* parser, void** data);
bool base::BuildableBase::custom_tag_start (Gtk::Builder builder, GObject::Object child, const std::string & tagname, GLib::MarkupParser & parser, gpointer & data) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, ::GMarkupParser* parser, void** data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_buildable_custom_tag_start;
  void* data_o {};
  traits::unset_wrapper<::GMarkupParser>::type parser_c;
  auto tagname_to_c = gi::unwrap (tagname, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (::GObject*) (child_to_c), (const char*) (tagname_to_c), (::GMarkupParser*) ((::GMarkupParser*) &parser_c), (void**) (&data_o));
  data = data_o;
  parser = gi::wrap ((::GMarkupParser*) &parser_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
bool base::BuildableBase::custom_tag_start (Gtk::Builder builder, const std::string & tagname, GLib::MarkupParser & parser, gpointer & data) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, ::GMarkupParser* parser, void** data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_buildable_custom_tag_start;
  void* data_o {};
  traits::unset_wrapper<::GMarkupParser>::type parser_c;
  auto tagname_to_c = gi::unwrap (tagname, gi::transfer_none, gi::direction_in);
  auto child_to_c = nullptr;
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (::GObject*) (child_to_c), (const char*) (tagname_to_c), (::GMarkupParser*) ((::GMarkupParser*) &parser_c), (void**) (&data_o));
  data = data_o;
  parser = gi::wrap ((::GMarkupParser*) &parser_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GLib::MarkupParser, gpointer> base::BuildableBase::custom_tag_start (Gtk::Builder builder, GObject::Object child, const std::string & tagname) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, ::GMarkupParser* parser, void** data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_buildable_custom_tag_start;
  void* data_o {};
  traits::unset_wrapper<::GMarkupParser>::type parser_c;
  auto tagname_to_c = gi::unwrap (tagname, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (::GObject*) (child_to_c), (const char*) (tagname_to_c), (::GMarkupParser*) ((::GMarkupParser*) &parser_c), (void**) (&data_o));
  return std::make_tuple (_temp_ret, gi::wrap ((::GMarkupParser*) &parser_c, gi::transfer_none, gi::direction_out), data_o);
}
std::tuple<bool, GLib::MarkupParser, gpointer> base::BuildableBase::custom_tag_start (Gtk::Builder builder, const std::string & tagname) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, ::GMarkupParser* parser, void** data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_buildable_custom_tag_start;
  void* data_o {};
  traits::unset_wrapper<::GMarkupParser>::type parser_c;
  auto tagname_to_c = gi::unwrap (tagname, gi::transfer_none, gi::direction_in);
  auto child_to_c = nullptr;
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (::GObject*) (child_to_c), (const char*) (tagname_to_c), (::GMarkupParser*) ((::GMarkupParser*) &parser_c), (void**) (&data_o));
  return std::make_tuple (_temp_ret, gi::wrap ((::GMarkupParser*) &parser_c, gi::transfer_none, gi::direction_out), data_o);
}

// GObject* gtk_buildable_get_internal_child (GtkBuildable* buildable, GtkBuilder* builder, const gchar* childname);
// ::GObject* gtk_buildable_get_internal_child (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* childname);
GObject::Object base::BuildableBase::get_internal_child (Gtk::Builder builder, const std::string & childname) noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* childname);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_buildable_get_internal_child;
  auto childname_to_c = gi::unwrap (childname, gi::transfer_none, gi::direction_in);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (const char*) (childname_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_buildable_get_name (GtkBuildable* buildable);
// const char* gtk_buildable_get_name (::GtkBuildable* buildable);
std::string base::BuildableBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkBuildable* buildable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_buildable_get_name;
  auto _temp_ret = call_wrap_v ((::GtkBuildable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_buildable_parser_finished (GtkBuildable* buildable, GtkBuilder* builder);
// void gtk_buildable_parser_finished (::GtkBuildable* buildable, ::GtkBuilder* builder);
void base::BuildableBase::parser_finished (Gtk::Builder builder) noexcept
{
  typedef void (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_buildable_parser_finished;
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c));
}

// void gtk_buildable_set_buildable_property (GtkBuildable* buildable, GtkBuilder* builder, const gchar* name, const GValue* value);
// void gtk_buildable_set_buildable_property (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* name, const ::GValue* value);
void base::BuildableBase::set_buildable_property (Gtk::Builder builder, const std::string & name, const GObject::Value & value) noexcept
{
  typedef void (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* name, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_buildable_set_buildable_property;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (const char*) (name_to_c), (const ::GValue*) (value_to_c));
}

// void gtk_buildable_set_name (GtkBuildable* buildable, const gchar* name);
// void gtk_buildable_set_name (::GtkBuildable* buildable, const char* name);
void base::BuildableBase::set_name (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GtkBuildable* buildable, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_buildable_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBuildable*) (gobj_()), (const char*) (name_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/buildable_extra_def_impl.hpp>)
#include <gtk/buildable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/buildable_extra_impl.hpp>)
#include <gtk/buildable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void BuildableIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GtkBuildableIface *methods = (::GtkBuildableIface *) interface_struct;
  (void) methods;

  methods->add_child = (decltype (methods->add_child)) detail::method_wrapper<self, void (*) (Gtk::Builder builder, GObject::Object child, const std::string & type), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::add_child_>;
  methods->construct_child = (decltype (methods->construct_child)) detail::method_wrapper<self, GObject::Object (*) (Gtk::Builder builder, const std::string & name), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::construct_child_>;
  methods->custom_finished = (decltype (methods->custom_finished)) detail::method_wrapper<self, void (*) (Gtk::Builder builder, GObject::Object child, const std::string & tagname, void* data), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::custom_finished_>;
  methods->get_internal_child = (decltype (methods->get_internal_child)) detail::method_wrapper<self, GObject::Object (*) (Gtk::Builder builder, const std::string & childname), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_internal_child_>;
  methods->parser_finished = (decltype (methods->parser_finished)) detail::method_wrapper<self, void (*) (Gtk::Builder builder), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::parser_finished_>;
  methods->set_buildable_property = (decltype (methods->set_buildable_property)) detail::method_wrapper<self, void (*) (Gtk::Builder builder, const std::string & name, const GObject::Value & value), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::set_buildable_property_>;
  methods->set_name = (decltype (methods->set_name)) detail::method_wrapper<self, void (*) (const std::string & name), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_name_>;
}

// void Buildable::add_child (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* type);
// void Buildable::add_child (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* type);
void BuildableIfaceClassImpl::add_child_ (Gtk::Builder builder, GObject::Object child, const std::string & type) noexcept
{
  if (!get_struct_()->add_child) return ;
  typedef void (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add_child;
  auto type_to_c = gi::unwrap (type, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (::GObject*) (child_to_c), (const char*) (type_to_c));
}

// GObject* Buildable::construct_child (GtkBuildable* buildable, GtkBuilder* builder, const gchar* name);
// ::GObject* Buildable::construct_child (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* name);
GObject::Object BuildableIfaceClassImpl::construct_child_ (Gtk::Builder builder, const std::string & name) noexcept
{
  if (!get_struct_()->construct_child) return GObject::Object{};
  typedef ::GObject* (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->construct_child;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void Buildable::custom_finished (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* tagname, gpointer data);
// void Buildable::custom_finished (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, void* data);
void BuildableIfaceClassImpl::custom_finished_ (Gtk::Builder builder, GObject::Object child, const std::string & tagname, void* data) noexcept
{
  if (!get_struct_()->custom_finished) return ;
  typedef void (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->custom_finished;
  auto data_to_c = data;
  auto tagname_to_c = gi::unwrap (tagname, gi::transfer_none, gi::direction_in);
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (::GObject*) (child_to_c), (const char*) (tagname_to_c), (void*) (data_to_c));
}

// void Buildable::custom_tag_end (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* tagname, gpointer* data);
// void Buildable::custom_tag_end (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, void* data);
// SKIP; inconsistent in data pointer depth (2 vs 1)

// gboolean Buildable::custom_tag_start (GtkBuildable* buildable, GtkBuilder* builder, GObject* child, const gchar* tagname, GMarkupParser* parser, gpointer* data);
// gboolean Buildable::custom_tag_start (::GtkBuildable* buildable, ::GtkBuilder* builder, ::GObject* child, const char* tagname, ::GMarkupParser* parser, void** data);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// GObject* Buildable::get_internal_child (GtkBuildable* buildable, GtkBuilder* builder, const gchar* childname);
// ::GObject* Buildable::get_internal_child (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* childname);
GObject::Object BuildableIfaceClassImpl::get_internal_child_ (Gtk::Builder builder, const std::string & childname) noexcept
{
  if (!get_struct_()->get_internal_child) return GObject::Object{};
  typedef ::GObject* (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* childname);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_internal_child;
  auto childname_to_c = gi::unwrap (childname, gi::transfer_none, gi::direction_in);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (const char*) (childname_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* Buildable::get_name (GtkBuildable* buildable);
// const char* Buildable::get_name (::GtkBuildable* buildable);
// SKIP; invalid callback return transfer none

// void Buildable::parser_finished (GtkBuildable* buildable, GtkBuilder* builder);
// void Buildable::parser_finished (::GtkBuildable* buildable, ::GtkBuilder* builder);
void BuildableIfaceClassImpl::parser_finished_ (Gtk::Builder builder) noexcept
{
  if (!get_struct_()->parser_finished) return ;
  typedef void (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->parser_finished;
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c));
}

// void Buildable::set_buildable_property (GtkBuildable* buildable, GtkBuilder* builder, const gchar* name, const GValue* value);
// void Buildable::set_buildable_property (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* name, const ::GValue* value);
void BuildableIfaceClassImpl::set_buildable_property_ (Gtk::Builder builder, const std::string & name, const GObject::Value & value) noexcept
{
  if (!get_struct_()->set_buildable_property) return ;
  typedef void (*call_wrap_t) (::GtkBuildable* buildable, ::GtkBuilder* builder, const char* name, const ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_buildable_property;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBuildable*) (gobj_()), (::GtkBuilder*) (builder_to_c), (const char*) (name_to_c), (const ::GValue*) (value_to_c));
}

// void Buildable::set_name (GtkBuildable* buildable, const gchar* name);
// void Buildable::set_name (::GtkBuildable* buildable, const char* name);
void BuildableIfaceClassImpl::set_name_ (const std::string & name) noexcept
{
  if (!get_struct_()->set_name) return ;
  typedef void (*call_wrap_t) (::GtkBuildable* buildable, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkBuildable*) (gobj_()), (const char*) (name_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
