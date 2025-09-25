#include <iostream>
using namespace std;

void mostrarTabla(int number) {
    cout << "Tabla de multiplicar del " << number << ":" << endl;
    for (int i = 2; i <= 10; i++) {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }
}

int main() {
    int numero;

    cout << "Ingresa un número para mostrar su tabla de multiplicar: ";
    cin >> numero;

    mostrarTabla(numero);

    return 0;
}
