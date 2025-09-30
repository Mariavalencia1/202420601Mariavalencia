#include <iostream>
using namespace std;


void ForWithString() {
    cout << "------------" << endl;
    string exampleText = "hello word";
    cout  << "size():" << exampleText.size() << endl;
    cout << "posicion 1: " << exampleText[1]<< endl;
    cout << "-------------" << endl;
    for (int i = 0; i< exampleText.size()+1; i++)
    {
        char textCharacter = exampleText[i];
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