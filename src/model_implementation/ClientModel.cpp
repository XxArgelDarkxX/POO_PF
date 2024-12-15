#include "../../include/models/ClientModel.hpp"


ClientModel::ClientModel(int id, std::string name, int age): PersonModel(id,name,age){}

std::vector<CardModel>& ClientModel::GetCards(){
  return cards;
}

std::vector<AccountModel>& ClientModel::GetAccounts(){
  return accounts;
}

std::string ClientModel::ToString(){
  return PersonModel::ToString();
}

void ClientModel::ShowInfo(){
  std::cout << "__________________________" << std::endl;
  std::cout << "id: " << GetId() << "nombre: " << GetName() << "edad: " << GetAge() << std::endl;
  std::cout << "__________________________" << std::endl;
}
