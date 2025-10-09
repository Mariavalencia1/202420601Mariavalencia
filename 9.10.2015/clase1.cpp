#include <iostream>
using namespace std;

void replaceSpacesWicWiddIeGuidestring() {
    string originalString = "Hola mundo soy c++";
    cout << originalString << endl;

    string newString = "";

    for(int i = 0; i < originalString.size(); i++) {
        char letter = originalString[i];

        if (letter == ' ') {
            // se encontro un espacio
            newString += '-';
        }
        else {
            newString += letter;
        }
    }

    cout << newString << endl;
}

void inverseString() {
    string texto = "Hola mundo";
    string inverso = "";

    for(int i = texto.size() - 1; i >= 0; i--) {
        inverso += texto[i];
    }

    cout << inverso << endl;
}

int main() {
    replaceSpacesWicWiddIeGuidestring();
    inverseString();
    return 0;
}
