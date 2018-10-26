cmake_minimum_required(VERSION 3.10)
project(Dictionary)

set(CMAKE_CXX_STANDARD 11)

add_executable(Dictionary main.cpp Dictionary.h Hash_Table.h)