#include "../../include/models/AdminModel.hpp"

AdminModel::AdminModel(int id, std::string name, int age, std::string password): PersonModel(id,name,age){
  this->password = password;
}

std::string AdminModel::GetPassword(){
  return password;
}

int AdminModel::GetAdminId(){
  return admin_id;
}

std::string AdminModel::ToString(){
  return PersonModel::ToString() + ","+ std::to_string(admin_id) + "," + password;
}
