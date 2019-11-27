//
// Created by Asus on 26/11/2019.
//

#ifndef POO1_CONTROLADOR_H
#define POO1_CONTROLADOR_H



#include "Robot.h" // Incluye Almacen e Instruccion
#include "funciones.h"
using namespace std;

class Controlador{
private:
    Almacen almacen;
    vector<Robot> robots;
public:
    normal input_robots();
    normal input_instrucciones();
    normal ejecutar_instrucciones();
};

#endif //POO1_CONTROLADOR_H
