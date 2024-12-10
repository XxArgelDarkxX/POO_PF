#include "../../include/service/ClientService.hpp"

std::vector<std::string> split(std::string line, char delimiter) {
  std::vector<std::string> tokens;
  std::string token;
  std::stringstream ss(line);
  while (std::getline(ss, token, delimiter)) {
    tokens.push_back(token);
  }
  return tokens;
}

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
