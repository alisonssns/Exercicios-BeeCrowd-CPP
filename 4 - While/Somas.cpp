#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    int x, soma = 0;
    cin >> x;
    while (x != 0)
    {
        if (x % 2 == 0)
        {
            for (int i = 0; i <= 8; i += 2)
            {
                soma += (x + i);
            }
        }
        else
        {
            for (int i = 0; i <= 8; i += 2)
            {
                soma += ((x + 1) + i);
            }
        }
        cout << soma << endl;
        soma = 0;
        cin >> x;
    }

    return 0;
}