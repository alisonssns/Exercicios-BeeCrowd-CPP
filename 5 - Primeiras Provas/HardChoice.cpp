#include <iostream>
using namespace std;

int main()
{
    int c1, b1, p1, c2, b2, p2, sum = 0;
    cin >> c1 >> b1 >> p1 >> c2 >> b2 >> p2;
    if (c1 < c2)
    {
        sum += c2 - c1;
    }
    if (b1 < b2)
    {
        sum += b2 - b1;
    }
    if (p1 < p2)
    {
        sum += p2 - p1;
    }
    cout << sum << endl;
    return 0;
}