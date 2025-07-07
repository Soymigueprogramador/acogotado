// Función para jugar partida

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "limpiarPantalla.h"
#include "dibujar.h"

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
        "botella", "espejos", "cable"
    };

    srand(static_cast<unsigned int>(time(NULL)));
    int nA = rand() % 33; // hay 33 palabras en el array
    int vida = 6;
    bool correcto, completa;

    // Inicializar palabraCorrecta con guiones
    palabraCorrecta = string(palabrasParaJugar[nA].size(), '-');

    while (vida > 0)
    {
        limpiarPantalla();

        cout << " ================== A C O G O T A D O ================== " << endl;
        Dibujar(vida); // ✅ PASAR VIDA
        cout << endl;
        cout << " Fallos: " << palabraIncorrecta << endl;
        cout << " Progreso: " << palabraCorrecta << endl;
        cout << endl;
        cout << " Ingresa una letra: ";
        cin >> letraElegida;

        // Convertir a minúscula
        letraElegida = tolower(letraElegida);

        // Evitar repetir letras incorrectas
        if (palabraIncorrecta.find(letraElegida) != string::npos ||
            palabraCorrecta.find(letraElegida) != string::npos)
        {
            cout << "Ya ingresaste esa letra. Intenta con otra." << endl;
            system("pause");
            continue;
        }

        correcto = false;

        for (size_t i = 0; i < palabrasParaJugar[nA].size(); i++)
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
            palabraIncorrecta += ' ';
        }

        // Verificar si la palabra está completa
        completa = palabraCorrecta.find('-') == string::npos;

        if (completa)
        {
            limpiarPantalla();
            cout << " ================== A C O G O T A D O ================== " << endl;
            Dibujar(vida);
            cout << endl;
            cout << " Palabra: " << palabrasParaJugar[nA] << endl;
            cout << " ¡Ganaste! 🎉" << endl;
            cout << " Presiona cualquier tecla para continuar..." << endl;
            cin >> letraElegida;
            return;
        }
    }

    // Si se queda sin vidas
    limpiarPantalla();
    cout << " ================== A C O G O T A D O ================== " << endl;
    Dibujar(vida);
    cout << endl;
    cout << " Palabra: " << palabrasParaJugar[nA] << endl;
    cout << " Perdiste 😢" << endl;
    cout << " Presiona cualquier tecla para continuar..." << endl;
    cin >> letraElegida;
}