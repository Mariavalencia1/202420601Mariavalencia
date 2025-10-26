#include <iostream>
using namespace std;


int contarPalabras(string frase) 
{
    int palabras = 0;
    bool dentroPalabra = false; 

    for (int i = 0; i < frase.length(); i++) 
    {
        if (frase[i] != ' ' && dentroPalabra == false) 
        {
            palabras = palabras + 1; 
            dentroPalabra = true;
        }
        else if (frase[i] == ' ') 
        {
            dentroPalabra = false; 
        }
    }
    return palabras;
}


int contarPuntuacion(string frase) 
{
    int signos = 0;
    for (int i = 0; i < frase.length(); i++) 
    {
        char c = frase[i];
        if (c == '.' || c == ',' || c == ';' || c == ':' || c == '!' || c == '?') 
        {
            signos = signos + 1;
        }
    }
    return signos;
}


bool terminaConPunto(string frase) 
{
    int tam = frase.length();
    if (tam > 0 && frase[tam - 1] == '.') 
    {
        return true;
    } 
    else 
    {
        return false;
    }
}

int main() 
{
    string frase;
    cout << "EVALUACION DE FRASE";
    cout << "Escriba una frase: ";
    getline(cin, frase);

    int p = contarPalabras(frase);
    int s = contarPuntuacion(frase);
    bool punto = terminaConPunto(frase);

    cout << "--- RESULTADOS ---";
    cout << "Palabras: " << p << endl;
    cout << "Signos de puntuacion: " << s << endl;

    if (punto == true) 
    {
        cout << "La frase termina con un punto.";
    } 
    else 
    {
        cout << "La frase NO termina con punto.";
    }

    cout << "Fin del programa :)";
    return 0;
}
