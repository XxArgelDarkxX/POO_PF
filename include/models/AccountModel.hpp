#pragma once
#include <string>


class AccountModel {
private:
  float balance;
  std::string owner;

public:
  AccountModel(std::string owner,float balance);
  float GetBalance();
  std::string GetOwner();
};
