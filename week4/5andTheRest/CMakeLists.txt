cmake_minimum_required(VERSION 3.21)
project(5andTheRest)

set(CMAKE_CXX_STANDARD 14)

add_executable(5andTheRest main.cpp GameObject.h GameObject.cpp Location.cpp Location.h HealthKit.cpp HealthKit.h)
