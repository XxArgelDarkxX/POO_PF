#pragma once
#include "models/AccountTypeModel.hpp"
#include <string>


class AccountModel {
private:
  float balance;
  AccountTypeModel type;

public:
  AccountModel(std::string owner,float balance);
  float GetBalance();
};
