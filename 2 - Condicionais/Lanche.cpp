#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int val1, val2;
    cin >> val1 >> val2;
    double total = 0.00;
    if (val1 == 1)
    {
        total += 4.00;
    }
    if (val1 == 2)
    {
        total += 4.50;
    }
    if (val1 == 3)
    {
        total += 5.00;
    }
    if (val1 == 4)
    {
        total += 2.00;
    }
    if (val1 == 5)
    {
        total += 1.50;
    }
    cout.precision(2);
    cout << fixed << "Total: R$ " << total * val2 << endl;

    return 0;
}