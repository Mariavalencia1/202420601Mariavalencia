#include <iostream>
using namespace std;

int main() {
    int opcion;
    float num1, num2, resultado;

    cout << " calculadora " << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "Seleccione una opcion (1-4): ";
    cin >> opcion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    switch(opcion) {
        case 1:
            resultado = num1 + num2;
            cout << "La suma es: " << resultado << endl;
            break;
        case 2:
            resultado = num1 - num2;
            cout << "La resta es: " << resultado << endl;
            break;
        case 3:
            resultado = num1 * num2;
            cout << "La multiplicacion es: " << resultado << endl;
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "La division es: " << resultado << endl;
            }
            break;
    }

    return 0;
}
