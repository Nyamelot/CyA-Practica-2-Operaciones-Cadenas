// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 2: Cadenas, Alfabetos y Símbolos
// Autor: José Ángel Portillo García
// Correo: alu0101568232@ull.edu.es
// Fecha: 21/09/2023

#include <string>
#include <iostream>

const std::string kTitle = "p02-containers";
const std::string kHelpText =
  R"(How to use: to use this program you will need to input ./a.out input.txt output.t opcode
   >> Parameters:
       - a.out is the executable
       - input.txt: is the file you will read
       - output.txt is the output file                                    
       - opcode is selection input

   >> Functions:
      - Alphabet(Press 1): The output will result in the alphabet of each chain
      - Length(Press 2): The output will result in the length of each chain
      - Reverse(Press 3): The output will result in reversed chains
      - Prefix(Press 4): The output will result in the prefix of each chain
      - Suffix(Press 5): The output will result in the suffix of each chain
      - Modification(Press 6) The output will result in all the operations above))";

void Usage(int argc, char* argv[]) {
  const std::string kHelp = "--help";
  if (argc == 1) {
    std::cerr << argv[0] << std::endl << kTitle << std::endl;
    std::cerr << "How to use: " << argv[0]
              << " example.txt"
              << std::endl;
    std::cerr << "Try " << argv[0] << " --help for more information."
              << std::endl;
    exit(EXIT_FAILURE);
  }
  if (argv[1] == kHelp) {
    std::cout << kTitle << std::endl;
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
  if ((argc > 4) || (argc < 4)) {
    std::cerr << argv[0] << std::endl << kTitle << std::endl;
    std::cerr << "How to use: " << argv[0]
              << "example.txt"
              << std::endl;
    std::cerr << "Try " << argv[0] << " --help for more information."
              << std::endl;
    exit(EXIT_FAILURE);
  }
}