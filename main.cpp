#include "include/ArchivoCSV.hpp"
#include "include/Cliente.hpp"
#include "include/Persona.hpp"
#include "include/TarjetaCredito.hpp"
#include <iostream>
#include <vector>


int main() {
  Cliente cliente;
  cliente.load_data("1");
  std::cout << cliente.get_name() << std::endl;
  for(auto tarjeta: cliente.get_credit_cards()){
    tarjeta.show_info();
  }
  for(auto tarjeta: cliente.get_debit_cards()){
    tarjeta.show_info();
  }
  return 0;
}
