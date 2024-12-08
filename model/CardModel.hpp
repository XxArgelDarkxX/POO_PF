#pragma once


#include <string>
class CardModel {

private:
  std::string brand;
  int number;
  int cvv;
  float balance;
public:
  std::string GetBrand();
  int GetNumber();
  int GetCvv();
  float GetBalance();

};
