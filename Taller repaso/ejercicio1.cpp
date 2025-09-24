#include <iostream>  
#include <string>     
using namespace std;


int main() {
    
    string nombre;
    int edad;
    double estatura;

    cout << "Ingresa tu nombre: ";
    cin >> nombre;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    cout << "Ingresa tu estatura en metros: ";
    cin >> estatura;

    cout << "Hola " << nombre << ", tienes " << edad 
         << " años y mides " << estatura << " metros." << endl;

    return 0;
}
