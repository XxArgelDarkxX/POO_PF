#include "../../include/models/PersonModel.hpp"

using namespace std;

PersonModel::PersonModel(int id, string name, int age)
    : name(name), age(age), id(id) {}

string PersonModel::GetName() { return name; }

int PersonModel::GetAge() { return age; }

int PersonModel::GetId() { return id; }

string PersonModel::ToString() {
  return to_string(id) + "," + name + "," + to_string(age);
}
