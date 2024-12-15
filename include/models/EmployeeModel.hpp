#pragma once
#include <iostream>
#include <string>
#include "PersonModel.hpp"

class EmployeeModel : public PersonModel {
private:
  std::string position;
  float salary;
  int bank_id;

public:
  EmployeeModel(int id, std::string name, int age, std::string position,
  float salary);
  std::string GetPosition();
  float GetSalary();
  int GetBankId();

  std::string ToString();
  void ShowInfo();
};
