// Funcion para limpiar la pantalla.

#include <iostream>
#include "funciones.h"

using namespace std;

void limpiarPantalla()
{
    if (system(" clear ") == -1)
    {
        cout << " Ocurrio un error al limpiar la pantalla " << endl;
        cout << " Se recomienda cerrar el juego y volver abrirlo " << endl;
    }
}