cmake_minimum_required(VERSION 3.1)
project(Oppgave_2)

add_executable(Oppgave_2 main.cpp set.cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")
include(CPack)


