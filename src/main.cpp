#include "config.h"
#include <gtk/gtk.hpp>

#include <iostream>
#include <locale.h>
#include <cxxabi.h>

namespace GLib = gi::repository::GLib;
namespace GObject_ = gi::repository::GObject;
namespace Gtk = gi::repository::Gtk;
namespace Gio = gi::repository::Gio;

static GLib::MainLoop loop;

const char* currentExceptionTypeName()
{
    int status;
    return abi::__cxa_demangle(abi::__cxa_current_exception_type()->name(), 0, 0, &status);
}

class MainWindow : public Gtk::impl::WindowImpl
{
  typedef MainWindow self_type;

public:
  MainWindow() : Gtk::impl::WindowImpl(typeid(*this))
  {
    Gtk::Window &self = *(this);

    auto builder = Gtk::Builder::new_();

    try {
        builder.add_from_resource("/amarula/alexa/ui/window.ui");
    } catch (gi::repository::GLib::Error &ex) {
        std::cerr << ex.what() << std::endl;
    }

    self.show_all();
  }
};

int
main(int argc, char **argv)
{
  gtk_init(&argc, &argv);

  setlocale (LC_ALL, "");

  auto resources = Gio::Resource::load(PKGDATADIR + "/alexa.gresource");

  Gio::resources_register(resources);

  // recommended general approach iso stack based
  // too much vmethod calling which is not safe for plain case
  auto win = gi::make_ref<MainWindow>();
  // TODO auto-handle arg ignore ??
  win->signal_destroy().connect([](Gtk::Widget) { Gtk::main_quit(); });
  win->show_all();

  Gtk::main();
}
