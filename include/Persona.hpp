/* modulo para  */
#ifndef PERSONA_HPP
#define PERSONA_HPP

// para el nombre de la persona
#include <string>

class Persona {
public:
  std::string get_name(); // getter del nombre
  int get_age(); // getter de la edad

  std::string name; // nombre de la persona
  int age; // edad de la persona
};

#endif
