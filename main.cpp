#include "include/models/ClientModel.hpp"
#include "include/service/ClientService.hpp"
#include <iostream>
#include <vector>

int main() { 
  ClientService service;
  service.Remove(123);
  service.Read();
  return 0;
}
