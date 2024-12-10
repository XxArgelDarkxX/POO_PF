#pragma once
#include <iostream>
#include <string>

class PersonService {
public:
  PersonService();
  virtual bool Find(int id) = 0;
  virtual void Remove(int id) = 0;
  virtual void Update(int id) = 0;
  virtual void Read() = 0;
};
