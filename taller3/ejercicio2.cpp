#include <iostream>
using namespace std;

int main() {
    string palabra;
    cout << "Ingresa una pabalra";
    cin >> palabra;
    string resultado = "";
    for (int i = 0; i < palabra.length(); i++) {
        char letra = palabra[i];
            //use toupper para pasar a letras mayusculas y tolower para pasar a miusculas 
        if (i % 2 == 0) {
            resultado += toupper(letra);
        } 
        else {
            resultado += tolower(letra);
        }
    }
    cout << "Resultado: " << resultado << endl;
    return 0;
}
