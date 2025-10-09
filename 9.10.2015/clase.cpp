#include <iostream>
using namespace std;

int main()
{
    // Reemplazar los espacios de un string por --
    string original = "hola mundo";

    for (int i = 0; i < original.size(); i++) {
        char letter = original[i];
        if (letter == ' ')
            cout << "-";
        else
            cout << letter;
    }

    cout << endl;
    return 0;
}
