#include "../include/Cliente.hpp"
/* este constructor se usa cuando se va agregar un cliente */
Cliente::Cliente(std::string name, int age, int id)
    : Persona(name, age, id) {}

/*el constructor vacio se usa cuando se van a cargar datos */
Cliente::Cliente() {}

/* */
void Cliente::load_data(std::string id) {
  auto data = this->get_file().load_data(id);
  this->set_id(std::stoi(data[0][0]));
  this->set_name(data[0][1]);
  this->set_age(std::stoi(data[0][2]));
  this->data_loaded = true;
}

void Cliente::update_data() {
  this->get_file().update(std::to_string(this->get_id()), this->get_name(), 1);
  this->get_file().update(std::to_string(this->get_id()),
  std::to_string(this->get_age()), 2);

}

void Cliente::save_data() {
  this->get_file().write({{std::to_string(this->get_id()), this->get_name(),
                           std::to_string(this->get_age())}});
}

void Cliente::remove_data() {
  if (this->get_DataLoaded()) {
    std::cout << "removiendo data" << std::endl;
    this->get_file().remove(std::to_string(this->get_id()));
    return;
  }
  std::cerr << "error has removido algo que no existe" << std::endl;
  exit(1);

}

ArchivoCSV Cliente::get_file() { return this->file; }

bool Cliente::get_DataLoaded() { return this->data_loaded; }
