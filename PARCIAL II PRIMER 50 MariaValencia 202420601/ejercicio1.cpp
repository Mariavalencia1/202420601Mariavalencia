#include <iostream>
using namespace std;

int calculateTotal(int hours, int rate) {
    return hours * rate;
}

void printInvoice(string plate, int hours, int rate) {
    int total = calculateTotal(hours, rate);
    cout << "Vehículo " << plate 
         << " horas: " << hours 
         << " tarifa: " << rate 
         << " total: " << total << endl;
}

int main() {
    string plate;
    int hours, rate;

    cout << "Ingrese la placa del vehículo ";
    cin >> plate;

    cout << "Ingrese el número de horas ";
    cin >> hours;

    cout << "Ingrese la tarifa por hora ";
    cin >> rate;

    printInvoice(plate, hours, rate);

    return 0;
}
