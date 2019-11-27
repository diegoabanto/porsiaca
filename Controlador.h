//
// Created by Asus on 26/11/2019.
//

#ifndef POO1_CONTROLADOR_H
#define POO1_CONTROLADOR_H

#include <iostream>
#include "Robot.h" // Incluye Almacen e Instruccion

using namespace std;

class Controlador{
private:
    Almacen almacen;
    vector<Robot> robots;
public:
    void input_robots();
    void input_instrucciones();
    void ejecutar_instrucciones();
};


#endif //POO1_CONTROLADOR_H
