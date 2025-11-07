#include <iostream>
using namespace std;

int main() 
{
   
    float grades[5] = {3.5, 4.0, 2.8, 3.9, 4.2};

    float suma = 0;

    
    for (int i = 0; i < 5; i++) 
    {
        suma += grades[i];
    }

    
    float promedio = suma / 5;

    
    cout << "El promedio de las calificaciones es: " << promedio << endl;

    return 0;
}
