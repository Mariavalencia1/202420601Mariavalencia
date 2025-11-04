#include <iostream>
using namespace std;

int main() 
{

    int edades[7] = {18, 40, 70, 30, 27, 2, 8};
    int cantidad = 7;
    int suma = 0;
    float promedio = 0;

    cout << "Lista edades " << endl;

    for (int i = 0; i < cantidad; i++) 
    {
        cout << "edad numero" << i + 1 << ": " << edades[i] << endl;
        suma += edades[i];
    }
    promedio = suma / cantidad;

    cout << "La suma de las edades es: " << suma << endl;
    cout << "El promedio de edad es: " << promedio << endl;

    return 0;
}
