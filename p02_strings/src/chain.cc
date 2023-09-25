
#include <iostream>
#include <string>
#include <set>
#include <vector>

#include "chain.h"

std::vector<std::string> Fixes(std::string chain) {
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
  std::vector<std::string>prefixes = Fixes(chain_);
  std::cout << "{ ";
  bool comma = true;
  for (const auto& chain : prefixes) {
    if (!comma) {
      std::cout << ", ";
    }
    std::cout << chain;
    comma = false;
  }
  std::cout << 
}