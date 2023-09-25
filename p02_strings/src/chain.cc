// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 2: Cadenas, Alfabetos y Símbolos
// Autor: José Ángel Portillo García
// Correo: alu0101568232@ull.edu.es
// Fecha: 21/09/2023

#include <iostream>
#include <string>
#include <set>
#include <vector>

#include "chain.h"

std::vector<std::string> Affixes(std::string chain) {
  std::string fix;
  std::vector<std::string> fixes;
  fixes.emplace_back("&");
  for (const auto& symbol : chain) {
    fix.push_back(symbol);
    fixes.emplace_back(fix);
  }
  return fixes;
}

Chain Chain::Invert() {
  std::string reverse;
  for (int i = chain_.length(); i >= 0; i--) {
    reverse.push_back(chain_[i]);
  }
  return Chain (reverse);
}

void Chain::Length() {
  std::cout << chain_.length() << std::endl;
}

void Chain::Prefix() {
  std::vector<std::string>prefixes = Affixes(chain_);
  std::cout << "{ ";
  bool comma = true;
  for (const auto& chain : prefixes) {
    if (!comma) {
      std::cout << ", ";
    }
    std::cout << chain;
    comma = false;
  }
  std::cout << "}" << std::endl;
}

void Chain::Suffix() {
  std::vector<std::string>suffixes = Affixes(chain_);
  std::cout << "{ ";
  bool comma = true;
  for (const auto& chain : suffixes) {
    if (!comma) {
      std::cout << ", ";
    }
    std::cout << chain;
    comma = false;
  }
  std::cout << "}" << std::endl;
}