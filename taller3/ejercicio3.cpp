#include <iostream>
using namespace std;

int main() {
    string palabra1, palabra2;
    int contador = 0;

    cout << "Ingrese la primera palabra: ";
    cin >> palabra1;
    cout << "Ingrese la segunda palabra: ";
    cin >> palabra2;

   
    for (int i = 0; i < palabra1.size(); i++) {
        palabra1[i] = tolower(palabra1[i]);
    }
    for (int i = 0; i < palabra2.size(); i++) {
        palabra2[i] = tolower(palabra2[i]);
    }

    
    for (int i = 0; i < palabra1.size(); i++) {
        for (int j = 0; j < palabra2.size(); j++) {
            if (palabra1[i] == palabra2[j]) {
                contador++;
                palabra2[j] = '*'; 
                break;
            }
        }
    }

    cout << "Cantidad de letras que aparecen en ambas palabras: " << contador << endl;

    return 0;
}
