#pragma once
#include <iostream>
#include <string>

class PersonaModel {

private:
  PersonaModel(std::string name,int age, int id);
  std::string name; 
  int age;
  int id;
public:
  std::string GetName();
  int GetAge();
  int GetId();
};
