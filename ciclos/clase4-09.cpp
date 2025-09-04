#include <iostream>
using namespace std;

void sumOfTwoValues(int valueOne, int valueTwo) {
    int sumResult = valueOne + valueTwo;
    cout << "La suma de los valores es: " << sumResult << endl;
}

void subtractOfTwoValues(int valueOne, int valueTwo) {
    int subtractResult = valueOne - valueTwo;
    cout << "La resta de los valores es: " << subtractResult << endl;
}

void multipOfTwoValues(int valueOne, int valueTwo) {
    int multipResult = valueOne * valueTwo; 
    cout << "La multiplicacion de los valores es: " << multipResult << endl;
}

void diviOfTwoValues(int valueOne, int valueTwo) {
    int dividResult = valueOne / valueTwo;
    cout << "La division de los valores es: " << dividResult << endl;
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

    return 0;
}
