#ifndef ASESOR_HPP
#define ASESOR_HPP

// Asesor hereda de Persona por lo cual se incluye a Persona
#include "Persona.hpp"

class Asesor : public Persona {
	public:
	void set_id();
	void set_salary();
 private:
	int id;
	float salary;
};

#endif
