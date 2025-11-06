#include <iostream>
using namespace std;

int main() 
{
    string texto;
    int vocales = 0, consonantes = 0;

    cout << "Escribe una palabra ";
    cin >> (cin, texto);

    for (int i = 0; i < texto.length(); i++) 
    {
        char c = tolower(texto[i]); 

        if (c >= 'a' && c <= 'z') 
        { 
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vocales++;
            else
                consonantes++;
            
    
    cout << "Texto original: " << texto << endl;
    cout << "Cantidad de vocales: " << vocales << endl;
    cout << "Cantidad de consonantes: " << consonantes << endl;


    return 0;
}
