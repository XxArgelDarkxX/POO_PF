// incluir el headers
#include "../include/Persona.hpp"

/* constructor de la clase Persona para cuando se va a crear una nueva persona
 * @param string name: el nombre completo de la persona 
 * @param int age: edad de la persona*/
Persona::Persona(std::string name, int age, int id): name(name),
    age(age), id(id) {}

Persona::Persona() {}

// getter de la edad
int Persona::get_age() { return this->age; }

// getter del nombre
std::string Persona::get_name() { return this->name; }

int Persona::get_id() { return this->id; }

void Persona::set_name(std::string name) { this->name = name; }

void Persona::set_age(int age) { this->age = age; }

void Persona::set_id(int id) { this->id = id; }
