#include <iostream>
using namespace std;



void sumOfTwoValues(int valueOne, int valueTwo) {
    int sumResult = valueOne + valueTwo;
    cout << "La suma de los valores es igual a: " << sumResult << endl;
}

void subtractOfTwoValues(int valueOne, int valueTwo) {
    int subtractResult = valueOne - valueTwo;
    cout << "La resta de los valores es igual a: " << subtractResult << endl;
}

void multipOfTwoValues(int valueOne, int valueTwo) {
    int multipResult = valueOne * valueTwo; 
    cout << "La multiplicacion de los valores es igual a  : " << multipResult << endl;
}

void diviOfTwoValues(int valueOne, int valueTwo) {
    int dividResult = valueOne / valueTwo;
    cout << "La division de los valores es igual  a: " << dividResult << endl;
}


void square(int number) {
    int result = number * number;
    cout << "El cuadrado de " << number << " es igual a: " << result << endl;
}

int main() {
    int valueOne, valueTwo;

    cout << "Ingrese un numero: ";
    cin >> valueOne;

    cout << "Ingrese otro numero: ";
    cin >> valueTwo;

    sumOfTwoValues(valueOne, valueTwo);
    subtractOfTwoValues(valueOne, valueTwo);
    multipOfTwoValues(valueOne, valueTwo);
    diviOfTwoValues(valueOne, valueTwo);

    square(valueOne);
    square(valueTwo);

    return 0;
}

