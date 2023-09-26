// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 2: Cadenas, Alfabetos y Símbolos
// Autor: José Ángel Portillo García
// Correo: alu0101568232@ull.edu.es
// Fecha: 21/09/2023

#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <vector>
#include <fstream>

#include "chain.h"

std::ostream& operator<<(std::ostream& out, const Chain& chain) {
  if (chain.chain_.size() == 0) {
    out << "&";
    return out; 
  }
  out << chain.chain_;
  return out;
}

Chain Chain::Invert() {
  std::string reverse = chain_;
  std::reverse(reverse.begin(), reverse.end());
  return Chain(reverse);
}


int Chain::Length() {
  return chain_.length();
}


std::vector<Chain> Chain::Prefix() {
  std::string prefix;
  std::vector<Chain> prefixes;
  prefixes.emplace_back("");
  for (const auto& symbol : chain_) {
    prefix.push_back(symbol);
    prefixes.emplace_back(prefix);
  }
  return prefixes;
}

std::vector<Chain> Chain::Suffix() {
  std::vector<Chain> suffixes;
  suffixes.emplace_back("");
  for (int i = chain_.size() - 1; i >= 0; i--) {
    auto sub_string = chain_.substr(i);
    suffixes.emplace_back(sub_string);
  }
  return suffixes;
}

std::vector<std::string> FileReader(std::ifstream& input_files) {
  std::vector<std::string> text_file;
  std::string text_line;
  while (!input_files.eof()) {
    std::getline(input_files, text_line);
    text_file.emplace_back(text_line);
  }
  return text_file;
}