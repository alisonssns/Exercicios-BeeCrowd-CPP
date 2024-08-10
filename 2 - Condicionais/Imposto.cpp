#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    double renda, calc;
    cin >> renda;
    if (renda > 2000 && renda <= 3000)
    {
        calc = (renda - 2000) * 0.08;
    }
    else if (renda > 3000 && renda <= 4500)
    {
        calc = (1000 * 0.08) + (renda - 3000) * 0.18;
    }
    else if (renda > 4500)
    {
        calc = ((1000 * 0.08) + (1500 * 0.18) + (renda - 4500) * 0.28);
    }

    cout.precision(2);
    if (renda <= 2000)
    {
        cout << "Isento" << endl;
    }
    else
    {
        cout << fixed << "R$ " << calc << endl;
    }

    return 0;
}