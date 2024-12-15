#include "../../include/models/ClientModel.hpp"
using namespace std;


ClientModel::ClientModel(int id, string name, int age): PersonModel(id,name,age){}

vector<CardModel>& ClientModel::GetCards(){
  return cards;
}

vector<AccountModel>& ClientModel::GetAccounts(){
  return accounts;
}

string ClientModel::ToString(){
  return PersonModel::ToString();
}

void ClientModel::ShowInfo(){
  cout << "__________________________" << endl;
  cout << "id: " << GetId() << "nombre: " << GetName() << "edad: " << GetAge() << endl;
  cout << "__________________________" << endl;
}
