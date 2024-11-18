#pragma once
#include "Cuenta.hpp"

class Cuenta_Ahorro : public Cuenta {
public:
  Cuenta_Ahorro();
	void show_info() override;
};

