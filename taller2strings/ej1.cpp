#include <iostream>
using namespace std;

bool validarLongitud(string nombreUsuario) 
{
    int tam = nombreUsuario.length();
    if (tam >= 6 && tam <= 12) 
    {
        return true;
    } else 
    {
        return false;
    }
}


bool validarInicioLetra(string nombreUsuario) 
{
    char primera = nombreUsuario[0];
    if ((primera >= 'A' && primera <= 'Z') || (primera >= 'a' && primera <= 'z')) 
    {
        return true;
    } 
    else 
    {
        return false;
    }
}


bool validarSinEspacios(string nombreUsuario) 
{
    for (int i = 0; i < nombreUsuario.length(); i++) 
    {
        if (nombreUsuario[i] == ' ') 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    string usuario;

    cout << "=== VERIFICADOR DE NOMBRE DE USUARIO ===";
    cout << "Ingresa tu nombre de usuario: ";
    getline(cin, usuario);

    bool okLong = validarLongitud(usuario);
    bool okInicio = validarInicioLetra(usuario);
    bool okEspacios = validarSinEspacios(usuario);

    if (okLong && okInicio && okEspacios) 
    {
        cout << "Todo bien! Tu nombre de usuario es valido :D\n";
    } 
    else 
    {
        cout << "Algo fallo :(";
        if (okLong) cout << "Debe tener entre 6 y 12 caracteres.";
        if (okInicio) cout << " Debe empezar con una letra.";
        if (okEspacios) cout << "No debe contener espacios.";
    }

    return 0;
}
