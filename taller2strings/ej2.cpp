#include <iostream>
using namespace std;

int contarVocales(string texto) 
{
    int total = 0;//paso a minusculas para simplificar
    for (int i = 0; i < texto.length(); i++) 
    {
        char c = tolower(texto[i]); 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
        {
            total++;
        }
    }
    return total;
}


int contarConsonantes(string texto) 
{
    int total = 0;
    for (int i = 0; i < texto.length(); i++) 
    {
        char c = tolower(texto[i]);
        if (c >= 'a' && c <= 'z') 
        { 
            if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) 
            {
                total++;
            }
        }
    }
    return total;
}


int contarNoAlfabeticos(string texto) 
{
    int total = 0;
    for (int i = 0; i < texto.length(); i++) 
    {
        char c = texto[i];
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))) 
        {
            total++;
        }
    }
    return total;
}

int main() 
{
    string frase;
    cout << "------ CONTADOR DE VOCALES Y CONSONANTES-----";
    cout << "Escribe una frase: ";
    getline(cin, frase);

    int v = contarVocales(frase);
    int c = contarConsonantes(frase);
    int noA = contarNoAlfabeticos(frase);

    cout << "Analisis completado!";
    cout << "Vocales: " << v << endl;
    cout << "Consonantes: " << c << endl;
    cout << "No alfabeticos: " << noA << endl;


    if (v > c)
        cout << "Tu frase suena melodiosa (mas vocales que consonantes :D)";
    else if (c > v)
        cout << "Tu frase suena dura (mas consonantes que vocales!)";
    else
        cout << "Perfecto equilibrio entre vocales y consonantes!";

    return 0;
}
