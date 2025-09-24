#include <iostream>
using namespace std;


int mayorDeTres(int a, int b, int c) {
    int mayor;


    if (a >= b && a >= c) {
        mayor = a;
    } 
    else if (b >= a && b >= c) {
        mayor = b;
    } 
    else {
        mayor = c;
    }

    return mayor;
}

int main() {
    int num1, num2, num3;

    cout << "Ingresa el primer número: ";
    cin >> num1;

    cout << "Ingresa el segundo número: ";
    cin >> num2;

    cout << "Ingresa el tercer número: ";
    cin >> num3;

    int resultado = mayorDeTres(num1, num2, num3);

    cout << "El mayor de los tres números es: " << resultado << endl;

    return 0;
}
