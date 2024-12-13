#pragma once
#include "../models/ClientModel.hpp"
#include "PersonService.hpp"
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

class ClientService : public PersonService {
public:
  std::string filename = "db/clientes.csv";
  ClientService();
  bool Find(int id)override;
  void Remove(int id)override;
  void Update(int id)override;
  void Read()override;
  void Add(ClientModel client);
};
