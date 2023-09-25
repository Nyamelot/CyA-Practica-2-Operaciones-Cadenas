
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


std::vector<std::string> Fixes(std::string chain);


#endif


