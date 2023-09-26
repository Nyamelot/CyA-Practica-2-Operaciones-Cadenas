// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 2: Cadenas, Alfabetos y Símbolos
// Autor: José Ángel Portillo García
// Correo: alu0101568232@ull.edu.es
// Fecha: 21/09/2023

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

#include "usage.h"
#include "alphabet.h"
#include "chain.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  std::ifstream input_file(argv[1]);
  std::ofstream output_file(argv[2]);
  int number = std::stoi(argv[3]);
  
  if (!input_file.is_open()) {
    std::cerr << "Error: " << argv[1] << " can't open!" << std::endl;
    std::cout <<"Try:"  << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_FAILURE);
  }
  if (!output_file.is_open()) {
    std::cerr << "Error: " << argv[2] << " can't open!" << std::endl;
    std::cout <<"Try:"  << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_FAILURE);
  }
  std::vector<std::string> file_path = FileReader(input_file);
  std::vector<Chain> chains;
  for (const auto& chain : file_path) {
    chains.emplace_back(chain);
  }
  switch (number) {
    case 1:
      for (const auto& chain : chains){
        output_file << chain.GetAlphabet() << std::endl;
      }
      break;
    case 2:
      for (auto& chain : chains) {
        output_file << chain.Length() << std::endl;
      }
      break;
    case 3:
      for (auto& chain : chains) {
        output_file << chain.Invert() << std::endl;
      }
      break;
    case 4:
      for (auto& chain : chains) {
        std::vector<Chain> prefixes = chain.Prefix();
        output_file << "{";
        bool comma = true;
          for (const auto& chain : prefixes) {
            if (!comma) {
              output_file << ", ";
            }
          output_file << chain;
          comma = false;
          }
        output_file << "}" << std::endl;
      }
      break;
    case 5:
      for (auto& chain : chains) {
        std::vector<Chain> suffixes = chain.Suffix();
        output_file << "{";
        bool comma = true;
          for (const auto& chain : suffixes) {
            if (!comma) {
              output_file << ", ";
            }
            output_file << chain;
            comma = false;
          }
        output_file << "}" << std::endl;
      }
      break;
    default:
      std::cerr << "Wrong opcode, try from (1-5)" << std::endl;
      break; 
  } 
  return 0;
}
