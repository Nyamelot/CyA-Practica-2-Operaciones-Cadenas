cmake_minimum_required(VERSION 3.15 FATAL_ERROR)
project("Practica 2 CyA"
        VERSION 1.0.0
        DESCRIPTION ""
        LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


add_subdirectory("p02_strings")