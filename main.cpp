#include "include/models/ClientModel.hpp"
#include "include/service/ClientService.hpp"
#include <iostream>
#include <vector>

int main() { 
  ClientService service;
  ClientModel client(111,"messi",33);
  service.Add(client);
  return 0;
}
