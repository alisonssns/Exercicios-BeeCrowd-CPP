#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{

    double cod1, cod2;
    cin >> cod1 >> cod2;
    while (cod1 != 0 && cod2 != 0)
    {
        if (cod1 > 0 && cod2 > 0)
        {
            cout << "primeiro" << endl;
        }
        else if (cod1 < 0 && cod2 > 0)
        {
            cout << "segundo" << endl;
        }
        else if (cod1 < 0 && cod2 < 0)
        {
            cout << "terceiro" << endl;
        }
        else if (cod1 > 0 && cod2 < 0)
        {
            cout << "quarto" << endl;
        }
        cin >> cod1 >> cod2;
    }

    return 0;
}