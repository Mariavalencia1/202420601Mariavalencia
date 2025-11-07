#include <iostream>
using namespace std;

int main() 
{
    string ciudades[10] = {"Bogotá", "Medellín", "Cali", "Cartagena", "Pereira", "Bucaramanga","Manizales", "Tunja", "Santa Marta", "Villavicencio"};
    float temperaturas[10] = {18.5, 25.1, 27.8, 31.3, 22.7, 26.2, 19.0, 16.4, 30.5, 29.0};

    float tempMin, tempMax;
    cout << "Ingrese la temperatura minima: ";
    cin >> tempMin;
    cout << "Ingrese la temperatura maxima: ";
    cin >> tempMax;

    cout << "Ciudades dentro del rango (" << tempMin << " - " << tempMax << " grados ):";

    float suma = 0;
    int contador = 0;

    for (int i = 0; i < 10; i++) 
    {
        if (temperaturas[i] >= tempMin && temperaturas[i] <= tempMax) 
        {
            cout << ciudades[i] << " - " << temperaturas[i] << " grados " << endl;
            suma += temperaturas[i];
            contador++;
        }
    }

    if (contador > 0) 
    {
        float promedio = suma / contador;
        cout << "Promedio de temperaturas dentro del rango: " << promedio << " grados " << endl;
    } else {
        cout << "No hay ciudades dentro de ese rango de temperatura." << endl;
    }

    return 0; 
}
