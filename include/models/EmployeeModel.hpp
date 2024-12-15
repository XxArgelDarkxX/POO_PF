#pragma once
#include <iostream>
#include <string>
#include "PersonModel.hpp"
using namespace std;

class EmployeeModel : public PersonModel {
private:
  string position;
  float salary;
  int bank_id;

public:
  EmployeeModel(int id, string name, int age, string position,
  float salary);
  string GetPosition();
  float GetSalary();
  int GetBankId();

  string ToString();
  void ShowInfo();
};
