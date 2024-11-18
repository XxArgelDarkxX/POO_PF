#include "../include/ArchivoCSV.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <filesystem>

ArchivoCSV::ArchivoCSV(std::string filename) { 

  if(!std::filesystem::exists(filename)) {
    std::cerr << "archivo no existe:\n\t" << filename << std::endl;
    exit(1);
  }
  this->filename = filename; 
}

std::vector<std::string> ArchivoCSV::split(const std::string &str,
char delimiter) {
  std::vector<std::string> tokens;
  std::stringstream ss(str);
  std::string token;

  while (std::getline(ss, token, delimiter)) {
    tokens.push_back(token);
  }

  return tokens;
}

std::string ArchivoCSV::get_filename() { return this->filename; }

/* metodo read de ArchivoCSV
 * parametros:
 * bool header: se pasa para saber si quiere que se muestre el header o no
 * no retorna nada*/
void ArchivoCSV::read(bool header) {
  std::string sep, head = "";
  std::ifstream file(this->filename);
  std::string line;
  std::getline(file, line);
  if (header) {
    for (size_t i = 0; i < line.size(); ++i) {
      sep += "-";
      head += line[i];
    }
  }
  std::cout << head << std::endl;
  std::cout << sep << std::endl;
  while (std::getline(file, line)) {
    std::cout << line << std::endl;
  }
  std::cout << sep << std::endl;
}

/* metodo find de ArchivoCSV
 * parametros:
 * int index: este se le pasa para buscar en que
 * columna se encuentra el dato
 * string key: este se le pasa para buscar ese dato
 * retorna un dato
 * booleano (verdadero o falso segun si se encontro)*/
bool ArchivoCSV::find(std::string id) {
  std::ifstream file(this->filename);
  std::string line;
  std::getline(file, line);
  while (std::getline(file, line)) {
    std::string data = split(line, ',')[0];
    if (data == id) {
      return true;
    }
  }
  return false;
}

/* metodo write de ArchivoCSV
 * parametros:
 * @param vector<string> data: este se le pasa para escribir en el archivo
 * @return  nada*/
void ArchivoCSV::write(std::vector<std::string> data) {
  std::ofstream file(this->filename, std::ios::app);
  for (size_t i = 0; i < data.size(); ++i) {
    file << data[i];
    if (i < data.size() - 1) {
      file << ",";
    }
  }
  file << std::endl;
}

void ArchivoCSV::remove(std::string key) {
  std::ifstream read(this->get_filename());
  std::string line;
  std::vector<std::vector<std::string>> data;
  int i = 0;
  while (std::getline(read, line)) {
    data.emplace_back(split(line, ','));
    if (data[i][0] == key) {
      data.pop_back();
    }
    i++;
  }
  read.close();
  std::ofstream write(this->get_filename());
  for (size_t i = 0; i < data.size(); i++) {
    for (size_t j = 0; j < data[i].size(); j++) {
      if (j == data[i].size() - 1) {
        write << data[i][j];
        break;
      }
      write << data[i][j] << ",";
    }
    write << std::endl;
  }
}

void ArchivoCSV::update(std::string key, std::string replace,
                        int index_replace) {
  std::ifstream read(this->get_filename());
  std::string line;
  std::getline(read, line);
  std::vector<std::vector<std::string>> data;
  data.emplace_back(split(line, ','));
  int i = 0;
  while (std::getline(read, line)) {
    data.emplace_back(split(line, ','));
    std::cout << std::endl;
    if (data[i][0] == key) {
      data[i][index_replace] = replace;
    }
    i++;
  }
  std::ofstream write(this->get_filename());
  for (size_t i = 0; i < data.size(); i++) {
    for (size_t j = 0; j < data[i].size(); j++) {
      if (j == data[i].size() - 1) {
        write << data[i][j];
        break;
      }
      write << data[i][j] << ",";
    }
    write << std::endl;
  }
}

std::vector<std::vector<std::string>> ArchivoCSV::load_data(std::string key) {
  std::ifstream read(this->get_filename());
  std::string line;
  std::getline(read, line);
  std::vector<std::vector<std::string>> data;
  while (std::getline(read, line)) {
    auto d = split(line, ',');
    if (d[0] == key) {
      data.push_back(d);
    }
  }
  return data;
}
