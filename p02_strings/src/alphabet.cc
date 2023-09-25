
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
