#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

bool isValidAmount(int amount) {
    return (amount % 50 == 0);
}

void dispenseBills(int amount) {
    int bills200 = 0, bills100 = 0, bills50 = 0;

    while (amount >= 200) {
        amount -= 200;
        bills200++;
    }
    while (amount >= 100) {
        amount -= 100;
        bills100++;
    }
    while (amount >= 50) {
        amount -= 50;
        bills50++;
    }

    cout << bills200 << " bills of 200 "
         << bills100 << " bills of 100 "
         << bills50 << " bills of 50" << endl;
}

int main() {
    int monto;
    cout << "Ingrese el monto a retirar: ";
    cin >> monto;

    if (isValidAmount(monto)) {
        dispenseBills(monto);
    } else {
        cout << "Monto no valido, debe ser multiplo de 50" << endl;
    }

    return 0;
}