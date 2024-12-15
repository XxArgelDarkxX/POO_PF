#pragma once
#include "models/AccountTypeModel.hpp"
#include <string>

using namespace std;


class AccountModel {
private:
  float balance;
  AccountTypeModel type;

public:
  AccountModel(string owner,float balance);
  float GetBalance();
};
