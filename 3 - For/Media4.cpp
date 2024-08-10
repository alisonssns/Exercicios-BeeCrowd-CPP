#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    double n, num, med;
    cout.precision(1);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        med = 0;
        cin >> num;
        med += num * 2;
        cin >> num;
        med += num * 3;
        cin >> num;
        med += num * 5;

        med = med / (2 + 3 + 5);

        cout << fixed << med << endl;
    }

    return 0;
}