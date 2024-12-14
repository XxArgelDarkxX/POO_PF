#include "include/models/ClientModel.hpp"
#include "include/service/ClientService.hpp"
#include <iostream>
#include <vector>

int main() { 
  ClientService service;
  service.Update(ClientModel(124,"pepsi",25));
  service.Read();
  return 0;
}
