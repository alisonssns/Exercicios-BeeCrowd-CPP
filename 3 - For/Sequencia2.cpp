#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{

    int I = 1, J = 7;
    while (I <= 9)
    {
        cout << "I=" << I << " " << "J=" << J << endl;
        J--;
        if (J == 4)
        {
            I += 2;
            J = 7;
        }
    }

    return 0;
}