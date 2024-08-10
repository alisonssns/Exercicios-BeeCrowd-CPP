#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n, num = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        num += 1;
        cout << num << " " << pow(num, 2) << " " << pow(num, 3) << endl;
    }

    return 0;
}