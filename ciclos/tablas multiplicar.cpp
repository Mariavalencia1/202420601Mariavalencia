#include <iostream>


using namespace std;

int main() 
{
    int uservalue1, uservalue2;

    cout << "Elija el numero que debe adivinar jugador 2 : ";
    cin >> uservalue1;
    cout << "Jugador 2, adivina el numero!" << endl;
    while (uservalue2 != uservalue1) 
    {
        cout << "Elige un numero: ";
        cin >> uservalue2;

        if (uservalue2 > uservalue1) 
        {
            cout << "El numero es menor " << endl;
        }
        if (uservalue2 < uservalue1) 
        {
            cout << "El numero es mayor " <<endl;
        }
        if (uservalue2 == uservalue1) 
        {
            cout << "el numero es correcto, adivino " << endl;
        }
    }

    return 0;
}
