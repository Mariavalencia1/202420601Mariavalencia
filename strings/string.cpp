#include <iostream>
using namespace std;


void ForWithString() {
    cout << "------------" << endl;
    string Palabra1;
    cout  << "size():" << Palabra1.size() << endl;
    cout << "posicion 1: " << Palabra1 [1]<< endl;
    cout << "-------------" << endl;
    for (int i = 0; i< Palabra1.size()+1; i++)
    {
        char textCharacter = Palabra1[i];
        if (textCharacter == 'a')
        {
            cout << "Se encontro una a" << endl;
        }
        if (textCharacter == 'e')
        {
            cout << "Se encontro una e" << endl;
        }
        if (textCharacter == 'i')
        {
            cout << "Se encontro una i" << endl;
        }
        if (textCharacter == 'o')
        {
            cout << "Se encontro una o" << endl;
        }
        if (textCharacter == 'u')
        {
            cout << "Se encontro una u" << endl;
        }
        //cout << "position: " << i << " - " << textCharacter << endl;
    }
}


int main() {

    string palabra1;
    cout << "Ingresa una pabalra";
    cin >> palabra1;


    ForWithString();
    return 0;
}