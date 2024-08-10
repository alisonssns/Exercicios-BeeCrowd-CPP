#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{

    double sal, newSal, adjust, re;
    cin >> sal;
    if (sal <= 400)
    {
        re = 0.15;
    }
    else if (sal > 400 && sal <= 800)
    {
        re = 0.12;
    }
    else if (sal > 800 && sal <= 1200)
    {
        re = 0.10;
    }
    else if (sal > 1200 && sal <= 2000)
    {
        re = 0.07;
    }
    else if (sal > 2000)
    {
        re = 0.04;
    }
    newSal = sal + (sal * re);
    adjust = newSal - sal;
    cout.precision(2);
    cout << fixed << "Novo salario: " << newSal << endl;
    cout << "Reajuste ganho: " << adjust << endl;
    cout.precision(0);
    cout << "Em percentual: " << re * 100 << " %" << endl;

    return 0;
}