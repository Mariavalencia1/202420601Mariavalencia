#include <iostream>
using namespace std;

void showTurns(int start, int end) {
    if (start > end) {
        cout << "Error: el turno inicial no puede ser mayor que el final" << endl;
    } else {
        cout << "La maquina trabaja en los turnos: ";
        int i = start;
        while (i <= end) {
            cout << i << " ";
            i++;
        }
        cout << endl;
    }
}

int main() {
    int start, end;
    cout << "Ingresa el turno inicial: ";
    cin >> start;
    cout << "Ingresa el turno final: ";
    cin >> end;

    showTurns(start, end);

    return 0;
}
