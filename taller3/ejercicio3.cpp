#include <iostream>
using namespace std;


void ForWithString() {

    string palabra1;
    cout << "Ingresa una pabalra";
    cin >> palabra1;

    cout << "------------" << endl;
    cout  << "size():" << palabra1.size() << endl;
    cout << "posicion 1: " << palabra1[1]<< endl;
    cout << "-------------" << endl;
    for (int i = 0; i< palabra1.size()+1; i++)
        char textCharacter = palabra1[i];
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
    ForWithString();
    return 0;
}