#pragma once
#include "AccountModel.hpp"
#include "CardModel.hpp"
#include "PersonModel.hpp"
#include <string>
#include <vector>

using namespace std;

class ClientModel : public PersonModel {

private:
  vector<CardModel> cards;
  vector<AccountModel> accounts;

public:
  ClientModel(int id,string name, int age);

  vector<CardModel>& GetCards();
  vector<AccountModel>& GetAccounts();

  string ToString() override;
  void ShowInfo();
};
