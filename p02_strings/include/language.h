
#ifndef LANGUAGE_H
#define LANGUAGE_H

#include <set>
#include <string>
#include <iostream>

#include "chain.h"
#include "alphabet.h"

class Language {
 public:
  // Constructor
  Language(std::set<Chain> language, Alphabet alphabet ) : language_(language), alphabet_(alphabet) {}
 private:
  std::set<Chain> language_;
  Alphabet alphabet_;
};

#endif
