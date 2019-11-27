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
using namespace std;

// Dimensiones del almacen
const int f = 5;
const int c = 5;

class Almacen{
private:
    Slot slots[f][c];
    int posRobots[f][c]; // Posiciones de los robots
    int filas = f;
    int columnas = c;

public:
    Almacen();
    ~Almacen(){};

    int getFilas();
    int getColumnas();

    void ingresarProducto(int coord1, int coord2, string producto, int cantidad);
    void retirarProducto(int coord1, int coord2, int cantidad);

    void marcarRobot(int num_robot, int coord1, int coord2);
    void desmarcarRobot(int coord1, int coord2);
};


#endif //POO1_ALMACEN_H
