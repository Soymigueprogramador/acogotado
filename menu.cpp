// Funcion para el menu.
#include "funciones.h"
#include "limpiarPantalla.cpp"
#include <iostream>
using namespace std;

void menu() {
    int vida = 6;
    string palabraCorrecta = "";
    string palabraIncorrecta = "";
    int opcion;
    limpiarPantalla();

    while ( true )
    {
        cout << " ================== M E N U ================== " << endl;
        cout << endl;
        cout << " ================== ELEGI UNA OPCION ================== " << endl;
        cout << " 1) JUGAR " << endl;
        cout << " 2) REGLAMENTO DEL JUEGO " << endl;
        cout << " 3) CREDITOS DEL JUEGO " << endl;
        cout << " 0) SALIR DEL JUEGO " << endl;
        cin >> opcion;
    }
    

}