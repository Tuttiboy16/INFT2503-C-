cmake_minimum_required(VERSION 3.1)

project(Oving_6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -pthread -Wall -Wextra")

add_executable(oppgave_1 oppgave_1.cpp)

add_executable(oppgave_2 oppgave_2.cpp)

find_package(Boost 1.54.0 COMPONENTS system REQUIRED)
include_directories(${Boost_INCLUDE_DIR})
