// Funcion para dibujar el estado del "acogotado"
#include <iostream>
using namespace std;

void Dibujar(int vida) {
    switch (vida) {
        case 6:
            cout << "  --------" << endl;
            cout << "  |      |" << endl;
            cout << "  |" << endl;
            cout << "  |" << endl;
            cout << "  |" << endl;
            cout << "  |" << endl;
            cout << "  |" << endl;
            cout << " ---" << endl;
            break;
        case 5:
            cout << "  --------" << endl;
            cout << "  |      |" << endl;
            cout << "  |      O" << endl;
            cout << "  |" << endl;
            cout << "  |" << endl;
            cout << "  |" << endl;
            cout << "  |" << endl;
            cout << " ---" << endl;
            break;
        case 4:
            cout << "  --------" << endl;
            cout << "  |      |" << endl;
            cout << "  |      O" << endl;
            cout << "  |      |" << endl;
            cout << "  |" << endl;
            cout << "  |" << endl;
            cout << "  |" << endl;
            cout << " ---" << endl;
            break;
        case 3:
            cout << "  --------" << endl;
            cout << "  |      |" << endl;
            cout << "  |      O" << endl;
            cout << "  |     /|" << endl;
            cout << "  |" << endl;
            cout << "  |" << endl;
            cout << "  |" << endl;
            cout << " ---" << endl;
            break;
        case 2:
            cout << "  --------" << endl;
            cout << "  |      |" << endl;
            cout << "  |      O" << endl;
            cout << "  |     /|\\" << endl;
            cout << "  |" << endl;
            cout << "  |" << endl;
            cout << "  |" << endl;
            cout << " ---" << endl;
            break;
        case 1:
            cout << "  --------" << endl;
            cout << "  |      |" << endl;
            cout << "  |      O" << endl;
            cout << "  |     /|\\" << endl;
            cout << "  |     /" << endl;
            cout << "  |" << endl;
            cout << "  |" << endl;
            cout << " ---" << endl;
            break;
        case 0:
            cout << "  --------" << endl;
            cout << "  |      |" << endl;
            cout << "  |      O" << endl;
            cout << "  |     /|\\" << endl;
            cout << "  |     / \\" << endl;
            cout << "  |" << endl;
            cout << "  |" << endl;
            cout << " ---" << endl;
            break;
        default:
            cout << "Estado de vida no valido." << endl;
            break;
    }
}
