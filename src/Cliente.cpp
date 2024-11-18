#include "../include/Cliente.hpp"
// constructor
Cliente::Cliente(std::string name, int age, int cedula)
    : Persona(name, age, cedula) {}

Cliente::Cliente() {}

void Cliente::load_data(std::string key) {
  auto data = this->get_file().load_data(key);
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
  if (this->data_loaded) {
  }
}

ArchivoCSV Cliente::get_file() { return this->file; }

bool Cliente::get_DataLoaded() { return this->data_loaded; }
