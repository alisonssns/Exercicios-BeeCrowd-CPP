#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, d, hour, min;
    cin >> a >> b >> c >> d;

    if (a == c)
    {
        a += 24;
        hour = a - c;
    }
    else if (a < c)
    {
        hour = c - a;
    }
    else
    {
        c += 24;
        hour = c - a;
    }

    if (b > d)
    {
        hour -= 1;
        min = 60 - (b - d);
    }
    else
    {
        min = d - b;
    }

    if (hour >= 24 && min > 0)
    {
        hour = 0;
    }

    cout << "O JOGO DUROU " << hour << " HORA(S) E " << min << " MINUTO(S)" << endl;

    return 0;
}