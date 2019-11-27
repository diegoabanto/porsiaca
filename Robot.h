//
// Created by Asus on 26/11/2019.
//

#ifndef POO1_ROBOT_H
#define POO1_ROBOT_H


#include "Almacen.h" // Incluye Instruccion
#include "funciones.h"
using namespace std;

class Robot{
private:
    entero numero;
    entero origen[2];
    entero coordActual[2];
    string estado; // en tránsito, destino, home
    Almacen* almacen;

    entero proximaInstruccion = 0;  // numero de siguiente instruccion a ejecutar
    vector<Instruccion> instrucciones;

    bool moverse(int dest1, int dest2); // devuelve true si llego al destino y false si hubo colision.
    // actualiza la posicion del robot en el almacen
public:
    Robot(int _numero, int _origen1, int _origen2, Almacen* _almacen);
    ~Robot(){};

    void agregarInstruccion(Instruccion instruccion);
    bool siguienteInstruccion(); // devuelve false si hubo colision
    // true si completo la instruccion o no tiene mas

    bool termino();  // devuelve true si termino todas sus instrucciones o si no hay instrucciones
};

#endif //POO1_ROBOT_H
