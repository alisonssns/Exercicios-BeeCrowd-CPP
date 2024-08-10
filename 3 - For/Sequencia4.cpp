#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{

    double I = 0, J = 1, max = 3;
    while (I <= 2)
    {
        cout << "I=" << I << " " << "J=" << J << endl;
        J++;
        if (J == max + 1)
        {
            I += 0.2;
            max += 0.2;
            J -= 2.8;
        }
    }

    return 0;
}