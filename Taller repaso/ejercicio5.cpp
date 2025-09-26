#include <iostream>
using namespace std;

int mayor(int firstNumber, int secondNumber) {
    if (firstNumber > secondNumber) {
        return firstNumber;
    } else if (secondNumber > firstNumber) {
        return secondNumber;
    } else {
        return -1; 
    }
}

int main() {
    int num1, num2;

    cout << "Ingresa el primer número: ";
    cin >> num1;

    cout << "Ingresa el segundo número: ";
    cin >> num2;

    int resultado = mayor(num1, num2);

    if (resultado == -1) {
        cout << "Los dos números son iguales: " << num1 << endl;
    } else {
        cout << "El mayor es: " << resultado << endl;
    }

    return 0;
}
