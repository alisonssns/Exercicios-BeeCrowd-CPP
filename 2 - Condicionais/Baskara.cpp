#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double A, B, C, delta, x1, x2;
    cin >> A >> B >> C;

    delta = (pow(B, 2) - (4 * A * C));

    if (delta >= 0 && A != 0)
    {
        x1 = (-B + sqrt(delta)) / (2 * A);
        x2 = (-B - sqrt(delta)) / (2 * A);

        cout.precision(5);

        cout << fixed << "R1 = " << x1 << endl;
        cout << fixed << "R2 = " << x2 << endl;
    }
    else
    {
        cout << "Impossivel calcular" << endl;
    }
    return 0;
}