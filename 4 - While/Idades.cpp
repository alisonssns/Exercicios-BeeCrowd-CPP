#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    int i, num = 0;
    double med, calc = 0;
    cout.precision(2);
    cout << fixed;
    cin >> i;
    while (i >= 0)
    {
        num++;
        calc += i;
        cin >> i;
    }
    med = calc / num;
    cout << med << endl;

    return 0;
}