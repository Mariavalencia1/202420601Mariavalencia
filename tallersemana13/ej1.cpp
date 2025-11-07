#include <iostream>
using namespace std;

int main() 
{
    string employees[4] = {"Ana", "Luis", "María", "Pedro"};

 
    cout << "Lista de empleados:" << endl;

    for (int i = 0; i < 4; i++) 
    {
        cout << employees[i] << endl;
    }

    return 0;
}
