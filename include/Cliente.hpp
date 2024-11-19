#pragma once

#include "ArchivoCSV.hpp"
#include "Cuenta_Ahorro.hpp"
#include "Cuenta_Corriente.hpp"
#include "Persona.hpp"
#include <vector>

class Cliente : public Persona {
public:
  Cliente(std::string name, int age, int id);
  Cliente();

  void agregar_cuenta_ahorro();
  void agregar_cuenta_corriente();
  ArchivoCSV get_file();
  void load_data(std::string id);
  void save_data();
  void update_data();
  void remove_data();

  bool get_DataLoaded();

private:
  std::vector<Cuenta_Ahorro> saving_accounts;
  std::vector<Cuenta_Corriente> checking_accounts;
  bool data_loaded = false;
  ArchivoCSV file{"DB/Clientes/clientes.csv"};
};
