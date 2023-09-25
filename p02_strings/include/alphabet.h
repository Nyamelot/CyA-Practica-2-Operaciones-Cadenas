

#ifndef ALPHABET_H
#define ALPHABET_H

#include <set>
#include <iostream>
#include <string>

class Alphabet {
 public:
  //Constructor
  Alphabet(std::string strings) {
    for (const auto& symbol : strings) {
      alphabet_.emplace(symbol);
    }
  }
  
  //Getter
  inline const std::set<char> GetAlphabet() const { return alphabet_; }

  //Operator Overloading
  friend std::ostream& operator<<(std::ostream& out, const Alphabet& alphabet);

 private:
  std::set<char> alphabet_;
};

#endif
