#include <iostream>
using namespace std;

void contarDescendente(int number) {
    cout << "Conteo descendente de pares desde " << number << ": ";
    while (number >= 0) {
        if (number % 2 == 0) {   
            cout << number << " ";
        }
        number--; 
    }
    cout << endl;
}

void contarAscendente(int number) {
    cout << "Conteo ascendente hasta " << number << ": ";
    int i = 2;
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
