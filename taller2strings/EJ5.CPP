#include <iostream>
using namespace std;

bool tieneNum(string c)
{
    for(int i=0;i<c.size();i++)
    {
        if(c[i]>='0' && c[i]<='9') return true;
    }
    return false;
}

bool tieneSimbolo(string c)
{
    for(int i=0;i<c.size();i++)
    {
        if(c[i]=='@'||c[i]=='#'||c[i]=='$'||c[i]=='%') return true;
    }
    return false;
}

bool sinEspacio(string c)
{
    for(int i=0;i<c.size();i++)
    {
        if(c[i]==' ') return false;
    }
    return true;
}

int main()
{
    string cod;
    cout<<"Ingrese su codigo: ";
    getline(cin,cod);

    if(tieneNum(cod) && tieneSimbolo(cod) && sinEspacio(cod))
    {
        cout<<"Codigo valido";
    }
    else
    {
        cout<<"Codigo invalido";
    }
    return 0;
}
