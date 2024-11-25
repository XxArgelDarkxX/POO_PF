#pragma once

#include <string>
class Tarjeta {
public:
  // constructores
  Tarjeta();
  Tarjeta(int id, std::string name, int number, int cvv, float balance);
  // mostrar informacion de la tarjeta
  virtual void show_info() = 0;

  //SETTERS
  void set_number(int number);
  void set_cvv(int cvv);
  void set_balance(float balance);
  //GETTERS
  int get_number();
  int get_cvv();
  float get_balance();
  int get_id();
  std::string get_name();

  // manipulacion de archivos
  // guardar
  virtual void write() = 0;
  virtual void update() = 0;
  virtual void remove() = 0;
 private:
  int id;
  std::string name;
  int number;
  int cvv;
  float balance;
};
