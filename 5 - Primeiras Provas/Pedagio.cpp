#include <iostream>
using namespace std;

int main()
{
    int L, D, K, P, sum = 0;
    cin >> L >> D >> K >> P;
    sum = (L * K) + ((L / D) * P);
    cout << sum << endl;
    return 0;
}