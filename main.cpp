#include "funciones.h"
using namespace std;

#include "Controlador.h"

int main(){
    Controlador controlador;

    cout << "************************* ROBOTS *********************************" << endl;
    controlador.input_robots();
    cout << "********************** INSTRUCCIONES *****************************" << endl;
    controlador.input_instrucciones();
    cout << "*****************************************************************" << endl;
    controlador.ejecutar_instrucciones();
}