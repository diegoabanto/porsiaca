//
// Created by Asus on 26/11/2019.
//

#ifndef POO1_INSTRUCCION_H
#define POO1_INSTRUCCION_H


#include <iostream>
#include <string>
using namespace std;

class Instruccion{
public:
    entero numero;
    string operacion;
    entero destino[2];
    string producto;
    entero cantidad;

    Instruccion(entero _numero, string _operacion, entero coord1_dest, entero coord2_dest, string producto, entero _cantidad);
};



#endif //POO1_INSTRUCCION_H
