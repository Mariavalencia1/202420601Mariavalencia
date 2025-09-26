#include <iostream> 
using namespace std;

void mostrarTabla(int number) {
    cout << "Tabla de multiplicar del " << number << " (solo resultados pares):" << endl;
    for (int i = 1; i <= 10; i++) {  
        int resultado = number * i;
        if (resultado % 2 == 0) {  // Verifica si es par
            cout << number << " x " << i << " = " << resultado << endl;
        }
    }
}

int main() {
    int numero;

    cout << "Ingresa un número para mostrar su tabla de multiplicar: ";
    cin >> numero;

    mostrarTabla(numero);

    return 0;
}

