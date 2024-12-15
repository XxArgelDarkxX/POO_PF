#pragma once
#include "CardTypeModel.hpp"
#include <string>

using namespace std;
/* */ 
class CardModel {

private:
  string brand;
  int number;
  int cvv;
  float balance;
  CardTypeModel type;
public:
  CardModel(string brand, int number, int cvv, float balance, CardTypeModel type);
  string GetBrand();
  int GetNumber();
  int GetCvv();
  float GetBalance();
  CardTypeModel GetType();
  void Transfer(float amount);
};
