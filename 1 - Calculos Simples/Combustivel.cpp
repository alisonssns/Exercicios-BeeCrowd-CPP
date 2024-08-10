#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double temp, vel, calc;
    cin >> temp >> vel;
    calc = (temp * vel) / 12;
    cout.precision(3);
    cout << fixed << calc << endl;

    return 0;
}