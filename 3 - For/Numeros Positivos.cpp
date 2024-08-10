#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    double a, b, c, d, e, f, total = 0;
    cin >> a >> b >> c >> d >> e >> f;
    double arr[] = {a, b, c, d, e, f};
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > 0)
        {
            total++;
        }
    }

    cout << total << " valores positivos" << endl;
    return 0;
}