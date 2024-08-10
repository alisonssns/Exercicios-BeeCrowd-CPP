#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    int tipo = 0, al = 0, ga = 0, die = 0;
    while (tipo != 4)
    {
        cin >> tipo;
        while (tipo != 1 && tipo != 2 && tipo != 3 && tipo != 4)
        {
            cin >> tipo;
        }

        if (tipo == 1)
        {
            al++;
        }
        else if (tipo == 2)
        {
            ga++;
        }
        else if (tipo == 3)
        {
            die++;
        }
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << al << endl;
    cout << "Gasolina: " << ga << endl;
    cout << "Diesel: " << die << endl;

    return 0;
}