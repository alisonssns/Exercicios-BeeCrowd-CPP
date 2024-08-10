#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    double a, b, con;
    cin >> a >> b;
    cout.precision(3);
    con = a / b;
    cout << fixed << con << " km/l" << endl;

    return 0;
}