#include <gtkmm.h>

class Window : public Gtk::Window {
public:
  Gtk::VBox vbox;
  Gtk::Entry entry_firstname;
  Gtk::Entry entry_lastname;
  Gtk::Button button;
  Gtk::Label label;
  Gtk::Label label_firstname;
  Gtk::Label label_lastname;

  Window() {
    button.set_label("Combine names");

    vbox.pack_start(label_firstname); //Add the widget label to vbox
    vbox.pack_start(entry_firstname); //Add the widget entry to vbox
    vbox.pack_start(label_lastname);  //Add the widget label to vbox
    vbox.pack_start(entry_lastname);  //Add the widget entry to vbox
    vbox.pack_start(button);          //Add the widget button to vbox
    vbox.pack_start(label);           //Add the widget label to vbox

    add(vbox);  //Add vbox to window
    show_all(); //Show all widgets

    entry_firstname.signal_changed().connect([this]() {
      if (entry_firstname.get_text().empty() || entry_lastname.get_text().empty())
        button.set_sensitive(false);
      else
        button.set_sensitive(true);
    });

    label_firstname.set_text("First name");
    label_lastname.set_text("Last name");

    entry_lastname.signal_changed().connect([this]() {
      if (entry_lastname.get_text().empty() || entry_firstname.get_text().empty())
        button.set_sensitive(false);
      else
        button.set_sensitive(true);
    });

    button.set_sensitive(false);

    button.signal_clicked().connect([this]() {
      label.set_text(entry_firstname.get_text() + " " + entry_lastname.get_text());
    });
  }
};

int main() {
  Gtk::Main gtk_main;
  Window window;
  gtk_main.run(window);
}
