#include <iostream>
using namespace std;


void ForWithString() {
    cout << "------------" << endl;
    string exampleText = "otorrinolaringologo";
    cout  << "size():" << exampleText.size() << endl;
    cout << "-------------" << endl;
    for (int i = 0; i< exampleText.size()+1; i++)
    {
        char textCharacter = exampleText[i];
        if (textCharacter == 'o')
        {
            cout << "Se encontro una o" << endl;
        }
        //cout << "position: " << i << " - " << textCharacter << endl;
    }
}


int main() {
    ForWithString();
    return 0;
}