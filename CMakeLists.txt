cmake_minimum_required(VERSION 3.23)
project(2)

set(CMAKE_CXX_STANDARD 14)

add_executable(2 main.cpp well.h oil_well.cpp oil_well.h well.cpp water_well.cpp water_well.h gas_well.cpp gas_well.h field.cpp field.h console_interface.cpp console_interface.h tests.cpp tests.h)
