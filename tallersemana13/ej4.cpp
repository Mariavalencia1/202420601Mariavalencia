#include <iostream>
using namespace std;

int main() 
{
    
    int values[8] = {2, 5, 7, 8, 10, 13, 16, 19};

    int pares = 0;

    for (int i = 0; i < 8; i++)
    {
        if (values[i] % 2 == 0) 
        {
            pares++;
        }
    }

    
    cout << "La cantidad de numeros pares es: " << pares << endl;

    return 0;
}
