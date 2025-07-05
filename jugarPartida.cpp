// Función para jugar partida.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "funciones.h"
#include "limpiarPantalla.cpp"
#include "dibujar.cpp"

using namespace std;

void jugarPartida()
{
    char letraElegida;
    string palabraCorrecta = "";
    string palabraIncorrecta = "";
    string palabrasParaJugar[] = {
        "monitor", "microfono", "televisor", "telefono", "caja", "fibron", "teclado", "pc", "collar", "manzana",
        "pantalla", "audifono", "computado", "auricular", "lapiz", "mouse", "cuaderno", "cargador", "webcam", "tijera",
        "pantufla", "bicicleta", "usb", "tv", "router", "sillon", "impresor", "bateria", "control", "ventana",
        "botella", "espejos"
    };

    srand((int)time(NULL));
    int nA = rand() % 33; // hay 33 palabras en el array
    int vida = 6;
    bool correcto, completa;

    // Inicializamos palabraCorrecta con guiones
    for (int i = 0; i < (int)palabrasParaJugar[nA].size(); i++)
    {
        palabraCorrecta += "-";
    }

    while (vida > 0)
    {
        limpiarPantalla();

        cout << " ================== A C O G O T A D O ================== " << endl;
        dibujar();
        cout << endl;
        cout << " Fallos: " << palabraIncorrecta << endl;
        cout << " Progreso: " << palabraCorrecta << endl;
        cout << endl;
        cout << " Ingresa una letra: ";
        cin >> letraElegida;

        correcto = false;

        for (int i = 0; i < (int)palabrasParaJugar[nA].size(); i++)
        {
            if (palabrasParaJugar[nA][i] == letraElegida)
            {
                palabraCorrecta[i] = letraElegida;
                correcto = true;
            }
        }

        if (!correcto)
        {
            vida--;
            palabraIncorrecta += letraElegida;
        }

        completa = true;
        for (int i = 0; i < (int)palabraCorrecta.size(); i++)
        {
            if (palabraCorrecta[i] == '-')
            {
                completa = false;
                break;
            }
        }

        if (completa)
        {
            limpiarPantalla();
            cout << " ================== A C O G O T A D O ================== " << endl;
            dibujar();
            cout << endl;
            cout << " Palabra: " << palabrasParaJugar[nA] << endl;
            cout << " ¡Ganaste! 🎉" << endl;
            cout << " Presiona cualquier tecla para continuar..." << endl;
            cin >> letraElegida;
            return;
        }
    }

    limpiarPantalla();
    cout << " ================== A C O G O T A D O ================== " << endl;
    dibujar();
    cout << endl;
    cout << " Palabra: " << palabrasParaJugar[nA] << endl;
    cout << " Perdiste 😢" << endl;
    cout << " Presiona cualquier tecla para continuar..." << endl;
    cin >> letraElegida;
}