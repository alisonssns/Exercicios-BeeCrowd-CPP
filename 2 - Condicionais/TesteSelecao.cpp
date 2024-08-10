#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int A, B, C, D, soma;
    cin >> A >> B >> C >> D;

    if (B > C && D > A && (A + B) < (C + D) && C > 0 && D > 0 && (A % 2) == 0)
    {
        cout << "Valores aceitos" << endl;
    }
    else
    {
        cout << "Valores nao aceitos" << endl;
    };

    return 0;
}