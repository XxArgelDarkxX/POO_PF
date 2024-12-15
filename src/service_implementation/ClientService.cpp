#include "../../include/service/ClientService.hpp"
#include "../../include/models/utils.hpp"

ClientService::ClientService() : PersonService() {}

bool ClientService::Find(int id) {
  std::string strid = std::to_string(id);
  std::ifstream file(filename);
  std::string line;
  while (std::getline(file, line)) {
    auto data = split(line, ',')[0];
    if (data == strid) {
      return true;
    }
  }
  return false;
}

void ClientService::Add(ClientModel client){
  std::ofstream file(filename, std::ios::app);
  file << client.ToString();
}

void ClientService::Update(int id){

}


void ClientService::Remove(int id){
}

void ClientService::Read(){
}
