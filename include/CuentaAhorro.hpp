#pragma once
#include "Cuenta.hpp"

class CuentaAhorro : public Cuenta {
public:
  CuentaAhorro();
	void show_info() override;
};

