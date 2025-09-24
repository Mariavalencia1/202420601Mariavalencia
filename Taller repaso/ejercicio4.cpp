#include <iostream>
using namespace std;


void contarDescendente(int number) {
    cout << "Conteo descendente desde " << number << ": ";
    while (number >= 0) {
        cout << number << " ";
        number--; 
    }
    cout << endl;
}


void contarAscendente(int number) {
    cout << "Conteo ascendente hasta " << number << ": ";
    int i = 0;
    while (i <= number) {
        cout << i << " ";
        i++; 
    }
    cout << endl;
}

int main() {
    int numero;

    cout << "Ingresa un número: ";
    cin >> numero;

    contarDescendente(numero);
    contarAscendente(numero);

    return 0;
}
