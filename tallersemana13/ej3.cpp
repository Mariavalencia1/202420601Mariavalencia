#include <iostream>
using namespace std;

int main() 
{ 
    int numbers[6] = {8, 12, 5, 20, 7, 15};

   
    int maximo = numbers[0];

    
    for (int i = 1; i < 6; i++) 
    {
        if (numbers[i] > maximo) 
        {
            maximo = numbers[i];
        }
    }

    
    cout << "El valor máximo es: " << maximo << endl;

    return 0;
}
