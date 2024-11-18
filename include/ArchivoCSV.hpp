#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

/*clase ArchivoCSV para facilitar el acceso y modificacion a archivos en el
 * programa
 * */
class ArchivoCSV {
public:
  /*constructor de la clase ArchivoCSV
   * @param std::string filename: nombre del archivo
   * @return void*/
  ArchivoCSV(std::string filename);

  /*metodo get_filename de la clase ArchivoCSV
   * @return std::string*/
  std::string get_filename();

  /*metodo read de archivos csv
   * @param bool headers: valor verdadero o falso por si quiere que se
   * muestren los headers
   * @return void*/
  void read(bool headers);

  /* metodo find de ArchivoCSV
   * parametros:
   * int index: este se le pasa para buscar en que
   * columna se encuentra el dato
   * string key: este se le pasa para buscar ese dato
   * retorna un dato
   * booleano (verdadero o falso segun si se encontro)*/ // muestra todo el contenido el archivo
  bool find(std::string); // busca una coincidencia en el archivo
  void write(std::vector<std::string> data); // escribe en el archivo los datos
  void remove(std::string key);

  /*
   * actualizar un dato en el archivo
   *
   * @param string key: es el valor que se busca si es posible que siempre sea
   * el
   * @param int index: es el valor donde esta la key
   * @param string replace: es el string que va a reemplazar
   * @param int index_replace: el index en el que se va a reemplazar
   * @return void
   */
  void update(std::string key, std::string replace, int index_replace);

  /*
   * metodo para cargar los datos cada clase debe encargarse de como implementa
   * su load_data
   * @param string key: es el valor que se busca si es posible que siempre sea
   * el id
   * @return vector<string> con los datos
   */
  std::vector<std::vector<std::string>> load_data(std::string key);

  /*
   * metodo para dividir un string
   * @param string s: string a dividir
   * @param char delimiter: delimitador
   * @return std::vector<std::vector<std::string>>  con toda la aparicion
   * de los datos
   * */
  std::vector<std::string> split(const std::string &str,const char delimiter);
private:
  // atributo nombre del archivo el que se va a basar el objeto
  std::string filename;
};
