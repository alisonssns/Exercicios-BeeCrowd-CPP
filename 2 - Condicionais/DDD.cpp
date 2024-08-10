#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    int ddd;
    string us;
    cin >> ddd;

    if (ddd == 61)
    {
        us = "Brasilia";
    }
    else if (ddd == 71)
    {
        us = "Salvador";
    }
    else if (ddd == 11)
    {
        us = "Sao Paulo";
    }
    else if (ddd == 21)
    {
        us = "Rio de Janeiro";
    }
    else if (ddd == 32)
    {
        us = "Juiz de Fora";
    }
    else if (ddd == 19)
    {
        us = "Campinas";
    }
    else if (ddd == 27)
    {
        us = "Vitoria";
    }
    else if (ddd == 31)
    {
        us = "Belo Horizonte";
    }
    else
    {
        us = "DDD nao cadastrado";
    }
    cout << us << endl;

    return 0;
}