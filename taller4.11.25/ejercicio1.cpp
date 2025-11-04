#include <iostream>
using namespace std;

int main() 
{
    string texto;
    int totalCaracteres = 0;
    int sinEspacios = 0;

    cout << "FRASE: ";
    getline(cin, texto);

    totalCaracteres = texto.length();

  
    for (int i = 0; i < texto.length(); i++) 
    {
        if (texto[i] != ' ') 
        {
            sinEspacios++;
        }
    }

  
    cout << "Total de caracteres: " << totalCaracteres << endl;
    cout << "Caracteres sin espacios: " << sinEspacios << endl;

    return 0;
}
