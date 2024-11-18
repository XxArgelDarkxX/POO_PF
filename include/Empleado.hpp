#pragma once

// Asesor hereda de Persona por lo cual se incluye a Persona
#include "Persona.hpp"

class Empleado : public Persona {
public:
  void set_id();
  void set_salary();

private:
  int bank_id;
  float salary;
};
