#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{

    int x, a, in = 0, out = 0;

    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> a;
        if (a >= 10 && a <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;

    return 0;
}