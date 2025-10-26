#include <iostream>
using namespace std;


int contarGuiones(string codigo) 
{
    int cont = 0;
    for (int i = 0; i < codigo.length(); i++) 
    {
        if (codigo[i] == '-') 
        { 
            cont = cont + 1;
        }
    }
    return cont;
}

int contarDigitos(string codigo) 
{
    int cont = 0;
    for (int i = 0; i < codigo.length(); i++) 
    {
        if (codigo[i] >= '0' && codigo[i] <= '9') 
        { 
            cont = cont + 1;
        }
    }
    return cont;
}


bool validarUltimaMayuscula(string codigo) 
{
    int tam = codigo.length();
    char ultima = codigo[tam - 1]; 
    if (ultima >= 'A' && ultima <= 'Z') 
    {
        return true;
    } else 
    {
        return false;
    }
}

int main() 
{
    string codigo;
    cout << "ANALISIS DE CODIGO DE PRODUCTO";
    cout << "Escriba el codigo (ej: A12-BX9-Z): ";
    getline(cin, codigo);

    int g = contarGuiones(codigo);
    int d = contarDigitos(codigo);
    bool mayus = validarUltimaMayuscula(codigo);

    cout << "Resultados:";
    cout << "Guiones: " << g << endl;
    cout << "Digitos: " << d << endl;

    if (mayus == true) 
    {
        cout << "Termina en mayuscula :D";
    } 
    else 
    {
        cout << "No termina en mayuscula :(";
    }

    
    return 0;
}
