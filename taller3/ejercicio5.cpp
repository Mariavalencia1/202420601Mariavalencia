#include <iostream>
using namespace std;

bool esPalindromo(string palabra) {
    int inicio = 0;
    int fin = palabra.length() - 1;
    while (inicio < fin) {
        if (palabra[inicio] != palabra[fin]) {
            return false;
        }
        inicio++;
        fin--;
    }
    return true;
}

int main() {
    string palabra1, palabra2;
    
    cout << "Ingrese la primera palabra:";
    cin >> palabra1;
    
    cout << "Ingrese la segunda palabra:";
    cin >> palabra2;
    
    if (esPalindromo(palabra1))
        cout << palabra1 << " es un palindromo.";
    else
        cout << palabra1 << " no es un palindromo";
    
    if (esPalindromo(palabra2))
        cout << palabra2 << " es un palindrono.";
    else
        cout << palabra2 << " no es un palindromo.";

    return 0;
}
