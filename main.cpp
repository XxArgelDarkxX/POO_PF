#include "include/models/ClientModel.hpp"
#include "include/service/ClientService.hpp"
#include <iostream>
#include <vector>

int main() { 
  ClientService service;
  ClientModel client(123,"sebastian",15);
  service.Add(client);
  return 0;
}
