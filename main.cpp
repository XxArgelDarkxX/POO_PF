#include "include/models/ClientModel.hpp"
#include "include/service/ClientService.hpp"
#include <iostream>
#include <vector>

int main() { 
  ClientModel client_model(122,"camilo",15);
  ClientService client_service;
  client_service.Add(client_model);
  return 0;
}
