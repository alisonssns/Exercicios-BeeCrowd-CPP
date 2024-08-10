#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    int a, b, total = 0;
    cin >> a >> b;
    if (a > b)
    {
        for (int i = b; i <= a; i++)
        {
            if (i % 13 != 0)
            {
                total += i;
            }
        }
    }
    else
    {
        for (int i = a; i <= b; i++)
        {
            if (i % 13 != 0)
            {
                total += i;
            }
        }
    }
    cout << total << endl;

    return 0;
}