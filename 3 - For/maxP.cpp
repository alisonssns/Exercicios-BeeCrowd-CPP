#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    int max, num, po;
    cin >> num;
    max = num;
    for (int i = 1; i < 100; i++)
    {
        cin >> num;
        if (num > max && num > 0)
        {
            max = num;
            po = i + 1;
        }
    }
    cout << max << endl;
    cout << po << endl;

    return 0;
}