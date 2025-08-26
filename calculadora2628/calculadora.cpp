#include <iostream>
using namespace std;

int main() {
    int opcion;
    double num1, num2;

    cout << "Calculadora" << endl;

    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulo" << endl;

    cout << "Elige una opcion (1-5): ";
    cin >> opcion;


    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    if (opcion == 1) {
        cout << "Resultado de la suma:" << num1 + num2 << endl;
    }
    else if (opcion == 2) {
        cout << "Resultado de la resta:" << num1 - num2 << endl;
    }
    else if (opcion == 3) {
        cout << "Resultado de la multiplicacion:" << num1 * num2 << endl;
    }
    else if (opcion == 4) {
        if (num2 != 0) {
            cout << "Resultado de la division: " << num1 / num2 << endl;
        }
    }

    else if (opcion == 5) {
     
        int a = (int)num1;
        int b = (int)num2;
        if (b != 0) {
            cout << "Resultado del modulo: " << a % b << endl;
        }
    }

    return 0;
    }