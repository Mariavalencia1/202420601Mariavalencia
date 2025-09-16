#include <iostream>
using namespace std;

bool Needsmaintenance(int hojas, int intervalo) {
    if (hojas % intervalo == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int hojas, intervalo;
    cout << "Ingrese la cantidad de hojas producidas: ";
    cin >> hojas;
    cout << "Ingrese el intervalo de mantenimiento: ";
    cin >> intervalo;

    if (Needsmaintenance(hojas, intervalo)) {
        cout << "La maquina requiere mantenimiento." << endl;
    } else {
        cout << "La maquina no requiere mantenimiento." << endl;
    }

    return 0;
}
