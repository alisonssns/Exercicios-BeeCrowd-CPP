#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int x;
    cin >> x;
    cout.precision(0);
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
        {
            cout << fixed << i << "^2 = " << pow(i, 2) << endl;
        }
    }
    return 0;
}