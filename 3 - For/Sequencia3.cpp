#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{

    int I = 1, J = 7, max = 7;
    while (I <= 9)
    {
        cout << "I=" << I << " " << "J=" << J << endl;
        J--;
        if (J == max - 3)
        {
            I += 2;
            max += 2;
            J += 5;
        }
    }

    return 0;
}