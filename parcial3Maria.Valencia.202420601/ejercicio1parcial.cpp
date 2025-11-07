#include <iostream>
using namespace std;

int main() 
{
    string frase;
    cout << "escribe una frase breve:  ";
    cin >> (frase);

    string palabra = "" ,palabraLarga = "";
    int contador = 0;
    frase += " ";

    for (int i = 0; i < frase.size(); i++) 

    {
        char  letra = frase[i];

        if (letra != ' ') 
        {
            palabra += letra;
        } 
        else 
        {
            if (palabra != "" ) 
            {
                contador++;
                if (palabra.size() > palabraLarga.size()) 
                {
                    palabraLarga = palabra;
                }
                palabra = "";
            }
        }
    }
    cout << "Cantidad de palabras " << contador << endl;
    cout << "Palabra mas larga " << palabraLarga << endl;

    return 0
}
