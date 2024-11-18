#include "include/ArchivoCSV.hpp"
#include "include/Persona.hpp"
#include "include/Cliente.hpp"
#include <iostream>
#include <vector>

int main() {
  Cliente cliente;
  cliente.load_data("1");
  cliente.get_file().read(true);
  std::cout << cliente.get_name() << std::endl;
  std::cout << cliente.get_id() << std::endl;
  return 0;
}
