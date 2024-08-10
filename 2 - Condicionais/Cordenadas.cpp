#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{

    double cod1, cod2;
    cin >> cod1 >> cod2;
    if (cod1 == 0 && cod2 == 0)
    {
        cout << "Origem" << endl;
    }
    else if (cod1 > 0 && cod2 > 0)
    {
        cout << "Q1" << endl;
    }
    else if (cod1 < 0 && cod2 > 0)
    {
        cout << "Q2" << endl;
    }
    else if (cod1 < 0 && cod2 < 0)
    {
        cout << "Q3" << endl;
    }
    else if (cod1 > 0 && cod2 < 0)
    {
        cout << "Q4" << endl;
    }
    else if (cod1 == 0 && cod2 != 0)
    {
        cout << "Eixo Y" << endl;
    }
    else if (cod1 != 0 && cod2 == 0)
    {
        cout << "Eixo X" << endl;
    }

    return 0;
}