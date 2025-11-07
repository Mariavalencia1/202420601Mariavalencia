#include <iostream>
using namespace std;

int main() 
{

    string products[3] = {"Pan", "Leche", "Queso"};
    float prices[3] = {1500, 3200, 4800};

    
    cout << "Lista de productos y precios:" << endl;

    for (int i = 0; i < 3; i++) 
    {
        cout << products[i] << " - $" << prices[i] << endl;
    }

    return 0;
}
