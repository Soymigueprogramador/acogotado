// Funcion para limpiar la pantalla.

#include <iostream>
#include <cstdlib> // Para system()
using namespace std;

void limpiarPantalla()
{
    int resultado;

#ifdef _WIN32
    resultado = system("cls");
#else
    resultado = system("clear");
#endif

    if (resultado != 0)
    {
        cout << "⚠️  No se pudo limpiar la pantalla correctamente." << endl;
        cout << "   Puede continuar jugando, pero se recomienda reiniciar el juego si persiste." << endl;
    }
}