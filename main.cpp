#include "include/ArchivoCSV.hpp"
#include "include/Cliente.hpp"
#include "include/Persona.hpp"
#include "include/TarjetaCredito.hpp"
#include <iostream>
#include <vector>

int main() {
  Cliente cliente;
  cliente.load_data("1");
  auto credit_cards = cliente.get_credit_cards();

  for (auto& card : credit_cards) {
    card.show_info();
  }
  return 0;
}

