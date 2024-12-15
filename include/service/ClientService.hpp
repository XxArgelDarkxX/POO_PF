#pragma once
#include "../models/ClientModel.hpp"
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class ClientService{
public:
  string filename = "db/clientes.csv";
  ClientService();
  bool Find(int id);
  void Remove(int id);
  void Update(ClientModel client);
  void Read();
  void Add(ClientModel client);
  ClientModel LoadData(int id);
};
