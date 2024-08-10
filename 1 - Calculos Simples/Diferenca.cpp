#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a, b, c, d, soma;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    soma = (a * b - c * d);
    cout << "DIFERENCA = " << soma << endl;

    return 0;
}