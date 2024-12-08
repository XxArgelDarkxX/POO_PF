#pragma once
#include <string>
#include <vector>
#include "PersonaModel.hpp"
#include "CardModel.hpp"

class ClientModel : public PersonaModel {

private:
  ClientModel(std::string name, int age, int id);
  std::vector<CardModel> cards;
};
