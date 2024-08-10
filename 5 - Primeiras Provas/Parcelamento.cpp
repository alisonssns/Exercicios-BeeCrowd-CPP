#include <iostream>
using namespace std;

int main()
{
    int val, p, r;
    cin >> val >> p;
    if (val % p == 0)
    {
        for (int i = 0; i < p; i++)
        {
            cout << val / p << endl;
        }
    }
    else
    {
        r = val % p;
        for (int i = 0; i < r; i++)
        {
            cout << (val / p) + 1 << endl;
        }
        for (int j = 0; j < p - r; j++)
        {
            cout << val / p << endl;
        }
    }
    return 0;
}