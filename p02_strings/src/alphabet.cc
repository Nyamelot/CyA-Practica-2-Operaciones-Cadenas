// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 2: Cadenas, Alfabetos y Símbolos
// Autor: José Ángel Portillo García
// Correo: alu0101568232@ull.edu.es
// Fecha: 21/09/2023

#include <iostream>

#include "alphabet.h"

std::ostream& operator<<(std::ostream& out, Alphabet alphabet) {
  out << "{ ";
  bool comma = true;
   for (const auto& symbol : alphabet.GetAlphabet()) {
     if (!comma) {
      out << ", ";
     }
     out << symbol;
     comma = false;
   }
  out << "}" << std::endl;
  return out;
}
