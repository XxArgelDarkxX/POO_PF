#include "include/models/ClientModel.hpp"
#include "include/service/ClientService.hpp"
#include <iostream>
#include <vector>

int main() { 
  ClientService client_service;
  client_service.Read();
  return 0;
}
