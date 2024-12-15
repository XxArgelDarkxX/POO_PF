#pragma once
#include <iostream>
#include <string>

using namespace std;

class PersonModel {

private:
  string name;
  int age;
  int id;

public:
  PersonModel(int id,string name, int age);
  string GetName();
  int GetAge();
  int GetId();
  virtual string ToString();
};
