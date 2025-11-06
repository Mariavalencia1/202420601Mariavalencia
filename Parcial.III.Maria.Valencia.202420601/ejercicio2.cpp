#include <iostream>
#include <string>
using namespace std;

int main() {
    string placas[6] = {"ABC123", "XYZ789", "LMN456", "JKL321", "QWE654", "TYU999"};
    float multas[6] = {250000, 180000, 300000, 450000, 200000, 120000};
    string ciudades[6] = {"Tunja", "Bogotá", "Tunja", "Medellín", "Cali", "Tunja"};
    
    string ciudadBuscada;
    cout << "Ingrese la ciudad a consultar: ";
    getline(cin, ciudadBuscada);
    
    float total = 0;
    bool hayMultas = false;

    cout << "\n=== Multas registradas en " << ciudadBuscada << " ===" << endl;

    for (int i = 0; i < 6; i++) {
        if (ciudades[i] == ciudadBuscada) {
            cout << placas[i] << "  -  $" << multas[i] << endl;
            total += multas[i];
            hayMultas = true;
        }
    }

    if (hayMultas) {
        cout << "-----------------------------" << endl;
        cout << "Total de multas en " << ciudadBuscada << ": $" << total << endl;
    } else {
        cout << "No se encontraron multas en esa ciudad." << endl;
    }

    return 0;
}
