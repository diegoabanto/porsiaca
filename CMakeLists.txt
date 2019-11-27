cmake_minimum_required(VERSION 3.14)
project(poo1)

set(CMAKE_CXX_STANDARD 14)

add_executable(poo1 main.cpp Almacen.cpp Almacen.h Controlador.h Controlador.cpp Instruccion.cpp Instruccion.h Robot.cpp Robot.h Slot.h Slot.cpp)