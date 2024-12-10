#pragma once
#include "PersonService.hpp"
#include "../models/ClientModel.hpp"
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

class ClientService : public PersonService {
public:
  std::string filename = "db/clientes.csv";
ClientService();
bool Find(int id) override;
void Add(ClientModel client);
void Remove(int id) override;
void Update(int id) override;
void Read() override;
};
