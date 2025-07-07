#include <iostream>
#include "menu.h"
#include "jugarPartida.h"
#include "reglamento.h"
#include "creditos.h"
#include "limpiarPantalla.h" // si tenés esta función como header

using namespace std;

int main() {
    int opcion = menu();

    switch (opcion) {
        case 1:
            jugarPartida();
            break;
        case 2:
            reglamento();
            break;
        case 3:
            creditos();
            break;
        case 0:
            cout << "Saliendo del juego..." << endl;
            break;
        default:
            cout << "Opción inválida." << endl;
            break;
    }

    return 0;
}