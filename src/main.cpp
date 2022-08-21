#include "config.h"
#include <gtk/gtk.hpp>
#include <webkit2/webkit2.hpp>

#include <iostream>
#include <locale.h>
#include <cxxabi.h>

namespace GLib = gi::repository::GLib;
namespace GObject_ = gi::repository::GObject;
namespace Gtk = gi::repository::Gtk;
namespace Gio = gi::repository::Gio;
namespace GdkPixbuf_ = gi::repository::GdkPixbuf;
namespace Webkit = gi::repository::WebKit2;

const char* currentExceptionTypeName()
{
    int status;
    return abi::__cxa_demangle(abi::__cxa_current_exception_type()->name(), 0, 0, &status);
}

static void on_app_activate(Gio::Application app)
{
  auto gtkapp = gi::object_cast<Gtk::Application>(app);
  auto builder = Gtk::Builder::new_();

  try {
      builder.add_from_resource("/amarula/alexa/ui/window.ui");
  } catch (gi::repository::GLib::Error &ex) {
      std::cerr << ex.what() << std::endl;
  }

  GObject_::Object win = builder.get_object("window");

  auto w = gi::object_cast<Gtk::Window>(win);

  gtkapp.add_window(w);

  auto scrolled_obj = builder.get_object("scrolled_webview");
  auto scrolledView = gi::object_cast<Gtk::ScrolledWindow>(scrolled_obj);
  auto webview = Webkit::WebView::new_();

  scrolledView.add(gi::object_cast<Gtk::Widget>(webview));

  webview.load_uri("https://www.amarulasolutions.com");
  webview.set_visible(true);

  GdkPixbuf_::Pixbuf icon = GdkPixbuf_::Pixbuf::new_from_resource("/amarula/alexa/icons/48x48/icon.png");
  w.set_icon(icon);

  w.show_all();
}

int main(int argc, char **argv)
{
  std::string args[argc];
  setlocale (LC_ALL, "");

  for (auto i = 0; i < argc; i++)
    args[i] = std::string(argv[i]);

  auto resources = Gio::Resource::load(PKGDATADIR + "/alexa.gresource");

  Gio::resources_register(resources);

   // Create a new application with the builder pattern
  auto app = Gtk::Application::new_("amarula.alexa", Gio::ApplicationFlags::FLAGS_NONE_);

  app.signal_activate().connect(&on_app_activate);
  // Run the application
  int status = app.run(argc, args);
  return status;
}
