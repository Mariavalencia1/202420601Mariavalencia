#include <iostream>
using namespace std;

int main() {
    string productos[6] = {"Manzanas", "Peras", "Uvas", "Bananos", "Mangos", "Fresas"};
    float precios[6] = {1500, 2300, 1800, 3100, 2700, 2600};
    float total = 0;

    cout << "----lista productos---" << endl;

   
    for (int i = 0; i < 6; i++) {
        cout << productos[i] << " -> $" << precios[i] << endl;
        total += precios[i];
    }

    cout << "Total a pagar por todos  " << total << endl;

    cout << "producto caro (mayor a 2.500)" << endl;
    for (int i = 0; i < 6; i++) 
    {
        if (precios[i] >= 2500)
        {
            cout << productos[i] << " cuesta $" << precios[i] << endl;
        }
    }


    return 0;
}
