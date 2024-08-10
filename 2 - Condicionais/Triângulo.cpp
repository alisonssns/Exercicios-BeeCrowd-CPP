#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    double a, b, c;
    cin >> a >> b >> c;
    cout.precision(1);
    if (abs(b - c) < a && a < b + c ||
        abs(a - c) < b && b < a + c ||
        abs(a - b) < c && c < a + b)
    {
        cout << fixed << "Perimetro = " << a + b + c << endl;
    }
    else
    {
        cout << fixed << "Area = " << ((a + b) * c) / 2 << endl;
    }

    return 0;
}