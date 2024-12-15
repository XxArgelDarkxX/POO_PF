#pragma once
#include <iostream>
#include "models/PersonModel.hpp"

class AdminModel : public PersonModel {
private:
  std::string password;
  int admin_id;
public:
  AdminModel(int id, std::string name, int age, std::string password);
  std::string GetPassword();
  int GetAdminId();
  std::string ToString();
  void ShowInfo();
};
