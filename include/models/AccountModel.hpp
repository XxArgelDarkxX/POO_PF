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
  std::string owner;
  std::string accountNumber;
  std::string status;
  std::string creationDate;
public:
  AccountModel(std::string owner, std::string accountNumber, std::string status, std::string creationDate, float balance);
  float GetBalance();
  std::string GetOwner();
  std::string GetAccountNumber();
  std::string GetStatus();
  std::string GetCreationDate();
};
