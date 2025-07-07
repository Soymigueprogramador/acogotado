#include <iostream>
#include "menu.h"
#include "limpiarPantalla.h"

using namespace std;

int menu() {
    int opcion;

    limpiarPantalla();
    cout << " ============= M E N Ú ============= " << endl;
    cout << " 1) JUGAR" << endl;
    cout << " 2) REGLAMENTO DEL JUEGO" << endl;
    cout << " 3) CRÉDITOS DEL JUEGO" << endl;
    cout << " 0) SALIR" << endl;
    cout << " Elegí una opción: ";
    cin >> opcion;

    return opcion;
}
