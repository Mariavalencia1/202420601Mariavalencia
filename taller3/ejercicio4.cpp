#include <iostream>
using namespace std;

int main() {
    int numero;
    string palabra;
    int contador = 0;

    cout << "Ingresa un número: ";
    cin >> numero;

    cout << "Ingresa palabras (escribe 'fin' para terminar):" << endl;

    while (true) {
        cin >> palabra;

        if (palabra == "fin") {
            break; 
        }

        if (palabra.length() > numero) {
            contador++;
        }
    }


    cout << "Cantidad de palabras con longitud mayor a " << numero << ": " << contador << endl;

    return 0;
}
