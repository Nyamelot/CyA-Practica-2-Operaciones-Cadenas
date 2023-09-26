// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 2: Cadenas, Alfabetos y Símbolos
// Autor: José Ángel Portillo García
// Correo: alu0101568232@ull.edu.es
// Fecha: 21/09/2023

#ifndef CHAIN_H
#define CHAIN_H

#include <iostream>
#include <vector>
#include <string>

#include "alphabet.h"

class Chain {
 public:
  //Constructor
  explicit Chain (const std::string& chain) : chain_(chain), alphabet_(chain) {}

  //Getters
  inline const Alphabet GetAlphabet() const { return alphabet_; }
  inline const std::string GetString() const { return chain_; }

  //Functions
  void Prefix();
  void Suffix();
  Chain Invert();
  void Length();

  //Operator Overloading
  friend std::ostream& operator<<(std::ostream& out, const Chain& chain);

 private:
  Alphabet alphabet_;
  std::string chain_;

};



Chain operator+(const Chain& chain1, const Chain& chain2);
std::vector<std::string> Affixes(std::string chain);


#endif


