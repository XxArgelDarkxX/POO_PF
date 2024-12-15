#include "../../include/service/ClientService.hpp"

std::vector<std::string> split(std::string line, char delimiter) {
  std::vector<std::string> tokens;
  std::string token;
  std::stringstream ss(line);
  while (std::getline(ss, token, delimiter)) {
    tokens.push_back(token);
  }
  return tokens;
}

// constructor
ClientService::ClientService() {}

/*metodo de busqueda de un cliente
 * @param int id: el id del cliente que se va a buscar
 * @return bool*/
bool ClientService::Find(int id) {
  std::string strid = std::to_string(id);
  std::ifstream file(filename);
  std::string line;
  while (std::getline(file, line)) {
    auto data = split(line, ',')[0];
    if (data == strid) {
      return true;
    }
  }
  return false;
}

/* metodo de agregar a un cliente a la db
 * @param ClientModel client: este es un modelo de cliente
 * @return void*/
void ClientService::Add(ClientModel client) {
  std::ofstream file(filename, std::ios::app);
  file << client.ToString();
}

void ClientService::Update(ClientModel client) {
  if (Find(client.GetId())) {
    Remove(client.GetId());
    Add(client);
  } else {
    std::cerr << "no se encontro el cliente a actualizar" << std::endl;
  }
}

void ClientService::Remove(int id) {
  std::ifstream file_read(filename);
  std::string line;
  std::vector<std::string> lines;
  while (std::getline(file_read, line)) {
    auto data = split(line, ',')[0];
    if (data != std::to_string(id)) {
      lines.push_back(line);
    }
  }
  std::ofstream file_write(filename);
  for (auto line : lines) {
    file_write << line << std::endl;
  }
}

void ClientService::Read() {
  std::ifstream file(filename);
  std::string line;
  std::getline(file, line);
  std::cout << line << std::endl;
  std::cout << "__________________________" << std::endl;
  while (std::getline(file, line)) {
    auto data = split(line, ',');
    std::string id, name, age;
    id = data[0];
    name = data[1];
    age = data[2];
    std::cout << "id: " << id << " name: " << name << " age: " << age
              << std::endl;
  }
  std::cout << "__________________________" << std::endl;
}

/* carga los datos de algun cliente a tiempo de ejecucion
 * se debe de utilizar el find para verificar si el cliente existe
 * antes de usar este metodo
 * @param int id: el id del cliente del cual se cargan los datos
 * @return ClientModel un modelado del cliente con los datos del db*/
ClientModel ClientService::LoadData(int id) {
  std::ifstream file(filename);
  std::string line;
  while (std::getline(file, line)) {
    auto data = split(line, ',');
    if (data[0] == std::to_string(id)) {
      int id = std::stoi(data[0]);
      std::string name = data[1];
      int age = std::stoi(data[2]);
      return ClientModel(id, name, age);
    }
  }
}
