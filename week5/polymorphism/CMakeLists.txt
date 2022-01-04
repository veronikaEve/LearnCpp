cmake_minimum_required(VERSION 3.21)
project(polymorphism)

set(CMAKE_CXX_STANDARD 14)

add_executable(polymorphism main.cpp Vehicle.cpp Vehicle.h Car.cpp Car.h Boat.cpp Boat.h)
