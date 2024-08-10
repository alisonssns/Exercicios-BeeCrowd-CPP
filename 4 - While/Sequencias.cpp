#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    int num = 1;
    cin >> num;
    while (num != 0)
    {
        cout << 1;
        for (int i = 2; i <= num; i++)
        {
            cout << " " << i;
        }
        cout << endl;
        cin >> num;
    }

    return 0;
}