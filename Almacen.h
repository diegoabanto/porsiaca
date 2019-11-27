//
// Created by Asus on 26/11/2019.
//

#ifndef POO1_ALMACEN_H
#define POO1_ALMACEN_H


#include <iostream>
#include <string>
#include <iomanip>

#include "Instruccion.h"
#include "Slot.h"
#include"funciones.h"
using namespace std;

// Dimensiones del almacen
const int f = 5;
const int c = 5;

class Almacen{
private:
    Slot slots[f][c];
    entero posRobots[f][c]; // Posiciones de los robots
    entero filas = f;
    entero columnas = c;

public:
    Almacen();
    ~Almacen(){};

    entero getFilas();
    entero getColumnas();

    normal ingresarProducto(int coord1, int coord2, string producto, int cantidad);
    normal retirarProducto(int coord1, int coord2, int cantidad);

    normal marcarRobot(int num_robot, int coord1, int coord2);
    normal desmarcarRobot(int coord1, int coord2);
};


#endif //POO1_ALMACEN_H
