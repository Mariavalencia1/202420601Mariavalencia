#include <iostream>
using namespace std;

void mayorqueOfTwoValues(int valueOne) {
    if (valueOne >= 3) {
        cout << "Su nota: " << valueOne << " es mayor o igual que 3, usted pasa" << endl;
    } else {
        cout << "Su nota: " << valueOne << " es menor que 3, usted no pasa" << endl;
    }
}

int main() {
    int valueOne;

    cout << "Ingrese un numero: ";
    cin >> valueOne;

    mayorqueOfTwoValues(valueOne);
}
