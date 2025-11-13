
#include <iostream>

using namespace std;

void getNewSales(string*& names, int*& values, int& size) 
{
    cout << "Cuantas ventas desea registrar? ";
    cin >> size;


    names = new string[size];
    values = new int[size];

    for (int i = 0; i < size; i++) 
    {
        cout << "Nombre de la venta " << i + 1 << ": ";
        cin >> names[i];
        cout << "Valor de la venta " << i + 1 << ": ";
        cin >> values[i];
    }
}

void printSales(string names[], int values[], int size) 
{
    if (size == 0) 
    {
        cout << "No hay ventas registradas." << endl;
        return;
    }
    cout << "--- Lista de ventas ---" << endl;
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". " << names[i] << " -> " << values[i] << endl;
    }
}

void modifySale(string names[], int values[], int size) 
{
    if (size == 0) 
    {
        cout << "No hay ventas para modificar." << endl;
        return;
    }
    string buscar;
    cout << "Ingrese el nombre de la venta a modificar: ";
    cin >> buscar;
    bool found = false;
    for (int i = 0; i < size; i++) 
    {
        if (names[i] == buscar) 
        {
            cout << "Valor actual: " << values[i] << endl;
            cout << "Nuevo valor: ";
            cin >> values[i];
            found = true;
            cout << "Venta actualizada." << endl;
            break;
        }
    }
    if (!found) cout << "Venta no encontrada." << endl;
}

void findSale(string names[], int values[], int size) 
{
    if (size == 0) 
    {
        cout << "No hay ventas registradas." << endl;
        return;
    }
    string buscar;
    cout << "Nombre de la venta a buscar: ";
    cin >> buscar;
    bool found = false;
    for (int i = 0; i < size; i++) 
    {
        if (names[i] == buscar) 
        {
            cout << "Posicion " << i + 1 << " -> Valor: " << values[i] << endl;
            found = true;
        }
    }
    if (!found) cout << "Venta no encontrada." << endl;
}

void salesInRange(string names[], int values[], int size) 
{
    if (size == 0) 
    {
        cout << "No hay ventas registradas." << endl;
        return;
    }
    int min, max;
    cout << "Valor minimo: ";
    cin >> min;
    cout << "Valor maximo: ";
    cin >> max;
    cout << "Ventas en el rango [" << min << ", " << max << "]:" << endl;
    bool found = false;
    for (int i = 0; i < size; i++) 
    {
        if (values[i] >= min && values[i] <= max) 
        {
            cout << names[i] << " -> " << values[i] << endl;
            found = true;
        }
    }
    if (!found) cout << "Ninguna venta en ese rango." << endl;
}

void calculateTotal(int values[], int size) 
{
    if (size == 0) 
    {
        cout << "No hay ventas registradas." << endl;
        return;
    }
    int total = 0;
    for (int i = 0; i < size; i++) total += values[i];
    cout << "Total de ventas: " << total << endl;
}

int menu() 
{
    int op;
    cout << "1. Registrar o reiniciar ventas" << endl;
    cout << "2. Mostrar todas las ventas" << endl;
    cout << "3. Modificar una venta" << endl;
    cout << "4. Buscar una venta" << endl;
    cout << "5. Ventas dentro de un rango" << endl;
    cout << "6. Calcular total" << endl;
    cout << "7. Salir" << endl;
    cout << "Opcion: ";
    cin >> op;
    return op;
}

void run() 
{
    string* names = nullptr;
    int* values = nullptr;
    int size = 0;
    bool running = true;
    while (running) 
    {
        int op = menu();
        switch (op) 
        {
        case 1: getNewSales(names, values, size); break;
        case 2: printSales(names, values, size); break;
        case 3: modifySale(names, values, size); break;
        case 4: findSale(names, values, size); break;
        case 5: salesInRange(names, values, size); break;
        case 6: calculateTotal(values, size); break;
        case 7:
            delete[] names;
            delete[] values;
            running = false;
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
        }
    }
}

int main() 
{
    run();
    return 0;
}
