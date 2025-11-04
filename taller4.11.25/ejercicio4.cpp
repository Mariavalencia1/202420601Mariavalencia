#include <iostream>
using namespace std;

int main() 
{
   
    float precios[6] = {12, 8, 9, 10, 40, 6};
    int cantidad = 6;
    float suma = 0;
    float mayor = precios[0];
    float menor = precios[0];

    cout << "---lista de precios----" << endl;


    for (int i = 0; i < cantidad; i++) 
    {
        cout << "Precio #" << i + 1 << ": $" << precios[i] << endl;

       
        suma += precios[i];

      
        if (precios[i] > mayor) 
        {
            mayor = precios[i];
        }

     
        if (precios[i] < menor) 
        {
            menor = precios[i];
        }
    }

    cout << "Suma de precios: " << suma << endl;
    cout << "El precio mas alto es : " << mayor << endl;
    cout << "El precio mas bajo es: " << menor << endl;

    return 0;
}
