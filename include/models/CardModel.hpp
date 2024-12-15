#pragma once
#include "CardTypeModel.hpp"
#include <string>

/* */ 
class CardModel {

private:
  std::string brand;
  int number;
  int cvv;
  float balance;
  CardTypeModel type;
public:
  std::string GetBrand();
  int GetNumber();
  int GetCvv();
  float GetBalance();
  void Transfer(float amount);
  void SaveFunds(float amount, bool is_credit);
  void WithdrawFunds(float amount, bool is_credit);
};
