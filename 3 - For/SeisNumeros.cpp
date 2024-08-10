#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{

    int a;
    cin >> a;
    for (int i = 0; i < 6; i++)
    {
        if ((a) % 2 == 0)
        {
            i--;
        }
        else
        {
            cout << a << endl;
        }
        a++;
    }

    return 0;
}